"""
Script utilizado para definir las preselecciones sobre los eventos.

Código adaptado de: https://github.com/piedraj/HEP/blob/main/Full2018_v7/cuts.py
"""

cuts = {}

# Define las preselecciones básicas

# CORTES GLOBALES
_tmp = [
    'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13', # Sabor de los leptones: e-mu
    '(nLepton >= 2 && Alt(Lepton_pt, 2, 0) <10.)', # Al menos dos leptones, y el tercero con un pt < 10 GeV
    'mll > 20.', # masa invariante de los leptones > 20 GeV
    'Lepton_pt[0] > 25.', # pt del primer leptón > 25 GeV
    'Lepton_pt[1] > 20.', # pt del segundo leptón > 20 GeV
]

preselections = ' && '.join(_tmp)

cuts['dhww2l2v_13TeV_sr'] = {
    'expr': '1', # No hay ningún corte específico para esta categoría

    'categories': {

        # PRESELECCIÓN BÁSICA (LeptonID + nLepton + 3LeptonVeto + mll + Lepton_pt[0][1] + mpmet (PuppiMET)):

        'emu_1bj': 'bReq  && PuppiMET_pt > 20.  && mpmet > 20.', # eventos con >=1 bj con la preselección básica

        'emu_2bj': 'bReq_2bj && PuppiMET_pt >20.  && mpmet > 20.', # Eventos con >= 2bj con la preseleccion básica

        'emu_CR': ' bIn && PuppiMET_pt >20.  && mpmet > 20.', #CR con la preselcción básica (>= 0bj) --> Categoría inclusiva

        'emu_eq1bj': 'bReq_eq1bj && PuppiMET_pt >20.  && mpmet > 20.', # Eventos con == 1bj con la preselección básica

        # SELECCIÓN DEL AN (LeptonID + nLepton (3leptonVeto) + mll):

        'emu_ttDM': 'bReq_2bj && Sum((CleanJet_pt > 30) && (abs(CleanJet_eta) < 2.4)) >= 1', # Eventos con >= 2bj y un o más de un jet con pt = 30 y |eta| < 2.4

        'emu_tDM': 'bReq_eq1bj && Sum((CleanJet_pt > 30) && (abs(CleanJet_eta) < 2.4)) >= 1', # Eventos con = 1bj y un o más de un jet con pt = 30 y |eta| < 2.4

        'emu_tttDM': '(bReq_eq1bj && Sum((CleanJet_pt > 30) && (abs(CleanJet_eta) < 2.4)) >= 1) || (bReq_2bj && Sum((CleanJet_pt > 30) && (abs(CleanJet_eta) < 2.4)) >= 1)', # Eventos con >= 1bj y un o más de un jet con pt = 30 y |eta| < 2.4 (categoría inclusiva)
    }
}
