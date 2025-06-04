import os, glob
import inspect
from mkShapesRDF.lib.search_files import SearchFiles

searchFiles = SearchFiles()
redirector = ""


################################################
################# SKIMS ########################
################################################

mcProduction = 'Autumn18_102X_nAODv7_Full2018v7'
dataReco = 'Run2018_102X_nAODv7_Full2018v7'
fakeReco = 'Run2018_102X_nAODv7_Full2018v7'
mcSteps = 'MCl1loose2018v7__MCCorr2018v7__l2loose__l2tightOR2018v7{var}'
fakeSteps = 'DATAl1loose2018v7__l2loose__fakeW'
dataSteps = 'DATAl1loose2018v7__l2loose__l2tightOR2018v7'

samples = {}

##############################################
###### Tree base directory for the site ######
##############################################

##############################################
###### Tree base directory for the site ######
##############################################

treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano'
treeSignal = '/eos/user/v/vizan//LatinosTFM24PP2/Autumn18_102X_nAODv7_Full2018v7/MCl1loose2018v7__MCCorr2018v7'

limitFiles = -1

def makeMCDirectory(var=''):
    return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var=''))


mcDirectory = makeMCDirectory()
fakeDirectory = os.path.join(treeBaseDir, fakeReco, fakeSteps)
dataDirectory = os.path.join(treeBaseDir, dataReco, dataSteps)


def nanoGetSampleFiles(path, name):
    _files = searchFiles.searchFiles(path, name, redirector=redirector)
    if limitFiles != -1 and len(_files) > limitFiles:
        return [(name, _files[:limitFiles])]
    else:
        return [(name, _files)]


def CombineBaseW(samples, proc, samplelist):
    _filtFiles = list(filter(lambda k: k[0] in samplelist, samples[proc]["name"]))
    _files = list(map(lambda k: k[1], _filtFiles))
    _l = list(map(lambda k: len(k), _files))
    leastFiles = _files[_l.index(min(_l))]
    dfSmall = ROOT.RDataFrame("Runs", leastFiles)
    s = dfSmall.Sum("genEventSumw").GetValue()
    f = ROOT.TFile(leastFiles[0])
    t = f.Get("Events")
    t.GetEntry(1)
    xs = t.baseW * s

    __files = []
    for f in _files:
        __files += f
    df = ROOT.RDataFrame("Runs", __files)
    s = df.Sum("genEventSumw").GetValue()
    newbaseW = str(xs / s)
    weight = newbaseW + "/baseW"

    for iSample in samplelist:
        addSampleWeight(samples, proc, iSample, weight)


def addSampleWeight(samples, sampleName, sampleNameType, weight):
    obj = list(filter(lambda k: k[0] == sampleNameType, samples[sampleName]["name"]))[0]
    samples[sampleName]["name"] = list(
        filter(lambda k: k[0] != sampleNameType, samples[sampleName]["name"])
    )
    if len(obj) > 2:
        samples[sampleName]["name"].append(
            (obj[0], obj[1], obj[2] + "*(" + weight + ")")
        )
    else:
        samples[sampleName]["name"].append((obj[0], obj[1], "(" + weight + ")"))




################################################
############ Data DECLARATION ##################
################################################

DataRun = [
            ['A','Run2018A-02Apr2020-v1'] ,
            ['B','Run2018B-02Apr2020-v1'] ,
            ['C','Run2018C-02Apr2020-v1'] ,
            ['D','Run2018D-02Apr2020-v1'] ,
          ]

DataSets = ['MuonEG','DoubleMuon','SingleMuon','EGamma']

DataTrig = {
            'MuonEG'         : 'Trigger_ElMu' ,
            'DoubleMuon'     : '!Trigger_ElMu && Trigger_dblMu' ,
            'SingleMuon'     : '!Trigger_ElMu && !Trigger_dblMu && Trigger_sngMu' ,
            'EGamma'         : '!Trigger_ElMu && !Trigger_dblMu && !Trigger_sngMu && (Trigger_sngEl || Trigger_dblEl)' ,
           }


#########################################
############ MC COMMON ##################
#########################################

