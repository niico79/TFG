"""
Script donde se definen las diferentes fondos a representar en los histogramas.

Código adaptado de: https://github.com/piedraj/HEP/blob/main/Full2018_v7/plot.py
"""
groupPlot = {}
plot = {}

# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#

"""
groupPlot['top'] = {
'nameHR': 't#bar{t} n tW',
'isSignal': 0,
'color': 400,
'samples': ['top']
}
"""
groupPlot['ttbar']  = {
                  'nameHR' : 't#bar{t}',
                  'isSignal' : 0,
                  'color': 400,   # kYellow
                  'samples'  : ['ttbar']
              }

groupPlot['ST']  = {
                  'nameHR' : 'Single top',
                  'isSignal' : 0,
                  'color': 900,   # kPink
                  'samples'  : ['ST']
              }

groupPlot['TTSL']  = {
                  'nameHR' : 'Semi Leptonic',
                  'isSignal' : 0,
                  'color': 617,
                  'samples'  : ['TTSL']
              }

groupPlot['ttV']  = {
                  'nameHR' : 'ttV',
                  'isSignal' : 0,
                  'color': 595,   # kPink
                  'samples'  : ['ttV']
              }

groupPlot['VV']  = {
                  'nameHR' : 'VV',
                  'isSignal' : 0,
                  'color': 428,   # kPink
                  'samples'  : ['VV']
              }

groupPlot['other']  = {
                  'nameHR' : 'Other',
                  'isSignal' : 0,
                  'color': 920,   # kPink
                  'samples'  : ['other']
              }

"""
groupPlot['WW']  = {
                  'nameHR' : 'WW',
                  'isSignal' : 0,
                  'color': 851, # kAzure -9 
                  'samples'  : ['WW', 'ggWW', 'WWewk']
              }

groupPlot['Fake']  = {
                  'nameHR' : 'Fake',
                  'isSignal' : 0,
                  'color': 921,    # kGray + 1
                  # 'samples'  : ['Fake_me', 'Fake_em']
                  'samples'  : ['Fake']
}
"""

groupPlot['DY']  = {  
                  'nameHR' : "DY",
                  'isSignal' : 0,
                  'color': 418,    # kGreen+2
                  'samples'  : ['DY']
              }


"""
groupPlot['VVV']  = {
                  'nameHR' : 'VVV',
                  'isSignal' : 0,
                  'color': 857, # kAzure -3  
                  'samples'  : ['VVV']
              }

groupPlot['Vg']  = {  
                  'nameHR' : "V#gamma + V#gamma*",
                  'isSignal' : 0,
                  'color'    : 3,   # kOrange + 10
                  'samples'  : ['Vg', 'VgS']
              }

groupPlot['Higgs']  = {
                  'nameHR' : 'Higgs',
                  'isSignal' : 0,
                  'color': 632, # kRed
                  'samples'  : ['Higgs' ]
              }
"""
groupPlot['ttDMp_Mchi1MPhi50']  = {
                  'nameHR' : 'ttDM_(1, 50)',
                  'isSignal' : 1,
                  'color': 432, # kCyan
                  'samples'  : ['ttDMp_Mchi1MPhi50']
              }

groupPlot['ttDMp_Mchi1MPhi500']  = {
                  'nameHR' : 'ttDM_(1, 500)',
                  'isSignal' : 2,
                  'color': 800, # kOrange
                  'samples'  : ['ttDMp_Mchi1MPhi500']
              }

'''
mhs = ['160']
mDM = ['100']
mZp = ['300','400','500','800','1000','1200','1500']

j=0
for hs in mhs:
    for DM in mDM:
        for Zp in mZp:
            j+=100
            groupPlot['DH_' + hs  +  '_'   + DM + '_' + Zp]  = {
                'nameHR' : 'DH_' + hs  + '_' + DM + '_' + Zp ,
                'isSignal' : 2,
                'color': 1 + j, # kRed
                'samples'  : ['DH_mhs_' + hs + '_mx_' + DM +  '_mZp_' + Zp]
            }
'''


#plot = {}

# keys here must match keys in samples.py    
#  


plot['DY']  = {
                  'color': 418,    # kGreen+2
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
}


