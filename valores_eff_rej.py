"""
Script que muestra en terminal el valor de la eficiencia de señal y el rechazo de fondo para los eventos del árbol de salida de la red al aplicar diferentes
cortes en la variable clasificadora.
"""
import ROOT as r
import numpy as np

# Abre el archivo con el output de TMVA
file = r.TFile("TMVA_Classification_Keras.root")
tree = file.Get("dataset/TestTree")

cut_values = np.linspace(0.0, 1.0, 100)
total_sig = 0
total_bkg = 0
signal_outputs = []
background_outputs = []

# Extraer valores de salida
for evt in tree:
    output = getattr(evt, "PyKeras") # Obtiene el valor de la variable PyKeras del evento
    if evt.classID == 0:
        signal_outputs.append(output)
        total_sig += 1
    elif evt.classID == 1:
        background_outputs.append(output)
        total_bkg += 1

print(f"{'Corte':<8} {'Eff_Sig':<10} {'Eff_Bkg':<10} {'Rej_Bkg':<10}")
print("-"*40)

# Recorrer los cortes
for cut in cut_values:
    sig_pass = sum(1 for x in signal_outputs if x > cut) # Cuenta los eventos que pasan el corte en PyKeras
    bkg_pass = sum(1 for x in background_outputs if x > cut)

    eff_sig = sig_pass / total_sig if total_sig > 0 else 0
    eff_bkg = bkg_pass / total_bkg if total_bkg > 0 else 0
    rej_bkg = 1 - eff_bkg

    print(f"{cut:.2f}    {eff_sig:.4f}    {eff_bkg:.4f}    {rej_bkg:.4f}")