mcCommonWeightNoMatch = 'XSWeight*SFweight*METFilter_MC'
mcCommonWeight = 'XSWeight*SFweight*PromptGenLepMatch2l*METFilter_MC'


baseW_Mchi1_Mphi50 =  '0.00475603648312'
baseW_Mchi1_Mphi100 =  '0.00485964656525'
baseW_Mchi1_Mphi150 =  '0.0089446428383'
baseW_Mchi1_Mphi200 =  '0.00859004842156'
baseW_Mchi1_Mphi250 =  '0.00864678892248'
baseW_Mchi1_Mphi300 =  '0.00917930502191'
baseW_Mchi1_Mphi350 =  '0.00900646799724'
baseW_Mchi1_Mphi400 =  '0.00904750000195'
baseW_Mchi1_Mphi450 =  '0.00877228360138'
baseW_Mchi1_Mphi500 =  '0.00870741797225'
baseW_Mchi20_Mphi100 =  '0.00919579530011'
baseW_Mchi30_Mphi100 =  '0.00862385290847'
baseW_Mchi40_Mphi100 =  '0.0084986683718'
baseW_Mchi45_Mphi100 =  '0.00865008071936'
baseW_Mchi49_Mphi100 =  '0.00873088842498'
baseW_Mchi51_Mphi100 =  '0.00897713088932'
baseW_Mchi55_Mphi100 =  '0.00881925120209'


###########################################
#############  BACKGROUNDS  ###############
###########################################

###### DY #######

#ptllDYW_NLO = '(0.87*(gen_ptll<10)+(0.379119+0.099744*gen_ptll-0.00487351*gen_ptll**2+9.19509e-05*gen_ptll**3-6.0212e-07*gen_ptll**4)*(gen_ptll>=10 && gen_ptll<45)+(9.12137e-01+1.11957e-04*gen_ptll-3.15325e-06*gen_ptll**2-4.29708e-09*gen_ptll**3+3.35791e-11*gen_ptll**4)*(gen_ptll>=45 && gen_ptll<200) + 1*(gen_ptll>200))'
#ptllDYW_LO = '((0.632927+0.0456956*gen_ptll-0.00154485*gen_ptll*gen_ptll+2.64397e-05*gen_ptll*gen_ptll*gen_ptll-2.19374e-07*gen_ptll*gen_ptll*gen_ptll*gen_ptll+6.99751e-10*gen_ptll*gen_ptll*gen_ptll*gen_ptll*gen_ptll)*(gen_ptll>0)*(gen_ptll<100)+(1.41713-0.00165342*gen_ptll)*(gen_ptll>=100)*(gen_ptll<300)+1*(gen_ptll>=300))'

"""
useDYtt = True

files=[]
if useDYtt:
  files = nanoGetSampleFiles(mcDirectory, 'DYJetsToTT_MuEle_M-50') + \
          nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO_ext1')

else:
  files = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50') + \
          nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO_ext1')


samples['DY'] = {
    'name': files,
    'weight': mcCommonWeight + '*( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>15 && abs(PhotonGen_eta)<2.6) > 0 &&\
                                     Sum$(LeptonGen_isPrompt==1 && LeptonGen_pt>15)>=2) )',
    'FilesPerJob': 6,
}
#addSampleWeight(samples,'DY','DYJetsToTT_MuEle_M-50','DY_NLO_pTllrw')
#addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO_ext1','DY_LO_pTllrw')

"""

filesDYHT = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO_ext1') + \
nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-100to200') + \
nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-200to400') + \
nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-400to600') + \
nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-600toInf') + \
nanoGetSampleFiles(mcDirectory, 'DYJetsToTT_MuEle_M-50') + \
nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-70to100') + \
nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-100to200') + \
nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-200to400') + \
nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-400to600') + \
nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-600to800') + \
nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-800to1200') + \
nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-1200to2500') + \
nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-2500toInf')
"""
samples['DY'] = {
    'name': filesDYHT,
    'weight': mcCommonWeight + '*( !(Sum(PhotonGen_isPrompt==1 && PhotonGen_pt>15 && abs(PhotonGen_eta)<2.6) > 0 && Sum(LeptonGen_isPrompt==1 && LeptonGen_pt>15)>=2) )',
    'FilesPerJob': 2,
}

addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO_ext1',  'LHE_HT<100.0')
addSampleWeight(samples,'DY','DYJetsToTT_MuEle_M-50',  'LHE_HT<70.0')
"""

