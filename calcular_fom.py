import ROOT as r
import math

def archivo_root(file_path):
    print(f"Abriendo archivo: {file_path}")
    file = r.TFile.Open(file_path)
    if not file or file.IsZombie():
        print("Error al abrir el archivo")
        return
    print("El archivo se ha abierto correctamente \n")

    keys = file.GetListOfKeys()

    for key in keys:
        dir = key.ReadObj()

        dir_name = dir.GetName()
        if "_0j" in dir_name and "0jemu" not in dir_name and "0jmue" not in dir_name: #	AJUSTAR ESTO
            print(f"Se ha encontrado el directorio: {dir_name}")

            events_dir = dir.Get("events")  
            if not events_dir:
                print(f"Error al acceder a 'events' en el directorio {dir_name}")
                continue
            print(f"Se ha accedido al directorio 'events' en {dir_name}")

            hist_keys = events_dir.GetListOfKeys()

            WWTOTAL = 0.0
            SIST = 0.0
            DATA = 0.0

	    # Diccionario para guardar todos los histogramas del directorio Events
            hist_totals = {}

	    # Recorremos todos los histogramas
            for hist_key in hist_keys:
                hist = hist_key.ReadObj()
                if not hist or not isinstance(hist, r.TH1):
                    print(f"Error en el histograma {hist_key.GetName()}")
                    continue

		# Obtener la suma de sucesos (integral) de cada histograma
                total_sum = hist.Integral()
                hist_name = hist.GetName()
                hist_totals[hist_name] = total_sum

		# Calculamos el total de sucesos WW AJUSTAR
                if hist_name in ["histo_WW", "histo_WWewk", "histo_ggWW"]:
                    WWTOTAL += total_sum

		# Calculamos el total de sucesos entre fondo y señal
                if hist_name != "histo_DATA":
                    SIST += total_sum

		# Calculamos nuestro optimizador
                HIGGS = hist_totals.get("histo_Higgs", 0.0)
                OPTI = (HIGGS + WWTOTAL)/ math.sqrt(SIST) if SIST > 0 else 0.0

                print(f"Directorio: {dir_name}")
                print(f"Nombre del histograma \t Total sucesos")
                for hist_name, total_sum in hist_totals.items():
                    print(f"{hist_name} \t {total_sum}")
                print(f"WWTOTAL \t {WWTOTAL}")
                print(f"SISTEMÁTICO \t {SIST}")
                print(f"OPTIMIZADOR \t {OPTI}")
                print()

    file.Close()

if __name__ == "__main__":
    archivo_root("rootfiles__Full2018_v7/mkShapes__Full2018_v7.root")
