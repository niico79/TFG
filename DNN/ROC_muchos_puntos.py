"""
Script que toma la curva ROC generada por TMVA (guardada en el archivo .root proporcionado en la salida de la red) e incluye diferentes puntos correspondientes
a distintos cortes enlas variables mpmet y mtw2. El archivo muestra en pantalla la figura generada con la curva ROC y los puntos, además de mostrar en terminal
las características del punto que optimiza la ROC.
"""

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
best_score = -1
best_point = (0, 0)
best_cuts = (0, 0)

roc_points = []
i = 0

eff_S_pto = rej_B_pto = 0.

# Se definen los cortes que generará uno de los puntos de interés en la gráfica, en este caso, el punto de Cortes secuenciales
mpmet_target = 120
mtw2_target = 100

# Encuentra los cortes más cercanos en cada array
mpmet_closest = min(mpmet_cuts, key=lambda x: abs(x - mpmet_target))
mtw2_closest = min(mtw2_cuts, key=lambda x: abs(x - mtw2_target))

# Se definen los cortes que generará el punto de interés correspondiente a los cortes óptimos de mkShapes
mpmet_target = 190
mtw2_target = 130

# Encuentra los cortes más cercanos en cada array
mpmet_closest2 = min(mpmet_cuts, key=lambda x: abs(x - mpmet_target))
mtw2_closest2 = min(mtw2_cuts, key=lambda x: abs(x - mtw2_target))

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

        # Guarda los puntos de interés
        if mpmet_cut == mpmet_closest and mtw2_cut == mtw2_closest:
            eff_S_pto = eff_signal
            rej_B_pto = rej_background

        if mpmet_cut == mpmet_closest2 and mtw2_cut == mtw2_closest2:
            eff_S_pto2 = eff_signal
            rej_B_pto2 = rej_background

        # Medida de cálculo simple (distancia a (1,1))
        score = eff_signal + rej_background  # cuanto más alto, más cerca del punto (1,1)
        if score > best_score:
            best_score = score
            best_point = (eff_signal, rej_background)
            best_cuts = (mpmet_cut, mtw2_cut)

# Separar para graficar
x_manual, y_manual = zip(*roc_points)

# Gráfica
plt.figure(figsize=(8, 6))
plt.plot(x_tmva, y_tmva, label="TMVA ROC", linewidth=2)
plt.scatter(x_manual, y_manual, color='blue', alpha=0.4, s=15, label="Cortes manuales")
plt.scatter(*best_point, color='red', label=f"Punto de interés ROC\nmpmet>{best_cuts[0]:.1f}, mtw2>{best_cuts[1]:.1f}", zorder=5)
plt.plot(eff_S_pto, rej_B_pto, 'mo', markersize = 6, label = 'Optimización cortes secuenciales')
plt.plot(eff_S_pto2, rej_B_pto2, 'yo', markersize = 6, label = 'Optimización mkShapes')

plt.xlabel("Eficiencia de señal")
plt.ylabel("Rechazo de fondo")
plt.title("Curva ROC: comparación de TMVA y cortes manuales")
plt.legend()
plt.grid(True)
plt.tight_layout()
plt.savefig("ROC_scan_manual_vs_tmva.png")
plt.show()

plt.figure(figsize=(8, 6))
plt.plot(x_tmva, y_tmva, label="TMVA ROC", linewidth=2)
plt.scatter(x_manual, y_manual, color='blue', alpha=0.4, s=15, label="Cortes manuales")
plt.scatter(*best_point, color='red', label=f"Punto de interés ROC\nmpmet>{best_cuts[0]:.1f}, mtw2>{best_cuts[1]:.1f}", zorder=5)
plt.plot(eff_S_pto, rej_B_pto, 'mo', markersize = 6, label = 'Optimización cortes secuenciales')
plt.plot(eff_S_pto2, rej_B_pto2, 'yo', markersize = 6, label = 'Optimización mkShapes')

plt.xlabel("Eficiencia de señal")
plt.ylabel("Rechazo de fondo")
plt.title("Curva ROC: comparación de TMVA y cortes manuales")
plt.legend()
plt.grid(True)
plt.tight_layout()
plt.xlim(0, 0.5)
plt.ylim(0.9)
plt.savefig("ROC_puntos_zoom.png")
plt.show()

# Printea los resultados del corte óptimo del ROC en pantalla
print(f"Mejor eficiencia de señal = {best_point[0]:.4f}")
print(f"Mejor rechazo de fondo = {best_point[1]:.4f}")
print(f"Mejor punto: {best_point}")
print(f"Mejor combinación de cortes: mpmet > {best_cuts[0]:.1f}, mtw2 > {best_cuts[1]:.1f}")

