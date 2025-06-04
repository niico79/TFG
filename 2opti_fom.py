import ROOT as r
import math
import sys
import os

r.gROOT.SetBatch(True) # No muestra las imágenes en pantalla

if len(sys.argv) != 4:
    print("Número de argumentos erróneos")
    sys.exit(1)

mchi = sys.argv[1]
mphi = sys.argv[2]
cat = sys.argv[3]

signal_name = f"histo_ttDMp_Mchi{mchi}MPhi{mphi}"

print(f"\n Usando la señal: {signal_name} en la categoría {cat} \n")

output_txt_dir = "FoM/FoM_txt"
output_plots_dir = "FoM/FoM_plots"


def archivo_root(file_path, var1, var2, lado, cat):
    """
    Función que calcula la figura de mérito (FoM) de 2 variables que se pasan como argumentos, teniendo en cuenta que la segunda variable
    se optimiza considerando el corte óptimo de la primera variable

    Args:
	file_path (string): Path al directorio donde están los datos
	var1 (string): Primera variable a analizar
	var2 (string): Segunda variable a analizar
	lado (string): Indica el lado ppr donde comenzar la integración

    Returns:
	x_vals_var1 (list): Valores del la variable 1 que se utilizará para graficar la FoM frente a la variable 1
	foms_var1 (list): Valores de la figura de mérito para la primera variable 1
	mejor_fom_var1 (float): Valor de la figura de mérito máxima para la primera variable
 	mejor_corte_var1 (float): Corte óptimo de la variable 1
	x_vals_var2 (list): Valores de la variable 2
	foms_var2 (list): Valores de la figura de mérito para la segunda variable
	mejor_fom_var2 (float): Valor de la figura de mérito máxima para la segunda variable
	mejor_corte_var2 (float): Corte óptimo de la segunda variable
        cat (str): Categoría a analizar (1bj, 2bj, ...)
   """

    # Se abre el archivo ROOT
    print(f"Abriendo archivo {file_path}")
    file = r.TFile.Open(file_path)
    # Debuggear por si no existe el archivo o si está corrupto
    if not file or file.IsZombie():
        print("Error al abrir el archivo")
        return None, None, None, None, None, None, None, None
    print(f"El archivo {file_path} se ha abierto correctamente")

    keys = file.GetListOfKeys()

    # Listas para almacenar los valores de FoM y cortes en cada variable
    x_vals_var1, foms_var1 = [], []
    x_vals_var2, foms_var2 = [], []

    mejor_fom_var1 = 0
    mejor_corte_var1 = -999

    mejor_fom_var2 = 0
    mejor_corte_var2 = -999

    # Recorremos los directorios del archivo ROOT
    for key in keys:
        dir = key.ReadObj()
        dir_name = dir.GetName()
        if f"emu{cat}" in dir_name:  # Filtrar según la categoría que nos interesa TODO: Debug por si la categoría no existe
            print(f"Se ha encontrado el directorio {dir_name}")

            # Obtener el directorio de var1 (mll, mpmet, dphill, ...)
            var1_dir = dir.Get(var1)
            if not var1_dir:
                print(f"Error al acceder a {var1} en el directorio {dir_name}")
                continue

            hist = var1_dir.Get("histo_DY")
            if not hist:
                print(f"Error al obtener el histograma histo_DY en {var1}")
                continue
            n_bins = hist.GetNbinsX()
            output_txt_path = os.path.join(output_txt_dir, f"FoM_{var1}_Mchi{mchi}_MPhi{mphi}_{cat}.txt")
            print(output_txt_path)

            with open(output_txt_path, "w") as f:
                f.write("# Bin Edge [GeV]   S (Señal)   sqrt(S+B)   FoM (S/sqrt(S+B))   Corte Óptimo [GeV]\n")

                # Optimización de var1
                for bin in range(1, n_bins + 1):
                    hist_keys = var1_dir.GetListOfKeys()

                    SIGNAL, TOTAL = 0.0, 0.0
                    hist_signal = None
                    hist_background = None
                    for hist_key in hist_keys: # hist_VV, hist_ttbar, hist_Higgs, ...
                        hist = hist_key.ReadObj()
                        if not hist or not isinstance(hist, r.TH1) or not hist.InheritsFrom("TH1"):
                            continue

                        total_sum = hist.Integral(0, bin) if lado == "izq" else hist.Integral(bin, n_bins)

                        if hist.GetName() == signal_name:
                            SIGNAL += total_sum
                            if hist_signal is None:
                                hist_signal = hist.Clone("hist_signal")
                            else:
                                hist_signal.Add(hist)

                        if "hist" in hist.GetName():
                            TOTAL += total_sum
                            if hist_background is None:
                                hist_background = hist.Clone("hist_background")
                            else:
                                hist_background.Add(hist)


                    FoM = SIGNAL / math.sqrt(TOTAL) if TOTAL > 0 else 0.0
                    bin_edge = hist.GetBinLowEdge(bin)

                    x_vals_var1.append(bin_edge)
                    foms_var1.append(FoM)

                    if FoM > mejor_fom_var1: # Guarda el mayor valor del FoM y el corte óptimo
                        mejor_fom_var1 = FoM
                        mejor_corte_var1 = hist.GetBinLowEdge(bin)

                    f.write(f"{bin_edge:.2f} {SIGNAL:.2f} {TOTAL:.2f} {FoM:.2f} {mejor_corte_var1:.2f}\n")

            if hist_signal:
                inte_signal = hist_signal.Integral(0, n_bins + 1)
                if inte_signal > 0:
                    hist_signal.Scale(1 / inte_signal)

            if hist_background:
                inte_background = hist_background.Integral(0, n_bins + 1)
                if inte_background > 0:
                    hist_background.Scale(1 / inte_background)

            plot_shapes(hist_signal, hist_background, var1, cat)

            # Ahora aplicamos el corte óptimo de var1 y optimizamos var2
            var2_dir = dir.Get(var2)
            if not var2_dir:
                print(f"Error al acceder a {var2} en el directorio {dir_name}")
                continue

            hist = var2_dir.Get("histo_DY")
            if not hist:
                print(f"Error al obtener el histograma histo_DY en {var2}")
                continue
            n_bins = hist.GetNbinsX()
            output_txt_path = os.path.join(output_txt_dir, f"FoM_{var2}_Mchi{mchi}_MPhi{mphi}_{cat}.txt")

            with open(output_txt_path, "w") as f:
                f.write("# Bin Edge [GeV]   S (Señal)   sqrt(S+B)   FoM (S/sqrt(S+B))   Corte Óptimo [GeV]\n") #CORTE ÓPTIMO

                # Optimización de var2 aplicando el corte en var1
                for bin in range(1, n_bins + 1):
                    hist_keys = var2_dir.GetListOfKeys()

                    SIGNAL, TOTAL = 0.0, 0.0

                    hist_signal2 = None
                    hist_background2 = None
                    for hist_key in hist_keys: # hist_VV, hist_ttbar, hist_Higgs, ...
                        hist = hist_key.ReadObj()
                        if not hist or not isinstance(hist, r.TH1) or not hist.InheritsFrom("TH1"):
                            continue

                        total_sum = hist.Integral(0, bin) if lado == "izq" else hist.Integral(bin, n_bins)
                        if hist.GetName() == signal_name: # TODO: LA SEÑAL ES ESTA?
                            SIGNAL += total_sum
                            if hist_signal2 is None:
                                hist_signal2 = hist.Clone("hist_signal2")
                            else:
                                hist_signal2.Add(hist)

                        if "hist" in hist.GetName():
                            TOTAL += total_sum
                            if hist_background2 is None:
                                hist_background2 = hist.Clone("hist_background2")
                            else:
                                hist_background2.Add(hist)

                    FoM = SIGNAL / math.sqrt(TOTAL) if TOTAL > 0 else 0.0
                    bin_edge = hist.GetBinLowEdge(bin)
                    x_vals_var2.append(bin_edge)
                    foms_var2.append(FoM)

                    if FoM > mejor_fom_var2: # Guarda el mayor valor del FoM y el corte óptimo
                        mejor_fom_var2 = FoM
                        mejor_corte_var2 = bin_edge

                    f.write(f"{bin_edge:.2f} {SIGNAL:.2f} {TOTAL:.2f} {FoM:.2f} {mejor_corte_var2:.2f}\n")

            if hist_signal2:
                inte_signal2 = hist_signal2.Integral(0, n_bins + 1)
                if inte_signal2 > 0:
                    hist_signal2.Scale(1 / inte_signal2)

            if hist_background2:
                inte_background2 = hist_background2.Integral(0, n_bins + 1)
                if inte_background2 > 0:
                    hist_background2.Scale(1 / inte_background2)

            plot_shapes(hist_signal2, hist_background2, var2, cat)

    file.Close()

    return x_vals_var1, foms_var1, mejor_corte_var1, mejor_fom_var1, x_vals_var2, foms_var2, mejor_corte_var2, mejor_fom_var2

