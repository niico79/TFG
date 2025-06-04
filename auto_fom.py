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

output_txt_dir = "FoM/FoM_txt"
output_plots_dir = "FoM/FoM_plots"



def archivo_root(file_path, var, lado):
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
        if cat in dir_name:  # 0j, 1j, 1bj, ee, emu, mumu?????????
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


            valor_bin = -1
            valor_x = -9.999
            valor_fom = 0
            valor_signal = 0
            valor_total = 0
            # Recorremos los bines
            for bin in range(1, n_bins + 1):
                hist_keys = var_dir.GetListOfKeys()

                SIGNAL = 0.0
                TOTAL = 0.0

                hist_totals = {}

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

                    if hist_name != "histo_DATA":
                        TOTAL += total_sum

                FoM = SIGNAL / math.sqrt(TOTAL) if TOTAL > 0 else 0.0

                # Guardamos el FoM y el valor de x
                x_vals.append(hist.GetBinLowEdge(bin))
                foms.append(FoM)

                if FoM > valor_fom:
                    valor_bin = bin
                    valor_x = hist.GetBinLowEdge(bin)
                    valor_fom = FoM
                    valor_signal = SIGNAL
                    valor_total = TOTAL

            if valor_bin != -1:
                print(f"Bin: {valor_bin}")
                print(f"Valor eje x: {valor_x}")
                print(f"SIGNAL \t {valor_signal}")
                print(f"TOTAL \t {valor_total}")
                print(f"FoM \t {valor_fom}")
                print()
            else:
                print('Está mal')

    file.Close()
    return x_vals, foms


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


if __name__ == "__main__":
    file_path = "/afs/cern.ch/user/n/nbabioel/public/forJesus/debug/estudioFoM/rootfiles__Full2018_v7/mkShapes__Full2018_v7.root"
    lado = "dcha"

    x_vals, foms = archivo_root(file_path, var, lado)
    if x_vals and foms:
        plot_fom(x_vals, foms, var)

