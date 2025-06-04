"""
Script que define, crea la red neuronal, indica qué método debe utilizar, las variables de entrada que se utilizarán, las rutas a los eventos que se utilizarán
como entrenamiento y entrena y testea la red.

Código adaptado de: https://root.cern/doc/master/ClassificationKeras_8py_source.html
"""

from ROOT import TMVA, TFile, TCut, TChain
import os
import math
from tensorflow.keras.models import Sequential
from tensorflow.keras.layers import Dense
from tensorflow.keras.optimizers import SGD

def create_model():
    # Generate model
    model = Sequential()
    model.add(Dense(64, activation='relu', input_dim=5))
    model.add(Dense(2, activation='softmax'))

    # Set loss and optimizer
    model.compile(loss='categorical_crossentropy', optimizer=SGD(learning_rate=0.01), weighted_metrics=['accuracy'])

    # Store model to file
    model.save('modelClassification.h5')
    model.summary()

def get_chain_from_eos(path, pattern):
    chain = TChain("Events")
    for file in os.popen(f"xrdfs root://eosuser.cern.ch ls {path} | grep '{pattern}'").readlines():
        if ".sys" in file.strip():
            continue
        full_path = f"root://eosuser.cern.ch/{file.strip()}"
        print(full_path)
        chain.Add(full_path)
    return chain


def run():
    output = TFile("TMVA_Classification_Keras.root", "RECREATE")

    # Ruta EOS para fondos (grupo Latinos)
    eos_bkg_path = "/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Autumn18_102X_nAODv7_Full2018v7/MCl1loose2018v7__MCCorr2018v7__l2loose__l2tightOR2018v7"
    # Ruta EOS para señales (privado)
    eos_sig_path = "/eos/user/v/vizan/LatinosTFM24PP2/Autumn18_102X_nAODv7_Full2018v7/MCl1loose2018v7__MCCorr2018v7"

    # Ruta a los archivos
    # Señal: solo 2 partes
    signal_patterns = ["nanoLatino_TTbarDMPseudo2L2Nu__part8", "nanoLatino_TTbarDMPseudo2L2Nu__part12"]
    signal = get_chain_from_eos(eos_sig_path, signal_patterns)

    # Fondo: 10 partes
    bkg_patterns = [f"nanoLatino_TTTo2L2Nu__part{i}" for i in range(10,20)]
    background = get_chain_from_eos(eos_bkg_path, bkg_patterns)

    factory = TMVA.Factory("TMVAClassification", output,
        "!V:!Silent:Color:DrawProgressBar:Transformations=D,G:AnalysisType=Classification")

    # Se analizan las variables
    dataloader = TMVA.DataLoader("dataset")
    dataloader.AddVariable("mpmet", 'F')
    dataloader.AddVariable("mtw2", 'F')
    dataloader.AddVariable('dphill', 'F')
    dataloader.AddVariable('dphillmet', 'F')
    dataloader.AddVariable('drll', 'F')

    # Se añaden los árboles en el dataloader
    dataloader.AddSignalTree(signal, 1.0)
    dataloader.AddBackgroundTree(background, 1.0)

    # VERSIONES DE LOS CORTES:

    # V1:
    # cuts = ("nLepton >= 2")

    # V2.1:
    # cuts = ("(nLepton >= 2) && (mll > 20) && (Sum$(CleanJet_pt > 30) >= 1)")
    # Leptonpgd_ID y Lepton_pt no están definidos

    # V2.3 + todas las variables:
    cuts = ("(nLepton >= 2) && " # Corte nLepton
        "(mll > 20) && " # Corte mll
        "Sum$((CleanJet_pt > 30) && (abs(CleanJet_eta) < 2.4)) && " # Corte en jet
        "(Lepton_pt[0]>25) && (Lepton_pt[1]>20) && " # Lepton_pt
        "(Sum$((CleanJet_pt > 20) && abs(CleanJet_eta) < 2.4 && (Jet_btagDeepB[CleanJet_jetIdx] > 0.4184)) >= 1) && " # Corte b-jet con Medium WP
        "((Lepton_pdgId[0]*Lepton_pdgId[1]) == -11*13)") # emu

    # Aquí se aplican los cortes
    dataloader.PrepareTrainingAndTestTree(TCut(cuts),
        "nTrain_Signal=4000:nTrain_Background=4000:SplitMode=Random:NormMode=NumEvents:!V")

    factory.BookMethod(dataloader, TMVA.Types.kFisher, "Fisher",
        "!H:!V:Fisher:VarTransform=D,G")

    factory.BookMethod(dataloader, TMVA.Types.kPyKeras, "PyKeras",
        "H:!V:VarTransform=D,G:FilenameModel=modelClassification.h5:"
        "FilenameTrainedModel=trainedModelClassification.h5:NumEpochs=20:BatchSize=32")

    factory.TrainAllMethods()
    factory.TestAllMethods()
    factory.EvaluateAllMethods()

    output.Close()

if __name__ == "__main__":

    # Setup TMVA
    TMVA.Tools.Instance()

    # Create and store the ML model
    TMVA.PyMethodBase.PyInitialize()
    create_model()

    # Run TMVA
    run()
