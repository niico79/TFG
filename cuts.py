# cuts

cuts = {}

# Define las preselecciones básicas

# CORTES GLOBALES
_tmp = [
    'Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13',
    '(nLepton >= 2 && Alt(Lepton_pt, 2, 0) <10.)',
    'mll > 20.',
    'Lepton_pt[0] > 25.',
    'Lepton_pt[1] > 20.',
]

preselections = ' && '.join(_tmp)

cuts['dhww2l2v_13TeV_sr'] = {
    'expr': '1', # CORTES A TODA LA SECCIÓN dhww2l2v_13TeV_sr

    # CORTES A CADA VARIABLE POR SEPARADO
    'categories': {

        # PRESELECCIÓN BÁSICA (LeptonID + nLepton + 3LeptonVeto + mll + Lepton_pt[0][1] + mpmet (PuppiMET))
        'emu_1bj': 'bReq  && PuppiMET_pt > 20.  && mpmet > 20.', # eventos con >=1 bj con la preselección básica

        'emu_2bj': 'bReq_2bj && PuppiMET_pt >20.  && mpmet > 20.', # Eventos con >= 2bj con la preseleccion básica

        'emu_CR': ' bVeto && PuppiMET_pt >20.  && mpmet > 20.', #CR con la preselcción básica (0bj)

        'emu_eq1bj': 'bReq_eq1bj && PuppiMET_pt >20.  && mpmet > 20.', # Eventos con == 1bj con la preselección básica

        # SELECCIÓN DEL AN (LeptonID + nLepton (3leptonVeto) + mll)
        'emu_ttDM': 'bReq_2bj && Sum((CleanJet_pt > 30) && (abs(CleanJet_eta) < 2.4)) >= 1', # Lo que en el AN se llama ttbar+DM

        'emu_tDM': 'bReq_eq1bj && Sum((CleanJet_pt > 30) && (abs(CleanJet_eta) < 2.4)) >= 1', # Lo que en el AN se llama t+DM

        'emu_tttDM': '(bReq_eq1bj && Sum((CleanJet_pt > 30) && (abs(CleanJet_eta) < 2.4)) >= 1) || (bReq_2bj && Sum((CleanJet_pt > 30) && (abs(CleanJet_eta) < 2.4)) >= 1)', # Ambas SR del AN
    }
}