'''
    'cuts'  : {
                       'hww2l2v_13TeV_top_0j'  : 0.76 ,
                       'hww2l2v_13TeV_dytt_0j' : 0.76 ,
                       'hww2l2v_13TeV_top_1j'  : 0.79 ,
                       'hww2l2v_13TeV_dytt_1j' : 0.79 ,
                       'hww2l2v_13TeV_WW_1j'     : 0.79 ,
                       'hww2l2v_13TeV_WW_noVeto_1j'     : 0.79 ,
                       'hww2l2v_13TeV_WP65_sr_1j' : 0.76,
                       'hww2l2v_13TeV_top_2j'  : 0.76 ,
                       'hww2l2v_13TeV_dytt_2j' : 0.76 ,
                       'hww2l2v_13TeV_WW_2j'     : 0.76 ,
                       'hww2l2v_13TeV_WW_noVeto_2j'     : 0.76 ,
                       'hww2l2v_13TeV_WP75_sr_2j' : 0.76,
                       'hww2l2v_13TeV_top_Inclusive'  : 0.77 ,
                       'hww2l2v_13TeV_dytt_Inclusive' : 0.77 ,
                       'hww2l2v_13TeV_WW_Inclusive'     : 0.77 ,
                        },
'''
"""
plot['Fake']  = {
                  'color': 921,    # kGray + 1
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
              }
"""


plot['ttbar'] = {
                  'color': 400,   # kYellow
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0
                  #'cuts'  : {
                       #'hww2l2v_13TeV_of0j'      : 0.94 ,
                       #'hww2l2v_13TeV_top_of0j'  : 0.94 , 
                       #'hww2l2v_13TeV_dytt_of0j' : 0.94 ,
                       #'hww2l2v_13TeV_em_0j'     : 0.94 , 
                       #'hww2l2v_13TeV_me_0j'     : 0.94 , 
                       ##
                       #'hww2l2v_13TeV_of1j'      : 0.86 ,
                       #'hww2l2v_13TeV_top_of1j'  : 0.86 , 
                       #'hww2l2v_13TeV_dytt_of1j' : 0.86 ,
                       #'hww2l2v_13TeV_em_1j'     : 0.86 , 
                       #'hww2l2v_13TeV_me_1j'     : 0.86 , 
                        #},
                  }

plot['ST'] = {   
                  'color': 900,   # kPink
                  'isSignal' : 0, 
                  'isData'   : 0, 
                  'scale'    : 1.0
                  #'cuts'  : {
                       #'hww2l2v_13TeV_of0j'      : 0.94 ,
                       #'hww2l2v_13TeV_top_of0j'  : 0.94 , 
                       #'hww2l2v_13TeV_dytt_of0j' : 0.94 ,
                       #'hww2l2v_13TeV_em_0j'     : 0.94 , 
                       #'hww2l2v_13TeV_me_0j'     : 0.94 , 
                       ##
                       #'hww2l2v_13TeV_of1j'      : 0.86 ,
                       #'hww2l2v_13TeV_top_of1j'  : 0.86 , 
                       #'hww2l2v_13TeV_dytt_of1j' : 0.86 ,
                       #'hww2l2v_13TeV_em_1j'     : 0.86 , 
                       #'hww2l2v_13TeV_me_1j'     : 0.86 , 
                        #},
                  }

plot['TTSL']  = {
                  'color': 617, # kAzure -9
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
                  }

plot['ttV']  = {
                  'color': 595, # kAzure -9
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
                  }

plot['VV']  = {
                  'color': 428, # kAzure -9
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
                  }

plot['other']  = {
                  'color': 920, # kAzure -9
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
                  }
"""
plot['WW']  = {
                  'color': 851, # kAzure -9 
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
                  }

plot['ggWW']  = {
                  'color': 850, # kAzure -10
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1.0
                  }

plot['WWewk']  = {
                  'color': 851, # kAzure -9 
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
                  }


plot['Vg']  = {
                  'color': 3,
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }


plot['VgS']  = { 
    'color'    : 3, # kAzure -1  
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}
"""

plot['VV']  = { 
                  'color': 428,
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

"""
plot['VVV']  = { 
                  'color': 857, # kAzure -3  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
}

plot['Higgs']  = { 
                  'color': 632, # kAzure -3  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
}
"""
plot['ttDMp_Mchi1MPhi50']  = { 
                  'color': 432, # kAzure -3  
                  'isSignal' : 1,
                  'isData'   : 0,
                  'scale'    : 1.0
}

plot['ttDMp_Mchi1MPhi500']  = { 
                  'color': 800, # kAzure -3  
                  'isSignal' : 2,
                  'isData'   : 0,
                  'scale'    : 1.0
}
'''
j=0 
for hs in mhs:
    for DM in mDM:
        for Zp in mZp:
            j+=100
            plot['DH_mhs_' + hs + '_mx_' + DM  + '_mZp_' + Zp]  = {
                'color': 1 + j, # kRed
                'isSignal' : 2,
                'isData'   : 0,
                'scale'    : 1.0
            }
'''



# data
"""
plot['DATA']  = { 
                  'nameHR' : 'Data',
                  'color': 1 ,  
                  'isSignal' : 0,
                  'isData'   : 1 ,
                  'isBlind'  : 0
              }
"""

# additional options

legend = {}

legend['lumi'] = 'L = 59.74/fb'

legend['sqrt'] = '#sqrt{s} = 13 TeV'