###### Top #######

"""
# top separado en ttbar y tW
samples['ttbar'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'TTTo2L2Nu'),
    'weight': mcCommonWeight,
    'FilesPerJob': 1,
}

samples['ST'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'ST_s-channel_ext1') + \
    nanoGetSampleFiles(mcDirectory, 'ST_t-channel_antitop') + \
    nanoGetSampleFiles(mcDirectory, 'ST_t-channel_top') + \
    nanoGetSampleFiles(mcDirectory, 'ST_tW_antitop_ext1') + \
    nanoGetSampleFiles(mcDirectory, 'ST_tW_top_ext1'),
    'weight': mcCommonWeight,
    'FilesPerJob': 2,
}

addSampleWeight(samples, 'ttbar', 'TTTo2L2Nu', 'Top_pTrw')
addSampleWeight(samples, 'ST', 'ST_s-channel_ext1', 'Top_pTrw')
addSampleWeight(samples, 'ST', 'ST_t-channel_antitop', 'Top_pTrw')
addSampleWeight(samples, 'ST', 'ST_t-channel_top', 'Top_pTrw')
addSampleWeight(samples, 'ST', 'ST_tW_antitop_ext1', 'Top_pTrw')
addSampleWeight(samples, 'ST', 'ST_tW_top_ext1', 'Top_pTrw')

########### ttV ################# TODO

samples['ttV'] = {
    'name': nanoGetSampleFiles(mcDirectory,'TTZToLLNuNu_M-10') + \
    nanoGetSampleFiles(mcDirectory,'TTWJetsToLNu') + \
    nanoGetSampleFiles(mcDirectory,'ttHToNonbb_M125'),
    'weight': mcCommonWeight, #??????????
    'FilesPerJob': 1
}

######## TTToSemiLeptonic ############### TODO

samples['TTSL'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'TTToSemiLeptonic'),
    'weight': mcCommonWeight,
    'FilesPerJob': 1,
}

################ VV ######################### TODO: PLOTS

samples['VV'] = {
    'name': nanoGetSampleFiles(mcDirectory,'WWTo2L2Nu') + \
    nanoGetSampleFiles(mcDirectory,'WZTo3LNu') + \
    nanoGetSampleFiles(mcDirectory,'WZTo2L2Q') + \
    nanoGetSampleFiles(mcDirectory, 'ZZTo2L2Nu_ext1') + \
    nanoGetSampleFiles(mcDirectory, 'ZZTo2L2Nu_ext2') + \
    nanoGetSampleFiles(mcDirectory, 'ZZTo2L2Q') + \
    nanoGetSampleFiles(mcDirectory, 'ZZTo4L_ext1') + \
    nanoGetSampleFiles(mcDirectory, 'ZZTo4L_ext2'),
    'weight': mcCommonWeight,
    'FilesPerJob': 2
}

############## OTHER ########################

samples['other'] = {
    'name': nanoGetSampleFiles(mcDirectory,'tZq_ll') + \
    nanoGetSampleFiles(mcDirectory,'ZGToLLG') + \
    nanoGetSampleFiles(mcDirectory, 'GluGluHToWWTo2L2Nu_M125') + \
    nanoGetSampleFiles(mcDirectory, 'VBFHToWWTo2L2Nu_M125') + \
    nanoGetSampleFiles(mcDirectory, 'HZJ_HToWWTo2L2Nu_M125') + \
    nanoGetSampleFiles(mcDirectory, 'GluGluZH_HToWWTo2L2Nu_M125') + \
    nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWW_M125') + \
    nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWW_M125') + \
    nanoGetSampleFiles(mcDirectory, 'ttHToNonbb_M125') + \
    nanoGetSampleFiles(mcDirectory, 'GluGluHToTauTau_M125') + \
    nanoGetSampleFiles(mcDirectory, 'VBFHToTauTau_M125') + \
    nanoGetSampleFiles(mcDirectory, 'HZJ_HToTauTau_M125') + \
    nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToTauTau_M125') + \
    nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToTauTau_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 10
}

"""
###### WW ########
"""
samples['WW'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'WWTo2L2Nu'),
    'weight': mcCommonWeight + '*nllW',
    'FilesPerJob': 3
}

samples['WWewk'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'WpWmJJ_EWK'),
    'weight': mcCommonWeight + '*(Sum(abs(GenPart_pdgId)==6 || GenPart_pdgId==25)==0)', #filter tops and Higgs
    'FilesPerJob': 4
}

# k-factor 1.4 already taken into account in XSWeight
files = nanoGetSampleFiles(mcDirectory, 'GluGluToWWToENEN') + \
    nanoGetSampleFiles(mcDirectory, 'GluGluToWWToENMN') + \
    nanoGetSampleFiles(mcDirectory, 'GluGluToWWToENTN') + \
    nanoGetSampleFiles(mcDirectory, 'GluGluToWWToMNEN') + \
    nanoGetSampleFiles(mcDirectory, 'GluGluToWWToMNMN') + \
    nanoGetSampleFiles(mcDirectory, 'GluGluToWWToMNTN') + \
    nanoGetSampleFiles(mcDirectory, 'GluGluToWWToTNEN') + \
    nanoGetSampleFiles(mcDirectory, 'GluGluToWWToTNMN') + \
    nanoGetSampleFiles(mcDirectory, 'GluGluToWWToTNTN')

samples['ggWW'] = {
    'name': files,
    'weight': mcCommonWeight + '*1.53/1.4', # updating k-factor
    'FilesPerJob': 4
}
"""
"""
######## Vg ########

files = nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM') + \
#    nanoGetSampleFiles(mcDirectory, 'ZGToLLG')

samples['Vg'] = {
    'name': files,
    'weight': mcCommonWeightNoMatch + '*(Gen_ZGstar_mass <= 0)',
    'FilesPerJob': 4
}
# the following is needed in both v5 and v6
# the following is NOT needed in v7
#addSampleWeight(samples, 'Vg', 'ZGToLLG', '0.448')

######## VgS ########

files = nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM') + \
    nanoGetSampleFiles(mcDirectory, 'ZGToLLG') + \
    nanoGetSampleFiles(mcDirectory, 'WZTo3LNu_mllmin01')

samples['VgS'] = {
    'name': files,
    'weight': mcCommonWeight + ' * (gstarLow * 0.94 + gstarHigh * 1.14)',
    'FilesPerJob': 4,
}
addSampleWeight(samples, 'VgS', 'Wg_MADGRAPHMLM', '(Gen_ZGstar_mass > 0 && Gen_ZGstar_mass < 0.1)')
#addSampleWeight(samples, 'VgS', 'ZGToLLG', '(Gen_ZGstar_mass > 0)*0.448')
addSampleWeight(samples, 'VgS', 'WZTo3LNu_mllmin01', '(Gen_ZGstar_mass > 0.1)')

########## VVV #########

files = nanoGetSampleFiles(mcDirectory, 'ZZZ') + \
    nanoGetSampleFiles(mcDirectory, 'WZZ') + \
    nanoGetSampleFiles(mcDirectory, 'WWZ') + \
    nanoGetSampleFiles(mcDirectory, 'WWW')

samples['VVV'] = {
    'name': files,
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}
"""
############### DIBOSON ############### AÑADIDO POR MI
"""
samples['Diboson'] = {
    'name': samples['VZ']['name'] + samples['VVV']['name'],  # Unir listas de archivos
    'weight': f"(({samples['VZ']['weight']}) * ({samples['VZ']['weight']} > 0)) + "
              f"(({samples['VVV']['weight']}) * ({samples['VVV']['weight']} > 0))",  # Sumar pesos correctamente
    'FilesPerJob': 5
}
"""