def plot_fom(x_vals, foms, var, step, cat):
    """
    Genera un gráfico de la Figura de Mérito (FoM) en función de la variable de corte.

    Args:
        x_vals (list): Lista con los valores de la variable en el eje X.
        foms (list): Lista con los valores de la FoM correspondiente a cada X.
        var (str): Nombre de la variable que se está optimizando.
        step (str): Indica si es la primera o segunda variable ("primera" o "segunda").
    """
    graph = r.TGraph(len(x_vals))

    for i, (x, fom) in enumerate(zip(x_vals, foms)):
        graph.SetPoint(i, x, fom)

    canvas = r.TCanvas("canvas", f"FoM_{var}", 800, 600)
    graph.SetTitle(f"FoM vs {var} ({step} variable);{var};FoM")
    graph.SetMarkerStyle(20)
    graph.SetMarkerSize(0.8)
    graph.SetLineWidth(2)
    graph.Draw("APL")

    canvas.SaveAs(f"FoM/FoM_plots/emu_{cat}_FoM_{var}_mchi{mchi}_mphi{mphi}.png")  # Guardar la gráfica en un archivo

def plot_shapes(hist_signal, hist_background, var, cat):
    canvas = r.TCanvas("canvas", f"Shapes_{var}", 800, 600)

    hist_signal.SetLineColor(r.kRed)
    hist_signal.SetLineWidth(2)
    hist_signal.SetTitle(f"Normalized Shapes: {var} ({cat}); {var}; Normalized events")

    hist_background.SetLineColor(r.kBlue)
    hist_background.SetLineWidth(2)

    max_lim = max(hist_background.GetMaximum(), hist_signal.GetMaximum())
    hist_background.SetMaximum(max_lim * 1.1)
    hist_signal.SetMaximum(max_lim * 1.1)

    hist_signal.Draw("HIST")
    hist_background.Draw("HIST SAME")
    r.gStyle.SetOptStat(0)

    legend = r.TLegend(0.7, 0.7, 0.9, 0.85)
    legend.AddEntry(hist_signal, "Signal", "l")
    legend.AddEntry(hist_background, "Background", "l")
#    legend.Draw()

    canvas.SaveAs(f"FoM/FoM_plots/Shapes_{var}_{cat}_mchi{mchi}_mphi{mphi}.png")


if __name__ == "__main__":
    file_path = "/afs/cern.ch/user/n/nbabioel/public/forJesus/SeleccionAN/rootfiles__Full2018_v7/mkShapes__Full2018_v7.root"
    var1 = "mpmet"
    var2 = "mtw2"
    lado = "dcha"

    # Obtener valores óptimos de corte
    x_vals_var1, foms_var1, corte1, fom1, x_vals_var2, foms_var2, corte2, fom2 = archivo_root(file_path, var1, var2, lado, cat)

    # Mostrar los resultados en consola
    print(f"\n \n >>> Mejor corte para {var1}: {corte1} con FoM = {fom1}")
    print(f">>> Mejor corte para {var2} (con {var1} ya optimizado): {corte2} con FoM = {fom2} \n \n")

    # Generar gráficos
    plot_fom(x_vals_var1, foms_var1, var1, "primera", cat)
    plot_fom(x_vals_var2, foms_var2, var2, "segunda", cat)
