# auto_fom.py

import ROOT as r
import math
import sys
import os

r.gROOT.SetBatch(True) # No muestra las imágenes en pantalla

if len(sys.argv) != 5:
    print("Número de argumentos erróneos")
    sys.exit(1)

mchi = sys.argv[1]
mphi = sys.argv[2]
cat = sys.argv[3]
var = sys.argv[4]

signal_name = f"histo_ttDMp_Mchi{mchi}MPhi{mphi}"

print(f"\n Usando la señal: {signal_name} en la categoría {cat} \n")

output_txt_dir = "FoM_1D"
output_plots_dir = "FoM_1D"

def calculo_fom(file_path, var, lado, cat):
    # Se abre el archivo
    print(f"Abriendo archivo {file_path}")
    file = r.TFile.Open(file_path)
    if not file or file.IsZombie():
        print("Error al abrir el archivo")
        return None, None
    print(f"El archivo {file_path} se ha abierto correctamente")

    # Se obtienen todos los directorios del archivo
    keys = file.GetListOfKeys()

    foms = []  # Lista para los FoM
    x_vals = []  # Lista para los valores de x

    # Se recorren todos los directorios
    for key in keys:
        dir = key.ReadObj()
        dir_name = dir.GetName()
        if cat in dir_name:
            print(f"Se ha encontrado el directorio {dir_name}")

            # Entramos al directorio de la variable que se quiere estudiar
            var_dir = dir.Get(var)
            if not var_dir:
                print(f"Error al acceder a {var} en el directorio {dir_name}")
                continue
            print(f"Se ha accedido al directorio {var} en {dir_name}")

            # Obtenemos el número de bines
            hist = var_dir.Get("histo_DY")
            if not hist:
                print(f"Error al obtener el histograma histo_DY en el directorio {dir_name}")
                continue
            n_bins = hist.GetNbinsX()
            print(f"Hay {n_bins} bines para la variable {var}")

            output_txt_path = os.path.join(output_txt_dir, f"FoM_{var}_Mchi{mchi}_MPhi{mphi}_{cat}.txt")



            valor_bin = -1
            valor_x = None
            valor_fom = -9999.9999
            valor_signal = 0
            valor_total = 0

            with open(output_txt_path, "w") as f:
                f.write("# Bin Edge [GeV]   S (Señal)   sqrt(S+B)   FoM (S/sqrt(S+B))   Corte Óptimo [GeV]\n")

                # Recorremos los bines
                for bin in range(1, n_bins + 1):
                    hist_keys = var_dir.GetListOfKeys()

                    SIGNAL = 0.0
                    TOTAL = 0.0

                    hist_totals = {}
                    hist_signal = None
                    hist_background = None

                    for hist_key in hist_keys:
                        hist = hist_key.ReadObj()
                        if not hist or not isinstance(hist, r.TH1) or not hist.InheritsFrom("TH1"):
                            continue

                        if lado == "izq":
                            total_sum = hist.Integral(0, bin)
                        else:
                            total_sum = hist.Integral(bin, n_bins)


                        hist_name = hist.GetName()
                        hist_totals[hist_name] = total_sum

                        if hist_name == signal_name:
                            SIGNAL += total_sum
                            if hist_signal is None:
                                hist_signal = hist.Clone("hist_signal2")
                            else:
                                hist_signal.Add(hist)


                        if hist_name != "histo_DATA":
                            TOTAL += total_sum
                            if hist_background is None:
                                hist_background = hist.Clone("hist_background2")
                            else:
                                hist_background.Add(hist)


                    FoM = SIGNAL / math.sqrt(TOTAL) if TOTAL > 0 else 0.0

                    # Guardamos el FoM y el valor de x
                    bin_edge = hist.GetBinLowEdge(bin)
                    x_vals.append(bin_edge)
                    foms.append(FoM)

                    if FoM > valor_fom:
                        valor_bin = bin
                        valor_x = hist.GetBinLowEdge(bin)
                        valor_fom = FoM
                        valor_signal = SIGNAL
                        valor_total = TOTAL

                    f.write(f"{bin_edge:.2f} {SIGNAL:.2f} {TOTAL:.2f} {FoM:.2f} {valor_x:.2f}\n")

            """
            if valor_bin != -1:
                print(f"Bin: {valor_bin}")
                print(f"Valor eje x: {valor_x}")
                print(f"SIGNAL \t {valor_signal}")
                print(f"TOTAL \t {valor_total}")
                print(f"FoM \t {valor_fom}")
                print()
            else:
                print('Está mal')
            """

            if hist_signal:
                inte_signal = hist_signal.Integral(0, n_bins + 1)
                if inte_signal > 0:
                    hist_signal.Scale(1 / inte_signal)

            if hist_background:
                inte_background = hist_background.Integral(0, n_bins + 1)
                if inte_background > 0:
                    hist_background.Scale(1 / inte_background)

            plot_shapes(hist_signal, hist_background, var, cat)



    file.Close()
    return x_vals, foms, valor_x, valor_fom


def plot_fom(x_vals, foms, var):
    # Crear el gráfico
    graph = r.TGraph(len(x_vals))
    for i, (x, fom) in enumerate(zip(x_vals, foms)):
        graph.SetPoint(i, x, fom)

    # Configurar el gráfico
    canvas = r.TCanvas("canvas", "FoM", 800, 600)
    graph.SetTitle(f"FoM vs {var};{var};FoM")
    graph.SetMarkerStyle(20)
    graph.SetMarkerSize(0.8)
    graph.SetLineWidth(2)
    graph.Draw("APL")

    canvas.SaveAs(f"FoM_1D/FoM_vs_{var}.png")  # Guardar el gráfico como archivo de imagen

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
    file_path = "/afs/cern.ch/user/n/nbabioel/public/forJesus/debug/estudio_SinCortesExtra/rootfiles__Full2018_v7/mkShapes__Full2018_v7.root"
#    file_path = "/afs/cern.ch/user/n/nbabioel/mkShapesRDF/HEP/Full2018_v7/rootfiles__Full2018_v7/mkShapes__Full2018_v7.root"
    lado = "dcha"

    x_vals, foms, corte_optimo, mejor_FoM = calculo_fom(file_path, var, lado, cat)

    print(f"\n \n >>> Mejor corte para {var}: {corte_optimo}")
    print(f"Valor de FoM en el corte óptimo: {mejor_FoM} \n \n")

    if x_vals and foms:
        plot_fom(x_vals, foms, var)