########## Higgs #########
"""
files =  nanoGetSampleFiles(mcDirectory, 'GluGluHToWWTo2L2Nu_M125') + \
         nanoGetSampleFiles(mcDirectory, 'VBFHToWWTo2L2Nu_M125') + \
         nanoGetSampleFiles(mcDirectory, 'HZJ_HToWWTo2L2Nu_M125') + \
         nanoGetSampleFiles(mcDirectory, 'GluGluZH_HToWWTo2L2Nu_M125') + \
         nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWW_M125') + \
         nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWW_M125') + \
         nanoGetSampleFiles(mcDirectory, 'ttHToNonbb_M125') + \
         nanoGetSampleFiles(mcDirectory, 'GluGluHToTauTau_M125') + \
         nanoGetSampleFiles(mcDirectory, 'VBFHToTauTau_M125') + \
         nanoGetSampleFiles(mcDirectory, 'HZJ_HToTauTau_M125') + \
         nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToTauTau_M125') + \
         nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToTauTau_M125')
         
samples['Higgs'] = {
    'name': files,
    'weight': mcCommonWeight,
    'FilesPerJob': 10,
}
"""
'''
########## Signals ######### 

mhs = ['160','180','200']
mDM = ['100','150','200']
mZp = ['195','200','295','300','400','500','800','1000','1200','1500','2000','2500']

for hs in mhs:
    for DM in mDM:
        for Zp in mZp:
            samples['DH_mhs_' + hs + '_mx_' + DM  + '_mZp_' + Zp] = {
                'name': nanoGetSampleFiles(signalDirectory, 'DarkHiggs_MonoHs_HsToWWTo2l2nu_mhs_' + hs + '_mx_' + DM  + '_mZp_' + Zp),
                'weight': mcCommonWeight,
                'FilesPerJob': 1
            }


mDM = ['200']
mhs = ['300']
mZp = ['1500']

for DM in mDM:
    for hs in mhs:
        if DM == '150' and hs == '400':
            continue
        for Zp in mZp:
            if DM == '200' and Zp == '400':
                continue
            if DM == '200' and hs == '400' and int(Zp) > 1000:
                continue
            samples['DH_mhs_' + hs + '_mx_' + DM  + '_mZp_' + Zp] = {
                'name': nanoGetSampleFiles(signalDirectory, 'DarkHiggs_MonoHs_HsToWWTo2l2nu_mhs_' + hs + '_mx_' + DM  + '_mZp_' + Zp),
                'weight': mcCommonWeight,
                'FilesPerJob': 1
            }
'''


