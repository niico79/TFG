#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Descripción: Script que crea toma la curva ROC generada por TMVA e incluye diferentes puntos correspondientes a distintos cortes en las variables mpmet y mtw2.
El archivo muestra en pantalla la figura generada con la curva ROC y los puntos, además de mostrar en terminal
"""

import ROOT

# Se abre el archivo y se obtiene el árbol y el gráfico ROC
file = ROOT.TFile("output_V23_MWP.root")
tree = file.Get("dataset/TestTree")
roc_graph = file.Get("dataset/Method_PyKeras/PyKeras/MVA_PyKeras_rejBvsS")

# Se inicializan contadores
S_total = 0
B_total = 0
S_pass = 0
B_pass = 0

# El árbol se recorre. Comprueba si la entrada classID es 0 (señal) o 1 (fondo)
for entry in tree:
    is_signal = entry.classID == 0
    # Flag para comprobar si mpmet > 120 GeV y mtw2 > 100 GeV
    passes_cut = entry.mpmet > 120 and entry.mtw2 > 100
    # Se contabilizan los eventos de señal y fondo que pasan el corte
    if is_signal:
        S_total += 1
        if passes_cut:
            S_pass += 1
    else:
        B_total += 1
        if passes_cut:
            B_pass += 1

# Se calcula eficiencia y rechazo
eff_signal = S_pass / S_total if S_total > 0 else 0
rej_background = 1 - (B_pass / B_total) if B_total > 0 else 0

print(f"Eficiencia de señal = {eff_signal:.4f}")
print(f"Rechazo de fondo = {rej_background:.4f}")
print(f"Punto ROC: ({eff_signal:.4f}, {rej_background:.4f})")

# Crea un punto en el plano ROC
my_point = ROOT.TGraph(1)
my_point.SetPoint(0, eff_signal, rej_background)
my_point.SetMarkerStyle(20)
my_point.SetMarkerSize(1.5)
my_point.SetMarkerColor(ROOT.kRed)

# Dibuja ROC + punto
c = ROOT.TCanvas("c", "ROC Curve with Point", 800, 600)
c.SetTickx(1)
c.SetTicky(1)
roc_graph.SetMarkerStyle(20)
roc_graph.SetMarkerSize(0.8)
roc_graph.SetLineWidth(2)

roc_graph.SetTitle("Curva ROC con punto de corte manual")
roc_graph.GetXaxis().SetTitle("Eficiencia de señal")
roc_graph.GetYaxis().SetTitle("Rechazo de fondo")

roc_graph.GetXaxis().SetTitleSize(0.04)
roc_graph.GetYaxis().SetTitleSize(0.04)
roc_graph.GetXaxis().SetLabelSize(0.035)
roc_graph.GetYaxis().SetLabelSize(0.035)
roc_graph.GetXaxis().SetTitleOffset(1.2)
roc_graph.GetYaxis().SetTitleOffset(1.4)


roc_graph.Draw("AL")
my_point.Draw("P SAME")

legend = ROOT.TLegend(0.6, 0.2, 0.88, 0.3)
legend.AddEntry(roc_graph, "TMVA ROC", "l")
legend.AddEntry(my_point, "Corte manual", "p")
legend.Draw()

c.SaveAs("ROC_with_point.png")
