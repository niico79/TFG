import ROOT as r
import math

def archivo_root(file_path, var1, var2, lado):

    print('Los cortes de las variables se harán por la izquierda') if lado == 'izq' else print('Los cortes de la variables se harán por la derecha')
    print(f"Abriendo archivo {file_path}")

    # Se abre el archivo
    file = r.TFile.Open(file_path)

    # Debug por si el archivo no existe
    if not file or file.IsZombie():
        print("Error al abrir el archivo")
        return None, None, None, None
    print(f"El archivo {file_path} se ha abierto correctamente")

    # Inicialización de variables
    keys = file.GetListOfKeys()
    x_vals_1, foms_1 = [], []
    x_vals_2, foms_2 = [], []

    # Bucle que recorre todas las llaves (directorios)
    for key in keys:

	# Se lee el objeto del archivo y se obtiene el nombre
        dir = key.ReadObj()
        dir_name = dir.GetName()

        # Filtramos qué proceso queremos (0j, 1j, 1bj, ee, emu, mumu)
        if "_emu_1bj" in dir_name: # TODO: REVISAR QUÉ PROCESO ANALIZAR
            print(f"Se ha encontrado el directorio {dir_name}")

            # Se coge los directorios correspondientes a las variables que se quiere analizar
            var1_dir = dir.Get(var1)
            var2_dir = dir.Get(var2)
	    # Debug por si las variables no existen
            if not var1_dir or not var2_dir:
                print(f"Error al acceder a {var1} o {var2} en el directorio {dir_name}")
                continue

	    # Se accede al histograma de DATA para ver los bines que hay
            hist1 = var1_dir.Get("histo_DATA")
            if not hist1:
                print(f"Error al obtener histo_DATA para {var1}")
                continue

            n_bins_1 = hist1.GetNbinsX()
            print(f"{var1} tiene {n_bins_1} bines")

            # Proceso para la primera variable
            valor_bin_1, valor_x_1, valor_fom_1 = -1, -9.999, 0

	    # Se recorren todos los bines del histograma
            for bin in range(1, n_bins_1 + 1):
                SIGNAL, TOTAL = 0.0, 0.0
		# Se recorren todos los directorios dentro del directorio de la variable (mll, mjj, ptll, ...)
                for hist_key in var1_dir.GetListOfKeys():
                    hist = hist_key.ReadObj()
		    # Debug por si no es un histograma
                    if not hist or not isinstance(hist, r.TH1):
                        continue

		    # Hacer la integral desde la izquierda si se indica
                    total_sum = hist.Integral(0, bin) if lado == "izq" else hist.Integral(bin, n_bins_1)

		    # Si el histograma coincide con el de la señal, se suma la integral a la variable de la señal
                    if 'ttDM' in hist.GetName():
                        SIGNAL += total_sum
		    # Para cualquier otro histograma que no sea DATA, sumar la integral a la variable del fondo
                    if hist.GetName() != "histo_DATA":
                        TOTAL += total_sum

	        # Cálculo de la figura de mérito
                FoM = SIGNAL / math.sqrt(TOTAL) if TOTAL > 0 else 0.0

		# Se almacena el valor del eje x del bin y el FoM calculada
                x_vals_1.append(hist1.GetBinLowEdge(bin))
                foms_1.append(FoM)

		# Se actualiza el mejor corte encontrado en var1 si este FoM es el máximo encontrado hasta el momento.
                if FoM > valor_fom_1:
                    valor_bin_1, valor_x_1, valor_fom_1 = bin, hist1.GetBinLowEdge(bin), FoM

            print(f"Corte óptimo en {var1}: {valor_x_1}")

            #### Ahora se analiza var2 con el corte de var1 ####

	    # Se analiza el histo_DATA para obtener el número de bines
            hist2 = var2_dir.Get("histo_DATA")

	    # Debug por si no existe el histograma de datos para la variable 2
            if not hist2:
                print(f"Error al obtener histo_DATA para {var2}")
                continue

            n_bins_2 = hist2.GetNbinsX()
            print(f"{var2} tiene {n_bins_2} bines")

            valor_bin_2, valor_x_2, valor_fom_2 = -1, -9.999, 0

	    # Se reocrren todos los bines del histograma
            for bin in range(1, n_bins_2 + 1):
                SIGNAL, TOTAL = 0.0, 0.0
                # Se recorren todos los directorios dentro del directorio de la variable (mll, mjj, ptll, ...)
                for hist_key in var2_dir.GetListOfKeys():
                    hist = hist_key.ReadObj()
                    # Debug por si no es un histograma
                    if not hist or not isinstance(hist, r.TH1):
                        continue

                    # Hacer la integral desde la izquierda si se indica
                    total_sum = hist.Integral(0, bin) if lado == "izq" else hist.Integral(bin, n_bins_2)

                    # Si el histograma coincide con el de la señal, se suma la integral a la variable de la señal
                    if 'ttDM' in hist.GetName():
                        SIGNAL += total_sum
                    # Para cualquier otro histograma que no sea DATA, sumar la integral a la variable del fondo
                    if hist.GetName() != "histo_DATA":
                        TOTAL += total_sum

                # Cálculo de la figura de mérito
                FoM = SIGNAL / math.sqrt(TOTAL) if TOTAL > 0 else 0.0

                # Se almacena el valor del eje x del bin y el FoM calculada para esta segunda variable
                x_vals_2.append(hist2.GetBinLowEdge(bin))
                foms_2.append(FoM)

                # Se actualiza el mejor corte encontrado en var1 si este FoM es el máximo encontrado hasta el momento.
                if FoM > valor_fom_2:
                    valor_bin_2, valor_x_2, valor_fom_2 = bin, hist2.GetBinLowEdge(bin), FoM

            print(f"Corte óptimo en {var2}: {valor_x_2}")

    file.Close()
    return x_vals_1, foms_1, x_vals_2, foms_2

def plot_fom(x_vals, foms, var):

    # Se crea un scatter plot
    graph = r.TGraph(len(x_vals))

    # Se llena el gráfico
    for i, (x, fom) in enumerate(zip(x_vals, foms)):
        graph.SetPoint(i, x, fom)

    # Se crea un canvas para representar el gráfico
    canvas = r.TCanvas("canvas", "FoM", 800, 600)

    # Título y estilo de los puntos
    graph.SetTitle(f"FoM vs {var};{var};FoM")
    graph.SetMarkerStyle(20)
    graph.SetMarkerSize(0.8)
    graph.SetLineWidth(2)

    # Se muestra el gráfico con ejes (A), con puntos (P) y con los puntos unidos por una línea (L)
    graph.Draw("APL")
    canvas.SaveAs(f"FoM_plots/FoM_vs_{var}.png")

if __name__ == "__main__":
    file_path = "/afs/cern.ch/user/n/nbabioel/public/forJesus/debug/estudioFoM/rootfiles__Full2018_v7/mkShapes__Full2018_v7.root"
    var1, var2 = "mpmet", "mtw2"
    lado = "dcha"

    x_vals_1, foms_1, x_vals_2, foms_2 = archivo_root(file_path, var1, var2, lado)

    # Si se obtienen valores de x y FoM se llama la función plot_fom para plotear la FoM frente a la variable
    if x_vals_1 and foms_1:
        plot_fom(x_vals_1, foms_1, var1)
    if x_vals_2 and foms_2:
        plot_fom(x_vals_2, foms_2, var2)