"""
###########################################
################## FAKE ###################
###########################################

samples['Fake'] = {
  'name': [],
  'weight': 'METFilter_DATA*fakeW',
  'weights': [],
  'isData': ['all'],
  'FilesPerJob': 50
}

for _, sd in DataRun:
  for pd in DataSets:
    files = nanoGetSampleFiles(fakeDirectory, pd + '_' + sd)
    samples['Fake']['name'].extend(files)
    #samples['Fake']['weights'].extend([DataTrig[pd]] * len(files))
    addSampleWeight(samples, 'Fake', pd + '_' + sd, DataTrig[pd])
"""

########## DM ###########
"""
samples['ttDMp_Mchi1MPhi50'] = {
    'name': nanoGetSampleFiles(treeSignal, 'TTbarDMPseudo2L2Nu'),
    'weight': baseW_Mchi1_Mphi50 + '*genWeight*0.11107*GenModel__TTbarDMJets_Dilepton_pseudoscalar_LO_Mchi_1_Mphi_50_TuneCP5_13TeV_madgraph_mcatnlo_pythia8',
    'FilesPerJob': 1,
    'isSignal': 1
}
"""
samples['ttDMp_Mchi1MPhi100'] = {
    'name': nanoGetSampleFiles(treeSignal, 'TTbarDMPseudo2L2Nu'),
    'weight': baseW_Mchi1_Mphi100 + '*genWeight*0.11107*GenModel__TTbarDMJets_Dilepton_pseudoscalar_LO_Mchi_1_Mphi_100_TuneCP5_13TeV_madgraph_mcatnlo_pythia8',
    'FilesPerJob': 1,
    'isSignal': 0
}
"""
samples['ttDMp_Mchi1MPhi150'] = {
    'name': nanoGetSampleFiles(treeSignal, 'TTbarDMPseudo2L2Nu'),
    'weight': baseW_Mchi1_Mphi150 + '*genWeight*0.11107*GenModel__TTbarDMJets_Dilepton_pseudoscalar_LO_Mchi_1_Mphi_150_TuneCP5_13TeV_madgraph_mcatnlo_pythia8',
    'FilesPerJob': 1,
    'isSignal': 0
}
    
samples['ttDMp_Mchi1MPhi200'] = {
    'name': nanoGetSampleFiles(treeSignal, 'TTbarDMPseudo2L2Nu'),
    'weight': baseW_Mchi1_Mphi200 + '*genWeight*0.11107*GenModel__TTbarDMJets_Dilepton_pseudoscalar_LO_Mchi_1_Mphi_200_TuneCP5_13TeV_madgraph_mcatnlo_pythia8',
    'FilesPerJob': 1,
    'isSignal': 0
}

samples['ttDMp_Mchi1MPhi250'] = {
    'name': nanoGetSampleFiles(treeSignal, 'TTbarDMPseudo2L2Nu'),
    'weight': baseW_Mchi1_Mphi250 + '*genWeight*0.11107*GenModel__TTbarDMJets_Dilepton_pseudoscalar_LO_Mchi_1_Mphi_250_TuneCP5_13TeV_madgraph_mcatnlo_pythia8',
    'FilesPerJob': 1,
    'isSignal': 0
}

samples['ttDMp_Mchi1MPhi300'] = {
    'name': nanoGetSampleFiles(treeSignal, 'TTbarDMPseudo2L2Nu'),
    'weight': baseW_Mchi1_Mphi300 + '*genWeight*0.11107*GenModel__TTbarDMJets_Dilepton_pseudoscalar_LO_Mchi_1_Mphi_300_TuneCP5_13TeV_madgraph_mcatnlo_pythia8',
    'FilesPerJob': 1,
    'isSignal': 0
}

samples['ttDMp_Mchi1MPhi350'] = {
    'name': nanoGetSampleFiles(treeSignal, 'TTbarDMPseudo2L2Nu'),
    'weight': baseW_Mchi1_Mphi350 + '*genWeight*0.11107*GenModel__TTbarDMJets_Dilepton_pseudoscalar_LO_Mchi_1_Mphi_350_TuneCP5_13TeV_madgraph_mcatnlo_pythia8',
    'FilesPerJob': 1,
    'isSignal': 0
}

samples['ttDMp_Mchi1MPhi400'] = {
    'name': nanoGetSampleFiles(treeSignal, 'TTbarDMPseudo2L2Nu'),
    'weight': baseW_Mchi1_Mphi400 + '*genWeight*0.11107*GenModel__TTbarDMJets_Dilepton_pseudoscalar_LO_Mchi_1_Mphi_400_TuneCP5_13TeV_madgraph_mcatnlo_pythia8',
    'FilesPerJob': 1,
    'isSignal': 0
}

samples['ttDMp_Mchi1MPhi450'] = {
    'name': nanoGetSampleFiles(treeSignal, 'TTbarDMPseudo2L2Nu'),
    'weight': baseW_Mchi1_Mphi450 + '*genWeight*0.11107*GenModel__TTbarDMJets_Dilepton_pseudoscalar_LO_Mchi_1_Mphi_450_TuneCP5_13TeV_madgraph_mcatnlo_pythia8',
    'FilesPerJob': 1,
    'isSignal': 0
}

samples['ttDMp_Mchi1MPhi500'] = {
    'name': nanoGetSampleFiles(treeSignal, 'TTbarDMPseudo2L2Nu'),
    'weight': baseW_Mchi1_Mphi500 + '*genWeight*0.11107*GenModel__TTbarDMJets_Dilepton_pseudoscalar_LO_Mchi_1_Mphi_500_TuneCP5_13TeV_madgraph_mcatnlo_pythia8',
    'FilesPerJob': 1,
    'isSignal': 1
}

samples['ttDMp_Mchi20MPhi100'] = {
    'name': nanoGetSampleFiles(treeSignal, 'TTbarDMPseudo2L2Nu'),
    'weight': baseW_Mchi20_Mphi100 + '*genWeight*0.11107*GenModel__TTbarDMJets_Dilepton_pseudoscalar_LO_Mchi_20_Mphi_100_TuneCP5_13TeV_madgraph_mcatnlo_pythia8',
    'FilesPerJob': 1,
    'isSignal': 0
}

samples['ttDMp_Mchi30MPhi100'] = {
    'name': nanoGetSampleFiles(treeSignal, 'TTbarDMPseudo2L2Nu'),
    'weight': baseW_Mchi30_Mphi100 + '*genWeight*0.11107*GenModel__TTbarDMJets_Dilepton_pseudoscalar_LO_Mchi_30_Mphi_100_TuneCP5_13TeV_madgraph_mcatnlo_pythia8',
    'FilesPerJob': 1,
    'isSignal': 0
}

samples['ttDMp_Mchi40MPhi100'] = {
    'name': nanoGetSampleFiles(treeSignal, 'TTbarDMPseudo2L2Nu'),
    'weight': baseW_Mchi40_Mphi100 + '*genWeight*0.11107*GenModel__TTbarDMJets_Dilepton_pseudoscalar_LO_Mchi_40_Mphi_100_TuneCP5_13TeV_madgraph_mcatnlo_pythia8',
    'FilesPerJob': 1,
    'isSignal': 0
}

samples['ttDMp_Mchi45MPhi100'] = {
    'name': nanoGetSampleFiles(treeSignal, 'TTbarDMPseudo2L2Nu'),
    'weight': baseW_Mchi45_Mphi100 + '*genWeight*0.11107*GenModel__TTbarDMJets_Dilepton_pseudoscalar_LO_Mchi_45_Mphi_100_TuneCP5_13TeV_madgraph_mcatnlo_pythia8',
    'FilesPerJob': 1,
    'isSignal': 0
}

samples['ttDMp_Mchi49MPhi100'] = {
    'name': nanoGetSampleFiles(treeSignal, 'TTbarDMPseudo2L2Nu'),
    'weight': baseW_Mchi49_Mphi100 + '*genWeight*0.11107*GenModel__TTbarDMJets_Dilepton_pseudoscalar_LO_Mchi_49_Mphi_100_TuneCP5_13TeV_madgraph_mcatnlo_pythia8',
    'FilesPerJob': 1,
    'isSignal': 0
}

samples['ttDMp_Mchi51MPhi100'] = {
    'name': nanoGetSampleFiles(treeSignal, 'TTbarDMPseudo2L2Nu'),
    'weight': baseW_Mchi51_Mphi100 + '*genWeight*0.11107*GenModel__TTbarDMJets_Dilepton_pseudoscalar_LO_Mchi_51_Mphi_100_TuneCP5_13TeV_madgraph_mcatnlo_pythia8',
    'FilesPerJob': 1,
    'isSignal': 0
}

samples['ttDMp_Mchi55MPhi100'] = {
    'name': nanoGetSampleFiles(treeSignal, 'TTbarDMPseudo2L2Nu'),
    'weight': baseW_Mchi55_Mphi100 + '*genWeight*0.11107*GenModel__TTbarDMJets_Dilepton_pseudoscalar_LO_Mchi_55_Mphi_100_TuneCP5_13TeV_madgraph_mcatnlo_pythia8',
    'FilesPerJob': 1,
    'isSignal': 0
}
"""
################ WJets ####################
"""
samples['TTWjets'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'TTWjets'),
    'weight': mcCommonWeight,
    'FilesPerJob': 1,
    'isSignal': 0
}
"""

###########################################
################## DATA ###################
###########################################
"""
samples['DATA'] = {
  'name': [],
  'weight': 'METFilter_DATA*LepWPCut',
  'weights': [],
  'isData': ['all'],
  'FilesPerJob': 50
}

for _, sd in DataRun:
  for pd in DataSets:

      tag = pd + '_' + sd

      files = nanoGetSampleFiles(dataDirectory, tag)
      samples['DATA']['name'].extend(files)
      addSampleWeight(samples, 'DATA', tag, DataTrig[pd])

"""
    #samples['DATA']['weights'].extend([DataTrig[pd]] * len(files))

