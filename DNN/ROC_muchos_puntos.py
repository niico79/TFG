import ROOT
import matplotlib.pyplot as plt
import numpy as np

# Carga archivo y árbol
file = ROOT.TFile("output_V23_PartData.root")
tree = file.Get("dataset/TestTree")
roc_tmva = file.Get("dataset/Method_PyKeras/PyKeras/MVA_PyKeras_rejBvsS") # Toma la histograma de la curva ROC

nbins = roc_tmva.GetNbinsX()
x_tmva = []
y_tmva = []

for i in range(1, nbins + 1):
    x = roc_tmva.GetBinCenter(i)
    y = roc_tmva.GetBinContent(i)
    x_tmva.append(x)
    y_tmva.append(y)

# Rango de valores para explorar. Se toman estos valores por ser cercanos al punto de corte de las distribuciones de señal y fondo
mpmet_cuts = np.linspace(50, 100, 10)
mtw2_cuts  = np.linspace(100, 150, 10)

# Inicialización de las variables
roc_points = []
eff_S_pyk = rej_B_pyk = 0.

# Se definen los cortes que generará uno de los puntos de interés en la gráfica, en este caso, el punto con salida de PyKeras > 0.4
pykeras_cut = 0.4

# Escaneo doble de cortes
for mpmet_cut in mpmet_cuts:
    for mtw2_cut in mtw2_cuts:
        S_total = 0
        B_total = 0
        S_pass = 0
        B_pass = 0
        for entry in tree:
            is_signal = entry.classID == 0 # La señal tiene un classID = 0
            passes_cut = entry.mpmet > mpmet_cut and entry.mtw2 > mtw2_cut # Flag para los eventos que pasan el corte aplicado

            # Se añade a la variable correspondiente dependiendo si es señal o fondo, y si pasa el corte o no
            if is_signal:
                S_total += 1
                if passes_cut:
                    S_pass += 1
            else:
                B_total += 1
                if passes_cut:
                    B_pass += 1

        if S_total == 0 or B_total == 0:
            continue

        eff_signal = S_pass / S_total
        rej_background = 1 - (B_pass / B_total)

        # Guarda el punto ROC
        roc_points.append((eff_signal, rej_background))

        # Si la salida de la red (PyKeras) está por encima del umbral 0.4, guarda el punto correspondiente
        for entry in tree:
            if entry.PyKeras > pykeras_cut:
                if is_signal:
                    S_total += 1
                    if passes_cut:
                        S_pass += 1
                else:
                    B_total += 1
                    if passes_cut:
                        B_pass += 1

        # Calculamos la eficiencia de señal y rechazo de fondo para PyKeras > 0.4
        eff_S_pyk = S_pass / S_total
        rej_B_pyk = 1 - (B_pass / B_total)

# Separar para graficar
x_manual, y_manual = zip(*roc_points)

# Gráfica
plt.figure(figsize=(8, 6))
plt.plot(x_tmva, y_tmva, label="TMVA ROC", linewidth=2)
plt.scatter(x_manual, y_manual, color='blue', alpha=0.4, s=15, label="Cortes manuales")
plt.plot(eff_S_pyk, rej_B_pyk, 'go', markersize = 6, label=f'Eficiencia de señal y rechazo de fondo para PyKeras > {pykeras_cut}')
plt.xlabel("Eficiencia de señal")
plt.ylabel("Rechazo de fondo")
plt.title("Curva ROC: comparación de TMVA y cortes manuales")
plt.legend()
plt.grid(True)
plt.tight_layout()
plt.savefig("ROC_pykeras_0.4.png")
plt.show()

# Printea los resultados del corte óptimo de la ROC en pantalla
print(f"Eficiencia de señal para PyKeras > {pykeras_cut} = {eff_S_pyk:.4f}")
print(f"Rechazo de fondo para PyKeras > {pykeras_cut} = {rej_B_pyk:.4f}")

