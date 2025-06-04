"""
Script que toma los valores de las variables mpmet y mtw2 de los árboles de salida de TMVA y crea una gráfica con las distribuciones de las variables
para señal y fondo.
"""

import ROOT as r
import matplotlib.pyplot as plt
import numpy as np

# Abrimos el archivo y el árbol de entrenamiento
file = r.TFile("output_V23_MWP.root")
tree = file.Get("dataset/TrainTree")

# Inicializamos listas
mpmet_signal = []
mpmet_background = []
mtw2_signal = []
mtw2_background = []

# Recorremos el árbol y llenamos las listas accediendo a las variables, distinguiendo entre señal (classID = 0) y fondo (classID = 1)
for entry in tree:
    if entry.classID == 0:
        mpmet_signal.append(entry.mpmet)
        mtw2_signal.append(entry.mtw2)
    else:
        mpmet_background.append(entry.mpmet)
        mtw2_background.append(entry.mtw2)

# --- GRÁFICA --- #
plt.figure(figsize=(12, 5))

# Histograma de mpmet
plt.subplot(1, 2, 1)
plt.hist(mpmet_signal, bins=50, alpha=0.6, label="Señal", color='blue', density=True)
plt.hist(mpmet_background, bins=50, alpha=0.6, label="Fondo", color='red', density=True)

plt.xlim(0,300)
plt.xlabel("mpmet")
plt.ylabel("Densidad normalizada")
plt.title("Distribución de mpmet (TrainTree)")
plt.legend()

# Histograma de mtw2
plt.subplot(1, 2, 2)
plt.hist(mtw2_signal, bins=50, alpha=0.6, label="Señal", color='blue', density=True)
plt.hist(mtw2_background, bins=50, alpha=0.6, label="Fondo", color='red', density=True)

plt.xlim(0, 300)
plt.xlabel("mtw2")
plt.ylabel("Densidad normalizada")
plt.title("Distribución de mtw2 (TrainTree)")
plt.legend()

plt.tight_layout()
plt.savefig("distribuciones_con_cortes.png")
plt.show()
