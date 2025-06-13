"""
Script utilizado para realizar diversas funciones a la hora de analizar histogramas usando el framework mkShapes. Cada método de este código tiene una utilidad
que está explicada en el correspondiente comentario. Este archivo se utiliza para optimizar dos variables a la vez, con el fin de ahorrar tiempo frente a
la optimización de manera individual.
"""
import ROOT as r
import math
import sys
import os

r.gROOT.SetBatch(True) # No muestra las imágenes en pantalla

# Chequea si se llama bien la función por la terminal (debe haber 4 argumentos: el nombre del archivo, mchi, mphi y la categoría)
if len(sys.argv) != 4:
    print("Número de argumentos erróneos")
    sys.exit(1)

mchi = sys.argv[1]
mphi = sys.argv[2]
cat = sys.argv[3]

signal_name = f"histo_ttDMp_Mchi{mchi}MPhi{mphi}"

print(f"\n Usando la señal: {signal_name} en la categoría {cat} \n")

# Se definen los directorios de salida de los archivos de texto y de las imágenes de la figura de mérito
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
        cat (str): Categoría a analizar (emu, mumu, ...)
   """

    # Se abre el archivo ROOT
    print(f"Abriendo archivo {file_path}")
    file = r.TFile.Open(file_path)
    # Debuggea por si no existe el archivo o si está corrupto
    if not file or file.IsZombie():
        print("Error al abrir el archivo")
        return None, None, None, None, None, None, None, None
    print(f"El archivo {file_path} se ha abierto correctamente")

    keys = file.GetListOfKeys()

    # Listas para almacenar los valores de FoM y cortes en cada variable
    x_vals_var1, foms_var1 = [], []
    x_vals_var2, foms_var2 = [], []

    # Inicialización de las variables
    mejor_fom_var1 = 0
    mejor_corte_var1 = -999

    mejor_fom_var2 = 0
    mejor_corte_var2 = -999

    S_1 = S_2 = S_3 = B_1 = B_2 = B_3 = fom_1 = fom_2 = fom_3 = FoM_corregido = 0.
    S_1_2 = S_2_2 = S_3_2 = B_1_2 = B_2_2 = B_3_2 = fom_1_2 = fom_2_2 = fom_3_2 = FoM_corregido_2 = 0.

    # Recorre los directorios del archivo ROOT
    for key in keys:
        dir = key.ReadObj()
        dir_name = dir.GetName()
        if f"emu{cat}" in dir_name:  # Filtra según la categoría que nos interesa (_tDM, _ttDM, ...)
            print(f"Se ha encontrado el directorio {dir_name}")

            # Obtiene el directorio de var1 (mll, mpmet, dphill, ...)
            var1_dir = dir.Get(var1)
            if not var1_dir:
                print(f"Error al acceder a {var1} en el directorio {dir_name}")
                continue
            # Toma uno de los histogramas para coger el número de bins
            hist = var1_dir.Get("histo_DY")
            if not hist:
                print(f"Error al obtener el histograma histo_DY en {var1}")
                continue
            n_bins = hist.GetNbinsX()

            output_txt_path = os.path.join(output_txt_dir, f"FoM_{var1}_Mchi{mchi}_MPhi{mphi}_{cat}.txt")

            # Se abre el archivo de texto donde se guardarán los datos obtenidos en el código
            with open(output_txt_path, "w") as f:
                f.write("# Bin Edge [GeV]   S (Señal)   sqrt(S+B)   FoM (S/sqrt(S+B))   Corte Óptimo [GeV]\n")

                # --- Optimización de var1 ---

                # Se recorren todos los bines del hisotgrama
                for bin in range(1, n_bins + 1):
                    hist_keys = var1_dir.GetListOfKeys() # Toma todas la llave del histograma (variable físicas)

                    SIGNAL, TOTAL = 0.0, 0.0
                    hist_signal = None
                    hist_background = None

                    hist_ttbar = None
                    hist_mchi1_mphi100 = None
                    hist_mchi1_mphi50 = None
                    hist_mchi1_mphi200 = None # corte de mtw2 no nulo

                    for hist_key in hist_keys: # hist_VV, hist_ttbar, hist_Higgs, ...
                        hist = hist_key.ReadObj()
                        if not hist or not isinstance(hist, r.TH1) or not hist.InheritsFrom("TH1"):
                            continue

                        # Realiza la integral según el sentido que se desee
                        total_sum = hist.Integral(0, bin) if lado == "izq" else hist.Integral(bin, n_bins)

                        # Si el histograma es el de señal, se añade la integral en la variable correspondiente
                        if hist.GetName() == signal_name:
                            SIGNAL += total_sum
                            if hist_signal is None:
                                hist_signal = hist.Clone("hist_signal") # Clona hist (el histograma de cada contribución al fondo) en un histograma que se llama "hist_signal"
                            else:
                                hist_signal.Add(hist) # Si ya existe, añade el histograma que recorre en hist_background

                        # Si es cualquier histograma, se añade la integral en la variable de fondo
                        if "hist" in hist.GetName():
                            TOTAL += total_sum
                            if hist_background is None:
                                hist_background = hist.Clone("hist_background") # Clona el histograma que recorre en un histo que se llama "hist_background"
                            else:
                                hist_background.Add(hist) # Si ya existe, añade el histograma que recorre en hist_background

                    # Cálculo de la figura de mérito
                    FoM = SIGNAL / math.sqrt(TOTAL) if TOTAL > 0 else 0.0

                    # Toma el valor del eje x correspondiente al bin
                    bin_edge = hist.GetBinLowEdge(bin)

                    x_vals_var1.append(bin_edge)
                    foms_var1.append(FoM)

                    # Guarda el mayor valor del FoM y el corte óptimo
                    if FoM >= mejor_fom_var1:
                        mejor_fom_var1 = FoM
                        mejor_corte_var1 = bin_edge
                        mejor_señal_var1 = SIGNAL
                        mejor_fondo_var1 = TOTAL

                    # ----- FOM DOS REGIONES -----
                    # Bloque utilizado para el cálculo de la figura de mérito de la sección 4.5.2 de la memoria

                    # Se definen los cortes para la variable 1 (mpmet)

                    baja = 0.
                    corte1 = 130.
                    corte2 = 190.
                    alta = 290.

                    if bin_edge == baja:
                        B_baja = TOTAL
                        S_baja = SIGNAL

                    if bin_edge == corte1:
                        B_corte1 = TOTAL
                        S_corte1 = SIGNAL

                    if bin_edge == corte2:
                        B_corte2 = TOTAL
                        S_corte2 = SIGNAL

                    if bin_edge == alta:
                        B_alta = TOTAL
                        S_alta = SIGNAL

                    f.write(f"{bin_edge:.2f} {SIGNAL:.2f} {TOTAL:.2f} {FoM:.2f} {mejor_corte_var1:.2f}\n")

            # Cálculo de la figura de mérito pre-corte y post-corte
            print(S_baja, S_corte1, S_corte2, S_alta)
            print(B_baja, B_corte1, B_corte2, B_alta)
            S_1 = S_baja - S_corte1
            B_1 = B_baja - B_corte1

            S_2 = S_corte1 - S_corte2
            B_2 = B_corte1 - B_corte2

            S_3 =  S_corte2 - S_alta
            B_3 =  B_corte2 - B_alta


            print(S_1, S_2, S_3)
            print(B_1, B_2, B_3)
            fom_1 = S_1 / math.sqrt(B_1) if B_1 > 0 else 0.0
            fom_2 = S_2 / math.sqrt(B_2) if B_2 > 0 else 0.0
            fom_3 = S_3 / math.sqrt(B_3) if B_3 > 0 else 0.0
            FoM_corregido = math.sqrt(fom_1**2 + fom_2**2 + fom_3**2)

            print(f"{var1}: El valor de FoM antes del corte es {fom_1} y despúes del corte es {fom_2}, {fom_3} siendo la suma cuadrática: {FoM_corregido}")

            # Llama a la función que dibuja los shape plots: Uno para las distribuciones de señal-fondo y otro para las distribuciones con varias señales

            plot_shapes(var1, cat, ["Señal", "Fondo"], hist_signal, hist_background) # SHAPE SEÑAL-FONDO
            plot_shapes(var1, cat, ["mchi1 mphi50", "mchi1 mphi100", "mchi1 mphi250", "ttbar"], file.Get(f"{dir_name}/{var1}/histo_ttDMp_Mchi1MPhi50"), file.Get(f"{dir_name}/{var1}/histo_ttDMp_Mchi1MPhi100"), file.Get(f"{dir_name}/{var1}/histo_ttDMp_Mchi1MPhi250"), file.Get(f"{dir_name}/{var1}/histo_ttbar")) # SHAPES 4 HISTOS

            # ----- VAR2 -----

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
                f.write("# Bin Edge [GeV]   S (Señal)   S+B   FoM (S/sqrt(S+B))   Corte Óptimo [GeV]\n")

                # Recorrido de los bines
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
                        if hist.GetName() == signal_name:
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

                    if FoM >= mejor_fom_var2: # Guarda el mayor valor del FoM y el corte óptimo
                        mejor_fom_var2 = FoM
                        mejor_corte_var2 = bin_edge
                        mejor_señal_var2 = SIGNAL
                        mejor_fondo_var2 = TOTAL

                    # ----- FOM 2 REGIONES -----

                    baja = 0.
                    corte1 = 110.
                    corte2 = 180.
                    alta = 290.

                    if bin_edge == baja:
                        B_baja = TOTAL
                        S_baja = SIGNAL

                    if bin_edge == corte1:
                        B_corte1 = TOTAL
                        S_corte1 = SIGNAL

                    if bin_edge == corte2:
                        B_corte2 = TOTAL
                        S_corte2 = SIGNAL

                    if bin_edge == alta:
                        B_alta = TOTAL
                        S_alta = SIGNAL

                    f.write(f"{bin_edge:.2f} {SIGNAL:.2f} {TOTAL:.2f} {FoM:.2f} {mejor_corte_var1:.2f}\n")

            # Cálculo de la figura de mérito pre-corte y post-corte

            S_1_2 =  S_corte1 - S_baja
            B_1_2 =  B_corte1 - B_baja

            S_2_2 =  S_corte2 - S_corte1
            B_2_2 =  B_corte2 - B_corte1

            S_3_2 =  S_alta - S_corte2
            B_3_2 =  B_alta - B_corte2

            fom_1_2 = S_1_2 / math.sqrt(B_1_2) if B_1_2 > 0 else 0.0
            fom_2_2 = S_2_2 / math.sqrt(B_2_2) if B_2_2 > 0 else 0.0
            fom_3_2 = S_3_2 / math.sqrt(B_3_2) if B_3_2 > 0 else 0.0
            FoM_corregido_2 = math.sqrt(fom_1_2**2 + fom_2_2**2 + fom_3_2**2)

            print(f"\n {var2}: El valor de FoM antes del corte es {fom_1_2} y despúes del corte es {fom_2_2}, {fom_3_2} siendo la suma cuadrática: {FoM_corregido_2} \n")


            # END: CORRECCIÓN FOM 2 REGIONES

            plot_shapes(var2, cat, ["Señal", "Fondo"], hist_signal2, hist_background2) # SHAPE PLOT SEÑAL_FONDO
            plot_shapes(var2, cat, ["mchi1 mphi50", "mchi1 mphi100", "mchi1 mphi250", "ttbar"], file.Get(f"{dir_name}/{var2}/histo_ttDMp_Mchi1MPhi50"), file.Get(f"{dir_name}/{var2}/histo_ttDMp_Mchi1MPhi100"), file.Get(f"{dir_name}/{var2}/histo_ttDMp_Mchi1MPhi250"), file.Get(f"{dir_name}/{var2}/histo_ttbar"))


#            print(f"\n El valor de la señal antes del corte de {corte} GeV para la variable {var2} es {S_precorte_2} y después del corte es {S_postcorte_2} \n")
#            print(f"\n El valor del fondo antes del corte de {corte} GeV para la variable {var2} es {B_pre2} y después del corte es {B_post2} \n")
#            print(f"\n El valor de la figura de mérito antes del corte de {corte} GeV para la variable {var2} es {FoM_var2_precorte} y después del corte es {FoM_var2_postcorte}")
#            print(f"\n El valor de la figura de mérito total para la variable {var2} es {FoM_var2_total} \n")

    file.Close()

    return x_vals_var1, foms_var1, mejor_corte_var1, mejor_fom_var1, mejor_señal_var1, mejor_fondo_var1, x_vals_var2, foms_var2, mejor_corte_var2, mejor_fom_var2, mejor_señal_var2, mejor_fondo_var2


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

    canvas.SaveAs(f"FoM/FoM_plots/emu_{cat}_FoM_{var}_mchi{mchi}_mphi{mphi}.png")


def plot_fom_doble(x_vals_1, foms_1, var1, x_vals_2, foms_2, var2, cat):
    """
    Genera un único gráfico con dos curvas de FoM correspondientes a dos variables diferentes.

    Args:
        x_vals_1, foms_1: valores X y FoM para la primera variable.
        var1: nombre de la primera variable.
        x_vals_2, foms_2: valores X y FoM para la segunda variable.
        var2: nombre de la segunda variable.
        cat: categoría analizada.
    """
    graph1 = r.TGraph(len(x_vals_1))
    graph2 = r.TGraph(len(x_vals_2))

    for i, (x, fom) in enumerate(zip(x_vals_1, foms_1)):
        graph1.SetPoint(i, x, fom)

    for i, (x, fom) in enumerate(zip(x_vals_2, foms_2)):
        graph2.SetPoint(i, x, fom)

    canvas = r.TCanvas("canvas", "FoM Comparison", 800, 600)
    max_lim = max(max(foms_1), max(foms_2))
    min_lim = min(min(foms_1), min(foms_2))

    # Estética para graph1
    graph1.SetTitle(f"FoM vs {var1} y {var2};Valor de la variable;FoM")
    graph1.SetLineColor(r.kBlue)
    graph1.SetMarkerColor(r.kBlue)
    graph1.SetMarkerStyle(20)
    graph1.SetLineWidth(2)
    graph1.SetMaximum(max_lim * 1.1)
    graph1.SetMinimum(min_lim / 1.1)

    # Estética para graph2
    graph2.SetLineColor(r.kRed)
    graph2.SetMarkerColor(r.kRed)
    graph2.SetMarkerStyle(21)
    graph2.SetLineWidth(2)
    graph2.SetMaximum(max_lim * 1.1)
    graph2.SetMinimum(min_lim / 1.1)

    graph1.Draw("APL")
    graph2.Draw("PL SAME")

    # Leyenda
    legend = r.TLegend(0.65, 0.75, 0.88, 0.88)
    legend.AddEntry(graph1, f"FoM {var1}", "lp")
    legend.AddEntry(graph2, f"FoM {var2}", "lp")
    legend.Draw()

    canvas.Update()
    canvas.SaveAs(f"FoM/FoM_plots/emu_{cat}_FoM_doble_{var1}_vs_{var2}_mchi{mchi}_mphi{mphi}.png")


def plot_shapes(var, cat, nombres, *hists):
    num_hists = len(hists)
    canvas = r.TCanvas("canvas", f"Shapes_{var}", 800, 600)
#    canvas.SetLogy()
    colors = [r.kRed, r.kBlue, r.kGreen+2, r.kMagenta, r.kOrange, r.kCyan]
    legend = r.TLegend(0.7, 0.7, 0.9, 0.85)
    valid_hists = [h for h in hists if isinstance(h, r.TH1)]  # Filtrar solo histogramas válidos

    # Normalizar histogramas
    for h in hists:
        if h:
            integral = h.Integral(0, h.GetNbinsX() + 1)  # Integral total
            if integral > 0:
                h.Scale(1 / integral)  # Normalización

    # Ajustar el máximo de los histogramas normalizados
    max_lim = max(h.GetMaximum() for h in hists if h)

    # Dibujar los histogramas
    for h, color in zip(hists, colors[:num_hists]):  # Se asegura de que los colores no se acaben
        h.SetLineColor(color)
        h.SetLineWidth(2)
        h.SetMaximum(max_lim * 1.1)

    hists[0].SetTitle(f"Distribuciones normalizadas: {var} ({cat}); {var}; Eventos normalizados")
    hists[0].Draw("HIST")

    for h in hists[1:]:
        h.Draw("HIST SAME")

    r.gStyle.SetOptStat(False)

    # Añadir entradas a la leyenda
    for i, h in enumerate(hists):
        legend.AddEntry(h, f"{nombres[i]}", "l")

    # legend.Draw()
    if num_hists == 2:
        canvas.SaveAs(f"FoM/FoM_plots/Shapes_{var}_{cat}_signal_background_mchi{mchi}_mphi{mphi}.png")
    else:
        canvas.SaveAs(f"FoM/FoM_plots/Shapes_{var}_{cat}_{num_hists}histos_mchi{mchi}_mphi{mphi}.png")


if __name__ == "__main__":
    file_path = "./Analisis_rootfiles__Full2018_v7/mkShapes__Full2018_v7.root"
    var1 = "mtw2"
    var2 = "mtw2"
    lado = "dcha"

    # Obtener valores óptimos de corte
    x_vals_var1, foms_var1, corte1, fom1, señal_optima1, fondo_optimo1, x_vals_var2, foms_var2, corte2, fom2, señal_optima2, fondo_optimo2 = archivo_root(file_path, var1, var2, lado, cat)

    # Mostrar los resultados en consola
    print(f"\n \n >>> Mejor corte para {var1}: {corte1} con FoM = {fom1}")
    print(f">>> Mejor corte para {var2}: {corte2} con FoM = {fom2} \n \n")

    # Generar gráficos
    plot_fom(x_vals_var1, foms_var1, var1, "primera", cat)
    plot_fom(x_vals_var2, foms_var2, var2, "segunda", cat)

    plot_fom_doble(x_vals_var1, foms_var1, var1, x_vals_var2, foms_var2, var2, cat)

    # ----- Archivos .txt con los valores de los cortes óptimos -----

    # VERIFICA QUE EL ENCABEZADO SOLO SE ESCRIBA UNA VEZ
    write_header1 = not os.path.exists(os.path.join(output_txt_dir, f"FoM_optimos_{var1}_{cat}.txt")) or os.stat(os.path.join(output_txt_dir, f"FoM_optimos_{var1}_{cat}.txt")).st_size == 0
    write_header2 = not os.path.exists(os.path.join(output_txt_dir, f"FoM_optimos_{var2}_{cat}.txt")) or os.stat(os.path.join(output_txt_dir, f"FoM_optimos_{var2}_{cat}.txt")).st_size == 0

    # ESCRIBE EN UN .TXT EL VALOR DE S, B, FoM Y CORTE ÓPTIMO PARA CADA SEÑAL
    with open(os.path.join(output_txt_dir, f"FoM_optimos_{var1}_{cat}.txt"), "a", newline = "") as f:
        if write_header1:
            f.write("Punto de masa    Corte óptimo    Señal(S)    Fondo(S+B)    FoM(sqrt(S/(S+B))) \n")
        f.write(f"({mchi}, {mphi})    {corte1}    {señal_optima1}    {fondo_optimo1}    {fom1} \n")

    with open(os.path.join(output_txt_dir, f"FoM_optimos_{var2}_{cat}.txt"), "a", newline = "") as f:
        if write_header2:
            f.write("Punto de masa    Corte óptimo    Señal(S)    Fondo(S+B)    FoM(sqrt(S+(S+B))) \n")
        f.write(f"({mchi}, {mphi})    {corte2}    {señal_optima2}    {fondo_optimo2}    {fom2} \n")
