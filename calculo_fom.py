"""
Script para calcular la figura de mérito (FoM) a partir de los árboles de salida de TMVA mediante dos maneras distintas:

La primera, denominada como 'Cortes secuenciales', calcula la FoM tomando los eventos que pasan el corte de mpmet > 190 GeV y mtw2 > 130 GeV,
correspondiente al corte óptimo obtenido por el framework mkShapes (ver memoria del TFG). Se printea en pantalla el número de eventos de señal,
fondo y el valor de la figura de mérito para el corte establecido.

La segunda manera de calcular la figura de mérito es cortando en la variable de salida de la red (PyKeras). Para cada corte en PyKeras, se calcula
la FoM. Una vez calculada para todos los cortes, se toma el valor de la variable discriminante que maximiza la FoM, lo imprime en pantalla y grafica
el valor de la figura de mérito frente a la variable PyKeras, y guarda la figura en un archivo png.
"""

import ROOT
import numpy as np
import math

ROOT.gROOT.SetBatch(True)

# ----- CORTES SECUENCIALES -----

# Se toma el árbol donde están los datos de entrenamiento
df = ROOT.RDataFrame("dataset/TestTree", "output_V23_MWP.root")

# Se definen los cortes
corte_sec = "mpmet > 190 && mtw2 > 130"

# Se suman los eventos de señal (classID = 0) y fondo (classID = 1) que pasan los cortes
s_sec_result = df.Filter(corte_sec + " && classID == 0").Sum("weight")
b_sec_result = df.Filter(corte_sec + " && classID == 1").Sum("weight")

# Toma los valores de los eventos que pasan los cortes
S_sec = s_sec_result.GetValue()
B_sec = b_sec_result.GetValue()

# Calcula la figura de mérito
if (S_sec + B_sec) > 0:
    FoM_sec = S_sec / math.sqrt(S_sec + B_sec)
else:
    FoM_sec = 0

print(f"Cortes Secuenciales: S = {S_sec}, B = {B_sec}, FoM = {FoM_sec}")


# ----- FOM TMVA -----

# Se cogen el archivo y el árbol donde están los resultados de TMVA
f = ROOT.TFile("output_V23.root")
tree = f.Get("dataset/TestTree")

# Se genera un vector para los valores de la variable de salida (PyKeras) entre 0 y 1
cortes_C = np.linspace(0.0, 1.0, 101)

resultados_fom = []

for C in cortes_C:

    # Se inicializan dos variables que indican el número de eventos de señal y de fondo, respectivamente
    S_dnn_C = 0.0
    B_dnn_C = 0.0

    # Se recorren todas las entradas del árbol
    for i in range(tree.GetEntries()):
        tree.GetEntry(i)

        # Se coge el valor de la variable de salida, el ID del evento (0 si señal y 1 si fondo) y el peso del evento
        pykeras_val = tree.PyKeras
        class_id = tree.classID
        event_weight = tree.weight

  	# Se toman los eventos con un PyKeras mayor que el corte que aplicamos
        if pykeras_val > C:
            if class_id == 0: # Señal
                S_dnn_C += event_weight # Se suma el evento a la variable de señal según el peso
            elif class_id == 1: # Fondo
                B_dnn_C += event_weight # Se suma el evento a la variable de señal según el peso

    # Calcula FoM para este corte C
    fom_C = 0.0
    if (S_dnn_C + B_dnn_C) > 0:
        fom_C = S_dnn_C / math.sqrt(S_dnn_C + B_dnn_C)
    print(C, S_dnn_C, B_dnn_C, fom_C)
    resultados_fom.append((C, fom_C, S_dnn_C, B_dnn_C)) # Guarda C, FoM, S y B


mejor_resultado = max(resultados_fom, key=lambda item: item[1]) # Busca por FoM (índice 1)

C_opt = mejor_resultado[0]
FoM_max_DNN = mejor_resultado[1]
S_opt = mejor_resultado[2]
B_opt = mejor_resultado[3]

print(f"DNN: Corte Óptimo C = {C_opt:.3f}, S = {S_opt}, B = {B_opt}, FoM max = {FoM_max_DNN}")

Cs = [res[0] for res in resultados_fom]
Foms = [res[1] for res in resultados_fom]

# Gráfica
n_points = len(Cs)
graph = ROOT.TGraph(n_points)

for i in range(n_points):
    graph.SetPoint(i, Cs[i], Foms[i])

graph.SetTitle("FoM para DNN;Corte en PyKeras;FoM (S/#sqrt{S+B})")
graph.SetLineColor(ROOT.kBlue + 1)
graph.SetLineWidth(2)
graph.SetMarkerStyle(20)
graph.SetMarkerColor(ROOT.kBlue + 1)

c1 = ROOT.TCanvas("c1", "FoM Optimization", 800, 600)
graph.Draw("ALP")
c1.SetGrid()

c1.SaveAs("fom_plot.png")
