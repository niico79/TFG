"""
Script que toma las distribuciones de mpmet y mtw2 de los árboles de salida de TMVA, calcula la figura de mérito para distintos cortes en estas variables
y crea y guarda un mapa de calor para la visualización del efecto de los cortes en la FoM.
"""
# HEATMAP

import ROOT as r
import matplotlib.pyplot as plt
import numpy as np

# Abrimos el archivo y el árbol de entrenamiento
file = r.TFile("output_V23_PartData.root")
tree = file.Get("dataset/TrainTree")

# Inicializamos listas
signal_events = []
background_events = []

# Recorremos el árbol y guardamos pares (mpmet, mtw2)
for entry in tree:
    event = (entry.mpmet, entry.mtw2)
    if entry.classID == 0:
        signal_events.append(event)
    else:
        background_events.append(event)

# Se crean los rangos de los cortes
mpmet_cuts = np.linspace(0, 300, 100)
mtw2_cuts  = np.linspace(0, 300, 100)

# Se crea la matriz de FoM
fom_matrix = np.zeros((len(mtw2_cuts), len(mpmet_cuts)))

# Variables para guardar el máximo
max_fom = -1
best_mpmet_cut = None
best_mtw2_cut = None

# Calcula FoM para cada combinación de cortes
for i, mtw2_cut in enumerate(mtw2_cuts):
    for j, mpmet_cut in enumerate(mpmet_cuts):
        S = sum(1 for x in signal_events if x[0] > mpmet_cut and x[1] > mtw2_cut)
        B = sum(1 for x in background_events if x[0] > mpmet_cut and x[1] > mtw2_cut)
        fom = S / np.sqrt(S + B) if (S + B) > 0 else 0
        fom_matrix[i, j] = fom

        if fom > max_fom:
            max_fom = fom
            best_mpmet_cut = mpmet_cut
            best_mtw2_cut = mtw2_cut

# Se printea el FoM máximo y el corte en pantalla
print(f"Máxima FoM: {max_fom:.4f}")
print(f"  -> Corte en mpmet: {best_mpmet_cut:.2f}")
print(f"  -> Corte en mtw2: {best_mtw2_cut:.2f}")

# Gráfica
plt.figure(figsize=(10, 8))
X, Y = np.meshgrid(mpmet_cuts, mtw2_cuts)
heatmap = plt.pcolormesh(X, Y, fom_matrix, shading='auto', cmap='viridis')
plt.colorbar(heatmap, label='Figura de Mérito (S / √(S+B))')
plt.xlabel("Corte en mpmet")
plt.ylabel("Corte en mtw2")
plt.title("Mapa de calor de la Figura de Mérito")

# Marca los puntos de interés en el heatmap
plt.plot(best_mpmet_cut, best_mtw2_cut, 'ro', markersize=8, label='Máx. FoM')
plt.plot(72.2, 100, 'bo', markersize = 8, label = 'Punto de interés ROC')
plt.plot(190, 130, 'wo', markersize = 8, label = 'Optimización mkShapes')
plt.legend()

plt.tight_layout()
plt.savefig("fom_heatmap.png")
plt.show()

