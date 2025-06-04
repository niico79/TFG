"""
Script que genera y guarda las gráficas de las distribuciones normalizadas de señal y fondo usando los árboles de salida de TMVA.
"""

import ROOT

ROOT.gStyle.SetOptStat(0)

# Se abren los archivos donde están los histogramas
file = ROOT.TFile("output_V23_PartData.root")

# Carga los histogramas de señal y fondo
hist_signal = file.Get("dataset/Method_PyKeras/PyKeras/MVA_PyKeras_S")
hist_background = file.Get("dataset/Method_PyKeras/PyKeras/MVA_PyKeras_B")

# Normaliza las distribuciones por la integral
hist_signal.Scale(1.0 / hist_signal.Integral())
hist_background.Scale(1.0 / hist_background.Integral())

# Crea un canvas para la gráfica
canvas = ROOT.TCanvas("canvas", "Distribución de señal y fondo", 800, 600)

max_y = max(hist_signal.GetMaximum(), hist_background.GetMaximum())
hist_signal.SetMaximum(max_y * 1.2)

# Dibuja el histograma de señal
hist_signal.SetLineColor(ROOT.kBlue)  # Color azul para la señal
hist_signal.SetLineWidth(2)
hist_signal.SetTitle("Distribuciones normalizadas; PyKeras; Eventos Normalizados")
hist_signal.Draw("HIST")

# Dibuja el histograma de fondo en la misma gráfica
hist_background.SetLineColor(ROOT.kRed)  # Color rojo para el fondo
hist_background.SetLineWidth(2)
hist_background.Draw("HIST SAME")

# Añadir leyenda
legend = ROOT.TLegend(0.7, 0.7, 0.9, 0.85)
legend.AddEntry(hist_signal, "Señal", "l")
legend.AddEntry(hist_background, "Fondo", "l")


# Mostrar la gráfica
canvas.Update()
canvas.Draw()

# Guarda la gráfica como imagen
canvas.SaveAs("señal_vs_fondo_normalizado.png")
