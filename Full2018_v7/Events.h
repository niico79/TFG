//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Fri Nov  8 09:52:16 2024 by ROOT version 6.30/02
// from TTree Events/Events
// found on file: root://eoscms.cern.ch//eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Autumn18_102X_nAODv7_Full2018v7/MCl1loose2018v7__MCCorr2018v7__l2loose__l2tightOR2018v7/nanoLatino_WW-LO__part0.root
//////////////////////////////////////////////////////////

#ifndef Events_h
#define Events_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class Events {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   UInt_t          run;
   UInt_t          luminosityBlock;
   ULong64_t       event;
   Float_t         HTXS_Higgs_pt;
   Float_t         HTXS_Higgs_y;
   Int_t           HTXS_stage1_1_cat_pTjet25GeV;
   Int_t           HTXS_stage1_1_cat_pTjet30GeV;
   Int_t           HTXS_stage1_1_fine_cat_pTjet25GeV;
   Int_t           HTXS_stage1_1_fine_cat_pTjet30GeV;
   Int_t           HTXS_stage1_2_cat_pTjet25GeV;
   Int_t           HTXS_stage1_2_cat_pTjet30GeV;
   Int_t           HTXS_stage1_2_fine_cat_pTjet25GeV;
   Int_t           HTXS_stage1_2_fine_cat_pTjet30GeV;
   Int_t           HTXS_stage_0;
   Int_t           HTXS_stage_1_pTjet25;
   Int_t           HTXS_stage_1_pTjet30;
   UChar_t         HTXS_njets25;
   UChar_t         HTXS_njets30;
   Float_t         btagWeight_CSVV2;
   Float_t         btagWeight_DeepCSVB;
   Float_t         CaloMET_phi;
   Float_t         CaloMET_pt;
   Float_t         CaloMET_sumEt;
   Float_t         ChsMET_phi;
   Float_t         ChsMET_pt;
   Float_t         ChsMET_sumEt;
   UInt_t          nCorrT1METJet;
   Float_t         CorrT1METJet_area[30];   //[nCorrT1METJet]
   Float_t         CorrT1METJet_eta[30];   //[nCorrT1METJet]
   Float_t         CorrT1METJet_muonSubtrFactor[30];   //[nCorrT1METJet]
   Float_t         CorrT1METJet_phi[30];   //[nCorrT1METJet]
   Float_t         CorrT1METJet_rawPt[30];   //[nCorrT1METJet]
   UInt_t          nElectron;
   Float_t         Electron_deltaEtaSC[6];   //[nElectron]
   Float_t         Electron_dr03EcalRecHitSumEt[6];   //[nElectron]
   Float_t         Electron_dr03HcalDepth1TowerSumEt[6];   //[nElectron]
   Float_t         Electron_dr03TkSumPt[6];   //[nElectron]
   Float_t         Electron_dr03TkSumPtHEEP[6];   //[nElectron]
   Float_t         Electron_dxy[6];   //[nElectron]
   Float_t         Electron_dxyErr[6];   //[nElectron]
   Float_t         Electron_dz[6];   //[nElectron]
   Float_t         Electron_dzErr[6];   //[nElectron]
   Float_t         Electron_eCorr[6];   //[nElectron]
   Float_t         Electron_eInvMinusPInv[6];   //[nElectron]
   Float_t         Electron_energyErr[6];   //[nElectron]
   Float_t         Electron_eta[6];   //[nElectron]
   Float_t         Electron_hoe[6];   //[nElectron]
   Float_t         Electron_ip3d[6];   //[nElectron]
   Float_t         Electron_jetPtRelv2[6];   //[nElectron]
   Float_t         Electron_jetRelIso[6];   //[nElectron]
   Float_t         Electron_mass[6];   //[nElectron]
   Float_t         Electron_miniPFRelIso_all[6];   //[nElectron]
   Float_t         Electron_miniPFRelIso_chg[6];   //[nElectron]
   Float_t         Electron_mvaFall17V1Iso[6];   //[nElectron]
   Float_t         Electron_mvaFall17V1noIso[6];   //[nElectron]
   Float_t         Electron_mvaFall17V2Iso[6];   //[nElectron]
   Float_t         Electron_mvaFall17V2noIso[6];   //[nElectron]
   Float_t         Electron_pfRelIso03_all[6];   //[nElectron]
   Float_t         Electron_pfRelIso03_chg[6];   //[nElectron]
   Float_t         Electron_phi[6];   //[nElectron]
   Float_t         Electron_pt[6];   //[nElectron]
   Float_t         Electron_r9[6];   //[nElectron]
   Float_t         Electron_scEtOverPt[6];   //[nElectron]
   Float_t         Electron_sieie[6];   //[nElectron]
   Float_t         Electron_sip3d[6];   //[nElectron]
   Float_t         Electron_mvaTTH[6];   //[nElectron]
   Int_t           Electron_charge[6];   //[nElectron]
   Int_t           Electron_cutBased[6];   //[nElectron]
   Int_t           Electron_cutBased_Fall17_V1[6];   //[nElectron]
   Int_t           Electron_jetIdx[6];   //[nElectron]
   Int_t           Electron_pdgId[6];   //[nElectron]
   Int_t           Electron_photonIdx[6];   //[nElectron]
   Int_t           Electron_tightCharge[6];   //[nElectron]
   Int_t           Electron_vidNestedWPBitmap[6];   //[nElectron]
   Int_t           Electron_vidNestedWPBitmapHEEP[6];   //[nElectron]
   Bool_t          Electron_convVeto[6];   //[nElectron]
   Bool_t          Electron_cutBased_HEEP[6];   //[nElectron]
   Bool_t          Electron_isPFcand[6];   //[nElectron]
   UChar_t         Electron_lostHits[6];   //[nElectron]
   Bool_t          Electron_mvaFall17V1Iso_WP80[6];   //[nElectron]
   Bool_t          Electron_mvaFall17V1Iso_WP90[6];   //[nElectron]
   Bool_t          Electron_mvaFall17V1Iso_WPL[6];   //[nElectron]
   Bool_t          Electron_mvaFall17V1noIso_WP80[6];   //[nElectron]
   Bool_t          Electron_mvaFall17V1noIso_WP90[6];   //[nElectron]
   Bool_t          Electron_mvaFall17V1noIso_WPL[6];   //[nElectron]
   Bool_t          Electron_mvaFall17V2Iso_WP80[6];   //[nElectron]
   Bool_t          Electron_mvaFall17V2Iso_WP90[6];   //[nElectron]
   Bool_t          Electron_mvaFall17V2Iso_WPL[6];   //[nElectron]
   Bool_t          Electron_mvaFall17V2noIso_WP80[6];   //[nElectron]
   Bool_t          Electron_mvaFall17V2noIso_WP90[6];   //[nElectron]
   Bool_t          Electron_mvaFall17V2noIso_WPL[6];   //[nElectron]
   UChar_t         Electron_seedGain[6];   //[nElectron]
   Bool_t          Flag_ecalBadCalibFilterV2;
   UInt_t          nFatJet;
   Float_t         FatJet_area[4];   //[nFatJet]
   Float_t         FatJet_btagCMVA[4];   //[nFatJet]
   Float_t         FatJet_btagCSVV2[4];   //[nFatJet]
   Float_t         FatJet_btagDDBvL[4];   //[nFatJet]
   Float_t         FatJet_btagDDBvL_noMD[4];   //[nFatJet]
   Float_t         FatJet_btagDDCvB[4];   //[nFatJet]
   Float_t         FatJet_btagDDCvB_noMD[4];   //[nFatJet]
   Float_t         FatJet_btagDDCvL[4];   //[nFatJet]
   Float_t         FatJet_btagDDCvL_noMD[4];   //[nFatJet]
   Float_t         FatJet_btagDeepB[4];   //[nFatJet]
   Float_t         FatJet_btagHbb[4];   //[nFatJet]
   Float_t         FatJet_deepTagMD_H4qvsQCD[4];   //[nFatJet]
   Float_t         FatJet_deepTagMD_HbbvsQCD[4];   //[nFatJet]
   Float_t         FatJet_deepTagMD_TvsQCD[4];   //[nFatJet]
   Float_t         FatJet_deepTagMD_WvsQCD[4];   //[nFatJet]
   Float_t         FatJet_deepTagMD_ZHbbvsQCD[4];   //[nFatJet]
   Float_t         FatJet_deepTagMD_ZHccvsQCD[4];   //[nFatJet]
   Float_t         FatJet_deepTagMD_ZbbvsQCD[4];   //[nFatJet]
   Float_t         FatJet_deepTagMD_ZvsQCD[4];   //[nFatJet]
   Float_t         FatJet_deepTagMD_bbvsLight[4];   //[nFatJet]
   Float_t         FatJet_deepTagMD_ccvsLight[4];   //[nFatJet]
   Float_t         FatJet_deepTag_H[4];   //[nFatJet]
   Float_t         FatJet_deepTag_QCD[4];   //[nFatJet]
   Float_t         FatJet_deepTag_QCDothers[4];   //[nFatJet]
   Float_t         FatJet_deepTag_TvsQCD[4];   //[nFatJet]
   Float_t         FatJet_deepTag_WvsQCD[4];   //[nFatJet]
   Float_t         FatJet_deepTag_ZvsQCD[4];   //[nFatJet]
   Float_t         FatJet_eta[4];   //[nFatJet]
   Float_t         FatJet_mass[4];   //[nFatJet]
   Float_t         FatJet_msoftdrop[4];   //[nFatJet]
   Float_t         FatJet_n2b1[4];   //[nFatJet]
   Float_t         FatJet_n3b1[4];   //[nFatJet]
   Float_t         FatJet_phi[4];   //[nFatJet]
   Float_t         FatJet_pt[4];   //[nFatJet]
   Float_t         FatJet_rawFactor[4];   //[nFatJet]
   Float_t         FatJet_tau1[4];   //[nFatJet]
   Float_t         FatJet_tau2[4];   //[nFatJet]
   Float_t         FatJet_tau3[4];   //[nFatJet]
   Float_t         FatJet_tau4[4];   //[nFatJet]
   Float_t         FatJet_lsf3[4];   //[nFatJet]
   Int_t           FatJet_jetId[4];   //[nFatJet]
   Int_t           FatJet_subJetIdx1[4];   //[nFatJet]
   Int_t           FatJet_subJetIdx2[4];   //[nFatJet]
   Int_t           FatJet_electronIdx3SJ[4];   //[nFatJet]
   Int_t           FatJet_muonIdx3SJ[4];   //[nFatJet]
   UInt_t          nFsrPhoton;
   Float_t         FsrPhoton_dROverEt2[2];   //[nFsrPhoton]
   Float_t         FsrPhoton_eta[2];   //[nFsrPhoton]
   Float_t         FsrPhoton_phi[2];   //[nFsrPhoton]
   Float_t         FsrPhoton_pt[2];   //[nFsrPhoton]
   Float_t         FsrPhoton_relIso03[2];   //[nFsrPhoton]
   Int_t           FsrPhoton_muonIdx[2];   //[nFsrPhoton]
   UInt_t          nGenJetAK8;
   Float_t         GenJetAK8_eta[5];   //[nGenJetAK8]
   Float_t         GenJetAK8_mass[5];   //[nGenJetAK8]
   Float_t         GenJetAK8_phi[5];   //[nGenJetAK8]
   Float_t         GenJetAK8_pt[5];   //[nGenJetAK8]
   UInt_t          nGenJet;
   Float_t         GenJet_eta[18];   //[nGenJet]
   Float_t         GenJet_mass[18];   //[nGenJet]
   Float_t         GenJet_phi[18];   //[nGenJet]
   Float_t         GenJet_pt[18];   //[nGenJet]
   UInt_t          nGenPart;
   Float_t         GenPart_eta[113];   //[nGenPart]
   Float_t         GenPart_mass[113];   //[nGenPart]
   Float_t         GenPart_phi[113];   //[nGenPart]
   Float_t         GenPart_pt[113];   //[nGenPart]
   Int_t           GenPart_genPartIdxMother[113];   //[nGenPart]
   Int_t           GenPart_pdgId[113];   //[nGenPart]
   Int_t           GenPart_status[113];   //[nGenPart]
   Int_t           GenPart_statusFlags[113];   //[nGenPart]
   UInt_t          nSubGenJetAK8;
   Float_t         SubGenJetAK8_eta[10];   //[nSubGenJetAK8]
   Float_t         SubGenJetAK8_mass[10];   //[nSubGenJetAK8]
   Float_t         SubGenJetAK8_phi[10];   //[nSubGenJetAK8]
   Float_t         SubGenJetAK8_pt[10];   //[nSubGenJetAK8]
   Float_t         Generator_binvar;
   Float_t         Generator_scalePDF;
   Float_t         Generator_weight;
   Float_t         Generator_x1;
   Float_t         Generator_x2;
   Float_t         Generator_xpdf1;
   Float_t         Generator_xpdf2;
   Int_t           Generator_id1;
   Int_t           Generator_id2;
   UInt_t          nGenVisTau;
   Float_t         GenVisTau_eta[2];   //[nGenVisTau]
   Float_t         GenVisTau_mass[2];   //[nGenVisTau]
   Float_t         GenVisTau_phi[2];   //[nGenVisTau]
   Float_t         GenVisTau_pt[2];   //[nGenVisTau]
   Int_t           GenVisTau_charge[2];   //[nGenVisTau]
   Int_t           GenVisTau_genPartIdxMother[2];   //[nGenVisTau]
   Int_t           GenVisTau_status[2];   //[nGenVisTau]
   Float_t         genWeight;
   UInt_t          nPSWeight;
   Float_t         PSWeight[4];   //[nPSWeight]
   UInt_t          nIsoTrack;
   Float_t         IsoTrack_dxy[4];   //[nIsoTrack]
   Float_t         IsoTrack_dz[4];   //[nIsoTrack]
   Float_t         IsoTrack_eta[4];   //[nIsoTrack]
   Float_t         IsoTrack_pfRelIso03_all[4];   //[nIsoTrack]
   Float_t         IsoTrack_pfRelIso03_chg[4];   //[nIsoTrack]
   Float_t         IsoTrack_phi[4];   //[nIsoTrack]
   Float_t         IsoTrack_pt[4];   //[nIsoTrack]
   Float_t         IsoTrack_miniPFRelIso_all[4];   //[nIsoTrack]
   Float_t         IsoTrack_miniPFRelIso_chg[4];   //[nIsoTrack]
   Int_t           IsoTrack_fromPV[4];   //[nIsoTrack]
   Int_t           IsoTrack_pdgId[4];   //[nIsoTrack]
   Bool_t          IsoTrack_isHighPurityTrack[4];   //[nIsoTrack]
   Bool_t          IsoTrack_isPFcand[4];   //[nIsoTrack]
   Bool_t          IsoTrack_isFromLostTrack[4];   //[nIsoTrack]
   UInt_t          nJet;
   Float_t         Jet_area[23];   //[nJet]
   Float_t         Jet_btagCMVA[23];   //[nJet]
   Float_t         Jet_btagCSVV2[23];   //[nJet]
   Float_t         Jet_btagDeepB[23];   //[nJet]
   Float_t         Jet_btagDeepC[23];   //[nJet]
   Float_t         Jet_btagDeepFlavB[23];   //[nJet]
   Float_t         Jet_btagDeepFlavC[23];   //[nJet]
   Float_t         Jet_chEmEF[23];   //[nJet]
   Float_t         Jet_chFPV0EF[23];   //[nJet]
   Float_t         Jet_chFPV1EF[23];   //[nJet]
   Float_t         Jet_chFPV2EF[23];   //[nJet]
   Float_t         Jet_chFPV3EF[23];   //[nJet]
   Float_t         Jet_chHEF[23];   //[nJet]
   Float_t         Jet_eta[23];   //[nJet]
   Float_t         Jet_mass[23];   //[nJet]
   Float_t         Jet_muEF[23];   //[nJet]
   Float_t         Jet_muonSubtrFactor[23];   //[nJet]
   Float_t         Jet_neEmEF[23];   //[nJet]
   Float_t         Jet_neHEF[23];   //[nJet]
   Float_t         Jet_phi[23];   //[nJet]
   Float_t         Jet_pt[23];   //[nJet]
   Float_t         Jet_puIdDisc[23];   //[nJet]
   Float_t         Jet_qgl[23];   //[nJet]
   Float_t         Jet_rawFactor[23];   //[nJet]
   Float_t         Jet_bRegCorr[23];   //[nJet]
   Float_t         Jet_bRegRes[23];   //[nJet]
   Float_t         Jet_cRegCorr[23];   //[nJet]
   Float_t         Jet_cRegRes[23];   //[nJet]
   Int_t           Jet_electronIdx1[23];   //[nJet]
   Int_t           Jet_electronIdx2[23];   //[nJet]
   Int_t           Jet_jetId[23];   //[nJet]
   Int_t           Jet_muonIdx1[23];   //[nJet]
   Int_t           Jet_muonIdx2[23];   //[nJet]
   Int_t           Jet_nConstituents[23];   //[nJet]
   Int_t           Jet_nElectrons[23];   //[nJet]
   Int_t           Jet_nMuons[23];   //[nJet]
   Int_t           Jet_puId[23];   //[nJet]
   Float_t         GenMET_phi;
   Float_t         GenMET_pt;
   Float_t         MET_MetUnclustEnUpDeltaX;
   Float_t         MET_MetUnclustEnUpDeltaY;
   Float_t         MET_covXX;
   Float_t         MET_covXY;
   Float_t         MET_covYY;
   Float_t         MET_phi;
   Float_t         MET_pt;
   Float_t         MET_significance;
   Float_t         MET_sumEt;
   Float_t         MET_sumPtUnclustered;
   UInt_t          nMuon;
   Float_t         Muon_dxy[6];   //[nMuon]
   Float_t         Muon_dxyErr[6];   //[nMuon]
   Float_t         Muon_dxybs[6];   //[nMuon]
   Float_t         Muon_dz[6];   //[nMuon]
   Float_t         Muon_dzErr[6];   //[nMuon]
   Float_t         Muon_eta[6];   //[nMuon]
   Float_t         Muon_ip3d[6];   //[nMuon]
   Float_t         Muon_jetPtRelv2[6];   //[nMuon]
   Float_t         Muon_jetRelIso[6];   //[nMuon]
   Float_t         Muon_mass[6];   //[nMuon]
   Float_t         Muon_miniPFRelIso_all[6];   //[nMuon]
   Float_t         Muon_miniPFRelIso_chg[6];   //[nMuon]
   Float_t         Muon_pfRelIso03_all[6];   //[nMuon]
   Float_t         Muon_pfRelIso03_chg[6];   //[nMuon]
   Float_t         Muon_pfRelIso04_all[6];   //[nMuon]
   Float_t         Muon_phi[6];   //[nMuon]
   Float_t         Muon_pt[6];   //[nMuon]
   Float_t         Muon_ptErr[6];   //[nMuon]
   Float_t         Muon_segmentComp[6];   //[nMuon]
   Float_t         Muon_sip3d[6];   //[nMuon]
   Float_t         Muon_softMva[6];   //[nMuon]
   Float_t         Muon_tkRelIso[6];   //[nMuon]
   Float_t         Muon_tunepRelPt[6];   //[nMuon]
   Float_t         Muon_mvaLowPt[6];   //[nMuon]
   Float_t         Muon_mvaTTH[6];   //[nMuon]
   Int_t           Muon_charge[6];   //[nMuon]
   Int_t           Muon_jetIdx[6];   //[nMuon]
   Int_t           Muon_nStations[6];   //[nMuon]
   Int_t           Muon_nTrackerLayers[6];   //[nMuon]
   Int_t           Muon_pdgId[6];   //[nMuon]
   Int_t           Muon_tightCharge[6];   //[nMuon]
   Int_t           Muon_fsrPhotonIdx[6];   //[nMuon]
   UChar_t         Muon_highPtId[6];   //[nMuon]
   Bool_t          Muon_highPurity[6];   //[nMuon]
   Bool_t          Muon_inTimeMuon[6];   //[nMuon]
   Bool_t          Muon_isGlobal[6];   //[nMuon]
   Bool_t          Muon_isPFcand[6];   //[nMuon]
   Bool_t          Muon_isTracker[6];   //[nMuon]
   Bool_t          Muon_looseId[6];   //[nMuon]
   Bool_t          Muon_mediumId[6];   //[nMuon]
   Bool_t          Muon_mediumPromptId[6];   //[nMuon]
   UChar_t         Muon_miniIsoId[6];   //[nMuon]
   UChar_t         Muon_multiIsoId[6];   //[nMuon]
   UChar_t         Muon_mvaId[6];   //[nMuon]
   UChar_t         Muon_pfIsoId[6];   //[nMuon]
   Bool_t          Muon_softId[6];   //[nMuon]
   Bool_t          Muon_softMvaId[6];   //[nMuon]
   Bool_t          Muon_tightId[6];   //[nMuon]
   UChar_t         Muon_tkIsoId[6];   //[nMuon]
   Bool_t          Muon_triggerIdLoose[6];   //[nMuon]
   UInt_t          nPhoton;
   Float_t         Photon_eCorr[7];   //[nPhoton]
   Float_t         Photon_energyErr[7];   //[nPhoton]
   Float_t         Photon_eta[7];   //[nPhoton]
   Float_t         Photon_hoe[7];   //[nPhoton]
   Float_t         Photon_mass[7];   //[nPhoton]
   Float_t         Photon_mvaID[7];   //[nPhoton]
   Float_t         Photon_mvaID_Fall17V1p1[7];   //[nPhoton]
   Float_t         Photon_pfRelIso03_all[7];   //[nPhoton]
   Float_t         Photon_pfRelIso03_chg[7];   //[nPhoton]
   Float_t         Photon_phi[7];   //[nPhoton]
   Float_t         Photon_pt[7];   //[nPhoton]
   Float_t         Photon_r9[7];   //[nPhoton]
   Float_t         Photon_sieie[7];   //[nPhoton]
   Int_t           Photon_charge[7];   //[nPhoton]
   Int_t           Photon_cutBased[7];   //[nPhoton]
   Int_t           Photon_cutBased_Fall17V1Bitmap[7];   //[nPhoton]
   Int_t           Photon_electronIdx[7];   //[nPhoton]
   Int_t           Photon_jetIdx[7];   //[nPhoton]
   Int_t           Photon_pdgId[7];   //[nPhoton]
   Int_t           Photon_vidNestedWPBitmap[7];   //[nPhoton]
   Bool_t          Photon_electronVeto[7];   //[nPhoton]
   Bool_t          Photon_isScEtaEB[7];   //[nPhoton]
   Bool_t          Photon_isScEtaEE[7];   //[nPhoton]
   Bool_t          Photon_mvaID_WP80[7];   //[nPhoton]
   Bool_t          Photon_mvaID_WP90[7];   //[nPhoton]
   Bool_t          Photon_pixelSeed[7];   //[nPhoton]
   UChar_t         Photon_seedGain[7];   //[nPhoton]
   Float_t         Pileup_nTrueInt;
   Float_t         Pileup_pudensity;
   Float_t         Pileup_gpudensity;
   Int_t           Pileup_nPU;
   Int_t           Pileup_sumEOOT;
   Int_t           Pileup_sumLOOT;
   Float_t         PuppiMET_phi;
   Float_t         PuppiMET_phiJERUp;
   Float_t         PuppiMET_phiJESUp;
   Float_t         PuppiMET_pt;
   Float_t         PuppiMET_ptJERUp;
   Float_t         PuppiMET_ptJESUp;
   Float_t         PuppiMET_sumEt;
   Float_t         RawMET_phi;
   Float_t         RawMET_pt;
   Float_t         RawMET_sumEt;
   Float_t         RawPuppiMET_phi;
   Float_t         RawPuppiMET_pt;
   Float_t         RawPuppiMET_sumEt;
   Float_t         fixedGridRhoFastjetAll;
   Float_t         fixedGridRhoFastjetCentral;
   Float_t         fixedGridRhoFastjetCentralCalo;
   Float_t         fixedGridRhoFastjetCentralChargedPileUp;
   Float_t         fixedGridRhoFastjetCentralNeutral;
   UInt_t          nGenDressedLepton;
   Float_t         GenDressedLepton_eta[3];   //[nGenDressedLepton]
   Float_t         GenDressedLepton_mass[3];   //[nGenDressedLepton]
   Float_t         GenDressedLepton_phi[3];   //[nGenDressedLepton]
   Float_t         GenDressedLepton_pt[3];   //[nGenDressedLepton]
   Int_t           GenDressedLepton_pdgId[3];   //[nGenDressedLepton]
   Bool_t          GenDressedLepton_hasTauAnc[3];   //[nGenDressedLepton]
   UInt_t          nGenIsolatedPhoton;
   Float_t         GenIsolatedPhoton_eta[2];   //[nGenIsolatedPhoton]
   Float_t         GenIsolatedPhoton_mass[2];   //[nGenIsolatedPhoton]
   Float_t         GenIsolatedPhoton_phi[2];   //[nGenIsolatedPhoton]
   Float_t         GenIsolatedPhoton_pt[2];   //[nGenIsolatedPhoton]
   UInt_t          nSoftActivityJet;
   Float_t         SoftActivityJet_eta[6];   //[nSoftActivityJet]
   Float_t         SoftActivityJet_phi[6];   //[nSoftActivityJet]
   Float_t         SoftActivityJet_pt[6];   //[nSoftActivityJet]
   Float_t         SoftActivityJetHT;
   Float_t         SoftActivityJetHT10;
   Float_t         SoftActivityJetHT2;
   Float_t         SoftActivityJetHT5;
   Int_t           SoftActivityJetNjets10;
   Int_t           SoftActivityJetNjets2;
   Int_t           SoftActivityJetNjets5;
   UInt_t          nSubJet;
   Float_t         SubJet_btagCMVA[8];   //[nSubJet]
   Float_t         SubJet_btagCSVV2[8];   //[nSubJet]
   Float_t         SubJet_btagDeepB[8];   //[nSubJet]
   Float_t         SubJet_eta[8];   //[nSubJet]
   Float_t         SubJet_mass[8];   //[nSubJet]
   Float_t         SubJet_n2b1[8];   //[nSubJet]
   Float_t         SubJet_n3b1[8];   //[nSubJet]
   Float_t         SubJet_phi[8];   //[nSubJet]
   Float_t         SubJet_pt[8];   //[nSubJet]
   Float_t         SubJet_rawFactor[8];   //[nSubJet]
   Float_t         SubJet_tau1[8];   //[nSubJet]
   Float_t         SubJet_tau2[8];   //[nSubJet]
   Float_t         SubJet_tau3[8];   //[nSubJet]
   Float_t         SubJet_tau4[8];   //[nSubJet]
   UInt_t          nTau;
   Float_t         Tau_chargedIso[5];   //[nTau]
   Float_t         Tau_dxy[5];   //[nTau]
   Float_t         Tau_dz[5];   //[nTau]
   Float_t         Tau_eta[5];   //[nTau]
   Float_t         Tau_leadTkDeltaEta[5];   //[nTau]
   Float_t         Tau_leadTkDeltaPhi[5];   //[nTau]
   Float_t         Tau_leadTkPtOverTauPt[5];   //[nTau]
   Float_t         Tau_mass[5];   //[nTau]
   Float_t         Tau_neutralIso[5];   //[nTau]
   Float_t         Tau_phi[5];   //[nTau]
   Float_t         Tau_photonsOutsideSignalCone[5];   //[nTau]
   Float_t         Tau_pt[5];   //[nTau]
   Float_t         Tau_puCorr[5];   //[nTau]
   Float_t         Tau_rawAntiEle[5];   //[nTau]
   Float_t         Tau_rawAntiEle2018[5];   //[nTau]
   Float_t         Tau_rawDeepTau2017v2p1VSe[5];   //[nTau]
   Float_t         Tau_rawDeepTau2017v2p1VSjet[5];   //[nTau]
   Float_t         Tau_rawDeepTau2017v2p1VSmu[5];   //[nTau]
   Float_t         Tau_rawIso[5];   //[nTau]
   Float_t         Tau_rawIsodR03[5];   //[nTau]
   Float_t         Tau_rawMVAnewDM2017v2[5];   //[nTau]
   Float_t         Tau_rawMVAoldDM[5];   //[nTau]
   Float_t         Tau_rawMVAoldDM2017v1[5];   //[nTau]
   Float_t         Tau_rawMVAoldDM2017v2[5];   //[nTau]
   Float_t         Tau_rawMVAoldDMdR032017v2[5];   //[nTau]
   Int_t           Tau_charge[5];   //[nTau]
   Int_t           Tau_decayMode[5];   //[nTau]
   Int_t           Tau_jetIdx[5];   //[nTau]
   Int_t           Tau_rawAntiEleCat[5];   //[nTau]
   Int_t           Tau_rawAntiEleCat2018[5];   //[nTau]
   UChar_t         Tau_idAntiEle[5];   //[nTau]
   UChar_t         Tau_idAntiEle2018[5];   //[nTau]
   UChar_t         Tau_idAntiMu[5];   //[nTau]
   Bool_t          Tau_idDecayMode[5];   //[nTau]
   Bool_t          Tau_idDecayModeNewDMs[5];   //[nTau]
   UChar_t         Tau_idDeepTau2017v2p1VSe[5];   //[nTau]
   UChar_t         Tau_idDeepTau2017v2p1VSjet[5];   //[nTau]
   UChar_t         Tau_idDeepTau2017v2p1VSmu[5];   //[nTau]
   UChar_t         Tau_idMVAnewDM2017v2[5];   //[nTau]
   UChar_t         Tau_idMVAoldDM[5];   //[nTau]
   UChar_t         Tau_idMVAoldDM2017v1[5];   //[nTau]
   UChar_t         Tau_idMVAoldDM2017v2[5];   //[nTau]
   UChar_t         Tau_idMVAoldDMdR032017v2[5];   //[nTau]
   Float_t         TkMET_phi;
   Float_t         TkMET_pt;
   Float_t         TkMET_sumEt;
   UInt_t          nTrigObj;
   Float_t         TrigObj_pt[32];   //[nTrigObj]
   Float_t         TrigObj_eta[32];   //[nTrigObj]
   Float_t         TrigObj_phi[32];   //[nTrigObj]
   Float_t         TrigObj_l1pt[32];   //[nTrigObj]
   Float_t         TrigObj_l1pt_2[32];   //[nTrigObj]
   Float_t         TrigObj_l2pt[32];   //[nTrigObj]
   Int_t           TrigObj_id[32];   //[nTrigObj]
   Int_t           TrigObj_l1iso[32];   //[nTrigObj]
   Int_t           TrigObj_l1charge[32];   //[nTrigObj]
   Int_t           TrigObj_filterBits[32];   //[nTrigObj]
   Int_t           genTtbarId;
   UInt_t          nOtherPV;
   Float_t         OtherPV_z[3];   //[nOtherPV]
   Float_t         PV_ndof;
   Float_t         PV_x;
   Float_t         PV_y;
   Float_t         PV_z;
   Float_t         PV_chi2;
   Float_t         PV_score;
   Int_t           PV_npvs;
   Int_t           PV_npvsGood;
   UInt_t          nSV;
   Float_t         SV_dlen[10];   //[nSV]
   Float_t         SV_dlenSig[10];   //[nSV]
   Float_t         SV_dxy[10];   //[nSV]
   Float_t         SV_dxySig[10];   //[nSV]
   Float_t         SV_pAngle[10];   //[nSV]
   Int_t           Electron_genPartIdx[6];   //[nElectron]
   UChar_t         Electron_genPartFlav[6];   //[nElectron]
   Int_t           FatJet_genJetAK8Idx[4];   //[nFatJet]
   Int_t           FatJet_hadronFlavour[4];   //[nFatJet]
   UChar_t         FatJet_nBHadrons[4];   //[nFatJet]
   UChar_t         FatJet_nCHadrons[4];   //[nFatJet]
   Int_t           GenJetAK8_partonFlavour[5];   //[nGenJetAK8]
   UChar_t         GenJetAK8_hadronFlavour[5];   //[nGenJetAK8]
   Int_t           GenJet_partonFlavour[18];   //[nGenJet]
   UChar_t         GenJet_hadronFlavour[18];   //[nGenJet]
   Int_t           Jet_genJetIdx[23];   //[nJet]
   Int_t           Jet_hadronFlavour[23];   //[nJet]
   Int_t           Jet_partonFlavour[23];   //[nJet]
   Int_t           Muon_genPartIdx[6];   //[nMuon]
   UChar_t         Muon_genPartFlav[6];   //[nMuon]
   Int_t           Photon_genPartIdx[7];   //[nPhoton]
   UChar_t         Photon_genPartFlav[7];   //[nPhoton]
   Float_t         MET_fiducialGenPhi;
   Float_t         MET_fiducialGenPt;
   UChar_t         Electron_cleanmask[6];   //[nElectron]
   UChar_t         Jet_cleanmask[23];   //[nJet]
   UChar_t         Muon_cleanmask[6];   //[nMuon]
   UChar_t         Photon_cleanmask[7];   //[nPhoton]
   UChar_t         Tau_cleanmask[5];   //[nTau]
   UChar_t         SubJet_nBHadrons[8];   //[nSubJet]
   UChar_t         SubJet_nCHadrons[8];   //[nSubJet]
   Float_t         SV_chi2[10];   //[nSV]
   Float_t         SV_eta[10];   //[nSV]
   Float_t         SV_mass[10];   //[nSV]
   Float_t         SV_ndof[10];   //[nSV]
   Float_t         SV_phi[10];   //[nSV]
   Float_t         SV_pt[10];   //[nSV]
   Float_t         SV_x[10];   //[nSV]
   Float_t         SV_y[10];   //[nSV]
   Float_t         SV_z[10];   //[nSV]
   Int_t           Tau_genPartIdx[5];   //[nTau]
   UChar_t         Tau_genPartFlav[5];   //[nTau]
   Bool_t          L1_AlwaysTrue;
   Bool_t          L1_BPTX_AND_Ref1_VME;
   Bool_t          L1_BPTX_AND_Ref3_VME;
   Bool_t          L1_BPTX_AND_Ref4_VME;
   Bool_t          L1_BPTX_BeamGas_B1_VME;
   Bool_t          L1_BPTX_BeamGas_B2_VME;
   Bool_t          L1_BPTX_BeamGas_Ref1_VME;
   Bool_t          L1_BPTX_BeamGas_Ref2_VME;
   Bool_t          L1_BPTX_NotOR_VME;
   Bool_t          L1_BPTX_OR_Ref3_VME;
   Bool_t          L1_BPTX_OR_Ref4_VME;
   Bool_t          L1_BPTX_RefAND_VME;
   Bool_t          L1_BptxMinus;
   Bool_t          L1_BptxOR;
   Bool_t          L1_BptxPlus;
   Bool_t          L1_BptxXOR;
   Bool_t          L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142;
   Bool_t          L1_DoubleEG8er2p5_HTT260er;
   Bool_t          L1_DoubleEG8er2p5_HTT280er;
   Bool_t          L1_DoubleEG8er2p5_HTT300er;
   Bool_t          L1_DoubleEG8er2p5_HTT320er;
   Bool_t          L1_DoubleEG8er2p5_HTT340er;
   Bool_t          L1_DoubleEG_15_10_er2p5;
   Bool_t          L1_DoubleEG_20_10_er2p5;
   Bool_t          L1_DoubleEG_22_10_er2p5;
   Bool_t          L1_DoubleEG_25_12_er2p5;
   Bool_t          L1_DoubleEG_25_14_er2p5;
   Bool_t          L1_DoubleEG_27_14_er2p5;
   Bool_t          L1_DoubleEG_LooseIso20_10_er2p5;
   Bool_t          L1_DoubleEG_LooseIso22_10_er2p5;
   Bool_t          L1_DoubleEG_LooseIso22_12_er2p5;
   Bool_t          L1_DoubleEG_LooseIso25_12_er2p5;
   Bool_t          L1_DoubleIsoTau32er2p1;
   Bool_t          L1_DoubleIsoTau34er2p1;
   Bool_t          L1_DoubleIsoTau36er2p1;
   Bool_t          L1_DoubleJet100er2p3_dEta_Max1p6;
   Bool_t          L1_DoubleJet100er2p5;
   Bool_t          L1_DoubleJet112er2p3_dEta_Max1p6;
   Bool_t          L1_DoubleJet120er2p5;
   Bool_t          L1_DoubleJet150er2p5;
   Bool_t          L1_DoubleJet30er2p5_Mass_Min150_dEta_Max1p5;
   Bool_t          L1_DoubleJet30er2p5_Mass_Min200_dEta_Max1p5;
   Bool_t          L1_DoubleJet30er2p5_Mass_Min250_dEta_Max1p5;
   Bool_t          L1_DoubleJet30er2p5_Mass_Min300_dEta_Max1p5;
   Bool_t          L1_DoubleJet30er2p5_Mass_Min330_dEta_Max1p5;
   Bool_t          L1_DoubleJet30er2p5_Mass_Min360_dEta_Max1p5;
   Bool_t          L1_DoubleJet35_Mass_Min450_IsoTau45_RmOvlp;
   Bool_t          L1_DoubleJet40er2p5;
   Bool_t          L1_DoubleJet_100_30_DoubleJet30_Mass_Min620;
   Bool_t          L1_DoubleJet_110_35_DoubleJet35_Mass_Min620;
   Bool_t          L1_DoubleJet_115_40_DoubleJet40_Mass_Min620;
   Bool_t          L1_DoubleJet_115_40_DoubleJet40_Mass_Min620_Jet60TT28;
   Bool_t          L1_DoubleJet_120_45_DoubleJet45_Mass_Min620;
   Bool_t          L1_DoubleJet_120_45_DoubleJet45_Mass_Min620_Jet60TT28;
   Bool_t          L1_DoubleJet_80_30_Mass_Min420_DoubleMu0_SQ;
   Bool_t          L1_DoubleJet_80_30_Mass_Min420_IsoTau40_RmOvlp;
   Bool_t          L1_DoubleJet_80_30_Mass_Min420_Mu8;
   Bool_t          L1_DoubleJet_90_30_DoubleJet30_Mass_Min620;
   Bool_t          L1_DoubleLooseIsoEG22er2p1;
   Bool_t          L1_DoubleLooseIsoEG24er2p1;
   Bool_t          L1_DoubleMu0;
   Bool_t          L1_DoubleMu0_Mass_Min1;
   Bool_t          L1_DoubleMu0_OQ;
   Bool_t          L1_DoubleMu0_SQ;
   Bool_t          L1_DoubleMu0_SQ_OS;
   Bool_t          L1_DoubleMu0_dR_Max1p6_Jet90er2p5_dR_Max0p8;
   Bool_t          L1_DoubleMu0er1p4_SQ_OS_dR_Max1p4;
   Bool_t          L1_DoubleMu0er1p5_SQ;
   Bool_t          L1_DoubleMu0er1p5_SQ_OS;
   Bool_t          L1_DoubleMu0er1p5_SQ_OS_dR_Max1p4;
   Bool_t          L1_DoubleMu0er1p5_SQ_dR_Max1p4;
   Bool_t          L1_DoubleMu0er2p0_SQ_OS_dR_Max1p4;
   Bool_t          L1_DoubleMu0er2p0_SQ_dR_Max1p4;
   Bool_t          L1_DoubleMu10_SQ;
   Bool_t          L1_DoubleMu18er2p1;
   Bool_t          L1_DoubleMu3_OS_DoubleEG7p5Upsilon;
   Bool_t          L1_DoubleMu3_SQ_ETMHF50_HTT60er;
   Bool_t          L1_DoubleMu3_SQ_ETMHF50_Jet60er2p5;
   Bool_t          L1_DoubleMu3_SQ_ETMHF50_Jet60er2p5_OR_DoubleJet40er2p5;
   Bool_t          L1_DoubleMu3_SQ_ETMHF60_Jet60er2p5;
   Bool_t          L1_DoubleMu3_SQ_HTT220er;
   Bool_t          L1_DoubleMu3_SQ_HTT240er;
   Bool_t          L1_DoubleMu3_SQ_HTT260er;
   Bool_t          L1_DoubleMu3_dR_Max1p6_Jet90er2p5_dR_Max0p8;
   Bool_t          L1_DoubleMu4_SQ_EG9er2p5;
   Bool_t          L1_DoubleMu4_SQ_OS;
   Bool_t          L1_DoubleMu4_SQ_OS_dR_Max1p2;
   Bool_t          L1_DoubleMu4p5_SQ_OS;
   Bool_t          L1_DoubleMu4p5_SQ_OS_dR_Max1p2;
   Bool_t          L1_DoubleMu4p5er2p0_SQ_OS;
   Bool_t          L1_DoubleMu4p5er2p0_SQ_OS_Mass7to18;
   Bool_t          L1_DoubleMu5Upsilon_OS_DoubleEG3;
   Bool_t          L1_DoubleMu5_SQ_EG9er2p5;
   Bool_t          L1_DoubleMu9_SQ;
   Bool_t          L1_DoubleMu_12_5;
   Bool_t          L1_DoubleMu_15_5_SQ;
   Bool_t          L1_DoubleMu_15_7;
   Bool_t          L1_DoubleMu_15_7_Mass_Min1;
   Bool_t          L1_DoubleMu_15_7_SQ;
   Bool_t          L1_DoubleTau70er2p1;
   Bool_t          L1_ETM120;
   Bool_t          L1_ETM150;
   Bool_t          L1_ETMHF100;
   Bool_t          L1_ETMHF100_HTT60er;
   Bool_t          L1_ETMHF110;
   Bool_t          L1_ETMHF110_HTT60er;
   Bool_t          L1_ETMHF110_HTT60er_NotSecondBunchInTrain;
   Bool_t          L1_ETMHF120;
   Bool_t          L1_ETMHF120_HTT60er;
   Bool_t          L1_ETMHF120_NotSecondBunchInTrain;
   Bool_t          L1_ETMHF130;
   Bool_t          L1_ETMHF130_HTT60er;
   Bool_t          L1_ETMHF140;
   Bool_t          L1_ETMHF150;
   Bool_t          L1_ETMHF90_HTT60er;
   Bool_t          L1_ETT1200;
   Bool_t          L1_ETT1600;
   Bool_t          L1_ETT2000;
   Bool_t          L1_FirstBunchAfterTrain;
   Bool_t          L1_FirstBunchBeforeTrain;
   Bool_t          L1_FirstBunchInTrain;
   Bool_t          L1_FirstCollisionInOrbit;
   Bool_t          L1_FirstCollisionInTrain;
   Bool_t          L1_HCAL_LaserMon_Trig;
   Bool_t          L1_HCAL_LaserMon_Veto;
   Bool_t          L1_HTT120er;
   Bool_t          L1_HTT160er;
   Bool_t          L1_HTT200er;
   Bool_t          L1_HTT255er;
   Bool_t          L1_HTT280er;
   Bool_t          L1_HTT280er_QuadJet_70_55_40_35_er2p4;
   Bool_t          L1_HTT320er;
   Bool_t          L1_HTT320er_QuadJet_70_55_40_40_er2p4;
   Bool_t          L1_HTT320er_QuadJet_80_60_er2p1_45_40_er2p3;
   Bool_t          L1_HTT320er_QuadJet_80_60_er2p1_50_45_er2p3;
   Bool_t          L1_HTT360er;
   Bool_t          L1_HTT400er;
   Bool_t          L1_HTT450er;
   Bool_t          L1_IsoEG32er2p5_Mt40;
   Bool_t          L1_IsoEG32er2p5_Mt44;
   Bool_t          L1_IsoEG32er2p5_Mt48;
   Bool_t          L1_IsoTau40er2p1_ETMHF100;
   Bool_t          L1_IsoTau40er2p1_ETMHF110;
   Bool_t          L1_IsoTau40er2p1_ETMHF120;
   Bool_t          L1_IsoTau40er2p1_ETMHF90;
   Bool_t          L1_IsolatedBunch;
   Bool_t          L1_LastBunchInTrain;
   Bool_t          L1_LastCollisionInTrain;
   Bool_t          L1_LooseIsoEG22er2p1_IsoTau26er2p1_dR_Min0p3;
   Bool_t          L1_LooseIsoEG22er2p1_Tau70er2p1_dR_Min0p3;
   Bool_t          L1_LooseIsoEG24er2p1_HTT100er;
   Bool_t          L1_LooseIsoEG24er2p1_IsoTau27er2p1_dR_Min0p3;
   Bool_t          L1_LooseIsoEG26er2p1_HTT100er;
   Bool_t          L1_LooseIsoEG26er2p1_Jet34er2p5_dR_Min0p3;
   Bool_t          L1_LooseIsoEG28er2p1_HTT100er;
   Bool_t          L1_LooseIsoEG28er2p1_Jet34er2p5_dR_Min0p3;
   Bool_t          L1_LooseIsoEG30er2p1_HTT100er;
   Bool_t          L1_LooseIsoEG30er2p1_Jet34er2p5_dR_Min0p3;
   Bool_t          L1_MinimumBiasHF0_AND_BptxAND;
   Bool_t          L1_Mu10er2p3_Jet32er2p3_dR_Max0p4_DoubleJet32er2p3_dEta_Max1p6;
   Bool_t          L1_Mu12er2p3_Jet40er2p1_dR_Max0p4_DoubleJet40er2p1_dEta_Max1p6;
   Bool_t          L1_Mu12er2p3_Jet40er2p3_dR_Max0p4_DoubleJet40er2p3_dEta_Max1p6;
   Bool_t          L1_Mu18er2p1_Tau24er2p1;
   Bool_t          L1_Mu18er2p1_Tau26er2p1;
   Bool_t          L1_Mu20_EG10er2p5;
   Bool_t          L1_Mu22er2p1_IsoTau32er2p1;
   Bool_t          L1_Mu22er2p1_IsoTau34er2p1;
   Bool_t          L1_Mu22er2p1_IsoTau36er2p1;
   Bool_t          L1_Mu22er2p1_IsoTau40er2p1;
   Bool_t          L1_Mu22er2p1_Tau70er2p1;
   Bool_t          L1_Mu3_Jet120er2p5_dR_Max0p4;
   Bool_t          L1_Mu3_Jet120er2p5_dR_Max0p8;
   Bool_t          L1_Mu3_Jet16er2p5_dR_Max0p4;
   Bool_t          L1_Mu3_Jet30er2p5;
   Bool_t          L1_Mu3_Jet35er2p5_dR_Max0p4;
   Bool_t          L1_Mu3_Jet60er2p5_dR_Max0p4;
   Bool_t          L1_Mu3_Jet80er2p5_dR_Max0p4;
   Bool_t          L1_Mu3er1p5_Jet100er2p5_ETMHF40;
   Bool_t          L1_Mu3er1p5_Jet100er2p5_ETMHF50;
   Bool_t          L1_Mu5_EG23er2p5;
   Bool_t          L1_Mu5_LooseIsoEG20er2p5;
   Bool_t          L1_Mu6_DoubleEG10er2p5;
   Bool_t          L1_Mu6_DoubleEG12er2p5;
   Bool_t          L1_Mu6_DoubleEG15er2p5;
   Bool_t          L1_Mu6_DoubleEG17er2p5;
   Bool_t          L1_Mu6_HTT240er;
   Bool_t          L1_Mu6_HTT250er;
   Bool_t          L1_Mu7_EG23er2p5;
   Bool_t          L1_Mu7_LooseIsoEG20er2p5;
   Bool_t          L1_Mu7_LooseIsoEG23er2p5;
   Bool_t          L1_NotBptxOR;
   Bool_t          L1_QuadJet36er2p5_IsoTau52er2p1;
   Bool_t          L1_QuadJet60er2p5;
   Bool_t          L1_QuadJet_95_75_65_20_DoubleJet_75_65_er2p5_Jet20_FWD3p0;
   Bool_t          L1_QuadMu0;
   Bool_t          L1_QuadMu0_OQ;
   Bool_t          L1_QuadMu0_SQ;
   Bool_t          L1_SecondBunchInTrain;
   Bool_t          L1_SecondLastBunchInTrain;
   Bool_t          L1_SingleEG10er2p5;
   Bool_t          L1_SingleEG15er2p5;
   Bool_t          L1_SingleEG26er2p5;
   Bool_t          L1_SingleEG34er2p5;
   Bool_t          L1_SingleEG36er2p5;
   Bool_t          L1_SingleEG38er2p5;
   Bool_t          L1_SingleEG40er2p5;
   Bool_t          L1_SingleEG42er2p5;
   Bool_t          L1_SingleEG45er2p5;
   Bool_t          L1_SingleEG50;
   Bool_t          L1_SingleEG60;
   Bool_t          L1_SingleEG8er2p5;
   Bool_t          L1_SingleIsoEG24er1p5;
   Bool_t          L1_SingleIsoEG24er2p1;
   Bool_t          L1_SingleIsoEG26er1p5;
   Bool_t          L1_SingleIsoEG26er2p1;
   Bool_t          L1_SingleIsoEG26er2p5;
   Bool_t          L1_SingleIsoEG28er1p5;
   Bool_t          L1_SingleIsoEG28er2p1;
   Bool_t          L1_SingleIsoEG28er2p5;
   Bool_t          L1_SingleIsoEG30er2p1;
   Bool_t          L1_SingleIsoEG30er2p5;
   Bool_t          L1_SingleIsoEG32er2p1;
   Bool_t          L1_SingleIsoEG32er2p5;
   Bool_t          L1_SingleIsoEG34er2p5;
   Bool_t          L1_SingleJet10erHE;
   Bool_t          L1_SingleJet120;
   Bool_t          L1_SingleJet120_FWD3p0;
   Bool_t          L1_SingleJet120er2p5;
   Bool_t          L1_SingleJet12erHE;
   Bool_t          L1_SingleJet140er2p5;
   Bool_t          L1_SingleJet140er2p5_ETMHF80;
   Bool_t          L1_SingleJet140er2p5_ETMHF90;
   Bool_t          L1_SingleJet160er2p5;
   Bool_t          L1_SingleJet180;
   Bool_t          L1_SingleJet180er2p5;
   Bool_t          L1_SingleJet200;
   Bool_t          L1_SingleJet20er2p5_NotBptxOR;
   Bool_t          L1_SingleJet20er2p5_NotBptxOR_3BX;
   Bool_t          L1_SingleJet35;
   Bool_t          L1_SingleJet35_FWD3p0;
   Bool_t          L1_SingleJet35er2p5;
   Bool_t          L1_SingleJet43er2p5_NotBptxOR_3BX;
   Bool_t          L1_SingleJet46er2p5_NotBptxOR_3BX;
   Bool_t          L1_SingleJet60;
   Bool_t          L1_SingleJet60_FWD3p0;
   Bool_t          L1_SingleJet60er2p5;
   Bool_t          L1_SingleJet8erHE;
   Bool_t          L1_SingleJet90;
   Bool_t          L1_SingleJet90_FWD3p0;
   Bool_t          L1_SingleJet90er2p5;
   Bool_t          L1_SingleLooseIsoEG28er1p5;
   Bool_t          L1_SingleLooseIsoEG30er1p5;
   Bool_t          L1_SingleMu0_BMTF;
   Bool_t          L1_SingleMu0_DQ;
   Bool_t          L1_SingleMu0_EMTF;
   Bool_t          L1_SingleMu0_OMTF;
   Bool_t          L1_SingleMu10er1p5;
   Bool_t          L1_SingleMu12_DQ_BMTF;
   Bool_t          L1_SingleMu12_DQ_EMTF;
   Bool_t          L1_SingleMu12_DQ_OMTF;
   Bool_t          L1_SingleMu12er1p5;
   Bool_t          L1_SingleMu14er1p5;
   Bool_t          L1_SingleMu15_DQ;
   Bool_t          L1_SingleMu16er1p5;
   Bool_t          L1_SingleMu18;
   Bool_t          L1_SingleMu18er1p5;
   Bool_t          L1_SingleMu20;
   Bool_t          L1_SingleMu22;
   Bool_t          L1_SingleMu22_BMTF;
   Bool_t          L1_SingleMu22_EMTF;
   Bool_t          L1_SingleMu22_OMTF;
   Bool_t          L1_SingleMu25;
   Bool_t          L1_SingleMu3;
   Bool_t          L1_SingleMu5;
   Bool_t          L1_SingleMu6er1p5;
   Bool_t          L1_SingleMu7;
   Bool_t          L1_SingleMu7_DQ;
   Bool_t          L1_SingleMu7er1p5;
   Bool_t          L1_SingleMu8er1p5;
   Bool_t          L1_SingleMu9er1p5;
   Bool_t          L1_SingleMuCosmics;
   Bool_t          L1_SingleMuCosmics_BMTF;
   Bool_t          L1_SingleMuCosmics_EMTF;
   Bool_t          L1_SingleMuCosmics_OMTF;
   Bool_t          L1_SingleMuOpen;
   Bool_t          L1_SingleMuOpen_NotBptxOR;
   Bool_t          L1_SingleMuOpen_er1p1_NotBptxOR_3BX;
   Bool_t          L1_SingleMuOpen_er1p4_NotBptxOR_3BX;
   Bool_t          L1_SingleTau120er2p1;
   Bool_t          L1_SingleTau130er2p1;
   Bool_t          L1_TOTEM_1;
   Bool_t          L1_TOTEM_2;
   Bool_t          L1_TOTEM_3;
   Bool_t          L1_TOTEM_4;
   Bool_t          L1_TripleEG16er2p5;
   Bool_t          L1_TripleEG_16_12_8_er2p5;
   Bool_t          L1_TripleEG_16_15_8_er2p5;
   Bool_t          L1_TripleEG_18_17_8_er2p5;
   Bool_t          L1_TripleEG_18_18_12_er2p5;
   Bool_t          L1_TripleJet_100_80_70_DoubleJet_80_70_er2p5;
   Bool_t          L1_TripleJet_105_85_75_DoubleJet_85_75_er2p5;
   Bool_t          L1_TripleJet_95_75_65_DoubleJet_75_65_er2p5;
   Bool_t          L1_TripleMu0;
   Bool_t          L1_TripleMu0_OQ;
   Bool_t          L1_TripleMu0_SQ;
   Bool_t          L1_TripleMu3;
   Bool_t          L1_TripleMu3_SQ;
   Bool_t          L1_TripleMu_5SQ_3SQ_0OQ;
   Bool_t          L1_TripleMu_5SQ_3SQ_0OQ_DoubleMu_5_3_SQ_OS_Mass_Max9;
   Bool_t          L1_TripleMu_5SQ_3SQ_0_DoubleMu_5_3_SQ_OS_Mass_Max9;
   Bool_t          L1_TripleMu_5_3_3;
   Bool_t          L1_TripleMu_5_3_3_SQ;
   Bool_t          L1_TripleMu_5_3p5_2p5;
   Bool_t          L1_TripleMu_5_3p5_2p5_DoubleMu_5_2p5_OS_Mass_5to17;
   Bool_t          L1_TripleMu_5_3p5_2p5_OQ_DoubleMu_5_2p5_OQ_OS_Mass_5to17;
   Bool_t          L1_TripleMu_5_4_2p5_DoubleMu_5_2p5_OS_Mass_5to17;
   Bool_t          L1_TripleMu_5_5_3;
   Bool_t          L1_UnpairedBunchBptxMinus;
   Bool_t          L1_UnpairedBunchBptxPlus;
   Bool_t          L1_ZeroBias;
   Bool_t          L1_ZeroBias_copy;
   Bool_t          Flag_HBHENoiseFilter;
   Bool_t          Flag_HBHENoiseIsoFilter;
   Bool_t          Flag_CSCTightHaloFilter;
   Bool_t          Flag_CSCTightHaloTrkMuUnvetoFilter;
   Bool_t          Flag_CSCTightHalo2015Filter;
   Bool_t          Flag_globalTightHalo2016Filter;
   Bool_t          Flag_globalSuperTightHalo2016Filter;
   Bool_t          Flag_HcalStripHaloFilter;
   Bool_t          Flag_hcalLaserEventFilter;
   Bool_t          Flag_EcalDeadCellTriggerPrimitiveFilter;
   Bool_t          Flag_EcalDeadCellBoundaryEnergyFilter;
   Bool_t          Flag_ecalBadCalibFilter;
   Bool_t          Flag_goodVertices;
   Bool_t          Flag_eeBadScFilter;
   Bool_t          Flag_ecalLaserCorrFilter;
   Bool_t          Flag_trkPOGFilters;
   Bool_t          Flag_chargedHadronTrackResolutionFilter;
   Bool_t          Flag_muonBadTrackFilter;
   Bool_t          Flag_BadChargedCandidateFilter;
   Bool_t          Flag_BadPFMuonFilter;
   Bool_t          Flag_BadChargedCandidateSummer16Filter;
   Bool_t          Flag_BadPFMuonSummer16Filter;
   Bool_t          Flag_trkPOG_manystripclus53X;
   Bool_t          Flag_trkPOG_toomanystripclus53X;
   Bool_t          Flag_trkPOG_logErrorTooManyClusters;
   Bool_t          Flag_METFilters;
   Bool_t          L1Reco_step;
   Bool_t          L1simulation_step;
   Bool_t          HLTriggerFirstPath;
   Bool_t          HLT_AK8PFJet360_TrimMass30;
   Bool_t          HLT_AK8PFJet380_TrimMass30;
   Bool_t          HLT_AK8PFJet400_TrimMass30;
   Bool_t          HLT_AK8PFJet420_TrimMass30;
   Bool_t          HLT_AK8PFHT750_TrimMass50;
   Bool_t          HLT_AK8PFHT800_TrimMass50;
   Bool_t          HLT_AK8PFHT850_TrimMass50;
   Bool_t          HLT_AK8PFHT900_TrimMass50;
   Bool_t          HLT_CaloJet500_NoJetID;
   Bool_t          HLT_CaloJet550_NoJetID;
   Bool_t          HLT_DoubleMu5_Upsilon_DoubleEle3_CaloIdL_TrackIdL;
   Bool_t          HLT_DoubleMu3_DoubleEle7p5_CaloIdL_TrackIdL_Upsilon;
   Bool_t          HLT_Trimuon5_3p5_2_Upsilon_Muon;
   Bool_t          HLT_TrimuonOpen_5_3p5_2_Upsilon_Muon;
   Bool_t          HLT_DoubleEle25_CaloIdL_MW;
   Bool_t          HLT_DoubleEle27_CaloIdL_MW;
   Bool_t          HLT_DoubleEle33_CaloIdL_MW;
   Bool_t          HLT_DoubleEle24_eta2p1_WPTight_Gsf;
   Bool_t          HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350;
   Bool_t          HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350;
   Bool_t          HLT_Ele27_Ele37_CaloIdL_MW;
   Bool_t          HLT_Mu27_Ele37_CaloIdL_MW;
   Bool_t          HLT_Mu37_Ele27_CaloIdL_MW;
   Bool_t          HLT_Mu37_TkMu27;
   Bool_t          HLT_DoubleMu4_3_Bs;
   Bool_t          HLT_DoubleMu4_3_Jpsi;
   Bool_t          HLT_DoubleMu4_JpsiTrk_Displaced;
   Bool_t          HLT_DoubleMu4_LowMassNonResonantTrk_Displaced;
   Bool_t          HLT_DoubleMu3_Trk_Tau3mu;
   Bool_t          HLT_DoubleMu3_TkMu_DsTau3Mu;
   Bool_t          HLT_DoubleMu4_PsiPrimeTrk_Displaced;
   Bool_t          HLT_DoubleMu4_Mass3p8_DZ_PFHT350;
   Bool_t          HLT_Mu3_PFJet40;
   Bool_t          HLT_Mu7p5_L2Mu2_Jpsi;
   Bool_t          HLT_Mu7p5_L2Mu2_Upsilon;
   Bool_t          HLT_Mu7p5_Track2_Jpsi;
   Bool_t          HLT_Mu7p5_Track3p5_Jpsi;
   Bool_t          HLT_Mu7p5_Track7_Jpsi;
   Bool_t          HLT_Mu7p5_Track2_Upsilon;
   Bool_t          HLT_Mu7p5_Track3p5_Upsilon;
   Bool_t          HLT_Mu7p5_Track7_Upsilon;
   Bool_t          HLT_Mu3_L1SingleMu5orSingleMu7;
   Bool_t          HLT_DoublePhoton33_CaloIdL;
   Bool_t          HLT_DoublePhoton70;
   Bool_t          HLT_DoublePhoton85;
   Bool_t          HLT_Ele20_WPTight_Gsf;
   Bool_t          HLT_Ele15_WPLoose_Gsf;
   Bool_t          HLT_Ele17_WPLoose_Gsf;
   Bool_t          HLT_Ele20_WPLoose_Gsf;
   Bool_t          HLT_Ele20_eta2p1_WPLoose_Gsf;
   Bool_t          HLT_DiEle27_WPTightCaloOnly_L1DoubleEG;
   Bool_t          HLT_Ele27_WPTight_Gsf;
   Bool_t          HLT_Ele28_WPTight_Gsf;
   Bool_t          HLT_Ele30_WPTight_Gsf;
   Bool_t          HLT_Ele32_WPTight_Gsf;
   Bool_t          HLT_Ele35_WPTight_Gsf;
   Bool_t          HLT_Ele35_WPTight_Gsf_L1EGMT;
   Bool_t          HLT_Ele38_WPTight_Gsf;
   Bool_t          HLT_Ele40_WPTight_Gsf;
   Bool_t          HLT_Ele32_WPTight_Gsf_L1DoubleEG;
   Bool_t          HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_CrossL1;
   Bool_t          HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_CrossL1;
   Bool_t          HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_CrossL1;
   Bool_t          HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1;
   Bool_t          HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1;
   Bool_t          HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1;
   Bool_t          HLT_HT450_Beamspot;
   Bool_t          HLT_HT300_Beamspot;
   Bool_t          HLT_ZeroBias_Beamspot;
   Bool_t          HLT_IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_CrossL1;
   Bool_t          HLT_IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_CrossL1;
   Bool_t          HLT_IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_CrossL1;
   Bool_t          HLT_IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1;
   Bool_t          HLT_IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1;
   Bool_t          HLT_IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1;
   Bool_t          HLT_IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1;
   Bool_t          HLT_IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1;
   Bool_t          HLT_IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1;
   Bool_t          HLT_IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1;
   Bool_t          HLT_IsoMu27_LooseChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1;
   Bool_t          HLT_IsoMu27_MediumChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1;
   Bool_t          HLT_IsoMu27_TightChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1;
   Bool_t          HLT_IsoMu20;
   Bool_t          HLT_IsoMu24;
   Bool_t          HLT_IsoMu24_eta2p1;
   Bool_t          HLT_IsoMu27;
   Bool_t          HLT_IsoMu30;
   Bool_t          HLT_UncorrectedJetE30_NoBPTX;
   Bool_t          HLT_UncorrectedJetE30_NoBPTX3BX;
   Bool_t          HLT_UncorrectedJetE60_NoBPTX3BX;
   Bool_t          HLT_UncorrectedJetE70_NoBPTX3BX;
   Bool_t          HLT_L1SingleMu18;
   Bool_t          HLT_L1SingleMu25;
   Bool_t          HLT_L2Mu10;
   Bool_t          HLT_L2Mu10_NoVertex_NoBPTX3BX;
   Bool_t          HLT_L2Mu10_NoVertex_NoBPTX;
   Bool_t          HLT_L2Mu45_NoVertex_3Sta_NoBPTX3BX;
   Bool_t          HLT_L2Mu40_NoVertex_3Sta_NoBPTX3BX;
   Bool_t          HLT_L2Mu50;
   Bool_t          HLT_L2Mu23NoVtx_2Cha;
   Bool_t          HLT_L2Mu23NoVtx_2Cha_CosmicSeed;
   Bool_t          HLT_DoubleL2Mu30NoVtx_2Cha_CosmicSeed_Eta2p4;
   Bool_t          HLT_DoubleL2Mu30NoVtx_2Cha_Eta2p4;
   Bool_t          HLT_DoubleL2Mu50;
   Bool_t          HLT_DoubleL2Mu23NoVtx_2Cha_CosmicSeed;
   Bool_t          HLT_DoubleL2Mu23NoVtx_2Cha_CosmicSeed_NoL2Matched;
   Bool_t          HLT_DoubleL2Mu25NoVtx_2Cha_CosmicSeed;
   Bool_t          HLT_DoubleL2Mu25NoVtx_2Cha_CosmicSeed_NoL2Matched;
   Bool_t          HLT_DoubleL2Mu25NoVtx_2Cha_CosmicSeed_Eta2p4;
   Bool_t          HLT_DoubleL2Mu23NoVtx_2Cha;
   Bool_t          HLT_DoubleL2Mu23NoVtx_2Cha_NoL2Matched;
   Bool_t          HLT_DoubleL2Mu25NoVtx_2Cha;
   Bool_t          HLT_DoubleL2Mu25NoVtx_2Cha_NoL2Matched;
   Bool_t          HLT_DoubleL2Mu25NoVtx_2Cha_Eta2p4;
   Bool_t          HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL;
   Bool_t          HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL;
   Bool_t          HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ;
   Bool_t          HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ;
   Bool_t          HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8;
   Bool_t          HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8;
   Bool_t          HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8;
   Bool_t          HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8;
   Bool_t          HLT_Mu25_TkMu0_Onia;
   Bool_t          HLT_Mu30_TkMu0_Psi;
   Bool_t          HLT_Mu30_TkMu0_Upsilon;
   Bool_t          HLT_Mu20_TkMu0_Phi;
   Bool_t          HLT_Mu25_TkMu0_Phi;
   Bool_t          HLT_Mu12;
   Bool_t          HLT_Mu15;
   Bool_t          HLT_Mu20;
   Bool_t          HLT_Mu27;
   Bool_t          HLT_Mu50;
   Bool_t          HLT_Mu55;
   Bool_t          HLT_OldMu100;
   Bool_t          HLT_TkMu100;
   Bool_t          HLT_DiPFJetAve40;
   Bool_t          HLT_DiPFJetAve60;
   Bool_t          HLT_DiPFJetAve80;
   Bool_t          HLT_DiPFJetAve140;
   Bool_t          HLT_DiPFJetAve200;
   Bool_t          HLT_DiPFJetAve260;
   Bool_t          HLT_DiPFJetAve320;
   Bool_t          HLT_DiPFJetAve400;
   Bool_t          HLT_DiPFJetAve500;
   Bool_t          HLT_DiPFJetAve60_HFJEC;
   Bool_t          HLT_DiPFJetAve80_HFJEC;
   Bool_t          HLT_DiPFJetAve100_HFJEC;
   Bool_t          HLT_DiPFJetAve160_HFJEC;
   Bool_t          HLT_DiPFJetAve220_HFJEC;
   Bool_t          HLT_DiPFJetAve300_HFJEC;
   Bool_t          HLT_AK8PFJet15;
   Bool_t          HLT_AK8PFJet25;
   Bool_t          HLT_AK8PFJet40;
   Bool_t          HLT_AK8PFJet60;
   Bool_t          HLT_AK8PFJet80;
   Bool_t          HLT_AK8PFJet140;
   Bool_t          HLT_AK8PFJet200;
   Bool_t          HLT_AK8PFJet260;
   Bool_t          HLT_AK8PFJet320;
   Bool_t          HLT_AK8PFJet400;
   Bool_t          HLT_AK8PFJet450;
   Bool_t          HLT_AK8PFJet500;
   Bool_t          HLT_AK8PFJet550;
   Bool_t          HLT_PFJet15;
   Bool_t          HLT_PFJet25;
   Bool_t          HLT_PFJet40;
   Bool_t          HLT_PFJet60;
   Bool_t          HLT_PFJet80;
   Bool_t          HLT_PFJet140;
   Bool_t          HLT_PFJet200;
   Bool_t          HLT_PFJet260;
   Bool_t          HLT_PFJet320;
   Bool_t          HLT_PFJet400;
   Bool_t          HLT_PFJet450;
   Bool_t          HLT_PFJet500;
   Bool_t          HLT_PFJet550;
   Bool_t          HLT_PFJetFwd15;
   Bool_t          HLT_PFJetFwd25;
   Bool_t          HLT_PFJetFwd40;
   Bool_t          HLT_PFJetFwd60;
   Bool_t          HLT_PFJetFwd80;
   Bool_t          HLT_PFJetFwd140;
   Bool_t          HLT_PFJetFwd200;
   Bool_t          HLT_PFJetFwd260;
   Bool_t          HLT_PFJetFwd320;
   Bool_t          HLT_PFJetFwd400;
   Bool_t          HLT_PFJetFwd450;
   Bool_t          HLT_PFJetFwd500;
   Bool_t          HLT_AK8PFJetFwd15;
   Bool_t          HLT_AK8PFJetFwd25;
   Bool_t          HLT_AK8PFJetFwd40;
   Bool_t          HLT_AK8PFJetFwd60;
   Bool_t          HLT_AK8PFJetFwd80;
   Bool_t          HLT_AK8PFJetFwd140;
   Bool_t          HLT_AK8PFJetFwd200;
   Bool_t          HLT_AK8PFJetFwd260;
   Bool_t          HLT_AK8PFJetFwd320;
   Bool_t          HLT_AK8PFJetFwd400;
   Bool_t          HLT_AK8PFJetFwd450;
   Bool_t          HLT_AK8PFJetFwd500;
   Bool_t          HLT_PFHT180;
   Bool_t          HLT_PFHT250;
   Bool_t          HLT_PFHT370;
   Bool_t          HLT_PFHT430;
   Bool_t          HLT_PFHT510;
   Bool_t          HLT_PFHT590;
   Bool_t          HLT_PFHT680;
   Bool_t          HLT_PFHT780;
   Bool_t          HLT_PFHT890;
   Bool_t          HLT_PFHT1050;
   Bool_t          HLT_PFHT500_PFMET100_PFMHT100_IDTight;
   Bool_t          HLT_PFHT500_PFMET110_PFMHT110_IDTight;
   Bool_t          HLT_PFHT700_PFMET85_PFMHT85_IDTight;
   Bool_t          HLT_PFHT700_PFMET95_PFMHT95_IDTight;
   Bool_t          HLT_PFHT800_PFMET75_PFMHT75_IDTight;
   Bool_t          HLT_PFHT800_PFMET85_PFMHT85_IDTight;
   Bool_t          HLT_PFMET110_PFMHT110_IDTight;
   Bool_t          HLT_PFMET120_PFMHT120_IDTight;
   Bool_t          HLT_PFMET130_PFMHT130_IDTight;
   Bool_t          HLT_PFMET140_PFMHT140_IDTight;
   Bool_t          HLT_PFMET100_PFMHT100_IDTight_CaloBTagDeepCSV_3p1;
   Bool_t          HLT_PFMET110_PFMHT110_IDTight_CaloBTagDeepCSV_3p1;
   Bool_t          HLT_PFMET120_PFMHT120_IDTight_CaloBTagDeepCSV_3p1;
   Bool_t          HLT_PFMET130_PFMHT130_IDTight_CaloBTagDeepCSV_3p1;
   Bool_t          HLT_PFMET140_PFMHT140_IDTight_CaloBTagDeepCSV_3p1;
   Bool_t          HLT_PFMET120_PFMHT120_IDTight_PFHT60;
   Bool_t          HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60;
   Bool_t          HLT_PFMETTypeOne120_PFMHT120_IDTight_PFHT60;
   Bool_t          HLT_PFMETTypeOne110_PFMHT110_IDTight;
   Bool_t          HLT_PFMETTypeOne120_PFMHT120_IDTight;
   Bool_t          HLT_PFMETTypeOne130_PFMHT130_IDTight;
   Bool_t          HLT_PFMETTypeOne140_PFMHT140_IDTight;
   Bool_t          HLT_PFMETNoMu110_PFMHTNoMu110_IDTight;
   Bool_t          HLT_PFMETNoMu120_PFMHTNoMu120_IDTight;
   Bool_t          HLT_PFMETNoMu130_PFMHTNoMu130_IDTight;
   Bool_t          HLT_PFMETNoMu140_PFMHTNoMu140_IDTight;
   Bool_t          HLT_MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight;
   Bool_t          HLT_MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight;
   Bool_t          HLT_MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight;
   Bool_t          HLT_MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight;
   Bool_t          HLT_L1ETMHadSeeds;
   Bool_t          HLT_CaloMHT90;
   Bool_t          HLT_CaloMET80_NotCleaned;
   Bool_t          HLT_CaloMET90_NotCleaned;
   Bool_t          HLT_CaloMET100_NotCleaned;
   Bool_t          HLT_CaloMET110_NotCleaned;
   Bool_t          HLT_CaloMET250_NotCleaned;
   Bool_t          HLT_CaloMET70_HBHECleaned;
   Bool_t          HLT_CaloMET80_HBHECleaned;
   Bool_t          HLT_CaloMET90_HBHECleaned;
   Bool_t          HLT_CaloMET100_HBHECleaned;
   Bool_t          HLT_CaloMET250_HBHECleaned;
   Bool_t          HLT_CaloMET300_HBHECleaned;
   Bool_t          HLT_CaloMET350_HBHECleaned;
   Bool_t          HLT_PFMET200_NotCleaned;
   Bool_t          HLT_PFMET200_HBHECleaned;
   Bool_t          HLT_PFMET250_HBHECleaned;
   Bool_t          HLT_PFMET300_HBHECleaned;
   Bool_t          HLT_PFMET200_HBHE_BeamHaloCleaned;
   Bool_t          HLT_PFMETTypeOne200_HBHE_BeamHaloCleaned;
   Bool_t          HLT_MET105_IsoTrk50;
   Bool_t          HLT_MET120_IsoTrk50;
   Bool_t          HLT_SingleJet30_Mu12_SinglePFJet40;
   Bool_t          HLT_Mu12_DoublePFJets40_CaloBTagDeepCSV_p71;
   Bool_t          HLT_Mu12_DoublePFJets100_CaloBTagDeepCSV_p71;
   Bool_t          HLT_Mu12_DoublePFJets200_CaloBTagDeepCSV_p71;
   Bool_t          HLT_Mu12_DoublePFJets350_CaloBTagDeepCSV_p71;
   Bool_t          HLT_Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagDeepCSV_p71;
   Bool_t          HLT_Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagDeepCSV_p71;
   Bool_t          HLT_Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagDeepCSV_p71;
   Bool_t          HLT_DoublePFJets40_CaloBTagDeepCSV_p71;
   Bool_t          HLT_DoublePFJets100_CaloBTagDeepCSV_p71;
   Bool_t          HLT_DoublePFJets200_CaloBTagDeepCSV_p71;
   Bool_t          HLT_DoublePFJets350_CaloBTagDeepCSV_p71;
   Bool_t          HLT_DoublePFJets116MaxDeta1p6_DoubleCaloBTagDeepCSV_p71;
   Bool_t          HLT_DoublePFJets128MaxDeta1p6_DoubleCaloBTagDeepCSV_p71;
   Bool_t          HLT_Photon300_NoHE;
   Bool_t          HLT_Mu8_TrkIsoVVL;
   Bool_t          HLT_Mu8_DiEle12_CaloIdL_TrackIdL_DZ;
   Bool_t          HLT_Mu8_DiEle12_CaloIdL_TrackIdL;
   Bool_t          HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ;
   Bool_t          HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350;
   Bool_t          HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ;
   Bool_t          HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30;
   Bool_t          HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30;
   Bool_t          HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30_PFBtagDeepCSV_1p5;
   Bool_t          HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30_CaloBtagDeepCSV_1p5;
   Bool_t          HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL;
   Bool_t          HLT_Mu17_TrkIsoVVL;
   Bool_t          HLT_Mu19_TrkIsoVVL;
   Bool_t          HLT_BTagMu_AK4DiJet20_Mu5;
   Bool_t          HLT_BTagMu_AK4DiJet40_Mu5;
   Bool_t          HLT_BTagMu_AK4DiJet70_Mu5;
   Bool_t          HLT_BTagMu_AK4DiJet110_Mu5;
   Bool_t          HLT_BTagMu_AK4DiJet170_Mu5;
   Bool_t          HLT_BTagMu_AK4Jet300_Mu5;
   Bool_t          HLT_BTagMu_AK8DiJet170_Mu5;
   Bool_t          HLT_BTagMu_AK8Jet170_DoubleMu5;
   Bool_t          HLT_BTagMu_AK8Jet300_Mu5;
   Bool_t          HLT_BTagMu_AK4DiJet20_Mu5_noalgo;
   Bool_t          HLT_BTagMu_AK4DiJet40_Mu5_noalgo;
   Bool_t          HLT_BTagMu_AK4DiJet70_Mu5_noalgo;
   Bool_t          HLT_BTagMu_AK4DiJet110_Mu5_noalgo;
   Bool_t          HLT_BTagMu_AK4DiJet170_Mu5_noalgo;
   Bool_t          HLT_BTagMu_AK4Jet300_Mu5_noalgo;
   Bool_t          HLT_BTagMu_AK8DiJet170_Mu5_noalgo;
   Bool_t          HLT_BTagMu_AK8Jet170_DoubleMu5_noalgo;
   Bool_t          HLT_BTagMu_AK8Jet300_Mu5_noalgo;
   Bool_t          HLT_Ele15_Ele8_CaloIdL_TrackIdL_IsoVL;
   Bool_t          HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ;
   Bool_t          HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL;
   Bool_t          HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ;
   Bool_t          HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL;
   Bool_t          HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL;
   Bool_t          HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ;
   Bool_t          HLT_Mu12_DoublePhoton20;
   Bool_t          HLT_TriplePhoton_20_20_20_CaloIdLV2;
   Bool_t          HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL;
   Bool_t          HLT_TriplePhoton_30_30_10_CaloIdLV2;
   Bool_t          HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL;
   Bool_t          HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL;
   Bool_t          HLT_Photon20;
   Bool_t          HLT_Photon33;
   Bool_t          HLT_Photon50;
   Bool_t          HLT_Photon75;
   Bool_t          HLT_Photon90;
   Bool_t          HLT_Photon120;
   Bool_t          HLT_Photon150;
   Bool_t          HLT_Photon175;
   Bool_t          HLT_Photon200;
   Bool_t          HLT_Photon100EB_TightID_TightIso;
   Bool_t          HLT_Photon110EB_TightID_TightIso;
   Bool_t          HLT_Photon120EB_TightID_TightIso;
   Bool_t          HLT_Photon100EBHE10;
   Bool_t          HLT_Photon100EEHE10;
   Bool_t          HLT_Photon100EE_TightID_TightIso;
   Bool_t          HLT_Photon50_R9Id90_HE10_IsoM;
   Bool_t          HLT_Photon75_R9Id90_HE10_IsoM;
   Bool_t          HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3;
   Bool_t          HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3;
   Bool_t          HLT_Photon90_R9Id90_HE10_IsoM;
   Bool_t          HLT_Photon120_R9Id90_HE10_IsoM;
   Bool_t          HLT_Photon165_R9Id90_HE10_IsoM;
   Bool_t          HLT_Photon90_CaloIdL_PFHT700;
   Bool_t          HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90;
   Bool_t          HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95;
   Bool_t          HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55;
   Bool_t          HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55;
   Bool_t          HLT_Photon35_TwoProngs35;
   Bool_t          HLT_IsoMu24_TwoProngs35;
   Bool_t          HLT_Dimuon0_Jpsi_L1_NoOS;
   Bool_t          HLT_Dimuon0_Jpsi_NoVertexing_NoOS;
   Bool_t          HLT_Dimuon0_Jpsi;
   Bool_t          HLT_Dimuon0_Jpsi_NoVertexing;
   Bool_t          HLT_Dimuon0_Jpsi_L1_4R_0er1p5R;
   Bool_t          HLT_Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R;
   Bool_t          HLT_Dimuon0_Jpsi3p5_Muon2;
   Bool_t          HLT_Dimuon0_Upsilon_L1_4p5;
   Bool_t          HLT_Dimuon0_Upsilon_L1_5;
   Bool_t          HLT_Dimuon0_Upsilon_L1_4p5NoOS;
   Bool_t          HLT_Dimuon0_Upsilon_L1_4p5er2p0;
   Bool_t          HLT_Dimuon0_Upsilon_L1_4p5er2p0M;
   Bool_t          HLT_Dimuon0_Upsilon_NoVertexing;
   Bool_t          HLT_Dimuon0_Upsilon_L1_5M;
   Bool_t          HLT_Dimuon0_LowMass_L1_0er1p5R;
   Bool_t          HLT_Dimuon0_LowMass_L1_0er1p5;
   Bool_t          HLT_Dimuon0_LowMass;
   Bool_t          HLT_Dimuon0_LowMass_L1_4;
   Bool_t          HLT_Dimuon0_LowMass_L1_4R;
   Bool_t          HLT_Dimuon0_LowMass_L1_TM530;
   Bool_t          HLT_Dimuon0_Upsilon_Muon_L1_TM0;
   Bool_t          HLT_Dimuon0_Upsilon_Muon_NoL1Mass;
   Bool_t          HLT_TripleMu_5_3_3_Mass3p8_DZ;
   Bool_t          HLT_TripleMu_10_5_5_DZ;
   Bool_t          HLT_TripleMu_12_10_5;
   Bool_t          HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15;
   Bool_t          HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1;
   Bool_t          HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15;
   Bool_t          HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1;
   Bool_t          HLT_DoubleMu3_DZ_PFMET50_PFMHT60;
   Bool_t          HLT_DoubleMu3_DZ_PFMET70_PFMHT70;
   Bool_t          HLT_DoubleMu3_DZ_PFMET90_PFMHT90;
   Bool_t          HLT_DoubleMu3_Trk_Tau3mu_NoL1Mass;
   Bool_t          HLT_DoubleMu4_Jpsi_Displaced;
   Bool_t          HLT_DoubleMu4_Jpsi_NoVertexing;
   Bool_t          HLT_DoubleMu4_JpsiTrkTrk_Displaced;
   Bool_t          HLT_DoubleMu43NoFiltersNoVtx;
   Bool_t          HLT_DoubleMu48NoFiltersNoVtx;
   Bool_t          HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL;
   Bool_t          HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL;
   Bool_t          HLT_Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL;
   Bool_t          HLT_Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL;
   Bool_t          HLT_DoubleMu33NoFiltersNoVtxDisplaced;
   Bool_t          HLT_DoubleMu40NoFiltersNoVtxDisplaced;
   Bool_t          HLT_DoubleMu20_7_Mass0to30_L1_DM4;
   Bool_t          HLT_DoubleMu20_7_Mass0to30_L1_DM4EG;
   Bool_t          HLT_HT425;
   Bool_t          HLT_HT430_DisplacedDijet40_DisplacedTrack;
   Bool_t          HLT_HT500_DisplacedDijet40_DisplacedTrack;
   Bool_t          HLT_HT430_DisplacedDijet60_DisplacedTrack;
   Bool_t          HLT_HT400_DisplacedDijet40_DisplacedTrack;
   Bool_t          HLT_HT650_DisplacedDijet60_Inclusive;
   Bool_t          HLT_HT550_DisplacedDijet60_Inclusive;
   Bool_t          HLT_DiJet110_35_Mjj650_PFMET110;
   Bool_t          HLT_DiJet110_35_Mjj650_PFMET120;
   Bool_t          HLT_DiJet110_35_Mjj650_PFMET130;
   Bool_t          HLT_TripleJet110_35_35_Mjj650_PFMET110;
   Bool_t          HLT_TripleJet110_35_35_Mjj650_PFMET120;
   Bool_t          HLT_TripleJet110_35_35_Mjj650_PFMET130;
   Bool_t          HLT_Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned;
   Bool_t          HLT_Ele28_eta2p1_WPTight_Gsf_HT150;
   Bool_t          HLT_Ele28_HighEta_SC20_Mass55;
   Bool_t          HLT_DoubleMu20_7_Mass0to30_Photon23;
   Bool_t          HLT_Ele15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5;
   Bool_t          HLT_Ele15_IsoVVVL_PFHT450_PFMET50;
   Bool_t          HLT_Ele15_IsoVVVL_PFHT450;
   Bool_t          HLT_Ele50_IsoVVVL_PFHT450;
   Bool_t          HLT_Ele15_IsoVVVL_PFHT600;
   Bool_t          HLT_Mu4_TrkIsoVVL_DiPFJet90_40_DEta3p5_MJJ750_HTT300_PFMETNoMu60;
   Bool_t          HLT_Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60;
   Bool_t          HLT_Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60;
   Bool_t          HLT_Mu15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5;
   Bool_t          HLT_Mu15_IsoVVVL_PFHT450_PFMET50;
   Bool_t          HLT_Mu15_IsoVVVL_PFHT450;
   Bool_t          HLT_Mu50_IsoVVVL_PFHT450;
   Bool_t          HLT_Mu15_IsoVVVL_PFHT600;
   Bool_t          HLT_Mu3er1p5_PFJet100er2p5_PFMET70_PFMHT70_IDTight;
   Bool_t          HLT_Mu3er1p5_PFJet100er2p5_PFMET80_PFMHT80_IDTight;
   Bool_t          HLT_Mu3er1p5_PFJet100er2p5_PFMET90_PFMHT90_IDTight;
   Bool_t          HLT_Mu3er1p5_PFJet100er2p5_PFMET100_PFMHT100_IDTight;
   Bool_t          HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu70_PFMHTNoMu70_IDTight;
   Bool_t          HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu80_PFMHTNoMu80_IDTight;
   Bool_t          HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu90_PFMHTNoMu90_IDTight;
   Bool_t          HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu100_PFMHTNoMu100_IDTight;
   Bool_t          HLT_Dimuon10_PsiPrime_Barrel_Seagulls;
   Bool_t          HLT_Dimuon20_Jpsi_Barrel_Seagulls;
   Bool_t          HLT_Dimuon12_Upsilon_y1p4;
   Bool_t          HLT_Dimuon14_Phi_Barrel_Seagulls;
   Bool_t          HLT_Dimuon18_PsiPrime;
   Bool_t          HLT_Dimuon25_Jpsi;
   Bool_t          HLT_Dimuon18_PsiPrime_noCorrL1;
   Bool_t          HLT_Dimuon24_Upsilon_noCorrL1;
   Bool_t          HLT_Dimuon24_Phi_noCorrL1;
   Bool_t          HLT_Dimuon25_Jpsi_noCorrL1;
   Bool_t          HLT_DiMu4_Ele9_CaloIdL_TrackIdL_DZ_Mass3p8;
   Bool_t          HLT_DiMu9_Ele9_CaloIdL_TrackIdL_DZ;
   Bool_t          HLT_DiMu9_Ele9_CaloIdL_TrackIdL;
   Bool_t          HLT_DoubleIsoMu20_eta2p1;
   Bool_t          HLT_TrkMu12_DoubleTrkMu5NoFiltersNoVtx;
   Bool_t          HLT_TrkMu16_DoubleTrkMu6NoFiltersNoVtx;
   Bool_t          HLT_TrkMu17_DoubleTrkMu8NoFiltersNoVtx;
   Bool_t          HLT_Mu8;
   Bool_t          HLT_Mu17;
   Bool_t          HLT_Mu19;
   Bool_t          HLT_Mu17_Photon30_IsoCaloId;
   Bool_t          HLT_Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30;
   Bool_t          HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30;
   Bool_t          HLT_Ele15_CaloIdL_TrackIdL_IsoVL_PFJet30;
   Bool_t          HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30;
   Bool_t          HLT_Ele8_CaloIdM_TrackIdM_PFJet30;
   Bool_t          HLT_Ele17_CaloIdM_TrackIdM_PFJet30;
   Bool_t          HLT_Ele23_CaloIdM_TrackIdM_PFJet30;
   Bool_t          HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165;
   Bool_t          HLT_Ele115_CaloIdVT_GsfTrkIdT;
   Bool_t          HLT_Ele135_CaloIdVT_GsfTrkIdT;
   Bool_t          HLT_Ele145_CaloIdVT_GsfTrkIdT;
   Bool_t          HLT_Ele200_CaloIdVT_GsfTrkIdT;
   Bool_t          HLT_Ele250_CaloIdVT_GsfTrkIdT;
   Bool_t          HLT_Ele300_CaloIdVT_GsfTrkIdT;
   Bool_t          HLT_PFHT330PT30_QuadPFJet_75_60_45_40_TriplePFBTagDeepCSV_4p5;
   Bool_t          HLT_PFHT330PT30_QuadPFJet_75_60_45_40;
   Bool_t          HLT_PFHT400_SixPFJet32_DoublePFBTagDeepCSV_2p94;
   Bool_t          HLT_PFHT400_SixPFJet32;
   Bool_t          HLT_PFHT450_SixPFJet36_PFBTagDeepCSV_1p59;
   Bool_t          HLT_PFHT450_SixPFJet36;
   Bool_t          HLT_PFHT350;
   Bool_t          HLT_PFHT350MinPFJet15;
   Bool_t          HLT_Photon60_R9Id90_CaloIdL_IsoL;
   Bool_t          HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL;
   Bool_t          HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15;
   Bool_t          HLT_ECALHT800;
   Bool_t          HLT_DiSC30_18_EIso_AND_HE_Mass70;
   Bool_t          HLT_Physics;
   Bool_t          HLT_Physics_part0;
   Bool_t          HLT_Physics_part1;
   Bool_t          HLT_Physics_part2;
   Bool_t          HLT_Physics_part3;
   Bool_t          HLT_Physics_part4;
   Bool_t          HLT_Physics_part5;
   Bool_t          HLT_Physics_part6;
   Bool_t          HLT_Physics_part7;
   Bool_t          HLT_Random;
   Bool_t          HLT_ZeroBias;
   Bool_t          HLT_ZeroBias_Alignment;
   Bool_t          HLT_ZeroBias_part0;
   Bool_t          HLT_ZeroBias_part1;
   Bool_t          HLT_ZeroBias_part2;
   Bool_t          HLT_ZeroBias_part3;
   Bool_t          HLT_ZeroBias_part4;
   Bool_t          HLT_ZeroBias_part5;
   Bool_t          HLT_ZeroBias_part6;
   Bool_t          HLT_ZeroBias_part7;
   Bool_t          HLT_AK4CaloJet30;
   Bool_t          HLT_AK4CaloJet40;
   Bool_t          HLT_AK4CaloJet50;
   Bool_t          HLT_AK4CaloJet80;
   Bool_t          HLT_AK4CaloJet100;
   Bool_t          HLT_AK4CaloJet120;
   Bool_t          HLT_AK4PFJet30;
   Bool_t          HLT_AK4PFJet50;
   Bool_t          HLT_AK4PFJet80;
   Bool_t          HLT_AK4PFJet100;
   Bool_t          HLT_AK4PFJet120;
   Bool_t          HLT_SinglePhoton10_Eta3p1ForPPRef;
   Bool_t          HLT_SinglePhoton20_Eta3p1ForPPRef;
   Bool_t          HLT_SinglePhoton30_Eta3p1ForPPRef;
   Bool_t          HLT_Photon20_HoverELoose;
   Bool_t          HLT_Photon30_HoverELoose;
   Bool_t          HLT_EcalCalibration;
   Bool_t          HLT_HcalCalibration;
   Bool_t          HLT_L1UnpairedBunchBptxMinus;
   Bool_t          HLT_L1UnpairedBunchBptxPlus;
   Bool_t          HLT_L1NotBptxOR;
   Bool_t          HLT_L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142;
   Bool_t          HLT_CDC_L2cosmic_5_er1p0;
   Bool_t          HLT_CDC_L2cosmic_5p5_er1p0;
   Bool_t          HLT_HcalNZS;
   Bool_t          HLT_HcalPhiSym;
   Bool_t          HLT_HcalIsolatedbunch;
   Bool_t          HLT_IsoTrackHB;
   Bool_t          HLT_IsoTrackHE;
   Bool_t          HLT_ZeroBias_FirstCollisionAfterAbortGap;
   Bool_t          HLT_ZeroBias_IsolatedBunches;
   Bool_t          HLT_ZeroBias_FirstCollisionInTrain;
   Bool_t          HLT_ZeroBias_LastCollisionInTrain;
   Bool_t          HLT_ZeroBias_FirstBXAfterTrain;
   Bool_t          HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr;
   Bool_t          HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90;
   Bool_t          HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100;
   Bool_t          HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110;
   Bool_t          HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120;
   Bool_t          HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130;
   Bool_t          HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET140;
   Bool_t          HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr;
   Bool_t          HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr;
   Bool_t          HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1;
   Bool_t          HLT_MediumChargedIsoPFTau200HighPtRelaxedIso_Trk50_eta2p1;
   Bool_t          HLT_MediumChargedIsoPFTau220HighPtRelaxedIso_Trk50_eta2p1;
   Bool_t          HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL;
   Bool_t          HLT_Rsq0p35;
   Bool_t          HLT_Rsq0p40;
   Bool_t          HLT_RsqMR300_Rsq0p09_MR200;
   Bool_t          HLT_RsqMR320_Rsq0p09_MR200;
   Bool_t          HLT_RsqMR300_Rsq0p09_MR200_4jet;
   Bool_t          HLT_RsqMR320_Rsq0p09_MR200_4jet;
   Bool_t          HLT_IsoMu27_MET90;
   Bool_t          HLT_DoubleTightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg;
   Bool_t          HLT_DoubleMediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg;
   Bool_t          HLT_DoubleMediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg;
   Bool_t          HLT_DoubleTightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg;
   Bool_t          HLT_DoubleMediumChargedIsoPFTauHPS40_Trk1_eta2p1_Reg;
   Bool_t          HLT_DoubleTightChargedIsoPFTauHPS40_Trk1_eta2p1_Reg;
   Bool_t          HLT_DoubleMediumChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg;
   Bool_t          HLT_DoubleTightChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg;
   Bool_t          HLT_VBF_DoubleLooseChargedIsoPFTauHPS20_Trk1_eta2p1;
   Bool_t          HLT_VBF_DoubleMediumChargedIsoPFTauHPS20_Trk1_eta2p1;
   Bool_t          HLT_VBF_DoubleTightChargedIsoPFTauHPS20_Trk1_eta2p1;
   Bool_t          HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50;
   Bool_t          HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3;
   Bool_t          HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3;
   Bool_t          HLT_PFMET100_PFMHT100_IDTight_PFHT60;
   Bool_t          HLT_PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60;
   Bool_t          HLT_PFMETTypeOne100_PFMHT100_IDTight_PFHT60;
   Bool_t          HLT_Mu18_Mu9_SameSign;
   Bool_t          HLT_Mu18_Mu9_SameSign_DZ;
   Bool_t          HLT_Mu18_Mu9;
   Bool_t          HLT_Mu18_Mu9_DZ;
   Bool_t          HLT_Mu20_Mu10_SameSign;
   Bool_t          HLT_Mu20_Mu10_SameSign_DZ;
   Bool_t          HLT_Mu20_Mu10;
   Bool_t          HLT_Mu20_Mu10_DZ;
   Bool_t          HLT_Mu23_Mu12_SameSign;
   Bool_t          HLT_Mu23_Mu12_SameSign_DZ;
   Bool_t          HLT_Mu23_Mu12;
   Bool_t          HLT_Mu23_Mu12_DZ;
   Bool_t          HLT_DoubleMu2_Jpsi_DoubleTrk1_Phi1p05;
   Bool_t          HLT_DoubleMu2_Jpsi_DoubleTkMu0_Phi;
   Bool_t          HLT_DoubleMu3_DCA_PFMET50_PFMHT60;
   Bool_t          HLT_TripleMu_5_3_3_Mass3p8_DCA;
   Bool_t          HLT_QuadPFJet98_83_71_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1;
   Bool_t          HLT_QuadPFJet103_88_75_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1;
   Bool_t          HLT_QuadPFJet111_90_80_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1;
   Bool_t          HLT_QuadPFJet98_83_71_15_PFBTagDeepCSV_1p3_VBF2;
   Bool_t          HLT_QuadPFJet103_88_75_15_PFBTagDeepCSV_1p3_VBF2;
   Bool_t          HLT_QuadPFJet105_88_76_15_PFBTagDeepCSV_1p3_VBF2;
   Bool_t          HLT_QuadPFJet111_90_80_15_PFBTagDeepCSV_1p3_VBF2;
   Bool_t          HLT_QuadPFJet98_83_71_15;
   Bool_t          HLT_QuadPFJet103_88_75_15;
   Bool_t          HLT_QuadPFJet105_88_76_15;
   Bool_t          HLT_QuadPFJet111_90_80_15;
   Bool_t          HLT_AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p17;
   Bool_t          HLT_AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p1;
   Bool_t          HLT_AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_p02;
   Bool_t          HLT_AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np2;
   Bool_t          HLT_AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np4;
   Bool_t          HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55;
   Bool_t          HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto;
   Bool_t          HLT_Mu12_IP6_part0;
   Bool_t          HLT_Mu12_IP6_part1;
   Bool_t          HLT_Mu12_IP6_part2;
   Bool_t          HLT_Mu12_IP6_part3;
   Bool_t          HLT_Mu12_IP6_part4;
   Bool_t          HLT_Mu9_IP5_part0;
   Bool_t          HLT_Mu9_IP5_part1;
   Bool_t          HLT_Mu9_IP5_part2;
   Bool_t          HLT_Mu9_IP5_part3;
   Bool_t          HLT_Mu9_IP5_part4;
   Bool_t          HLT_Mu7_IP4_part0;
   Bool_t          HLT_Mu7_IP4_part1;
   Bool_t          HLT_Mu7_IP4_part2;
   Bool_t          HLT_Mu7_IP4_part3;
   Bool_t          HLT_Mu7_IP4_part4;
   Bool_t          HLT_Mu9_IP4_part0;
   Bool_t          HLT_Mu9_IP4_part1;
   Bool_t          HLT_Mu9_IP4_part2;
   Bool_t          HLT_Mu9_IP4_part3;
   Bool_t          HLT_Mu9_IP4_part4;
   Bool_t          HLT_Mu8_IP5_part0;
   Bool_t          HLT_Mu8_IP5_part1;
   Bool_t          HLT_Mu8_IP5_part2;
   Bool_t          HLT_Mu8_IP5_part3;
   Bool_t          HLT_Mu8_IP5_part4;
   Bool_t          HLT_Mu8_IP6_part0;
   Bool_t          HLT_Mu8_IP6_part1;
   Bool_t          HLT_Mu8_IP6_part2;
   Bool_t          HLT_Mu8_IP6_part3;
   Bool_t          HLT_Mu8_IP6_part4;
   Bool_t          HLT_Mu9_IP6_part0;
   Bool_t          HLT_Mu9_IP6_part1;
   Bool_t          HLT_Mu9_IP6_part2;
   Bool_t          HLT_Mu9_IP6_part3;
   Bool_t          HLT_Mu9_IP6_part4;
   Bool_t          HLT_Mu8_IP3_part0;
   Bool_t          HLT_Mu8_IP3_part1;
   Bool_t          HLT_Mu8_IP3_part2;
   Bool_t          HLT_Mu8_IP3_part3;
   Bool_t          HLT_Mu8_IP3_part4;
   Bool_t          HLT_QuadPFJet105_88_76_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1;
   Bool_t          HLT_TrkMu6NoFiltersNoVtx;
   Bool_t          HLT_TrkMu16NoFiltersNoVtx;
   Bool_t          HLT_DoubleTrkMu_16_6_NoFiltersNoVtx;
   Bool_t          HLTriggerFinalPath;
   UInt_t          nLepton;
   Int_t           Lepton_pdgId[3];   //[nLepton]
   Int_t           Lepton_electronIdx[3];   //[nLepton]
   Int_t           Lepton_muonIdx[3];   //[nLepton]
   Float_t         Lepton_pt[3];   //[nLepton]
   Float_t         Lepton_eta[3];   //[nLepton]
   Float_t         Lepton_phi[3];   //[nLepton]
   UInt_t          nVetoLepton;
   Int_t           VetoLepton_pdgId[4];   //[nVetoLepton]
   Int_t           VetoLepton_electronIdx[4];   //[nVetoLepton]
   Int_t           VetoLepton_muonIdx[4];   //[nVetoLepton]
   Float_t         VetoLepton_pt[4];   //[nVetoLepton]
   Float_t         VetoLepton_eta[4];   //[nVetoLepton]
   Float_t         VetoLepton_phi[4];   //[nVetoLepton]
   UInt_t          nCleanJet;
   Int_t           CleanJet_jetIdx[15];   //[nCleanJet]
   Float_t         CleanJet_pt[15];   //[nCleanJet]
   Float_t         CleanJet_eta[15];   //[nCleanJet]
   Float_t         CleanJet_phi[15];   //[nCleanJet]
   Int_t           Lepton_isLoose[3];   //[nLepton]
   Int_t           Lepton_isVeto[3];   //[nLepton]
   Float_t         dmZll_veto;
   Int_t           Lepton_isTightElectron_mvaFall17V1Iso_WP90_SS[3];   //[nLepton]
   Int_t           Lepton_isTightElectron_mvaFall17V1Iso_WP90_tthmva_70[3];   //[nLepton]
   Int_t           Lepton_isTightElectron_mvaFall17V1Iso_WP90[3];   //[nLepton]
   Int_t           Lepton_isTightElectron_mvaFall17V1Iso_WP90_SS_tthmva_70[3];   //[nLepton]
   Int_t           Lepton_isTightMuon_cut_Tight_HWWW_tthmva_80[3];   //[nLepton]
   Int_t           Lepton_isTightMuon_cut_Tight_HWWW[3];   //[nLepton]
   Float_t         FatJet_pt_raw[4];   //[nFatJet]
   Float_t         FatJet_pt_nom[4];   //[nFatJet]
   Float_t         FatJet_mass_raw[4];   //[nFatJet]
   Float_t         FatJet_mass_nom[4];   //[nFatJet]
   Float_t         FatJet_corr_JEC[4];   //[nFatJet]
   Float_t         FatJet_corr_JER[4];   //[nFatJet]
   Float_t         FatJet_corr_JMS[4];   //[nFatJet]
   Float_t         FatJet_corr_JMR[4];   //[nFatJet]
   Float_t         FatJet_msoftdrop_raw[4];   //[nFatJet]
   Float_t         FatJet_msoftdrop_nom[4];   //[nFatJet]
   Float_t         FatJet_msoftdrop_corr_JMR[4];   //[nFatJet]
   Float_t         FatJet_msoftdrop_corr_JMS[4];   //[nFatJet]
   Float_t         FatJet_msoftdrop_corr_PUPPI[4];   //[nFatJet]
   Float_t         FatJet_msoftdrop_tau21DDT_nom[4];   //[nFatJet]
   Float_t         FatJet_pt_jerUp[4];   //[nFatJet]
   Float_t         FatJet_mass_jerUp[4];   //[nFatJet]
   Float_t         FatJet_mass_jmrUp[4];   //[nFatJet]
   Float_t         FatJet_mass_jmsUp[4];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jerUp[4];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jmrUp[4];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jmsUp[4];   //[nFatJet]
   Float_t         FatJet_msoftdrop_tau21DDT_jerUp[4];   //[nFatJet]
   Float_t         FatJet_msoftdrop_tau21DDT_jmrUp[4];   //[nFatJet]
   Float_t         FatJet_msoftdrop_tau21DDT_jmsUp[4];   //[nFatJet]
   Float_t         FatJet_pt_jesTotalUp[4];   //[nFatJet]
   Float_t         FatJet_mass_jesTotalUp[4];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesTotalUp[4];   //[nFatJet]
   Float_t         FatJet_pt_jerDown[4];   //[nFatJet]
   Float_t         FatJet_mass_jerDown[4];   //[nFatJet]
   Float_t         FatJet_mass_jmrDown[4];   //[nFatJet]
   Float_t         FatJet_mass_jmsDown[4];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jerDown[4];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jmrDown[4];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jmsDown[4];   //[nFatJet]
   Float_t         FatJet_msoftdrop_tau21DDT_jerDown[4];   //[nFatJet]
   Float_t         FatJet_msoftdrop_tau21DDT_jmrDown[4];   //[nFatJet]
   Float_t         FatJet_msoftdrop_tau21DDT_jmsDown[4];   //[nFatJet]
   Float_t         FatJet_pt_jesTotalDown[4];   //[nFatJet]
   Float_t         FatJet_mass_jesTotalDown[4];   //[nFatJet]
   Float_t         FatJet_msoftdrop_jesTotalDown[4];   //[nFatJet]
   UInt_t          nCleanFatJet;
   Int_t           CleanFatJet_jetIdx[2];   //[nCleanFatJet]
   Float_t         CleanFatJet_pt[2];   //[nCleanFatJet]
   Float_t         CleanFatJet_eta[2];   //[nCleanFatJet]
   Float_t         CleanFatJet_phi[2];   //[nCleanFatJet]
   Float_t         CleanFatJet_mass[2];   //[nCleanFatJet]
   Float_t         CleanFatJet_tau21[2];   //[nCleanFatJet]
   UInt_t          nCleanJetNotFat;
   Int_t           CleanJetNotFat_jetIdx[15];   //[nCleanJetNotFat]
   Float_t         CleanJetNotFat_deltaR[15];   //[nCleanJetNotFat]
   UInt_t          nLeptonGen;
   Int_t           LeptonGen_MotherPID[21];   //[nLeptonGen]
   Int_t           LeptonGen_MotherStatus[21];   //[nLeptonGen]
   Int_t           LeptonGen_pdgId[21];   //[nLeptonGen]
   Int_t           LeptonGen_status[21];   //[nLeptonGen]
   Float_t         LeptonGen_eta[21];   //[nLeptonGen]
   Float_t         LeptonGen_phi[21];   //[nLeptonGen]
   Float_t         LeptonGen_pt[21];   //[nLeptonGen]
   Float_t         LeptonGen_mass[21];   //[nLeptonGen]
   Bool_t          LeptonGen_fromHardProcess[21];   //[nLeptonGen]
   Bool_t          LeptonGen_isDirectHadronDecayProduct[21];   //[nLeptonGen]
   Bool_t          LeptonGen_isDirectPromptTauDecayProduct[21];   //[nLeptonGen]
   Bool_t          LeptonGen_isPrompt[21];   //[nLeptonGen]
   Bool_t          LeptonGen_isTauDecayProduct[21];   //[nLeptonGen]
   UInt_t          nNeutrinoGen;
   Int_t           NeutrinoGen_MotherPID[10];   //[nNeutrinoGen]
   Int_t           NeutrinoGen_MotherStatus[10];   //[nNeutrinoGen]
   Int_t           NeutrinoGen_pdgId[10];   //[nNeutrinoGen]
   Int_t           NeutrinoGen_status[10];   //[nNeutrinoGen]
   Float_t         NeutrinoGen_eta[10];   //[nNeutrinoGen]
   Float_t         NeutrinoGen_phi[10];   //[nNeutrinoGen]
   Float_t         NeutrinoGen_pt[10];   //[nNeutrinoGen]
   Float_t         NeutrinoGen_mass[10];   //[nNeutrinoGen]
   Bool_t          NeutrinoGen_fromHardProcess[10];   //[nNeutrinoGen]
   Bool_t          NeutrinoGen_isDirectHadronDecayProduct[10];   //[nNeutrinoGen]
   Bool_t          NeutrinoGen_isDirectPromptTauDecayProduct[10];   //[nNeutrinoGen]
   Bool_t          NeutrinoGen_isPrompt[10];   //[nNeutrinoGen]
   Bool_t          NeutrinoGen_isTauDecayProduct[10];   //[nNeutrinoGen]
   UInt_t          nPhotonGen;
   Int_t           PhotonGen_MotherPID[20];   //[nPhotonGen]
   Int_t           PhotonGen_MotherStatus[20];   //[nPhotonGen]
   Int_t           PhotonGen_pdgId[20];   //[nPhotonGen]
   Int_t           PhotonGen_status[20];   //[nPhotonGen]
   Float_t         PhotonGen_eta[20];   //[nPhotonGen]
   Float_t         PhotonGen_phi[20];   //[nPhotonGen]
   Float_t         PhotonGen_pt[20];   //[nPhotonGen]
   Float_t         PhotonGen_mass[20];   //[nPhotonGen]
   Bool_t          PhotonGen_fromHardProcess[20];   //[nPhotonGen]
   Bool_t          PhotonGen_isDirectHadronDecayProduct[20];   //[nPhotonGen]
   Bool_t          PhotonGen_isDirectPromptTauDecayProduct[20];   //[nPhotonGen]
   Bool_t          PhotonGen_isPrompt[20];   //[nPhotonGen]
   Bool_t          PhotonGen_isTauDecayProduct[20];   //[nPhotonGen]
   Float_t         gen_ptllmet;
   Float_t         gen_ptll;
   Float_t         gen_mll;
   Float_t         gen_llchannel;
   Float_t         gen_mlvlv;
   Float_t         lhe_mlvlv;
   Float_t         lhe_mWp;
   Float_t         lhe_mWm;
   Bool_t          Lepton_genmatched[3];   //[nLepton]
   Bool_t          Lepton_promptgenmatched[3];   //[nLepton]
   Float_t         higgsGenPt;
   Float_t         higgsGenEta;
   Float_t         higgsGenPhi;
   Float_t         higgsGenMass;
   Float_t         genVPt;
   Float_t         nllnnloW;
   Float_t         nllW;
   Float_t         nllW_Rup;
   Float_t         nllW_Qup;
   Float_t         nllW_Rdown;
   Float_t         nllW_Qdown;
   Float_t         gen_mww;
   Float_t         gen_ptww;
   Float_t         Gen_ZGstar_mu1_pt;
   Float_t         Gen_ZGstar_mu1_eta;
   Float_t         Gen_ZGstar_mu1_phi;
   Float_t         Gen_ZGstar_mu2_pt;
   Float_t         Gen_ZGstar_mu2_eta;
   Float_t         Gen_ZGstar_mu2_phi;
   Float_t         Gen_ZGstar_ele1_pt;
   Float_t         Gen_ZGstar_ele1_eta;
   Float_t         Gen_ZGstar_ele1_phi;
   Float_t         Gen_ZGstar_ele2_pt;
   Float_t         Gen_ZGstar_ele2_eta;
   Float_t         Gen_ZGstar_ele2_phi;
   Float_t         Gen_ZGstar_mass;
   Float_t         Gen_ZGstar_deltaR;
   Int_t           Gen_ZGstar_MomId;
   Int_t           Gen_ZGstar_MomStatus;
   UInt_t          nDressedLepton;
   Int_t           DressedLepton_pdgId[21];   //[nDressedLepton]
   Float_t         DressedLepton_pt[21];   //[nDressedLepton]
   Float_t         DressedLepton_eta[21];   //[nDressedLepton]
   Float_t         DressedLepton_phi[21];   //[nDressedLepton]
   Float_t         DressedLepton_mass[21];   //[nDressedLepton]
   Float_t         baseW;
   Float_t         Xsec;
   Float_t         CleanJet_mass[15];   //[nCleanJet]
   Float_t         CleanJet_corr_JER[15];   //[nCleanJet]
   Float_t         CleanJet_pt_JERUp[15];   //[nCleanJet]
   Float_t         CleanJet_mass_JERUp[15];   //[nCleanJet]
   Float_t         CleanJet_pt_JERDown[15];   //[nCleanJet]
   Float_t         CleanJet_mass_JERDown[15];   //[nCleanJet]
   Float_t         Jet_btagSF_deepcsv_M_down[23];   //[nJet]
   Float_t         Jet_btagSF_deepcsv_M[23];   //[nJet]
   Float_t         Jet_btagSF_deepcsv_M_up[23];   //[nJet]
   Float_t         Jet_btagSF_deepcsv_shape_down_hf[23];   //[nJet]
   Float_t         Jet_btagSF_deepcsv_shape[23];   //[nJet]
   Float_t         Jet_btagSF_deepcsv_shape_up_cferr1[23];   //[nJet]
   Float_t         Jet_btagSF_deepcsv_shape_up_jes[23];   //[nJet]
   Float_t         Jet_btagSF_deepcsv_shape_down_cferr2[23];   //[nJet]
   Float_t         Jet_btagSF_deepcsv_shape_up_lf[23];   //[nJet]
   Float_t         Jet_btagSF_deepcsv_shape_down_lf[23];   //[nJet]
   Float_t         Jet_btagSF_deepcsv_shape_down_cferr1[23];   //[nJet]
   Float_t         Jet_btagSF_deepcsv_shape_up_lfstats1[23];   //[nJet]
   Float_t         Jet_btagSF_deepcsv_shape_up_lfstats2[23];   //[nJet]
   Float_t         Jet_btagSF_deepcsv_shape_up_hfstats1[23];   //[nJet]
   Float_t         Jet_btagSF_deepcsv_shape_up_hfstats2[23];   //[nJet]
   Float_t         Jet_btagSF_deepcsv_shape_down_lfstats2[23];   //[nJet]
   Float_t         Jet_btagSF_deepcsv_shape_up_hf[23];   //[nJet]
   Float_t         Jet_btagSF_deepcsv_shape_down_lfstats1[23];   //[nJet]
   Float_t         Jet_btagSF_deepcsv_shape_down_jes[23];   //[nJet]
   Float_t         Jet_btagSF_deepcsv_shape_down_hfstats2[23];   //[nJet]
   Float_t         Jet_btagSF_deepcsv_shape_down_hfstats1[23];   //[nJet]
   Float_t         Jet_btagSF_deepcsv_shape_up_cferr2[23];   //[nJet]
   Float_t         Jet_PUIDSF_loose[23];   //[nJet]
   Float_t         Jet_PUIDSF_loose_up[23];   //[nJet]
   Float_t         Jet_PUIDSF_loose_down[23];   //[nJet]
   Float_t         Jet_PUIDSF_medium[23];   //[nJet]
   Float_t         Jet_PUIDSF_medium_up[23];   //[nJet]
   Float_t         Jet_PUIDSF_medium_down[23];   //[nJet]
   Float_t         Jet_PUIDSF_tight[23];   //[nJet]
   Float_t         Jet_PUIDSF_tight_up[23];   //[nJet]
   Float_t         Jet_PUIDSF_tight_down[23];   //[nJet]
   Float_t         Lepton_rochesterSF[3];   //[nLepton]
   Int_t           TriggerEmulator[6];
   Int_t           EMTFbug_veto;
   Int_t           run_period;
   Int_t           Trigger_sngEl;
   Int_t           Trigger_sngMu;
   Int_t           Trigger_dblEl;
   Int_t           Trigger_dblMu;
   Int_t           Trigger_ElMu;
   Float_t         TriggerEffWeight_1l;
   Float_t         TriggerEffWeight_1l_u;
   Float_t         TriggerEffWeight_1l_d;
   Float_t         TriggerEffWeight_2l;
   Float_t         TriggerEffWeight_2l_u;
   Float_t         TriggerEffWeight_2l_d;
   Float_t         TriggerEffWeight_3l;
   Float_t         TriggerEffWeight_3l_u;
   Float_t         TriggerEffWeight_3l_d;
   Float_t         TriggerEffWeight_4l;
   Float_t         TriggerEffWeight_4l_u;
   Float_t         TriggerEffWeight_4l_d;
   Float_t         TriggerEffWeight_sngEl;
   Float_t         TriggerEffWeight_sngMu;
   Float_t         TriggerEffWeight_dblEl;
   Float_t         TriggerEffWeight_dblMu;
   Float_t         TriggerEffWeight_ElMu;
   Float_t         Lepton_RecoSF[3];   //[nLepton]
   Float_t         Lepton_RecoSF_Up[3];   //[nLepton]
   Float_t         Lepton_RecoSF_Down[3];   //[nLepton]
   Float_t         Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_IdIsoSF[3];   //[nLepton]
   Float_t         Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_IdIsoSF_Up[3];   //[nLepton]
   Float_t         Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_IdIsoSF_Down[3];   //[nLepton]
   Float_t         Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_IdIsoSF_Syst[3];   //[nLepton]
   Float_t         Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_TotSF[3];   //[nLepton]
   Float_t         Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_TotSF_Up[3];   //[nLepton]
   Float_t         Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_TotSF_Down[3];   //[nLepton]
   Float_t         Lepton_tightElectron_mvaFall17V1Iso_WP90_tthmva_70_IdIsoSF[3];   //[nLepton]
   Float_t         Lepton_tightElectron_mvaFall17V1Iso_WP90_tthmva_70_IdIsoSF_Up[3];   //[nLepton]
   Float_t         Lepton_tightElectron_mvaFall17V1Iso_WP90_tthmva_70_IdIsoSF_Down[3];   //[nLepton]
   Float_t         Lepton_tightElectron_mvaFall17V1Iso_WP90_tthmva_70_IdIsoSF_Syst[3];   //[nLepton]
   Float_t         Lepton_tightElectron_mvaFall17V1Iso_WP90_tthmva_70_TotSF[3];   //[nLepton]
   Float_t         Lepton_tightElectron_mvaFall17V1Iso_WP90_tthmva_70_TotSF_Up[3];   //[nLepton]
   Float_t         Lepton_tightElectron_mvaFall17V1Iso_WP90_tthmva_70_TotSF_Down[3];   //[nLepton]
   Float_t         Lepton_tightElectron_mvaFall17V1Iso_WP90_IdIsoSF[3];   //[nLepton]
   Float_t         Lepton_tightElectron_mvaFall17V1Iso_WP90_IdIsoSF_Up[3];   //[nLepton]
   Float_t         Lepton_tightElectron_mvaFall17V1Iso_WP90_IdIsoSF_Down[3];   //[nLepton]
   Float_t         Lepton_tightElectron_mvaFall17V1Iso_WP90_IdIsoSF_Syst[3];   //[nLepton]
   Float_t         Lepton_tightElectron_mvaFall17V1Iso_WP90_TotSF[3];   //[nLepton]
   Float_t         Lepton_tightElectron_mvaFall17V1Iso_WP90_TotSF_Up[3];   //[nLepton]
   Float_t         Lepton_tightElectron_mvaFall17V1Iso_WP90_TotSF_Down[3];   //[nLepton]
   Float_t         Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_tthmva_70_IdIsoSF[3];   //[nLepton]
   Float_t         Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_tthmva_70_IdIsoSF_Up[3];   //[nLepton]
   Float_t         Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_tthmva_70_IdIsoSF_Down[3];   //[nLepton]
   Float_t         Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_tthmva_70_IdIsoSF_Syst[3];   //[nLepton]
   Float_t         Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_tthmva_70_TotSF[3];   //[nLepton]
   Float_t         Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_tthmva_70_TotSF_Up[3];   //[nLepton]
   Float_t         Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_tthmva_70_TotSF_Down[3];   //[nLepton]
   Float_t         Lepton_tightMuon_cut_Tight_HWWW_tthmva_80_IdIsoSF[3];   //[nLepton]
   Float_t         Lepton_tightMuon_cut_Tight_HWWW_tthmva_80_IdIsoSF_Up[3];   //[nLepton]
   Float_t         Lepton_tightMuon_cut_Tight_HWWW_tthmva_80_IdIsoSF_Down[3];   //[nLepton]
   Float_t         Lepton_tightMuon_cut_Tight_HWWW_tthmva_80_IdIsoSF_Syst[3];   //[nLepton]
   Float_t         Lepton_tightMuon_cut_Tight_HWWW_tthmva_80_TotSF[3];   //[nLepton]
   Float_t         Lepton_tightMuon_cut_Tight_HWWW_tthmva_80_TotSF_Up[3];   //[nLepton]
   Float_t         Lepton_tightMuon_cut_Tight_HWWW_tthmva_80_TotSF_Down[3];   //[nLepton]
   Float_t         Lepton_tightMuon_cut_Tight_HWWW_IdIsoSF[3];   //[nLepton]
   Float_t         Lepton_tightMuon_cut_Tight_HWWW_IdIsoSF_Up[3];   //[nLepton]
   Float_t         Lepton_tightMuon_cut_Tight_HWWW_IdIsoSF_Down[3];   //[nLepton]
   Float_t         Lepton_tightMuon_cut_Tight_HWWW_IdIsoSF_Syst[3];   //[nLepton]
   Float_t         Lepton_tightMuon_cut_Tight_HWWW_TotSF[3];   //[nLepton]
   Float_t         Lepton_tightMuon_cut_Tight_HWWW_TotSF_Up[3];   //[nLepton]
   Float_t         Lepton_tightMuon_cut_Tight_HWWW_TotSF_Down[3];   //[nLepton]
   Float_t         puWeight_2018;
   Float_t         puWeight;
   Float_t         puWeight_2018Up;
   Float_t         puWeightUp;
   Float_t         puWeight_2018Down;
   Float_t         puWeightDown;
   Float_t         mll;
   Float_t         dphill;
   Float_t         yll;
   Float_t         ptll;
   Float_t         pt1;
   Float_t         pt2;
   Float_t         mth;
   Float_t         mcoll;
   Float_t         mcollWW;
   Float_t         mTi;
   Float_t         mTe;
   Float_t         choiMass;
   Float_t         mR;
   Float_t         mT2;
   Float_t         channel;
   Float_t         drll;
   Float_t         dphilljet;
   Float_t         dphilljetjet;
   Float_t         dphilljetjet_cut;
   Float_t         dphillmet;
   Float_t         dphilmet;
   Float_t         dphilmet1;
   Float_t         dphilmet2;
   Float_t         mtw1;
   Float_t         mtw2;
   Float_t         mjj;
   Float_t         detajj;
   Float_t         njet;
   Float_t         mllWgSt;
   Float_t         drllWgSt;
   Float_t         mllThird;
   Float_t         mllOneThree;
   Float_t         mllTwoThree;
   Float_t         drllOneThree;
   Float_t         drllTwoThree;
   Float_t         dphijet1met;
   Float_t         dphijet2met;
   Float_t         dphijjmet;
   Float_t         dphijjmet_cut;
   Float_t         dphilep1jet1;
   Float_t         dphilep1jet2;
   Float_t         dphilep2jet1;
   Float_t         dphilep2jet2;
   Float_t         mindetajl;
   Float_t         detall;
   Float_t         dphijj;
   Float_t         maxdphilepjj;
   Float_t         dphilep1jj;
   Float_t         dphilep2jj;
   Float_t         ht;
   Float_t         vht_pt;
   Float_t         vht_phi;
   Float_t         projpfmet;
   Float_t         dphiltkmet;
   Float_t         projtkmet;
   Float_t         mpmet;
   Float_t         pTWW;
   Float_t         pTHjj;
   Float_t         recoil;
   Float_t         jetpt1_cut;
   Float_t         jetpt2_cut;
   Float_t         dphilljet_cut;
   Float_t         dphijet1met_cut;
   Float_t         dphijet2met_cut;
   Float_t         PfMetDivSumMet;
   Float_t         upara;
   Float_t         uperp;
   Float_t         m2ljj20;
   Float_t         m2ljj30;
   Float_t         ptTOT_cut;
   Float_t         mTOT_cut;
   Float_t         OLV1_cut;
   Float_t         OLV2_cut;
   Float_t         Ceta_cut;
   Float_t         mlljj20_whss;
   Float_t         mlljj30_whss;
   Float_t         WlepPt_whss;
   Float_t         WlepMt_whss;
   Float_t         WH3l_dphilmet[3];
   Float_t         WH3l_drOSll[3];
   Float_t         WH3l_ZVeto;
   Bool_t          WH3l_flagOSSF;
   Float_t         ZH3l_checkmZ;
   Float_t         ZH3l_njet;
   Float_t         ZH3l_pdgid_l;
   Float_t         WH3l_mOSll[3];
   Float_t         WH3l_mtWWW;
   Float_t         ZH3l_mTlmet;
   Float_t         WH3l_ptOSll[3];
   Float_t         ZH3l_mTlmetj;
   Float_t         ZH3l_pTlmetjj;
   Float_t         WH3l_ptlll;
   Int_t           WH3l_chlll;
   Float_t         ZH3l_Z4lveto;
   Float_t         ZH3l_dmjjmW;
   Float_t         ZH3l_dphilmetjj;
   Float_t         ZH3l_mTlmetjj;
   Float_t         WH3l_ptW;
   Float_t         ZH3l_pTlmetj;
   Float_t         ZH3l_pTZ;
   Float_t         WH3l_mtlmet[3];
   Float_t         WH3l_dphilllmet;
   Int_t           WH3l_nbjet;
   Float_t         ZH3l_dphilmetj;
   Int_t           WH3l_njet;
   Float_t         WH3l_ptWWW;
   Float_t         WH3l_mlll;
   Float_t         pfmetPhi_zh4l;
   Float_t         z0Mass_zh4l;
   Float_t         z0Pt_zh4l;
   Float_t         z1Mass_zh4l;
   Float_t         z1Pt_zh4l;
   Float_t         zaMass_zh4l;
   Float_t         zbMass_zh4l;
   Float_t         flagZ1SF_zh4l;
   Float_t         z0DeltaPhi_zh4l;
   Float_t         z1DeltaPhi_zh4l;
   Float_t         zaDeltaPhi_zh4l;
   Float_t         zbDeltaPhi_zh4l;
   Float_t         minDeltaPhi_zh4l;
   Float_t         z0DeltaR_zh4l;
   Float_t         z1DeltaR_zh4l;
   Float_t         zaDeltaR_zh4l;
   Float_t         zbDeltaR_zh4l;
   Float_t         lep1Mt_zh4l;
   Float_t         lep2Mt_zh4l;
   Float_t         lep3Mt_zh4l;
   Float_t         lep4Mt_zh4l;
   Float_t         minMt_zh4l;
   Float_t         z1Mt_zh4l;
   Float_t         mllll_zh4l;
   Float_t         chllll_zh4l;
   Float_t         z1dPhi_lep1MET_zh4l;
   Float_t         z1dPhi_lep2MET_zh4l;
   Float_t         z1mindPhi_lepMET_zh4l;
   Float_t         LepCut2l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW;
   Float_t         LepSF3l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW_tthmva_80;
   Float_t         SFweight4l;
   Float_t         LepSF4l__ele_mvaFall17V1Iso_WP90_SS__Do;
   Float_t         LepCut4l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW;
   Float_t         LepCut2l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW_tthmva_80;
   Float_t         LepCut3l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW;
   Float_t         LepSF3l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW_tthmva_80;
   Float_t         LepSF2l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__Do;
   Float_t         LepSF4l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__Do;
   Float_t         LepSF4l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW;
   Float_t         LepCut3l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW_tthmva_80;
   Float_t         LepSF3l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__Up;
   Float_t         LepCut2l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW;
   Float_t         LepSF4l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW_tthmva_80;
   Float_t         LepSF3l__ele_mvaFall17V1Iso_WP90_SS__Do;
   Float_t         LepCut2l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW_tthmva_80;
   Float_t         LepSF4l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__Up;
   Float_t         LepSF2l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__Up;
   Float_t         LepSF2l__mu_cut_Tight_HWWW_tthmva_80__Up;
   Float_t         LepCut4l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW_tthmva_80;
   Float_t         LepSF2l__ele_mvaFall17V1Iso_WP90_SS__Up;
   Float_t         LepCut4l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW;
   Float_t         LepSF4l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW_tthmva_80;
   Float_t         LepSF3l__ele_mvaFall17V1Iso_WP90__Do;
   Float_t         LepSF2l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW_tthmva_80;
   Float_t         LepSF2l__ele_mvaFall17V1Iso_WP90__Do;
   Float_t         LepSF3l__mu_cut_Tight_HWWW_tthmva_80__Up;
   Float_t         LepSF3l__mu_cut_Tight_HWWW__Up;
   Float_t         LepSF3l__mu_cut_Tight_HWWW_tthmva_80__Do;
   Float_t         LepSF3l__ele_mvaFall17V1Iso_WP90_tthmva_70__Up;
   Float_t         LepCut4l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW_tthmva_80;
   Float_t         LepSF2l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW_tthmva_80;
   Float_t         LepCut3l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW;
   Float_t         LepSF3l__ele_mvaFall17V1Iso_WP90__Up;
   Float_t         LepSF3l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW;
   Float_t         LepSF2l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW;
   Float_t         LepSF4l__ele_mvaFall17V1Iso_WP90_SS__Up;
   Float_t         LepCut3l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW;
   Float_t         LepSF2l__ele_mvaFall17V1Iso_WP90__Up;
   Float_t         GenLepMatch3l;
   Float_t         LepSF2l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW_tthmva_80;
   Float_t         LepSF2l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW;
   Float_t         LepSF4l__mu_cut_Tight_HWWW_tthmva_80__Do;
   Float_t         LepCut4l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW;
   Float_t         LepSF3l__ele_mvaFall17V1Iso_WP90_tthmva_70__Do;
   Float_t         LepSF4l__mu_cut_Tight_HWWW__Do;
   Float_t         LepSF4l__mu_cut_Tight_HWWW_tthmva_80__Up;
   Float_t         LepSF4l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW_tthmva_80;
   Float_t         SFweight2lMH;
   Float_t         LepSF3l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW_tthmva_80;
   Float_t         LepSF2l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW;
   Float_t         LepSF2l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW;
   Float_t         LepSF3l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW;
   Float_t         LepSF3l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW_tthmva_80;
   Float_t         LepSF4l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW_tthmva_80;
   Float_t         METFilter_MC;
   Float_t         LepCut2l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW_tthmva_80;
   Float_t         LepSF3l__mu_cut_Tight_HWWW__Do;
   Float_t         GenLepMatch2l;
   Float_t         LepCut4l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW_tthmva_80;
   Float_t         LepSF2l__mu_cut_Tight_HWWW__Up;
   Float_t         LepSF2l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW_tthmva_80;
   Float_t         LepSF4l__ele_mvaFall17V1Iso_WP90__Up;
   Float_t         LepCut3l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW_tthmva_80;
   Float_t         SFweight2l;
   Float_t         LepCut2l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW;
   Float_t         LepSF2l__ele_mvaFall17V1Iso_WP90_tthmva_70__Up;
   Float_t         LepSF4l__ele_mvaFall17V1Iso_WP90_tthmva_70__Up;
   Float_t         LepCut3l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW;
   Float_t         LepSF3l__ele_mvaFall17V1Iso_WP90_SS__Up;
   Float_t         LepSF4l__ele_mvaFall17V1Iso_WP90__Do;
   Float_t         LepSF3l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__Do;
   Float_t         LepSF3l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW;
   Float_t         LepCut2l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW_tthmva_80;
   Float_t         LepSF2l__mu_cut_Tight_HWWW__Do;
   Float_t         LepCut4l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW;
   Float_t         LepSF2l__mu_cut_Tight_HWWW_tthmva_80__Do;
   Float_t         LepCut3l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW_tthmva_80;
   Float_t         SFweight3l;
   Float_t         GenLepMatch4l;
   Float_t         LepCut4l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW_tthmva_80;
   Float_t         LepSF4l__mu_cut_Tight_HWWW__Up;
   Float_t         LepSF4l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW;
   Float_t         XSWeight;
   Float_t         LepSF4l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW;
   Float_t         LepSF2l__ele_mvaFall17V1Iso_WP90_SS__Do;
   Float_t         LepSF3l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW;
   Float_t         LepSF4l__ele_mvaFall17V1Iso_WP90_tthmva_70__Do;
   Float_t         LepSF2l__ele_mvaFall17V1Iso_WP90_tthmva_70__Do;
   Float_t         LepCut3l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW_tthmva_80;
   Float_t         LepSF4l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW;
   Float_t         LepCut2l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW;
   Float_t         embed_tautauveto;
   Float_t         BoostedWtagSF_nominal;
   Float_t         BoostedWtagSF_up;
   Float_t         BoostedWtagSF_down;
   Float_t         dymva_alt_dnn_2j;
   Float_t         dymva_alt_dnn_VH;
   Float_t         dymva_alt_dnn_0j;
   Float_t         dymva_alt_dnn_1j;
   Float_t         dymva_alt_bdt_VBF;
   Float_t         dymva_alt_bdt_0j;
   Float_t         dymva_alt_dnn_VBF;
   Float_t         dymva_alt_bdt_VH;
   Float_t         dymva_alt_bdt_2j;
   Float_t         dymva_alt_bdt_1j;
   Float_t         Mucca2HDMFull;
   Float_t         hm;
   Float_t         me_vbf_hsm;
   Float_t         me_vbf_hm;
   Float_t         me_vbf_hp;
   Float_t         me_vbf_hl;
   Float_t         me_vbf_mixhm;
   Float_t         me_vbf_mixhp;
   Float_t         me_wh_hsm;
   Float_t         me_wh_hm;
   Float_t         me_wh_hp;
   Float_t         me_wh_hl;
   Float_t         me_wh_mixhm;
   Float_t         me_wh_mixhp;
   Float_t         me_zh_hsm;
   Float_t         me_zh_hm;
   Float_t         me_zh_hp;
   Float_t         me_zh_hl;
   Float_t         me_zh_mixhm;
   Float_t         me_zh_mixhp;
   Float_t         me_qcd_hsm;
   Float_t         pjjSm_wh;
   Float_t         pjjTr_wh;
   Float_t         pjjSm_zh;
   Float_t         pjjTr_zh;
   Float_t         meAvg_wh;
   Float_t         meAvg_zh;

   // List of branches
   TBranch        *b_run;   //!
   TBranch        *b_luminosityBlock;   //!
   TBranch        *b_event;   //!
   TBranch        *b_HTXS_Higgs_pt;   //!
   TBranch        *b_HTXS_Higgs_y;   //!
   TBranch        *b_HTXS_stage1_1_cat_pTjet25GeV;   //!
   TBranch        *b_HTXS_stage1_1_cat_pTjet30GeV;   //!
   TBranch        *b_HTXS_stage1_1_fine_cat_pTjet25GeV;   //!
   TBranch        *b_HTXS_stage1_1_fine_cat_pTjet30GeV;   //!
   TBranch        *b_HTXS_stage1_2_cat_pTjet25GeV;   //!
   TBranch        *b_HTXS_stage1_2_cat_pTjet30GeV;   //!
   TBranch        *b_HTXS_stage1_2_fine_cat_pTjet25GeV;   //!
   TBranch        *b_HTXS_stage1_2_fine_cat_pTjet30GeV;   //!
   TBranch        *b_HTXS_stage_0;   //!
   TBranch        *b_HTXS_stage_1_pTjet25;   //!
   TBranch        *b_HTXS_stage_1_pTjet30;   //!
   TBranch        *b_HTXS_njets25;   //!
   TBranch        *b_HTXS_njets30;   //!
   TBranch        *b_btagWeight_CSVV2;   //!
   TBranch        *b_btagWeight_DeepCSVB;   //!
   TBranch        *b_CaloMET_phi;   //!
   TBranch        *b_CaloMET_pt;   //!
   TBranch        *b_CaloMET_sumEt;   //!
   TBranch        *b_ChsMET_phi;   //!
   TBranch        *b_ChsMET_pt;   //!
   TBranch        *b_ChsMET_sumEt;   //!
   TBranch        *b_nCorrT1METJet;   //!
   TBranch        *b_CorrT1METJet_area;   //!
   TBranch        *b_CorrT1METJet_eta;   //!
   TBranch        *b_CorrT1METJet_muonSubtrFactor;   //!
   TBranch        *b_CorrT1METJet_phi;   //!
   TBranch        *b_CorrT1METJet_rawPt;   //!
   TBranch        *b_nElectron;   //!
   TBranch        *b_Electron_deltaEtaSC;   //!
   TBranch        *b_Electron_dr03EcalRecHitSumEt;   //!
   TBranch        *b_Electron_dr03HcalDepth1TowerSumEt;   //!
   TBranch        *b_Electron_dr03TkSumPt;   //!
   TBranch        *b_Electron_dr03TkSumPtHEEP;   //!
   TBranch        *b_Electron_dxy;   //!
   TBranch        *b_Electron_dxyErr;   //!
   TBranch        *b_Electron_dz;   //!
   TBranch        *b_Electron_dzErr;   //!
   TBranch        *b_Electron_eCorr;   //!
   TBranch        *b_Electron_eInvMinusPInv;   //!
   TBranch        *b_Electron_energyErr;   //!
   TBranch        *b_Electron_eta;   //!
   TBranch        *b_Electron_hoe;   //!
   TBranch        *b_Electron_ip3d;   //!
   TBranch        *b_Electron_jetPtRelv2;   //!
   TBranch        *b_Electron_jetRelIso;   //!
   TBranch        *b_Electron_mass;   //!
   TBranch        *b_Electron_miniPFRelIso_all;   //!
   TBranch        *b_Electron_miniPFRelIso_chg;   //!
   TBranch        *b_Electron_mvaFall17V1Iso;   //!
   TBranch        *b_Electron_mvaFall17V1noIso;   //!
   TBranch        *b_Electron_mvaFall17V2Iso;   //!
   TBranch        *b_Electron_mvaFall17V2noIso;   //!
   TBranch        *b_Electron_pfRelIso03_all;   //!
   TBranch        *b_Electron_pfRelIso03_chg;   //!
   TBranch        *b_Electron_phi;   //!
   TBranch        *b_Electron_pt;   //!
   TBranch        *b_Electron_r9;   //!
   TBranch        *b_Electron_scEtOverPt;   //!
   TBranch        *b_Electron_sieie;   //!
   TBranch        *b_Electron_sip3d;   //!
   TBranch        *b_Electron_mvaTTH;   //!
   TBranch        *b_Electron_charge;   //!
   TBranch        *b_Electron_cutBased;   //!
   TBranch        *b_Electron_cutBased_Fall17_V1;   //!
   TBranch        *b_Electron_jetIdx;   //!
   TBranch        *b_Electron_pdgId;   //!
   TBranch        *b_Electron_photonIdx;   //!
   TBranch        *b_Electron_tightCharge;   //!
   TBranch        *b_Electron_vidNestedWPBitmap;   //!
   TBranch        *b_Electron_vidNestedWPBitmapHEEP;   //!
   TBranch        *b_Electron_convVeto;   //!
   TBranch        *b_Electron_cutBased_HEEP;   //!
   TBranch        *b_Electron_isPFcand;   //!
   TBranch        *b_Electron_lostHits;   //!
   TBranch        *b_Electron_mvaFall17V1Iso_WP80;   //!
   TBranch        *b_Electron_mvaFall17V1Iso_WP90;   //!
   TBranch        *b_Electron_mvaFall17V1Iso_WPL;   //!
   TBranch        *b_Electron_mvaFall17V1noIso_WP80;   //!
   TBranch        *b_Electron_mvaFall17V1noIso_WP90;   //!
   TBranch        *b_Electron_mvaFall17V1noIso_WPL;   //!
   TBranch        *b_Electron_mvaFall17V2Iso_WP80;   //!
   TBranch        *b_Electron_mvaFall17V2Iso_WP90;   //!
   TBranch        *b_Electron_mvaFall17V2Iso_WPL;   //!
   TBranch        *b_Electron_mvaFall17V2noIso_WP80;   //!
   TBranch        *b_Electron_mvaFall17V2noIso_WP90;   //!
   TBranch        *b_Electron_mvaFall17V2noIso_WPL;   //!
   TBranch        *b_Electron_seedGain;   //!
   TBranch        *b_Flag_ecalBadCalibFilterV2;   //!
   TBranch        *b_nFatJet;   //!
   TBranch        *b_FatJet_area;   //!
   TBranch        *b_FatJet_btagCMVA;   //!
   TBranch        *b_FatJet_btagCSVV2;   //!
   TBranch        *b_FatJet_btagDDBvL;   //!
   TBranch        *b_FatJet_btagDDBvL_noMD;   //!
   TBranch        *b_FatJet_btagDDCvB;   //!
   TBranch        *b_FatJet_btagDDCvB_noMD;   //!
   TBranch        *b_FatJet_btagDDCvL;   //!
   TBranch        *b_FatJet_btagDDCvL_noMD;   //!
   TBranch        *b_FatJet_btagDeepB;   //!
   TBranch        *b_FatJet_btagHbb;   //!
   TBranch        *b_FatJet_deepTagMD_H4qvsQCD;   //!
   TBranch        *b_FatJet_deepTagMD_HbbvsQCD;   //!
   TBranch        *b_FatJet_deepTagMD_TvsQCD;   //!
   TBranch        *b_FatJet_deepTagMD_WvsQCD;   //!
   TBranch        *b_FatJet_deepTagMD_ZHbbvsQCD;   //!
   TBranch        *b_FatJet_deepTagMD_ZHccvsQCD;   //!
   TBranch        *b_FatJet_deepTagMD_ZbbvsQCD;   //!
   TBranch        *b_FatJet_deepTagMD_ZvsQCD;   //!
   TBranch        *b_FatJet_deepTagMD_bbvsLight;   //!
   TBranch        *b_FatJet_deepTagMD_ccvsLight;   //!
   TBranch        *b_FatJet_deepTag_H;   //!
   TBranch        *b_FatJet_deepTag_QCD;   //!
   TBranch        *b_FatJet_deepTag_QCDothers;   //!
   TBranch        *b_FatJet_deepTag_TvsQCD;   //!
   TBranch        *b_FatJet_deepTag_WvsQCD;   //!
   TBranch        *b_FatJet_deepTag_ZvsQCD;   //!
   TBranch        *b_FatJet_eta;   //!
   TBranch        *b_FatJet_mass;   //!
   TBranch        *b_FatJet_msoftdrop;   //!
   TBranch        *b_FatJet_n2b1;   //!
   TBranch        *b_FatJet_n3b1;   //!
   TBranch        *b_FatJet_phi;   //!
   TBranch        *b_FatJet_pt;   //!
   TBranch        *b_FatJet_rawFactor;   //!
   TBranch        *b_FatJet_tau1;   //!
   TBranch        *b_FatJet_tau2;   //!
   TBranch        *b_FatJet_tau3;   //!
   TBranch        *b_FatJet_tau4;   //!
   TBranch        *b_FatJet_lsf3;   //!
   TBranch        *b_FatJet_jetId;   //!
   TBranch        *b_FatJet_subJetIdx1;   //!
   TBranch        *b_FatJet_subJetIdx2;   //!
   TBranch        *b_FatJet_electronIdx3SJ;   //!
   TBranch        *b_FatJet_muonIdx3SJ;   //!
   TBranch        *b_nFsrPhoton;   //!
   TBranch        *b_FsrPhoton_dROverEt2;   //!
   TBranch        *b_FsrPhoton_eta;   //!
   TBranch        *b_FsrPhoton_phi;   //!
   TBranch        *b_FsrPhoton_pt;   //!
   TBranch        *b_FsrPhoton_relIso03;   //!
   TBranch        *b_FsrPhoton_muonIdx;   //!
   TBranch        *b_nGenJetAK8;   //!
   TBranch        *b_GenJetAK8_eta;   //!
   TBranch        *b_GenJetAK8_mass;   //!
   TBranch        *b_GenJetAK8_phi;   //!
   TBranch        *b_GenJetAK8_pt;   //!
   TBranch        *b_nGenJet;   //!
   TBranch        *b_GenJet_eta;   //!
   TBranch        *b_GenJet_mass;   //!
   TBranch        *b_GenJet_phi;   //!
   TBranch        *b_GenJet_pt;   //!
   TBranch        *b_nGenPart;   //!
   TBranch        *b_GenPart_eta;   //!
   TBranch        *b_GenPart_mass;   //!
   TBranch        *b_GenPart_phi;   //!
   TBranch        *b_GenPart_pt;   //!
   TBranch        *b_GenPart_genPartIdxMother;   //!
   TBranch        *b_GenPart_pdgId;   //!
   TBranch        *b_GenPart_status;   //!
   TBranch        *b_GenPart_statusFlags;   //!
   TBranch        *b_nSubGenJetAK8;   //!
   TBranch        *b_SubGenJetAK8_eta;   //!
   TBranch        *b_SubGenJetAK8_mass;   //!
   TBranch        *b_SubGenJetAK8_phi;   //!
   TBranch        *b_SubGenJetAK8_pt;   //!
   TBranch        *b_Generator_binvar;   //!
   TBranch        *b_Generator_scalePDF;   //!
   TBranch        *b_Generator_weight;   //!
   TBranch        *b_Generator_x1;   //!
   TBranch        *b_Generator_x2;   //!
   TBranch        *b_Generator_xpdf1;   //!
   TBranch        *b_Generator_xpdf2;   //!
   TBranch        *b_Generator_id1;   //!
   TBranch        *b_Generator_id2;   //!
   TBranch        *b_nGenVisTau;   //!
   TBranch        *b_GenVisTau_eta;   //!
   TBranch        *b_GenVisTau_mass;   //!
   TBranch        *b_GenVisTau_phi;   //!
   TBranch        *b_GenVisTau_pt;   //!
   TBranch        *b_GenVisTau_charge;   //!
   TBranch        *b_GenVisTau_genPartIdxMother;   //!
   TBranch        *b_GenVisTau_status;   //!
   TBranch        *b_genWeight;   //!
   TBranch        *b_nPSWeight;   //!
   TBranch        *b_PSWeight;   //!
   TBranch        *b_nIsoTrack;   //!
   TBranch        *b_IsoTrack_dxy;   //!
   TBranch        *b_IsoTrack_dz;   //!
   TBranch        *b_IsoTrack_eta;   //!
   TBranch        *b_IsoTrack_pfRelIso03_all;   //!
   TBranch        *b_IsoTrack_pfRelIso03_chg;   //!
   TBranch        *b_IsoTrack_phi;   //!
   TBranch        *b_IsoTrack_pt;   //!
   TBranch        *b_IsoTrack_miniPFRelIso_all;   //!
   TBranch        *b_IsoTrack_miniPFRelIso_chg;   //!
   TBranch        *b_IsoTrack_fromPV;   //!
   TBranch        *b_IsoTrack_pdgId;   //!
   TBranch        *b_IsoTrack_isHighPurityTrack;   //!
   TBranch        *b_IsoTrack_isPFcand;   //!
   TBranch        *b_IsoTrack_isFromLostTrack;   //!
   TBranch        *b_nJet;   //!
   TBranch        *b_Jet_area;   //!
   TBranch        *b_Jet_btagCMVA;   //!
   TBranch        *b_Jet_btagCSVV2;   //!
   TBranch        *b_Jet_btagDeepB;   //!
   TBranch        *b_Jet_btagDeepC;   //!
   TBranch        *b_Jet_btagDeepFlavB;   //!
   TBranch        *b_Jet_btagDeepFlavC;   //!
   TBranch        *b_Jet_chEmEF;   //!
   TBranch        *b_Jet_chFPV0EF;   //!
   TBranch        *b_Jet_chFPV1EF;   //!
   TBranch        *b_Jet_chFPV2EF;   //!
   TBranch        *b_Jet_chFPV3EF;   //!
   TBranch        *b_Jet_chHEF;   //!
   TBranch        *b_Jet_eta;   //!
   TBranch        *b_Jet_mass;   //!
   TBranch        *b_Jet_muEF;   //!
   TBranch        *b_Jet_muonSubtrFactor;   //!
   TBranch        *b_Jet_neEmEF;   //!
   TBranch        *b_Jet_neHEF;   //!
   TBranch        *b_Jet_phi;   //!
   TBranch        *b_Jet_pt;   //!
   TBranch        *b_Jet_puIdDisc;   //!
   TBranch        *b_Jet_qgl;   //!
   TBranch        *b_Jet_rawFactor;   //!
   TBranch        *b_Jet_bRegCorr;   //!
   TBranch        *b_Jet_bRegRes;   //!
   TBranch        *b_Jet_cRegCorr;   //!
   TBranch        *b_Jet_cRegRes;   //!
   TBranch        *b_Jet_electronIdx1;   //!
   TBranch        *b_Jet_electronIdx2;   //!
   TBranch        *b_Jet_jetId;   //!
   TBranch        *b_Jet_muonIdx1;   //!
   TBranch        *b_Jet_muonIdx2;   //!
   TBranch        *b_Jet_nConstituents;   //!
   TBranch        *b_Jet_nElectrons;   //!
   TBranch        *b_Jet_nMuons;   //!
   TBranch        *b_Jet_puId;   //!
   TBranch        *b_GenMET_phi;   //!
   TBranch        *b_GenMET_pt;   //!
   TBranch        *b_MET_MetUnclustEnUpDeltaX;   //!
   TBranch        *b_MET_MetUnclustEnUpDeltaY;   //!
   TBranch        *b_MET_covXX;   //!
   TBranch        *b_MET_covXY;   //!
   TBranch        *b_MET_covYY;   //!
   TBranch        *b_MET_phi;   //!
   TBranch        *b_MET_pt;   //!
   TBranch        *b_MET_significance;   //!
   TBranch        *b_MET_sumEt;   //!
   TBranch        *b_MET_sumPtUnclustered;   //!
   TBranch        *b_nMuon;   //!
   TBranch        *b_Muon_dxy;   //!
   TBranch        *b_Muon_dxyErr;   //!
   TBranch        *b_Muon_dxybs;   //!
   TBranch        *b_Muon_dz;   //!
   TBranch        *b_Muon_dzErr;   //!
   TBranch        *b_Muon_eta;   //!
   TBranch        *b_Muon_ip3d;   //!
   TBranch        *b_Muon_jetPtRelv2;   //!
   TBranch        *b_Muon_jetRelIso;   //!
   TBranch        *b_Muon_mass;   //!
   TBranch        *b_Muon_miniPFRelIso_all;   //!
   TBranch        *b_Muon_miniPFRelIso_chg;   //!
   TBranch        *b_Muon_pfRelIso03_all;   //!
   TBranch        *b_Muon_pfRelIso03_chg;   //!
   TBranch        *b_Muon_pfRelIso04_all;   //!
   TBranch        *b_Muon_phi;   //!
   TBranch        *b_Muon_pt;   //!
   TBranch        *b_Muon_ptErr;   //!
   TBranch        *b_Muon_segmentComp;   //!
   TBranch        *b_Muon_sip3d;   //!
   TBranch        *b_Muon_softMva;   //!
   TBranch        *b_Muon_tkRelIso;   //!
   TBranch        *b_Muon_tunepRelPt;   //!
   TBranch        *b_Muon_mvaLowPt;   //!
   TBranch        *b_Muon_mvaTTH;   //!
   TBranch        *b_Muon_charge;   //!
   TBranch        *b_Muon_jetIdx;   //!
   TBranch        *b_Muon_nStations;   //!
   TBranch        *b_Muon_nTrackerLayers;   //!
   TBranch        *b_Muon_pdgId;   //!
   TBranch        *b_Muon_tightCharge;   //!
   TBranch        *b_Muon_fsrPhotonIdx;   //!
   TBranch        *b_Muon_highPtId;   //!
   TBranch        *b_Muon_highPurity;   //!
   TBranch        *b_Muon_inTimeMuon;   //!
   TBranch        *b_Muon_isGlobal;   //!
   TBranch        *b_Muon_isPFcand;   //!
   TBranch        *b_Muon_isTracker;   //!
   TBranch        *b_Muon_looseId;   //!
   TBranch        *b_Muon_mediumId;   //!
   TBranch        *b_Muon_mediumPromptId;   //!
   TBranch        *b_Muon_miniIsoId;   //!
   TBranch        *b_Muon_multiIsoId;   //!
   TBranch        *b_Muon_mvaId;   //!
   TBranch        *b_Muon_pfIsoId;   //!
   TBranch        *b_Muon_softId;   //!
   TBranch        *b_Muon_softMvaId;   //!
   TBranch        *b_Muon_tightId;   //!
   TBranch        *b_Muon_tkIsoId;   //!
   TBranch        *b_Muon_triggerIdLoose;   //!
   TBranch        *b_nPhoton;   //!
   TBranch        *b_Photon_eCorr;   //!
   TBranch        *b_Photon_energyErr;   //!
   TBranch        *b_Photon_eta;   //!
   TBranch        *b_Photon_hoe;   //!
   TBranch        *b_Photon_mass;   //!
   TBranch        *b_Photon_mvaID;   //!
   TBranch        *b_Photon_mvaID_Fall17V1p1;   //!
   TBranch        *b_Photon_pfRelIso03_all;   //!
   TBranch        *b_Photon_pfRelIso03_chg;   //!
   TBranch        *b_Photon_phi;   //!
   TBranch        *b_Photon_pt;   //!
   TBranch        *b_Photon_r9;   //!
   TBranch        *b_Photon_sieie;   //!
   TBranch        *b_Photon_charge;   //!
   TBranch        *b_Photon_cutBased;   //!
   TBranch        *b_Photon_cutBased_Fall17V1Bitmap;   //!
   TBranch        *b_Photon_electronIdx;   //!
   TBranch        *b_Photon_jetIdx;   //!
   TBranch        *b_Photon_pdgId;   //!
   TBranch        *b_Photon_vidNestedWPBitmap;   //!
   TBranch        *b_Photon_electronVeto;   //!
   TBranch        *b_Photon_isScEtaEB;   //!
   TBranch        *b_Photon_isScEtaEE;   //!
   TBranch        *b_Photon_mvaID_WP80;   //!
   TBranch        *b_Photon_mvaID_WP90;   //!
   TBranch        *b_Photon_pixelSeed;   //!
   TBranch        *b_Photon_seedGain;   //!
   TBranch        *b_Pileup_nTrueInt;   //!
   TBranch        *b_Pileup_pudensity;   //!
   TBranch        *b_Pileup_gpudensity;   //!
   TBranch        *b_Pileup_nPU;   //!
   TBranch        *b_Pileup_sumEOOT;   //!
   TBranch        *b_Pileup_sumLOOT;   //!
   TBranch        *b_PuppiMET_phi;   //!
   TBranch        *b_PuppiMET_phiJERUp;   //!
   TBranch        *b_PuppiMET_phiJESUp;   //!
   TBranch        *b_PuppiMET_pt;   //!
   TBranch        *b_PuppiMET_ptJERUp;   //!
   TBranch        *b_PuppiMET_ptJESUp;   //!
   TBranch        *b_PuppiMET_sumEt;   //!
   TBranch        *b_RawMET_phi;   //!
   TBranch        *b_RawMET_pt;   //!
   TBranch        *b_RawMET_sumEt;   //!
   TBranch        *b_RawPuppiMET_phi;   //!
   TBranch        *b_RawPuppiMET_pt;   //!
   TBranch        *b_RawPuppiMET_sumEt;   //!
   TBranch        *b_fixedGridRhoFastjetAll;   //!
   TBranch        *b_fixedGridRhoFastjetCentral;   //!
   TBranch        *b_fixedGridRhoFastjetCentralCalo;   //!
   TBranch        *b_fixedGridRhoFastjetCentralChargedPileUp;   //!
   TBranch        *b_fixedGridRhoFastjetCentralNeutral;   //!
   TBranch        *b_nGenDressedLepton;   //!
   TBranch        *b_GenDressedLepton_eta;   //!
   TBranch        *b_GenDressedLepton_mass;   //!
   TBranch        *b_GenDressedLepton_phi;   //!
   TBranch        *b_GenDressedLepton_pt;   //!
   TBranch        *b_GenDressedLepton_pdgId;   //!
   TBranch        *b_GenDressedLepton_hasTauAnc;   //!
   TBranch        *b_nGenIsolatedPhoton;   //!
   TBranch        *b_GenIsolatedPhoton_eta;   //!
   TBranch        *b_GenIsolatedPhoton_mass;   //!
   TBranch        *b_GenIsolatedPhoton_phi;   //!
   TBranch        *b_GenIsolatedPhoton_pt;   //!
   TBranch        *b_nSoftActivityJet;   //!
   TBranch        *b_SoftActivityJet_eta;   //!
   TBranch        *b_SoftActivityJet_phi;   //!
   TBranch        *b_SoftActivityJet_pt;   //!
   TBranch        *b_SoftActivityJetHT;   //!
   TBranch        *b_SoftActivityJetHT10;   //!
   TBranch        *b_SoftActivityJetHT2;   //!
   TBranch        *b_SoftActivityJetHT5;   //!
   TBranch        *b_SoftActivityJetNjets10;   //!
   TBranch        *b_SoftActivityJetNjets2;   //!
   TBranch        *b_SoftActivityJetNjets5;   //!
   TBranch        *b_nSubJet;   //!
   TBranch        *b_SubJet_btagCMVA;   //!
   TBranch        *b_SubJet_btagCSVV2;   //!
   TBranch        *b_SubJet_btagDeepB;   //!
   TBranch        *b_SubJet_eta;   //!
   TBranch        *b_SubJet_mass;   //!
   TBranch        *b_SubJet_n2b1;   //!
   TBranch        *b_SubJet_n3b1;   //!
   TBranch        *b_SubJet_phi;   //!
   TBranch        *b_SubJet_pt;   //!
   TBranch        *b_SubJet_rawFactor;   //!
   TBranch        *b_SubJet_tau1;   //!
   TBranch        *b_SubJet_tau2;   //!
   TBranch        *b_SubJet_tau3;   //!
   TBranch        *b_SubJet_tau4;   //!
   TBranch        *b_nTau;   //!
   TBranch        *b_Tau_chargedIso;   //!
   TBranch        *b_Tau_dxy;   //!
   TBranch        *b_Tau_dz;   //!
   TBranch        *b_Tau_eta;   //!
   TBranch        *b_Tau_leadTkDeltaEta;   //!
   TBranch        *b_Tau_leadTkDeltaPhi;   //!
   TBranch        *b_Tau_leadTkPtOverTauPt;   //!
   TBranch        *b_Tau_mass;   //!
   TBranch        *b_Tau_neutralIso;   //!
   TBranch        *b_Tau_phi;   //!
   TBranch        *b_Tau_photonsOutsideSignalCone;   //!
   TBranch        *b_Tau_pt;   //!
   TBranch        *b_Tau_puCorr;   //!
   TBranch        *b_Tau_rawAntiEle;   //!
   TBranch        *b_Tau_rawAntiEle2018;   //!
   TBranch        *b_Tau_rawDeepTau2017v2p1VSe;   //!
   TBranch        *b_Tau_rawDeepTau2017v2p1VSjet;   //!
   TBranch        *b_Tau_rawDeepTau2017v2p1VSmu;   //!
   TBranch        *b_Tau_rawIso;   //!
   TBranch        *b_Tau_rawIsodR03;   //!
   TBranch        *b_Tau_rawMVAnewDM2017v2;   //!
   TBranch        *b_Tau_rawMVAoldDM;   //!
   TBranch        *b_Tau_rawMVAoldDM2017v1;   //!
   TBranch        *b_Tau_rawMVAoldDM2017v2;   //!
   TBranch        *b_Tau_rawMVAoldDMdR032017v2;   //!
   TBranch        *b_Tau_charge;   //!
   TBranch        *b_Tau_decayMode;   //!
   TBranch        *b_Tau_jetIdx;   //!
   TBranch        *b_Tau_rawAntiEleCat;   //!
   TBranch        *b_Tau_rawAntiEleCat2018;   //!
   TBranch        *b_Tau_idAntiEle;   //!
   TBranch        *b_Tau_idAntiEle2018;   //!
   TBranch        *b_Tau_idAntiMu;   //!
   TBranch        *b_Tau_idDecayMode;   //!
   TBranch        *b_Tau_idDecayModeNewDMs;   //!
   TBranch        *b_Tau_idDeepTau2017v2p1VSe;   //!
   TBranch        *b_Tau_idDeepTau2017v2p1VSjet;   //!
   TBranch        *b_Tau_idDeepTau2017v2p1VSmu;   //!
   TBranch        *b_Tau_idMVAnewDM2017v2;   //!
   TBranch        *b_Tau_idMVAoldDM;   //!
   TBranch        *b_Tau_idMVAoldDM2017v1;   //!
   TBranch        *b_Tau_idMVAoldDM2017v2;   //!
   TBranch        *b_Tau_idMVAoldDMdR032017v2;   //!
   TBranch        *b_TkMET_phi;   //!
   TBranch        *b_TkMET_pt;   //!
   TBranch        *b_TkMET_sumEt;   //!
   TBranch        *b_nTrigObj;   //!
   TBranch        *b_TrigObj_pt;   //!
   TBranch        *b_TrigObj_eta;   //!
   TBranch        *b_TrigObj_phi;   //!
   TBranch        *b_TrigObj_l1pt;   //!
   TBranch        *b_TrigObj_l1pt_2;   //!
   TBranch        *b_TrigObj_l2pt;   //!
   TBranch        *b_TrigObj_id;   //!
   TBranch        *b_TrigObj_l1iso;   //!
   TBranch        *b_TrigObj_l1charge;   //!
   TBranch        *b_TrigObj_filterBits;   //!
   TBranch        *b_genTtbarId;   //!
   TBranch        *b_nOtherPV;   //!
   TBranch        *b_OtherPV_z;   //!
   TBranch        *b_PV_ndof;   //!
   TBranch        *b_PV_x;   //!
   TBranch        *b_PV_y;   //!
   TBranch        *b_PV_z;   //!
   TBranch        *b_PV_chi2;   //!
   TBranch        *b_PV_score;   //!
   TBranch        *b_PV_npvs;   //!
   TBranch        *b_PV_npvsGood;   //!
   TBranch        *b_nSV;   //!
   TBranch        *b_SV_dlen;   //!
   TBranch        *b_SV_dlenSig;   //!
   TBranch        *b_SV_dxy;   //!
   TBranch        *b_SV_dxySig;   //!
   TBranch        *b_SV_pAngle;   //!
   TBranch        *b_Electron_genPartIdx;   //!
   TBranch        *b_Electron_genPartFlav;   //!
   TBranch        *b_FatJet_genJetAK8Idx;   //!
   TBranch        *b_FatJet_hadronFlavour;   //!
   TBranch        *b_FatJet_nBHadrons;   //!
   TBranch        *b_FatJet_nCHadrons;   //!
   TBranch        *b_GenJetAK8_partonFlavour;   //!
   TBranch        *b_GenJetAK8_hadronFlavour;   //!
   TBranch        *b_GenJet_partonFlavour;   //!
   TBranch        *b_GenJet_hadronFlavour;   //!
   TBranch        *b_Jet_genJetIdx;   //!
   TBranch        *b_Jet_hadronFlavour;   //!
   TBranch        *b_Jet_partonFlavour;   //!
   TBranch        *b_Muon_genPartIdx;   //!
   TBranch        *b_Muon_genPartFlav;   //!
   TBranch        *b_Photon_genPartIdx;   //!
   TBranch        *b_Photon_genPartFlav;   //!
   TBranch        *b_MET_fiducialGenPhi;   //!
   TBranch        *b_MET_fiducialGenPt;   //!
   TBranch        *b_Electron_cleanmask;   //!
   TBranch        *b_Jet_cleanmask;   //!
   TBranch        *b_Muon_cleanmask;   //!
   TBranch        *b_Photon_cleanmask;   //!
   TBranch        *b_Tau_cleanmask;   //!
   TBranch        *b_SubJet_nBHadrons;   //!
   TBranch        *b_SubJet_nCHadrons;   //!
   TBranch        *b_SV_chi2;   //!
   TBranch        *b_SV_eta;   //!
   TBranch        *b_SV_mass;   //!
   TBranch        *b_SV_ndof;   //!
   TBranch        *b_SV_phi;   //!
   TBranch        *b_SV_pt;   //!
   TBranch        *b_SV_x;   //!
   TBranch        *b_SV_y;   //!
   TBranch        *b_SV_z;   //!
   TBranch        *b_Tau_genPartIdx;   //!
   TBranch        *b_Tau_genPartFlav;   //!
   TBranch        *b_L1_AlwaysTrue;   //!
   TBranch        *b_L1_BPTX_AND_Ref1_VME;   //!
   TBranch        *b_L1_BPTX_AND_Ref3_VME;   //!
   TBranch        *b_L1_BPTX_AND_Ref4_VME;   //!
   TBranch        *b_L1_BPTX_BeamGas_B1_VME;   //!
   TBranch        *b_L1_BPTX_BeamGas_B2_VME;   //!
   TBranch        *b_L1_BPTX_BeamGas_Ref1_VME;   //!
   TBranch        *b_L1_BPTX_BeamGas_Ref2_VME;   //!
   TBranch        *b_L1_BPTX_NotOR_VME;   //!
   TBranch        *b_L1_BPTX_OR_Ref3_VME;   //!
   TBranch        *b_L1_BPTX_OR_Ref4_VME;   //!
   TBranch        *b_L1_BPTX_RefAND_VME;   //!
   TBranch        *b_L1_BptxMinus;   //!
   TBranch        *b_L1_BptxOR;   //!
   TBranch        *b_L1_BptxPlus;   //!
   TBranch        *b_L1_BptxXOR;   //!
   TBranch        *b_L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142;   //!
   TBranch        *b_L1_DoubleEG8er2p5_HTT260er;   //!
   TBranch        *b_L1_DoubleEG8er2p5_HTT280er;   //!
   TBranch        *b_L1_DoubleEG8er2p5_HTT300er;   //!
   TBranch        *b_L1_DoubleEG8er2p5_HTT320er;   //!
   TBranch        *b_L1_DoubleEG8er2p5_HTT340er;   //!
   TBranch        *b_L1_DoubleEG_15_10_er2p5;   //!
   TBranch        *b_L1_DoubleEG_20_10_er2p5;   //!
   TBranch        *b_L1_DoubleEG_22_10_er2p5;   //!
   TBranch        *b_L1_DoubleEG_25_12_er2p5;   //!
   TBranch        *b_L1_DoubleEG_25_14_er2p5;   //!
   TBranch        *b_L1_DoubleEG_27_14_er2p5;   //!
   TBranch        *b_L1_DoubleEG_LooseIso20_10_er2p5;   //!
   TBranch        *b_L1_DoubleEG_LooseIso22_10_er2p5;   //!
   TBranch        *b_L1_DoubleEG_LooseIso22_12_er2p5;   //!
   TBranch        *b_L1_DoubleEG_LooseIso25_12_er2p5;   //!
   TBranch        *b_L1_DoubleIsoTau32er2p1;   //!
   TBranch        *b_L1_DoubleIsoTau34er2p1;   //!
   TBranch        *b_L1_DoubleIsoTau36er2p1;   //!
   TBranch        *b_L1_DoubleJet100er2p3_dEta_Max1p6;   //!
   TBranch        *b_L1_DoubleJet100er2p5;   //!
   TBranch        *b_L1_DoubleJet112er2p3_dEta_Max1p6;   //!
   TBranch        *b_L1_DoubleJet120er2p5;   //!
   TBranch        *b_L1_DoubleJet150er2p5;   //!
   TBranch        *b_L1_DoubleJet30er2p5_Mass_Min150_dEta_Max1p5;   //!
   TBranch        *b_L1_DoubleJet30er2p5_Mass_Min200_dEta_Max1p5;   //!
   TBranch        *b_L1_DoubleJet30er2p5_Mass_Min250_dEta_Max1p5;   //!
   TBranch        *b_L1_DoubleJet30er2p5_Mass_Min300_dEta_Max1p5;   //!
   TBranch        *b_L1_DoubleJet30er2p5_Mass_Min330_dEta_Max1p5;   //!
   TBranch        *b_L1_DoubleJet30er2p5_Mass_Min360_dEta_Max1p5;   //!
   TBranch        *b_L1_DoubleJet35_Mass_Min450_IsoTau45_RmOvlp;   //!
   TBranch        *b_L1_DoubleJet40er2p5;   //!
   TBranch        *b_L1_DoubleJet_100_30_DoubleJet30_Mass_Min620;   //!
   TBranch        *b_L1_DoubleJet_110_35_DoubleJet35_Mass_Min620;   //!
   TBranch        *b_L1_DoubleJet_115_40_DoubleJet40_Mass_Min620;   //!
   TBranch        *b_L1_DoubleJet_115_40_DoubleJet40_Mass_Min620_Jet60TT28;   //!
   TBranch        *b_L1_DoubleJet_120_45_DoubleJet45_Mass_Min620;   //!
   TBranch        *b_L1_DoubleJet_120_45_DoubleJet45_Mass_Min620_Jet60TT28;   //!
   TBranch        *b_L1_DoubleJet_80_30_Mass_Min420_DoubleMu0_SQ;   //!
   TBranch        *b_L1_DoubleJet_80_30_Mass_Min420_IsoTau40_RmOvlp;   //!
   TBranch        *b_L1_DoubleJet_80_30_Mass_Min420_Mu8;   //!
   TBranch        *b_L1_DoubleJet_90_30_DoubleJet30_Mass_Min620;   //!
   TBranch        *b_L1_DoubleLooseIsoEG22er2p1;   //!
   TBranch        *b_L1_DoubleLooseIsoEG24er2p1;   //!
   TBranch        *b_L1_DoubleMu0;   //!
   TBranch        *b_L1_DoubleMu0_Mass_Min1;   //!
   TBranch        *b_L1_DoubleMu0_OQ;   //!
   TBranch        *b_L1_DoubleMu0_SQ;   //!
   TBranch        *b_L1_DoubleMu0_SQ_OS;   //!
   TBranch        *b_L1_DoubleMu0_dR_Max1p6_Jet90er2p5_dR_Max0p8;   //!
   TBranch        *b_L1_DoubleMu0er1p4_SQ_OS_dR_Max1p4;   //!
   TBranch        *b_L1_DoubleMu0er1p5_SQ;   //!
   TBranch        *b_L1_DoubleMu0er1p5_SQ_OS;   //!
   TBranch        *b_L1_DoubleMu0er1p5_SQ_OS_dR_Max1p4;   //!
   TBranch        *b_L1_DoubleMu0er1p5_SQ_dR_Max1p4;   //!
   TBranch        *b_L1_DoubleMu0er2p0_SQ_OS_dR_Max1p4;   //!
   TBranch        *b_L1_DoubleMu0er2p0_SQ_dR_Max1p4;   //!
   TBranch        *b_L1_DoubleMu10_SQ;   //!
   TBranch        *b_L1_DoubleMu18er2p1;   //!
   TBranch        *b_L1_DoubleMu3_OS_DoubleEG7p5Upsilon;   //!
   TBranch        *b_L1_DoubleMu3_SQ_ETMHF50_HTT60er;   //!
   TBranch        *b_L1_DoubleMu3_SQ_ETMHF50_Jet60er2p5;   //!
   TBranch        *b_L1_DoubleMu3_SQ_ETMHF50_Jet60er2p5_OR_DoubleJet40er2p5;   //!
   TBranch        *b_L1_DoubleMu3_SQ_ETMHF60_Jet60er2p5;   //!
   TBranch        *b_L1_DoubleMu3_SQ_HTT220er;   //!
   TBranch        *b_L1_DoubleMu3_SQ_HTT240er;   //!
   TBranch        *b_L1_DoubleMu3_SQ_HTT260er;   //!
   TBranch        *b_L1_DoubleMu3_dR_Max1p6_Jet90er2p5_dR_Max0p8;   //!
   TBranch        *b_L1_DoubleMu4_SQ_EG9er2p5;   //!
   TBranch        *b_L1_DoubleMu4_SQ_OS;   //!
   TBranch        *b_L1_DoubleMu4_SQ_OS_dR_Max1p2;   //!
   TBranch        *b_L1_DoubleMu4p5_SQ_OS;   //!
   TBranch        *b_L1_DoubleMu4p5_SQ_OS_dR_Max1p2;   //!
   TBranch        *b_L1_DoubleMu4p5er2p0_SQ_OS;   //!
   TBranch        *b_L1_DoubleMu4p5er2p0_SQ_OS_Mass7to18;   //!
   TBranch        *b_L1_DoubleMu5Upsilon_OS_DoubleEG3;   //!
   TBranch        *b_L1_DoubleMu5_SQ_EG9er2p5;   //!
   TBranch        *b_L1_DoubleMu9_SQ;   //!
   TBranch        *b_L1_DoubleMu_12_5;   //!
   TBranch        *b_L1_DoubleMu_15_5_SQ;   //!
   TBranch        *b_L1_DoubleMu_15_7;   //!
   TBranch        *b_L1_DoubleMu_15_7_Mass_Min1;   //!
   TBranch        *b_L1_DoubleMu_15_7_SQ;   //!
   TBranch        *b_L1_DoubleTau70er2p1;   //!
   TBranch        *b_L1_ETM120;   //!
   TBranch        *b_L1_ETM150;   //!
   TBranch        *b_L1_ETMHF100;   //!
   TBranch        *b_L1_ETMHF100_HTT60er;   //!
   TBranch        *b_L1_ETMHF110;   //!
   TBranch        *b_L1_ETMHF110_HTT60er;   //!
   TBranch        *b_L1_ETMHF110_HTT60er_NotSecondBunchInTrain;   //!
   TBranch        *b_L1_ETMHF120;   //!
   TBranch        *b_L1_ETMHF120_HTT60er;   //!
   TBranch        *b_L1_ETMHF120_NotSecondBunchInTrain;   //!
   TBranch        *b_L1_ETMHF130;   //!
   TBranch        *b_L1_ETMHF130_HTT60er;   //!
   TBranch        *b_L1_ETMHF140;   //!
   TBranch        *b_L1_ETMHF150;   //!
   TBranch        *b_L1_ETMHF90_HTT60er;   //!
   TBranch        *b_L1_ETT1200;   //!
   TBranch        *b_L1_ETT1600;   //!
   TBranch        *b_L1_ETT2000;   //!
   TBranch        *b_L1_FirstBunchAfterTrain;   //!
   TBranch        *b_L1_FirstBunchBeforeTrain;   //!
   TBranch        *b_L1_FirstBunchInTrain;   //!
   TBranch        *b_L1_FirstCollisionInOrbit;   //!
   TBranch        *b_L1_FirstCollisionInTrain;   //!
   TBranch        *b_L1_HCAL_LaserMon_Trig;   //!
   TBranch        *b_L1_HCAL_LaserMon_Veto;   //!
   TBranch        *b_L1_HTT120er;   //!
   TBranch        *b_L1_HTT160er;   //!
   TBranch        *b_L1_HTT200er;   //!
   TBranch        *b_L1_HTT255er;   //!
   TBranch        *b_L1_HTT280er;   //!
   TBranch        *b_L1_HTT280er_QuadJet_70_55_40_35_er2p4;   //!
   TBranch        *b_L1_HTT320er;   //!
   TBranch        *b_L1_HTT320er_QuadJet_70_55_40_40_er2p4;   //!
   TBranch        *b_L1_HTT320er_QuadJet_80_60_er2p1_45_40_er2p3;   //!
   TBranch        *b_L1_HTT320er_QuadJet_80_60_er2p1_50_45_er2p3;   //!
   TBranch        *b_L1_HTT360er;   //!
   TBranch        *b_L1_HTT400er;   //!
   TBranch        *b_L1_HTT450er;   //!
   TBranch        *b_L1_IsoEG32er2p5_Mt40;   //!
   TBranch        *b_L1_IsoEG32er2p5_Mt44;   //!
   TBranch        *b_L1_IsoEG32er2p5_Mt48;   //!
   TBranch        *b_L1_IsoTau40er2p1_ETMHF100;   //!
   TBranch        *b_L1_IsoTau40er2p1_ETMHF110;   //!
   TBranch        *b_L1_IsoTau40er2p1_ETMHF120;   //!
   TBranch        *b_L1_IsoTau40er2p1_ETMHF90;   //!
   TBranch        *b_L1_IsolatedBunch;   //!
   TBranch        *b_L1_LastBunchInTrain;   //!
   TBranch        *b_L1_LastCollisionInTrain;   //!
   TBranch        *b_L1_LooseIsoEG22er2p1_IsoTau26er2p1_dR_Min0p3;   //!
   TBranch        *b_L1_LooseIsoEG22er2p1_Tau70er2p1_dR_Min0p3;   //!
   TBranch        *b_L1_LooseIsoEG24er2p1_HTT100er;   //!
   TBranch        *b_L1_LooseIsoEG24er2p1_IsoTau27er2p1_dR_Min0p3;   //!
   TBranch        *b_L1_LooseIsoEG26er2p1_HTT100er;   //!
   TBranch        *b_L1_LooseIsoEG26er2p1_Jet34er2p5_dR_Min0p3;   //!
   TBranch        *b_L1_LooseIsoEG28er2p1_HTT100er;   //!
   TBranch        *b_L1_LooseIsoEG28er2p1_Jet34er2p5_dR_Min0p3;   //!
   TBranch        *b_L1_LooseIsoEG30er2p1_HTT100er;   //!
   TBranch        *b_L1_LooseIsoEG30er2p1_Jet34er2p5_dR_Min0p3;   //!
   TBranch        *b_L1_MinimumBiasHF0_AND_BptxAND;   //!
   TBranch        *b_L1_Mu10er2p3_Jet32er2p3_dR_Max0p4_DoubleJet32er2p3_dEta_Max1p6;   //!
   TBranch        *b_L1_Mu12er2p3_Jet40er2p1_dR_Max0p4_DoubleJet40er2p1_dEta_Max1p6;   //!
   TBranch        *b_L1_Mu12er2p3_Jet40er2p3_dR_Max0p4_DoubleJet40er2p3_dEta_Max1p6;   //!
   TBranch        *b_L1_Mu18er2p1_Tau24er2p1;   //!
   TBranch        *b_L1_Mu18er2p1_Tau26er2p1;   //!
   TBranch        *b_L1_Mu20_EG10er2p5;   //!
   TBranch        *b_L1_Mu22er2p1_IsoTau32er2p1;   //!
   TBranch        *b_L1_Mu22er2p1_IsoTau34er2p1;   //!
   TBranch        *b_L1_Mu22er2p1_IsoTau36er2p1;   //!
   TBranch        *b_L1_Mu22er2p1_IsoTau40er2p1;   //!
   TBranch        *b_L1_Mu22er2p1_Tau70er2p1;   //!
   TBranch        *b_L1_Mu3_Jet120er2p5_dR_Max0p4;   //!
   TBranch        *b_L1_Mu3_Jet120er2p5_dR_Max0p8;   //!
   TBranch        *b_L1_Mu3_Jet16er2p5_dR_Max0p4;   //!
   TBranch        *b_L1_Mu3_Jet30er2p5;   //!
   TBranch        *b_L1_Mu3_Jet35er2p5_dR_Max0p4;   //!
   TBranch        *b_L1_Mu3_Jet60er2p5_dR_Max0p4;   //!
   TBranch        *b_L1_Mu3_Jet80er2p5_dR_Max0p4;   //!
   TBranch        *b_L1_Mu3er1p5_Jet100er2p5_ETMHF40;   //!
   TBranch        *b_L1_Mu3er1p5_Jet100er2p5_ETMHF50;   //!
   TBranch        *b_L1_Mu5_EG23er2p5;   //!
   TBranch        *b_L1_Mu5_LooseIsoEG20er2p5;   //!
   TBranch        *b_L1_Mu6_DoubleEG10er2p5;   //!
   TBranch        *b_L1_Mu6_DoubleEG12er2p5;   //!
   TBranch        *b_L1_Mu6_DoubleEG15er2p5;   //!
   TBranch        *b_L1_Mu6_DoubleEG17er2p5;   //!
   TBranch        *b_L1_Mu6_HTT240er;   //!
   TBranch        *b_L1_Mu6_HTT250er;   //!
   TBranch        *b_L1_Mu7_EG23er2p5;   //!
   TBranch        *b_L1_Mu7_LooseIsoEG20er2p5;   //!
   TBranch        *b_L1_Mu7_LooseIsoEG23er2p5;   //!
   TBranch        *b_L1_NotBptxOR;   //!
   TBranch        *b_L1_QuadJet36er2p5_IsoTau52er2p1;   //!
   TBranch        *b_L1_QuadJet60er2p5;   //!
   TBranch        *b_L1_QuadJet_95_75_65_20_DoubleJet_75_65_er2p5_Jet20_FWD3p0;   //!
   TBranch        *b_L1_QuadMu0;   //!
   TBranch        *b_L1_QuadMu0_OQ;   //!
   TBranch        *b_L1_QuadMu0_SQ;   //!
   TBranch        *b_L1_SecondBunchInTrain;   //!
   TBranch        *b_L1_SecondLastBunchInTrain;   //!
   TBranch        *b_L1_SingleEG10er2p5;   //!
   TBranch        *b_L1_SingleEG15er2p5;   //!
   TBranch        *b_L1_SingleEG26er2p5;   //!
   TBranch        *b_L1_SingleEG34er2p5;   //!
   TBranch        *b_L1_SingleEG36er2p5;   //!
   TBranch        *b_L1_SingleEG38er2p5;   //!
   TBranch        *b_L1_SingleEG40er2p5;   //!
   TBranch        *b_L1_SingleEG42er2p5;   //!
   TBranch        *b_L1_SingleEG45er2p5;   //!
   TBranch        *b_L1_SingleEG50;   //!
   TBranch        *b_L1_SingleEG60;   //!
   TBranch        *b_L1_SingleEG8er2p5;   //!
   TBranch        *b_L1_SingleIsoEG24er1p5;   //!
   TBranch        *b_L1_SingleIsoEG24er2p1;   //!
   TBranch        *b_L1_SingleIsoEG26er1p5;   //!
   TBranch        *b_L1_SingleIsoEG26er2p1;   //!
   TBranch        *b_L1_SingleIsoEG26er2p5;   //!
   TBranch        *b_L1_SingleIsoEG28er1p5;   //!
   TBranch        *b_L1_SingleIsoEG28er2p1;   //!
   TBranch        *b_L1_SingleIsoEG28er2p5;   //!
   TBranch        *b_L1_SingleIsoEG30er2p1;   //!
   TBranch        *b_L1_SingleIsoEG30er2p5;   //!
   TBranch        *b_L1_SingleIsoEG32er2p1;   //!
   TBranch        *b_L1_SingleIsoEG32er2p5;   //!
   TBranch        *b_L1_SingleIsoEG34er2p5;   //!
   TBranch        *b_L1_SingleJet10erHE;   //!
   TBranch        *b_L1_SingleJet120;   //!
   TBranch        *b_L1_SingleJet120_FWD3p0;   //!
   TBranch        *b_L1_SingleJet120er2p5;   //!
   TBranch        *b_L1_SingleJet12erHE;   //!
   TBranch        *b_L1_SingleJet140er2p5;   //!
   TBranch        *b_L1_SingleJet140er2p5_ETMHF80;   //!
   TBranch        *b_L1_SingleJet140er2p5_ETMHF90;   //!
   TBranch        *b_L1_SingleJet160er2p5;   //!
   TBranch        *b_L1_SingleJet180;   //!
   TBranch        *b_L1_SingleJet180er2p5;   //!
   TBranch        *b_L1_SingleJet200;   //!
   TBranch        *b_L1_SingleJet20er2p5_NotBptxOR;   //!
   TBranch        *b_L1_SingleJet20er2p5_NotBptxOR_3BX;   //!
   TBranch        *b_L1_SingleJet35;   //!
   TBranch        *b_L1_SingleJet35_FWD3p0;   //!
   TBranch        *b_L1_SingleJet35er2p5;   //!
   TBranch        *b_L1_SingleJet43er2p5_NotBptxOR_3BX;   //!
   TBranch        *b_L1_SingleJet46er2p5_NotBptxOR_3BX;   //!
   TBranch        *b_L1_SingleJet60;   //!
   TBranch        *b_L1_SingleJet60_FWD3p0;   //!
   TBranch        *b_L1_SingleJet60er2p5;   //!
   TBranch        *b_L1_SingleJet8erHE;   //!
   TBranch        *b_L1_SingleJet90;   //!
   TBranch        *b_L1_SingleJet90_FWD3p0;   //!
   TBranch        *b_L1_SingleJet90er2p5;   //!
   TBranch        *b_L1_SingleLooseIsoEG28er1p5;   //!
   TBranch        *b_L1_SingleLooseIsoEG30er1p5;   //!
   TBranch        *b_L1_SingleMu0_BMTF;   //!
   TBranch        *b_L1_SingleMu0_DQ;   //!
   TBranch        *b_L1_SingleMu0_EMTF;   //!
   TBranch        *b_L1_SingleMu0_OMTF;   //!
   TBranch        *b_L1_SingleMu10er1p5;   //!
   TBranch        *b_L1_SingleMu12_DQ_BMTF;   //!
   TBranch        *b_L1_SingleMu12_DQ_EMTF;   //!
   TBranch        *b_L1_SingleMu12_DQ_OMTF;   //!
   TBranch        *b_L1_SingleMu12er1p5;   //!
   TBranch        *b_L1_SingleMu14er1p5;   //!
   TBranch        *b_L1_SingleMu15_DQ;   //!
   TBranch        *b_L1_SingleMu16er1p5;   //!
   TBranch        *b_L1_SingleMu18;   //!
   TBranch        *b_L1_SingleMu18er1p5;   //!
   TBranch        *b_L1_SingleMu20;   //!
   TBranch        *b_L1_SingleMu22;   //!
   TBranch        *b_L1_SingleMu22_BMTF;   //!
   TBranch        *b_L1_SingleMu22_EMTF;   //!
   TBranch        *b_L1_SingleMu22_OMTF;   //!
   TBranch        *b_L1_SingleMu25;   //!
   TBranch        *b_L1_SingleMu3;   //!
   TBranch        *b_L1_SingleMu5;   //!
   TBranch        *b_L1_SingleMu6er1p5;   //!
   TBranch        *b_L1_SingleMu7;   //!
   TBranch        *b_L1_SingleMu7_DQ;   //!
   TBranch        *b_L1_SingleMu7er1p5;   //!
   TBranch        *b_L1_SingleMu8er1p5;   //!
   TBranch        *b_L1_SingleMu9er1p5;   //!
   TBranch        *b_L1_SingleMuCosmics;   //!
   TBranch        *b_L1_SingleMuCosmics_BMTF;   //!
   TBranch        *b_L1_SingleMuCosmics_EMTF;   //!
   TBranch        *b_L1_SingleMuCosmics_OMTF;   //!
   TBranch        *b_L1_SingleMuOpen;   //!
   TBranch        *b_L1_SingleMuOpen_NotBptxOR;   //!
   TBranch        *b_L1_SingleMuOpen_er1p1_NotBptxOR_3BX;   //!
   TBranch        *b_L1_SingleMuOpen_er1p4_NotBptxOR_3BX;   //!
   TBranch        *b_L1_SingleTau120er2p1;   //!
   TBranch        *b_L1_SingleTau130er2p1;   //!
   TBranch        *b_L1_TOTEM_1;   //!
   TBranch        *b_L1_TOTEM_2;   //!
   TBranch        *b_L1_TOTEM_3;   //!
   TBranch        *b_L1_TOTEM_4;   //!
   TBranch        *b_L1_TripleEG16er2p5;   //!
   TBranch        *b_L1_TripleEG_16_12_8_er2p5;   //!
   TBranch        *b_L1_TripleEG_16_15_8_er2p5;   //!
   TBranch        *b_L1_TripleEG_18_17_8_er2p5;   //!
   TBranch        *b_L1_TripleEG_18_18_12_er2p5;   //!
   TBranch        *b_L1_TripleJet_100_80_70_DoubleJet_80_70_er2p5;   //!
   TBranch        *b_L1_TripleJet_105_85_75_DoubleJet_85_75_er2p5;   //!
   TBranch        *b_L1_TripleJet_95_75_65_DoubleJet_75_65_er2p5;   //!
   TBranch        *b_L1_TripleMu0;   //!
   TBranch        *b_L1_TripleMu0_OQ;   //!
   TBranch        *b_L1_TripleMu0_SQ;   //!
   TBranch        *b_L1_TripleMu3;   //!
   TBranch        *b_L1_TripleMu3_SQ;   //!
   TBranch        *b_L1_TripleMu_5SQ_3SQ_0OQ;   //!
   TBranch        *b_L1_TripleMu_5SQ_3SQ_0OQ_DoubleMu_5_3_SQ_OS_Mass_Max9;   //!
   TBranch        *b_L1_TripleMu_5SQ_3SQ_0_DoubleMu_5_3_SQ_OS_Mass_Max9;   //!
   TBranch        *b_L1_TripleMu_5_3_3;   //!
   TBranch        *b_L1_TripleMu_5_3_3_SQ;   //!
   TBranch        *b_L1_TripleMu_5_3p5_2p5;   //!
   TBranch        *b_L1_TripleMu_5_3p5_2p5_DoubleMu_5_2p5_OS_Mass_5to17;   //!
   TBranch        *b_L1_TripleMu_5_3p5_2p5_OQ_DoubleMu_5_2p5_OQ_OS_Mass_5to17;   //!
   TBranch        *b_L1_TripleMu_5_4_2p5_DoubleMu_5_2p5_OS_Mass_5to17;   //!
   TBranch        *b_L1_TripleMu_5_5_3;   //!
   TBranch        *b_L1_UnpairedBunchBptxMinus;   //!
   TBranch        *b_L1_UnpairedBunchBptxPlus;   //!
   TBranch        *b_L1_ZeroBias;   //!
   TBranch        *b_L1_ZeroBias_copy;   //!
   TBranch        *b_Flag_HBHENoiseFilter;   //!
   TBranch        *b_Flag_HBHENoiseIsoFilter;   //!
   TBranch        *b_Flag_CSCTightHaloFilter;   //!
   TBranch        *b_Flag_CSCTightHaloTrkMuUnvetoFilter;   //!
   TBranch        *b_Flag_CSCTightHalo2015Filter;   //!
   TBranch        *b_Flag_globalTightHalo2016Filter;   //!
   TBranch        *b_Flag_globalSuperTightHalo2016Filter;   //!
   TBranch        *b_Flag_HcalStripHaloFilter;   //!
   TBranch        *b_Flag_hcalLaserEventFilter;   //!
   TBranch        *b_Flag_EcalDeadCellTriggerPrimitiveFilter;   //!
   TBranch        *b_Flag_EcalDeadCellBoundaryEnergyFilter;   //!
   TBranch        *b_Flag_ecalBadCalibFilter;   //!
   TBranch        *b_Flag_goodVertices;   //!
   TBranch        *b_Flag_eeBadScFilter;   //!
   TBranch        *b_Flag_ecalLaserCorrFilter;   //!
   TBranch        *b_Flag_trkPOGFilters;   //!
   TBranch        *b_Flag_chargedHadronTrackResolutionFilter;   //!
   TBranch        *b_Flag_muonBadTrackFilter;   //!
   TBranch        *b_Flag_BadChargedCandidateFilter;   //!
   TBranch        *b_Flag_BadPFMuonFilter;   //!
   TBranch        *b_Flag_BadChargedCandidateSummer16Filter;   //!
   TBranch        *b_Flag_BadPFMuonSummer16Filter;   //!
   TBranch        *b_Flag_trkPOG_manystripclus53X;   //!
   TBranch        *b_Flag_trkPOG_toomanystripclus53X;   //!
   TBranch        *b_Flag_trkPOG_logErrorTooManyClusters;   //!
   TBranch        *b_Flag_METFilters;   //!
   TBranch        *b_L1Reco_step;   //!
   TBranch        *b_L1simulation_step;   //!
   TBranch        *b_HLTriggerFirstPath;   //!
   TBranch        *b_HLT_AK8PFJet360_TrimMass30;   //!
   TBranch        *b_HLT_AK8PFJet380_TrimMass30;   //!
   TBranch        *b_HLT_AK8PFJet400_TrimMass30;   //!
   TBranch        *b_HLT_AK8PFJet420_TrimMass30;   //!
   TBranch        *b_HLT_AK8PFHT750_TrimMass50;   //!
   TBranch        *b_HLT_AK8PFHT800_TrimMass50;   //!
   TBranch        *b_HLT_AK8PFHT850_TrimMass50;   //!
   TBranch        *b_HLT_AK8PFHT900_TrimMass50;   //!
   TBranch        *b_HLT_CaloJet500_NoJetID;   //!
   TBranch        *b_HLT_CaloJet550_NoJetID;   //!
   TBranch        *b_HLT_DoubleMu5_Upsilon_DoubleEle3_CaloIdL_TrackIdL;   //!
   TBranch        *b_HLT_DoubleMu3_DoubleEle7p5_CaloIdL_TrackIdL_Upsilon;   //!
   TBranch        *b_HLT_Trimuon5_3p5_2_Upsilon_Muon;   //!
   TBranch        *b_HLT_TrimuonOpen_5_3p5_2_Upsilon_Muon;   //!
   TBranch        *b_HLT_DoubleEle25_CaloIdL_MW;   //!
   TBranch        *b_HLT_DoubleEle27_CaloIdL_MW;   //!
   TBranch        *b_HLT_DoubleEle33_CaloIdL_MW;   //!
   TBranch        *b_HLT_DoubleEle24_eta2p1_WPTight_Gsf;   //!
   TBranch        *b_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350;   //!
   TBranch        *b_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350;   //!
   TBranch        *b_HLT_Ele27_Ele37_CaloIdL_MW;   //!
   TBranch        *b_HLT_Mu27_Ele37_CaloIdL_MW;   //!
   TBranch        *b_HLT_Mu37_Ele27_CaloIdL_MW;   //!
   TBranch        *b_HLT_Mu37_TkMu27;   //!
   TBranch        *b_HLT_DoubleMu4_3_Bs;   //!
   TBranch        *b_HLT_DoubleMu4_3_Jpsi;   //!
   TBranch        *b_HLT_DoubleMu4_JpsiTrk_Displaced;   //!
   TBranch        *b_HLT_DoubleMu4_LowMassNonResonantTrk_Displaced;   //!
   TBranch        *b_HLT_DoubleMu3_Trk_Tau3mu;   //!
   TBranch        *b_HLT_DoubleMu3_TkMu_DsTau3Mu;   //!
   TBranch        *b_HLT_DoubleMu4_PsiPrimeTrk_Displaced;   //!
   TBranch        *b_HLT_DoubleMu4_Mass3p8_DZ_PFHT350;   //!
   TBranch        *b_HLT_Mu3_PFJet40;   //!
   TBranch        *b_HLT_Mu7p5_L2Mu2_Jpsi;   //!
   TBranch        *b_HLT_Mu7p5_L2Mu2_Upsilon;   //!
   TBranch        *b_HLT_Mu7p5_Track2_Jpsi;   //!
   TBranch        *b_HLT_Mu7p5_Track3p5_Jpsi;   //!
   TBranch        *b_HLT_Mu7p5_Track7_Jpsi;   //!
   TBranch        *b_HLT_Mu7p5_Track2_Upsilon;   //!
   TBranch        *b_HLT_Mu7p5_Track3p5_Upsilon;   //!
   TBranch        *b_HLT_Mu7p5_Track7_Upsilon;   //!
   TBranch        *b_HLT_Mu3_L1SingleMu5orSingleMu7;   //!
   TBranch        *b_HLT_DoublePhoton33_CaloIdL;   //!
   TBranch        *b_HLT_DoublePhoton70;   //!
   TBranch        *b_HLT_DoublePhoton85;   //!
   TBranch        *b_HLT_Ele20_WPTight_Gsf;   //!
   TBranch        *b_HLT_Ele15_WPLoose_Gsf;   //!
   TBranch        *b_HLT_Ele17_WPLoose_Gsf;   //!
   TBranch        *b_HLT_Ele20_WPLoose_Gsf;   //!
   TBranch        *b_HLT_Ele20_eta2p1_WPLoose_Gsf;   //!
   TBranch        *b_HLT_DiEle27_WPTightCaloOnly_L1DoubleEG;   //!
   TBranch        *b_HLT_Ele27_WPTight_Gsf;   //!
   TBranch        *b_HLT_Ele28_WPTight_Gsf;   //!
   TBranch        *b_HLT_Ele30_WPTight_Gsf;   //!
   TBranch        *b_HLT_Ele32_WPTight_Gsf;   //!
   TBranch        *b_HLT_Ele35_WPTight_Gsf;   //!
   TBranch        *b_HLT_Ele35_WPTight_Gsf_L1EGMT;   //!
   TBranch        *b_HLT_Ele38_WPTight_Gsf;   //!
   TBranch        *b_HLT_Ele40_WPTight_Gsf;   //!
   TBranch        *b_HLT_Ele32_WPTight_Gsf_L1DoubleEG;   //!
   TBranch        *b_HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_CrossL1;   //!
   TBranch        *b_HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_CrossL1;   //!
   TBranch        *b_HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_CrossL1;   //!
   TBranch        *b_HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1;   //!
   TBranch        *b_HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1;   //!
   TBranch        *b_HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1;   //!
   TBranch        *b_HLT_HT450_Beamspot;   //!
   TBranch        *b_HLT_HT300_Beamspot;   //!
   TBranch        *b_HLT_ZeroBias_Beamspot;   //!
   TBranch        *b_HLT_IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_CrossL1;   //!
   TBranch        *b_HLT_IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_CrossL1;   //!
   TBranch        *b_HLT_IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_CrossL1;   //!
   TBranch        *b_HLT_IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1;   //!
   TBranch        *b_HLT_IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1;   //!
   TBranch        *b_HLT_IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1;   //!
   TBranch        *b_HLT_IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1;   //!
   TBranch        *b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1;   //!
   TBranch        *b_HLT_IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1;   //!
   TBranch        *b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1;   //!
   TBranch        *b_HLT_IsoMu27_LooseChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1;   //!
   TBranch        *b_HLT_IsoMu27_MediumChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1;   //!
   TBranch        *b_HLT_IsoMu27_TightChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1;   //!
   TBranch        *b_HLT_IsoMu20;   //!
   TBranch        *b_HLT_IsoMu24;   //!
   TBranch        *b_HLT_IsoMu24_eta2p1;   //!
   TBranch        *b_HLT_IsoMu27;   //!
   TBranch        *b_HLT_IsoMu30;   //!
   TBranch        *b_HLT_UncorrectedJetE30_NoBPTX;   //!
   TBranch        *b_HLT_UncorrectedJetE30_NoBPTX3BX;   //!
   TBranch        *b_HLT_UncorrectedJetE60_NoBPTX3BX;   //!
   TBranch        *b_HLT_UncorrectedJetE70_NoBPTX3BX;   //!
   TBranch        *b_HLT_L1SingleMu18;   //!
   TBranch        *b_HLT_L1SingleMu25;   //!
   TBranch        *b_HLT_L2Mu10;   //!
   TBranch        *b_HLT_L2Mu10_NoVertex_NoBPTX3BX;   //!
   TBranch        *b_HLT_L2Mu10_NoVertex_NoBPTX;   //!
   TBranch        *b_HLT_L2Mu45_NoVertex_3Sta_NoBPTX3BX;   //!
   TBranch        *b_HLT_L2Mu40_NoVertex_3Sta_NoBPTX3BX;   //!
   TBranch        *b_HLT_L2Mu50;   //!
   TBranch        *b_HLT_L2Mu23NoVtx_2Cha;   //!
   TBranch        *b_HLT_L2Mu23NoVtx_2Cha_CosmicSeed;   //!
   TBranch        *b_HLT_DoubleL2Mu30NoVtx_2Cha_CosmicSeed_Eta2p4;   //!
   TBranch        *b_HLT_DoubleL2Mu30NoVtx_2Cha_Eta2p4;   //!
   TBranch        *b_HLT_DoubleL2Mu50;   //!
   TBranch        *b_HLT_DoubleL2Mu23NoVtx_2Cha_CosmicSeed;   //!
   TBranch        *b_HLT_DoubleL2Mu23NoVtx_2Cha_CosmicSeed_NoL2Matched;   //!
   TBranch        *b_HLT_DoubleL2Mu25NoVtx_2Cha_CosmicSeed;   //!
   TBranch        *b_HLT_DoubleL2Mu25NoVtx_2Cha_CosmicSeed_NoL2Matched;   //!
   TBranch        *b_HLT_DoubleL2Mu25NoVtx_2Cha_CosmicSeed_Eta2p4;   //!
   TBranch        *b_HLT_DoubleL2Mu23NoVtx_2Cha;   //!
   TBranch        *b_HLT_DoubleL2Mu23NoVtx_2Cha_NoL2Matched;   //!
   TBranch        *b_HLT_DoubleL2Mu25NoVtx_2Cha;   //!
   TBranch        *b_HLT_DoubleL2Mu25NoVtx_2Cha_NoL2Matched;   //!
   TBranch        *b_HLT_DoubleL2Mu25NoVtx_2Cha_Eta2p4;   //!
   TBranch        *b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL;   //!
   TBranch        *b_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL;   //!
   TBranch        *b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ;   //!
   TBranch        *b_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ;   //!
   TBranch        *b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8;   //!
   TBranch        *b_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8;   //!
   TBranch        *b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8;   //!
   TBranch        *b_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8;   //!
   TBranch        *b_HLT_Mu25_TkMu0_Onia;   //!
   TBranch        *b_HLT_Mu30_TkMu0_Psi;   //!
   TBranch        *b_HLT_Mu30_TkMu0_Upsilon;   //!
   TBranch        *b_HLT_Mu20_TkMu0_Phi;   //!
   TBranch        *b_HLT_Mu25_TkMu0_Phi;   //!
   TBranch        *b_HLT_Mu12;   //!
   TBranch        *b_HLT_Mu15;   //!
   TBranch        *b_HLT_Mu20;   //!
   TBranch        *b_HLT_Mu27;   //!
   TBranch        *b_HLT_Mu50;   //!
   TBranch        *b_HLT_Mu55;   //!
   TBranch        *b_HLT_OldMu100;   //!
   TBranch        *b_HLT_TkMu100;   //!
   TBranch        *b_HLT_DiPFJetAve40;   //!
   TBranch        *b_HLT_DiPFJetAve60;   //!
   TBranch        *b_HLT_DiPFJetAve80;   //!
   TBranch        *b_HLT_DiPFJetAve140;   //!
   TBranch        *b_HLT_DiPFJetAve200;   //!
   TBranch        *b_HLT_DiPFJetAve260;   //!
   TBranch        *b_HLT_DiPFJetAve320;   //!
   TBranch        *b_HLT_DiPFJetAve400;   //!
   TBranch        *b_HLT_DiPFJetAve500;   //!
   TBranch        *b_HLT_DiPFJetAve60_HFJEC;   //!
   TBranch        *b_HLT_DiPFJetAve80_HFJEC;   //!
   TBranch        *b_HLT_DiPFJetAve100_HFJEC;   //!
   TBranch        *b_HLT_DiPFJetAve160_HFJEC;   //!
   TBranch        *b_HLT_DiPFJetAve220_HFJEC;   //!
   TBranch        *b_HLT_DiPFJetAve300_HFJEC;   //!
   TBranch        *b_HLT_AK8PFJet15;   //!
   TBranch        *b_HLT_AK8PFJet25;   //!
   TBranch        *b_HLT_AK8PFJet40;   //!
   TBranch        *b_HLT_AK8PFJet60;   //!
   TBranch        *b_HLT_AK8PFJet80;   //!
   TBranch        *b_HLT_AK8PFJet140;   //!
   TBranch        *b_HLT_AK8PFJet200;   //!
   TBranch        *b_HLT_AK8PFJet260;   //!
   TBranch        *b_HLT_AK8PFJet320;   //!
   TBranch        *b_HLT_AK8PFJet400;   //!
   TBranch        *b_HLT_AK8PFJet450;   //!
   TBranch        *b_HLT_AK8PFJet500;   //!
   TBranch        *b_HLT_AK8PFJet550;   //!
   TBranch        *b_HLT_PFJet15;   //!
   TBranch        *b_HLT_PFJet25;   //!
   TBranch        *b_HLT_PFJet40;   //!
   TBranch        *b_HLT_PFJet60;   //!
   TBranch        *b_HLT_PFJet80;   //!
   TBranch        *b_HLT_PFJet140;   //!
   TBranch        *b_HLT_PFJet200;   //!
   TBranch        *b_HLT_PFJet260;   //!
   TBranch        *b_HLT_PFJet320;   //!
   TBranch        *b_HLT_PFJet400;   //!
   TBranch        *b_HLT_PFJet450;   //!
   TBranch        *b_HLT_PFJet500;   //!
   TBranch        *b_HLT_PFJet550;   //!
   TBranch        *b_HLT_PFJetFwd15;   //!
   TBranch        *b_HLT_PFJetFwd25;   //!
   TBranch        *b_HLT_PFJetFwd40;   //!
   TBranch        *b_HLT_PFJetFwd60;   //!
   TBranch        *b_HLT_PFJetFwd80;   //!
   TBranch        *b_HLT_PFJetFwd140;   //!
   TBranch        *b_HLT_PFJetFwd200;   //!
   TBranch        *b_HLT_PFJetFwd260;   //!
   TBranch        *b_HLT_PFJetFwd320;   //!
   TBranch        *b_HLT_PFJetFwd400;   //!
   TBranch        *b_HLT_PFJetFwd450;   //!
   TBranch        *b_HLT_PFJetFwd500;   //!
   TBranch        *b_HLT_AK8PFJetFwd15;   //!
   TBranch        *b_HLT_AK8PFJetFwd25;   //!
   TBranch        *b_HLT_AK8PFJetFwd40;   //!
   TBranch        *b_HLT_AK8PFJetFwd60;   //!
   TBranch        *b_HLT_AK8PFJetFwd80;   //!
   TBranch        *b_HLT_AK8PFJetFwd140;   //!
   TBranch        *b_HLT_AK8PFJetFwd200;   //!
   TBranch        *b_HLT_AK8PFJetFwd260;   //!
   TBranch        *b_HLT_AK8PFJetFwd320;   //!
   TBranch        *b_HLT_AK8PFJetFwd400;   //!
   TBranch        *b_HLT_AK8PFJetFwd450;   //!
   TBranch        *b_HLT_AK8PFJetFwd500;   //!
   TBranch        *b_HLT_PFHT180;   //!
   TBranch        *b_HLT_PFHT250;   //!
   TBranch        *b_HLT_PFHT370;   //!
   TBranch        *b_HLT_PFHT430;   //!
   TBranch        *b_HLT_PFHT510;   //!
   TBranch        *b_HLT_PFHT590;   //!
   TBranch        *b_HLT_PFHT680;   //!
   TBranch        *b_HLT_PFHT780;   //!
   TBranch        *b_HLT_PFHT890;   //!
   TBranch        *b_HLT_PFHT1050;   //!
   TBranch        *b_HLT_PFHT500_PFMET100_PFMHT100_IDTight;   //!
   TBranch        *b_HLT_PFHT500_PFMET110_PFMHT110_IDTight;   //!
   TBranch        *b_HLT_PFHT700_PFMET85_PFMHT85_IDTight;   //!
   TBranch        *b_HLT_PFHT700_PFMET95_PFMHT95_IDTight;   //!
   TBranch        *b_HLT_PFHT800_PFMET75_PFMHT75_IDTight;   //!
   TBranch        *b_HLT_PFHT800_PFMET85_PFMHT85_IDTight;   //!
   TBranch        *b_HLT_PFMET110_PFMHT110_IDTight;   //!
   TBranch        *b_HLT_PFMET120_PFMHT120_IDTight;   //!
   TBranch        *b_HLT_PFMET130_PFMHT130_IDTight;   //!
   TBranch        *b_HLT_PFMET140_PFMHT140_IDTight;   //!
   TBranch        *b_HLT_PFMET100_PFMHT100_IDTight_CaloBTagDeepCSV_3p1;   //!
   TBranch        *b_HLT_PFMET110_PFMHT110_IDTight_CaloBTagDeepCSV_3p1;   //!
   TBranch        *b_HLT_PFMET120_PFMHT120_IDTight_CaloBTagDeepCSV_3p1;   //!
   TBranch        *b_HLT_PFMET130_PFMHT130_IDTight_CaloBTagDeepCSV_3p1;   //!
   TBranch        *b_HLT_PFMET140_PFMHT140_IDTight_CaloBTagDeepCSV_3p1;   //!
   TBranch        *b_HLT_PFMET120_PFMHT120_IDTight_PFHT60;   //!
   TBranch        *b_HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60;   //!
   TBranch        *b_HLT_PFMETTypeOne120_PFMHT120_IDTight_PFHT60;   //!
   TBranch        *b_HLT_PFMETTypeOne110_PFMHT110_IDTight;   //!
   TBranch        *b_HLT_PFMETTypeOne120_PFMHT120_IDTight;   //!
   TBranch        *b_HLT_PFMETTypeOne130_PFMHT130_IDTight;   //!
   TBranch        *b_HLT_PFMETTypeOne140_PFMHT140_IDTight;   //!
   TBranch        *b_HLT_PFMETNoMu110_PFMHTNoMu110_IDTight;   //!
   TBranch        *b_HLT_PFMETNoMu120_PFMHTNoMu120_IDTight;   //!
   TBranch        *b_HLT_PFMETNoMu130_PFMHTNoMu130_IDTight;   //!
   TBranch        *b_HLT_PFMETNoMu140_PFMHTNoMu140_IDTight;   //!
   TBranch        *b_HLT_MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight;   //!
   TBranch        *b_HLT_MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight;   //!
   TBranch        *b_HLT_MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight;   //!
   TBranch        *b_HLT_MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight;   //!
   TBranch        *b_HLT_L1ETMHadSeeds;   //!
   TBranch        *b_HLT_CaloMHT90;   //!
   TBranch        *b_HLT_CaloMET80_NotCleaned;   //!
   TBranch        *b_HLT_CaloMET90_NotCleaned;   //!
   TBranch        *b_HLT_CaloMET100_NotCleaned;   //!
   TBranch        *b_HLT_CaloMET110_NotCleaned;   //!
   TBranch        *b_HLT_CaloMET250_NotCleaned;   //!
   TBranch        *b_HLT_CaloMET70_HBHECleaned;   //!
   TBranch        *b_HLT_CaloMET80_HBHECleaned;   //!
   TBranch        *b_HLT_CaloMET90_HBHECleaned;   //!
   TBranch        *b_HLT_CaloMET100_HBHECleaned;   //!
   TBranch        *b_HLT_CaloMET250_HBHECleaned;   //!
   TBranch        *b_HLT_CaloMET300_HBHECleaned;   //!
   TBranch        *b_HLT_CaloMET350_HBHECleaned;   //!
   TBranch        *b_HLT_PFMET200_NotCleaned;   //!
   TBranch        *b_HLT_PFMET200_HBHECleaned;   //!
   TBranch        *b_HLT_PFMET250_HBHECleaned;   //!
   TBranch        *b_HLT_PFMET300_HBHECleaned;   //!
   TBranch        *b_HLT_PFMET200_HBHE_BeamHaloCleaned;   //!
   TBranch        *b_HLT_PFMETTypeOne200_HBHE_BeamHaloCleaned;   //!
   TBranch        *b_HLT_MET105_IsoTrk50;   //!
   TBranch        *b_HLT_MET120_IsoTrk50;   //!
   TBranch        *b_HLT_SingleJet30_Mu12_SinglePFJet40;   //!
   TBranch        *b_HLT_Mu12_DoublePFJets40_CaloBTagDeepCSV_p71;   //!
   TBranch        *b_HLT_Mu12_DoublePFJets100_CaloBTagDeepCSV_p71;   //!
   TBranch        *b_HLT_Mu12_DoublePFJets200_CaloBTagDeepCSV_p71;   //!
   TBranch        *b_HLT_Mu12_DoublePFJets350_CaloBTagDeepCSV_p71;   //!
   TBranch        *b_HLT_Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagDeepCSV_p71;   //!
   TBranch        *b_HLT_Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagDeepCSV_p71;   //!
   TBranch        *b_HLT_Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagDeepCSV_p71;   //!
   TBranch        *b_HLT_DoublePFJets40_CaloBTagDeepCSV_p71;   //!
   TBranch        *b_HLT_DoublePFJets100_CaloBTagDeepCSV_p71;   //!
   TBranch        *b_HLT_DoublePFJets200_CaloBTagDeepCSV_p71;   //!
   TBranch        *b_HLT_DoublePFJets350_CaloBTagDeepCSV_p71;   //!
   TBranch        *b_HLT_DoublePFJets116MaxDeta1p6_DoubleCaloBTagDeepCSV_p71;   //!
   TBranch        *b_HLT_DoublePFJets128MaxDeta1p6_DoubleCaloBTagDeepCSV_p71;   //!
   TBranch        *b_HLT_Photon300_NoHE;   //!
   TBranch        *b_HLT_Mu8_TrkIsoVVL;   //!
   TBranch        *b_HLT_Mu8_DiEle12_CaloIdL_TrackIdL_DZ;   //!
   TBranch        *b_HLT_Mu8_DiEle12_CaloIdL_TrackIdL;   //!
   TBranch        *b_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ;   //!
   TBranch        *b_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350;   //!
   TBranch        *b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ;   //!
   TBranch        *b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30;   //!
   TBranch        *b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30;   //!
   TBranch        *b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30_PFBtagDeepCSV_1p5;   //!
   TBranch        *b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30_CaloBtagDeepCSV_1p5;   //!
   TBranch        *b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL;   //!
   TBranch        *b_HLT_Mu17_TrkIsoVVL;   //!
   TBranch        *b_HLT_Mu19_TrkIsoVVL;   //!
   TBranch        *b_HLT_BTagMu_AK4DiJet20_Mu5;   //!
   TBranch        *b_HLT_BTagMu_AK4DiJet40_Mu5;   //!
   TBranch        *b_HLT_BTagMu_AK4DiJet70_Mu5;   //!
   TBranch        *b_HLT_BTagMu_AK4DiJet110_Mu5;   //!
   TBranch        *b_HLT_BTagMu_AK4DiJet170_Mu5;   //!
   TBranch        *b_HLT_BTagMu_AK4Jet300_Mu5;   //!
   TBranch        *b_HLT_BTagMu_AK8DiJet170_Mu5;   //!
   TBranch        *b_HLT_BTagMu_AK8Jet170_DoubleMu5;   //!
   TBranch        *b_HLT_BTagMu_AK8Jet300_Mu5;   //!
   TBranch        *b_HLT_BTagMu_AK4DiJet20_Mu5_noalgo;   //!
   TBranch        *b_HLT_BTagMu_AK4DiJet40_Mu5_noalgo;   //!
   TBranch        *b_HLT_BTagMu_AK4DiJet70_Mu5_noalgo;   //!
   TBranch        *b_HLT_BTagMu_AK4DiJet110_Mu5_noalgo;   //!
   TBranch        *b_HLT_BTagMu_AK4DiJet170_Mu5_noalgo;   //!
   TBranch        *b_HLT_BTagMu_AK4Jet300_Mu5_noalgo;   //!
   TBranch        *b_HLT_BTagMu_AK8DiJet170_Mu5_noalgo;   //!
   TBranch        *b_HLT_BTagMu_AK8Jet170_DoubleMu5_noalgo;   //!
   TBranch        *b_HLT_BTagMu_AK8Jet300_Mu5_noalgo;   //!
   TBranch        *b_HLT_Ele15_Ele8_CaloIdL_TrackIdL_IsoVL;   //!
   TBranch        *b_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ;   //!
   TBranch        *b_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL;   //!
   TBranch        *b_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ;   //!
   TBranch        *b_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL;   //!
   TBranch        *b_HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL;   //!
   TBranch        *b_HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ;   //!
   TBranch        *b_HLT_Mu12_DoublePhoton20;   //!
   TBranch        *b_HLT_TriplePhoton_20_20_20_CaloIdLV2;   //!
   TBranch        *b_HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL;   //!
   TBranch        *b_HLT_TriplePhoton_30_30_10_CaloIdLV2;   //!
   TBranch        *b_HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL;   //!
   TBranch        *b_HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL;   //!
   TBranch        *b_HLT_Photon20;   //!
   TBranch        *b_HLT_Photon33;   //!
   TBranch        *b_HLT_Photon50;   //!
   TBranch        *b_HLT_Photon75;   //!
   TBranch        *b_HLT_Photon90;   //!
   TBranch        *b_HLT_Photon120;   //!
   TBranch        *b_HLT_Photon150;   //!
   TBranch        *b_HLT_Photon175;   //!
   TBranch        *b_HLT_Photon200;   //!
   TBranch        *b_HLT_Photon100EB_TightID_TightIso;   //!
   TBranch        *b_HLT_Photon110EB_TightID_TightIso;   //!
   TBranch        *b_HLT_Photon120EB_TightID_TightIso;   //!
   TBranch        *b_HLT_Photon100EBHE10;   //!
   TBranch        *b_HLT_Photon100EEHE10;   //!
   TBranch        *b_HLT_Photon100EE_TightID_TightIso;   //!
   TBranch        *b_HLT_Photon50_R9Id90_HE10_IsoM;   //!
   TBranch        *b_HLT_Photon75_R9Id90_HE10_IsoM;   //!
   TBranch        *b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3;   //!
   TBranch        *b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3;   //!
   TBranch        *b_HLT_Photon90_R9Id90_HE10_IsoM;   //!
   TBranch        *b_HLT_Photon120_R9Id90_HE10_IsoM;   //!
   TBranch        *b_HLT_Photon165_R9Id90_HE10_IsoM;   //!
   TBranch        *b_HLT_Photon90_CaloIdL_PFHT700;   //!
   TBranch        *b_HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90;   //!
   TBranch        *b_HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95;   //!
   TBranch        *b_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55;   //!
   TBranch        *b_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55;   //!
   TBranch        *b_HLT_Photon35_TwoProngs35;   //!
   TBranch        *b_HLT_IsoMu24_TwoProngs35;   //!
   TBranch        *b_HLT_Dimuon0_Jpsi_L1_NoOS;   //!
   TBranch        *b_HLT_Dimuon0_Jpsi_NoVertexing_NoOS;   //!
   TBranch        *b_HLT_Dimuon0_Jpsi;   //!
   TBranch        *b_HLT_Dimuon0_Jpsi_NoVertexing;   //!
   TBranch        *b_HLT_Dimuon0_Jpsi_L1_4R_0er1p5R;   //!
   TBranch        *b_HLT_Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R;   //!
   TBranch        *b_HLT_Dimuon0_Jpsi3p5_Muon2;   //!
   TBranch        *b_HLT_Dimuon0_Upsilon_L1_4p5;   //!
   TBranch        *b_HLT_Dimuon0_Upsilon_L1_5;   //!
   TBranch        *b_HLT_Dimuon0_Upsilon_L1_4p5NoOS;   //!
   TBranch        *b_HLT_Dimuon0_Upsilon_L1_4p5er2p0;   //!
   TBranch        *b_HLT_Dimuon0_Upsilon_L1_4p5er2p0M;   //!
   TBranch        *b_HLT_Dimuon0_Upsilon_NoVertexing;   //!
   TBranch        *b_HLT_Dimuon0_Upsilon_L1_5M;   //!
   TBranch        *b_HLT_Dimuon0_LowMass_L1_0er1p5R;   //!
   TBranch        *b_HLT_Dimuon0_LowMass_L1_0er1p5;   //!
   TBranch        *b_HLT_Dimuon0_LowMass;   //!
   TBranch        *b_HLT_Dimuon0_LowMass_L1_4;   //!
   TBranch        *b_HLT_Dimuon0_LowMass_L1_4R;   //!
   TBranch        *b_HLT_Dimuon0_LowMass_L1_TM530;   //!
   TBranch        *b_HLT_Dimuon0_Upsilon_Muon_L1_TM0;   //!
   TBranch        *b_HLT_Dimuon0_Upsilon_Muon_NoL1Mass;   //!
   TBranch        *b_HLT_TripleMu_5_3_3_Mass3p8_DZ;   //!
   TBranch        *b_HLT_TripleMu_10_5_5_DZ;   //!
   TBranch        *b_HLT_TripleMu_12_10_5;   //!
   TBranch        *b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15;   //!
   TBranch        *b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1;   //!
   TBranch        *b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15;   //!
   TBranch        *b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1;   //!
   TBranch        *b_HLT_DoubleMu3_DZ_PFMET50_PFMHT60;   //!
   TBranch        *b_HLT_DoubleMu3_DZ_PFMET70_PFMHT70;   //!
   TBranch        *b_HLT_DoubleMu3_DZ_PFMET90_PFMHT90;   //!
   TBranch        *b_HLT_DoubleMu3_Trk_Tau3mu_NoL1Mass;   //!
   TBranch        *b_HLT_DoubleMu4_Jpsi_Displaced;   //!
   TBranch        *b_HLT_DoubleMu4_Jpsi_NoVertexing;   //!
   TBranch        *b_HLT_DoubleMu4_JpsiTrkTrk_Displaced;   //!
   TBranch        *b_HLT_DoubleMu43NoFiltersNoVtx;   //!
   TBranch        *b_HLT_DoubleMu48NoFiltersNoVtx;   //!
   TBranch        *b_HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL;   //!
   TBranch        *b_HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL;   //!
   TBranch        *b_HLT_Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL;   //!
   TBranch        *b_HLT_Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL;   //!
   TBranch        *b_HLT_DoubleMu33NoFiltersNoVtxDisplaced;   //!
   TBranch        *b_HLT_DoubleMu40NoFiltersNoVtxDisplaced;   //!
   TBranch        *b_HLT_DoubleMu20_7_Mass0to30_L1_DM4;   //!
   TBranch        *b_HLT_DoubleMu20_7_Mass0to30_L1_DM4EG;   //!
   TBranch        *b_HLT_HT425;   //!
   TBranch        *b_HLT_HT430_DisplacedDijet40_DisplacedTrack;   //!
   TBranch        *b_HLT_HT500_DisplacedDijet40_DisplacedTrack;   //!
   TBranch        *b_HLT_HT430_DisplacedDijet60_DisplacedTrack;   //!
   TBranch        *b_HLT_HT400_DisplacedDijet40_DisplacedTrack;   //!
   TBranch        *b_HLT_HT650_DisplacedDijet60_Inclusive;   //!
   TBranch        *b_HLT_HT550_DisplacedDijet60_Inclusive;   //!
   TBranch        *b_HLT_DiJet110_35_Mjj650_PFMET110;   //!
   TBranch        *b_HLT_DiJet110_35_Mjj650_PFMET120;   //!
   TBranch        *b_HLT_DiJet110_35_Mjj650_PFMET130;   //!
   TBranch        *b_HLT_TripleJet110_35_35_Mjj650_PFMET110;   //!
   TBranch        *b_HLT_TripleJet110_35_35_Mjj650_PFMET120;   //!
   TBranch        *b_HLT_TripleJet110_35_35_Mjj650_PFMET130;   //!
   TBranch        *b_HLT_Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned;   //!
   TBranch        *b_HLT_Ele28_eta2p1_WPTight_Gsf_HT150;   //!
   TBranch        *b_HLT_Ele28_HighEta_SC20_Mass55;   //!
   TBranch        *b_HLT_DoubleMu20_7_Mass0to30_Photon23;   //!
   TBranch        *b_HLT_Ele15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5;   //!
   TBranch        *b_HLT_Ele15_IsoVVVL_PFHT450_PFMET50;   //!
   TBranch        *b_HLT_Ele15_IsoVVVL_PFHT450;   //!
   TBranch        *b_HLT_Ele50_IsoVVVL_PFHT450;   //!
   TBranch        *b_HLT_Ele15_IsoVVVL_PFHT600;   //!
   TBranch        *b_HLT_Mu4_TrkIsoVVL_DiPFJet90_40_DEta3p5_MJJ750_HTT300_PFMETNoMu60;   //!
   TBranch        *b_HLT_Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60;   //!
   TBranch        *b_HLT_Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60;   //!
   TBranch        *b_HLT_Mu15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5;   //!
   TBranch        *b_HLT_Mu15_IsoVVVL_PFHT450_PFMET50;   //!
   TBranch        *b_HLT_Mu15_IsoVVVL_PFHT450;   //!
   TBranch        *b_HLT_Mu50_IsoVVVL_PFHT450;   //!
   TBranch        *b_HLT_Mu15_IsoVVVL_PFHT600;   //!
   TBranch        *b_HLT_Mu3er1p5_PFJet100er2p5_PFMET70_PFMHT70_IDTight;   //!
   TBranch        *b_HLT_Mu3er1p5_PFJet100er2p5_PFMET80_PFMHT80_IDTight;   //!
   TBranch        *b_HLT_Mu3er1p5_PFJet100er2p5_PFMET90_PFMHT90_IDTight;   //!
   TBranch        *b_HLT_Mu3er1p5_PFJet100er2p5_PFMET100_PFMHT100_IDTight;   //!
   TBranch        *b_HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu70_PFMHTNoMu70_IDTight;   //!
   TBranch        *b_HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu80_PFMHTNoMu80_IDTight;   //!
   TBranch        *b_HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu90_PFMHTNoMu90_IDTight;   //!
   TBranch        *b_HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu100_PFMHTNoMu100_IDTight;   //!
   TBranch        *b_HLT_Dimuon10_PsiPrime_Barrel_Seagulls;   //!
   TBranch        *b_HLT_Dimuon20_Jpsi_Barrel_Seagulls;   //!
   TBranch        *b_HLT_Dimuon12_Upsilon_y1p4;   //!
   TBranch        *b_HLT_Dimuon14_Phi_Barrel_Seagulls;   //!
   TBranch        *b_HLT_Dimuon18_PsiPrime;   //!
   TBranch        *b_HLT_Dimuon25_Jpsi;   //!
   TBranch        *b_HLT_Dimuon18_PsiPrime_noCorrL1;   //!
   TBranch        *b_HLT_Dimuon24_Upsilon_noCorrL1;   //!
   TBranch        *b_HLT_Dimuon24_Phi_noCorrL1;   //!
   TBranch        *b_HLT_Dimuon25_Jpsi_noCorrL1;   //!
   TBranch        *b_HLT_DiMu4_Ele9_CaloIdL_TrackIdL_DZ_Mass3p8;   //!
   TBranch        *b_HLT_DiMu9_Ele9_CaloIdL_TrackIdL_DZ;   //!
   TBranch        *b_HLT_DiMu9_Ele9_CaloIdL_TrackIdL;   //!
   TBranch        *b_HLT_DoubleIsoMu20_eta2p1;   //!
   TBranch        *b_HLT_TrkMu12_DoubleTrkMu5NoFiltersNoVtx;   //!
   TBranch        *b_HLT_TrkMu16_DoubleTrkMu6NoFiltersNoVtx;   //!
   TBranch        *b_HLT_TrkMu17_DoubleTrkMu8NoFiltersNoVtx;   //!
   TBranch        *b_HLT_Mu8;   //!
   TBranch        *b_HLT_Mu17;   //!
   TBranch        *b_HLT_Mu19;   //!
   TBranch        *b_HLT_Mu17_Photon30_IsoCaloId;   //!
   TBranch        *b_HLT_Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30;   //!
   TBranch        *b_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30;   //!
   TBranch        *b_HLT_Ele15_CaloIdL_TrackIdL_IsoVL_PFJet30;   //!
   TBranch        *b_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30;   //!
   TBranch        *b_HLT_Ele8_CaloIdM_TrackIdM_PFJet30;   //!
   TBranch        *b_HLT_Ele17_CaloIdM_TrackIdM_PFJet30;   //!
   TBranch        *b_HLT_Ele23_CaloIdM_TrackIdM_PFJet30;   //!
   TBranch        *b_HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165;   //!
   TBranch        *b_HLT_Ele115_CaloIdVT_GsfTrkIdT;   //!
   TBranch        *b_HLT_Ele135_CaloIdVT_GsfTrkIdT;   //!
   TBranch        *b_HLT_Ele145_CaloIdVT_GsfTrkIdT;   //!
   TBranch        *b_HLT_Ele200_CaloIdVT_GsfTrkIdT;   //!
   TBranch        *b_HLT_Ele250_CaloIdVT_GsfTrkIdT;   //!
   TBranch        *b_HLT_Ele300_CaloIdVT_GsfTrkIdT;   //!
   TBranch        *b_HLT_PFHT330PT30_QuadPFJet_75_60_45_40_TriplePFBTagDeepCSV_4p5;   //!
   TBranch        *b_HLT_PFHT330PT30_QuadPFJet_75_60_45_40;   //!
   TBranch        *b_HLT_PFHT400_SixPFJet32_DoublePFBTagDeepCSV_2p94;   //!
   TBranch        *b_HLT_PFHT400_SixPFJet32;   //!
   TBranch        *b_HLT_PFHT450_SixPFJet36_PFBTagDeepCSV_1p59;   //!
   TBranch        *b_HLT_PFHT450_SixPFJet36;   //!
   TBranch        *b_HLT_PFHT350;   //!
   TBranch        *b_HLT_PFHT350MinPFJet15;   //!
   TBranch        *b_HLT_Photon60_R9Id90_CaloIdL_IsoL;   //!
   TBranch        *b_HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL;   //!
   TBranch        *b_HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15;   //!
   TBranch        *b_HLT_ECALHT800;   //!
   TBranch        *b_HLT_DiSC30_18_EIso_AND_HE_Mass70;   //!
   TBranch        *b_HLT_Physics;   //!
   TBranch        *b_HLT_Physics_part0;   //!
   TBranch        *b_HLT_Physics_part1;   //!
   TBranch        *b_HLT_Physics_part2;   //!
   TBranch        *b_HLT_Physics_part3;   //!
   TBranch        *b_HLT_Physics_part4;   //!
   TBranch        *b_HLT_Physics_part5;   //!
   TBranch        *b_HLT_Physics_part6;   //!
   TBranch        *b_HLT_Physics_part7;   //!
   TBranch        *b_HLT_Random;   //!
   TBranch        *b_HLT_ZeroBias;   //!
   TBranch        *b_HLT_ZeroBias_Alignment;   //!
   TBranch        *b_HLT_ZeroBias_part0;   //!
   TBranch        *b_HLT_ZeroBias_part1;   //!
   TBranch        *b_HLT_ZeroBias_part2;   //!
   TBranch        *b_HLT_ZeroBias_part3;   //!
   TBranch        *b_HLT_ZeroBias_part4;   //!
   TBranch        *b_HLT_ZeroBias_part5;   //!
   TBranch        *b_HLT_ZeroBias_part6;   //!
   TBranch        *b_HLT_ZeroBias_part7;   //!
   TBranch        *b_HLT_AK4CaloJet30;   //!
   TBranch        *b_HLT_AK4CaloJet40;   //!
   TBranch        *b_HLT_AK4CaloJet50;   //!
   TBranch        *b_HLT_AK4CaloJet80;   //!
   TBranch        *b_HLT_AK4CaloJet100;   //!
   TBranch        *b_HLT_AK4CaloJet120;   //!
   TBranch        *b_HLT_AK4PFJet30;   //!
   TBranch        *b_HLT_AK4PFJet50;   //!
   TBranch        *b_HLT_AK4PFJet80;   //!
   TBranch        *b_HLT_AK4PFJet100;   //!
   TBranch        *b_HLT_AK4PFJet120;   //!
   TBranch        *b_HLT_SinglePhoton10_Eta3p1ForPPRef;   //!
   TBranch        *b_HLT_SinglePhoton20_Eta3p1ForPPRef;   //!
   TBranch        *b_HLT_SinglePhoton30_Eta3p1ForPPRef;   //!
   TBranch        *b_HLT_Photon20_HoverELoose;   //!
   TBranch        *b_HLT_Photon30_HoverELoose;   //!
   TBranch        *b_HLT_EcalCalibration;   //!
   TBranch        *b_HLT_HcalCalibration;   //!
   TBranch        *b_HLT_L1UnpairedBunchBptxMinus;   //!
   TBranch        *b_HLT_L1UnpairedBunchBptxPlus;   //!
   TBranch        *b_HLT_L1NotBptxOR;   //!
   TBranch        *b_HLT_L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142;   //!
   TBranch        *b_HLT_CDC_L2cosmic_5_er1p0;   //!
   TBranch        *b_HLT_CDC_L2cosmic_5p5_er1p0;   //!
   TBranch        *b_HLT_HcalNZS;   //!
   TBranch        *b_HLT_HcalPhiSym;   //!
   TBranch        *b_HLT_HcalIsolatedbunch;   //!
   TBranch        *b_HLT_IsoTrackHB;   //!
   TBranch        *b_HLT_IsoTrackHE;   //!
   TBranch        *b_HLT_ZeroBias_FirstCollisionAfterAbortGap;   //!
   TBranch        *b_HLT_ZeroBias_IsolatedBunches;   //!
   TBranch        *b_HLT_ZeroBias_FirstCollisionInTrain;   //!
   TBranch        *b_HLT_ZeroBias_LastCollisionInTrain;   //!
   TBranch        *b_HLT_ZeroBias_FirstBXAfterTrain;   //!
   TBranch        *b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr;   //!
   TBranch        *b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90;   //!
   TBranch        *b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100;   //!
   TBranch        *b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110;   //!
   TBranch        *b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120;   //!
   TBranch        *b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130;   //!
   TBranch        *b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET140;   //!
   TBranch        *b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr;   //!
   TBranch        *b_HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr;   //!
   TBranch        *b_HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1;   //!
   TBranch        *b_HLT_MediumChargedIsoPFTau200HighPtRelaxedIso_Trk50_eta2p1;   //!
   TBranch        *b_HLT_MediumChargedIsoPFTau220HighPtRelaxedIso_Trk50_eta2p1;   //!
   TBranch        *b_HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL;   //!
   TBranch        *b_HLT_Rsq0p35;   //!
   TBranch        *b_HLT_Rsq0p40;   //!
   TBranch        *b_HLT_RsqMR300_Rsq0p09_MR200;   //!
   TBranch        *b_HLT_RsqMR320_Rsq0p09_MR200;   //!
   TBranch        *b_HLT_RsqMR300_Rsq0p09_MR200_4jet;   //!
   TBranch        *b_HLT_RsqMR320_Rsq0p09_MR200_4jet;   //!
   TBranch        *b_HLT_IsoMu27_MET90;   //!
   TBranch        *b_HLT_DoubleTightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg;   //!
   TBranch        *b_HLT_DoubleMediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg;   //!
   TBranch        *b_HLT_DoubleMediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg;   //!
   TBranch        *b_HLT_DoubleTightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg;   //!
   TBranch        *b_HLT_DoubleMediumChargedIsoPFTauHPS40_Trk1_eta2p1_Reg;   //!
   TBranch        *b_HLT_DoubleTightChargedIsoPFTauHPS40_Trk1_eta2p1_Reg;   //!
   TBranch        *b_HLT_DoubleMediumChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg;   //!
   TBranch        *b_HLT_DoubleTightChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg;   //!
   TBranch        *b_HLT_VBF_DoubleLooseChargedIsoPFTauHPS20_Trk1_eta2p1;   //!
   TBranch        *b_HLT_VBF_DoubleMediumChargedIsoPFTauHPS20_Trk1_eta2p1;   //!
   TBranch        *b_HLT_VBF_DoubleTightChargedIsoPFTauHPS20_Trk1_eta2p1;   //!
   TBranch        *b_HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50;   //!
   TBranch        *b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3;   //!
   TBranch        *b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3;   //!
   TBranch        *b_HLT_PFMET100_PFMHT100_IDTight_PFHT60;   //!
   TBranch        *b_HLT_PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60;   //!
   TBranch        *b_HLT_PFMETTypeOne100_PFMHT100_IDTight_PFHT60;   //!
   TBranch        *b_HLT_Mu18_Mu9_SameSign;   //!
   TBranch        *b_HLT_Mu18_Mu9_SameSign_DZ;   //!
   TBranch        *b_HLT_Mu18_Mu9;   //!
   TBranch        *b_HLT_Mu18_Mu9_DZ;   //!
   TBranch        *b_HLT_Mu20_Mu10_SameSign;   //!
   TBranch        *b_HLT_Mu20_Mu10_SameSign_DZ;   //!
   TBranch        *b_HLT_Mu20_Mu10;   //!
   TBranch        *b_HLT_Mu20_Mu10_DZ;   //!
   TBranch        *b_HLT_Mu23_Mu12_SameSign;   //!
   TBranch        *b_HLT_Mu23_Mu12_SameSign_DZ;   //!
   TBranch        *b_HLT_Mu23_Mu12;   //!
   TBranch        *b_HLT_Mu23_Mu12_DZ;   //!
   TBranch        *b_HLT_DoubleMu2_Jpsi_DoubleTrk1_Phi1p05;   //!
   TBranch        *b_HLT_DoubleMu2_Jpsi_DoubleTkMu0_Phi;   //!
   TBranch        *b_HLT_DoubleMu3_DCA_PFMET50_PFMHT60;   //!
   TBranch        *b_HLT_TripleMu_5_3_3_Mass3p8_DCA;   //!
   TBranch        *b_HLT_QuadPFJet98_83_71_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1;   //!
   TBranch        *b_HLT_QuadPFJet103_88_75_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1;   //!
   TBranch        *b_HLT_QuadPFJet111_90_80_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1;   //!
   TBranch        *b_HLT_QuadPFJet98_83_71_15_PFBTagDeepCSV_1p3_VBF2;   //!
   TBranch        *b_HLT_QuadPFJet103_88_75_15_PFBTagDeepCSV_1p3_VBF2;   //!
   TBranch        *b_HLT_QuadPFJet105_88_76_15_PFBTagDeepCSV_1p3_VBF2;   //!
   TBranch        *b_HLT_QuadPFJet111_90_80_15_PFBTagDeepCSV_1p3_VBF2;   //!
   TBranch        *b_HLT_QuadPFJet98_83_71_15;   //!
   TBranch        *b_HLT_QuadPFJet103_88_75_15;   //!
   TBranch        *b_HLT_QuadPFJet105_88_76_15;   //!
   TBranch        *b_HLT_QuadPFJet111_90_80_15;   //!
   TBranch        *b_HLT_AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p17;   //!
   TBranch        *b_HLT_AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p1;   //!
   TBranch        *b_HLT_AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_p02;   //!
   TBranch        *b_HLT_AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np2;   //!
   TBranch        *b_HLT_AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np4;   //!
   TBranch        *b_HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55;   //!
   TBranch        *b_HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto;   //!
   TBranch        *b_HLT_Mu12_IP6_part0;   //!
   TBranch        *b_HLT_Mu12_IP6_part1;   //!
   TBranch        *b_HLT_Mu12_IP6_part2;   //!
   TBranch        *b_HLT_Mu12_IP6_part3;   //!
   TBranch        *b_HLT_Mu12_IP6_part4;   //!
   TBranch        *b_HLT_Mu9_IP5_part0;   //!
   TBranch        *b_HLT_Mu9_IP5_part1;   //!
   TBranch        *b_HLT_Mu9_IP5_part2;   //!
   TBranch        *b_HLT_Mu9_IP5_part3;   //!
   TBranch        *b_HLT_Mu9_IP5_part4;   //!
   TBranch        *b_HLT_Mu7_IP4_part0;   //!
   TBranch        *b_HLT_Mu7_IP4_part1;   //!
   TBranch        *b_HLT_Mu7_IP4_part2;   //!
   TBranch        *b_HLT_Mu7_IP4_part3;   //!
   TBranch        *b_HLT_Mu7_IP4_part4;   //!
   TBranch        *b_HLT_Mu9_IP4_part0;   //!
   TBranch        *b_HLT_Mu9_IP4_part1;   //!
   TBranch        *b_HLT_Mu9_IP4_part2;   //!
   TBranch        *b_HLT_Mu9_IP4_part3;   //!
   TBranch        *b_HLT_Mu9_IP4_part4;   //!
   TBranch        *b_HLT_Mu8_IP5_part0;   //!
   TBranch        *b_HLT_Mu8_IP5_part1;   //!
   TBranch        *b_HLT_Mu8_IP5_part2;   //!
   TBranch        *b_HLT_Mu8_IP5_part3;   //!
   TBranch        *b_HLT_Mu8_IP5_part4;   //!
   TBranch        *b_HLT_Mu8_IP6_part0;   //!
   TBranch        *b_HLT_Mu8_IP6_part1;   //!
   TBranch        *b_HLT_Mu8_IP6_part2;   //!
   TBranch        *b_HLT_Mu8_IP6_part3;   //!
   TBranch        *b_HLT_Mu8_IP6_part4;   //!
   TBranch        *b_HLT_Mu9_IP6_part0;   //!
   TBranch        *b_HLT_Mu9_IP6_part1;   //!
   TBranch        *b_HLT_Mu9_IP6_part2;   //!
   TBranch        *b_HLT_Mu9_IP6_part3;   //!
   TBranch        *b_HLT_Mu9_IP6_part4;   //!
   TBranch        *b_HLT_Mu8_IP3_part0;   //!
   TBranch        *b_HLT_Mu8_IP3_part1;   //!
   TBranch        *b_HLT_Mu8_IP3_part2;   //!
   TBranch        *b_HLT_Mu8_IP3_part3;   //!
   TBranch        *b_HLT_Mu8_IP3_part4;   //!
   TBranch        *b_HLT_QuadPFJet105_88_76_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1;   //!
   TBranch        *b_HLT_TrkMu6NoFiltersNoVtx;   //!
   TBranch        *b_HLT_TrkMu16NoFiltersNoVtx;   //!
   TBranch        *b_HLT_DoubleTrkMu_16_6_NoFiltersNoVtx;   //!
   TBranch        *b_HLTriggerFinalPath;   //!
   TBranch        *b_nLepton;   //!
   TBranch        *b_Lepton_pdgId;   //!
   TBranch        *b_Lepton_electronIdx;   //!
   TBranch        *b_Lepton_muonIdx;   //!
   TBranch        *b_Lepton_pt;   //!
   TBranch        *b_Lepton_eta;   //!
   TBranch        *b_Lepton_phi;   //!
   TBranch        *b_nVetoLepton;   //!
   TBranch        *b_VetoLepton_pdgId;   //!
   TBranch        *b_VetoLepton_electronIdx;   //!
   TBranch        *b_VetoLepton_muonIdx;   //!
   TBranch        *b_VetoLepton_pt;   //!
   TBranch        *b_VetoLepton_eta;   //!
   TBranch        *b_VetoLepton_phi;   //!
   TBranch        *b_nCleanJet;   //!
   TBranch        *b_CleanJet_jetIdx;   //!
   TBranch        *b_CleanJet_pt;   //!
   TBranch        *b_CleanJet_eta;   //!
   TBranch        *b_CleanJet_phi;   //!
   TBranch        *b_Lepton_isLoose;   //!
   TBranch        *b_Lepton_isVeto;   //!
   TBranch        *b_dmZll_veto;   //!
   TBranch        *b_Lepton_isTightElectron_mvaFall17V1Iso_WP90_SS;   //!
   TBranch        *b_Lepton_isTightElectron_mvaFall17V1Iso_WP90_tthmva_70;   //!
   TBranch        *b_Lepton_isTightElectron_mvaFall17V1Iso_WP90;   //!
   TBranch        *b_Lepton_isTightElectron_mvaFall17V1Iso_WP90_SS_tthmva_70;   //!
   TBranch        *b_Lepton_isTightMuon_cut_Tight_HWWW_tthmva_80;   //!
   TBranch        *b_Lepton_isTightMuon_cut_Tight_HWWW;   //!
   TBranch        *b_FatJet_pt_raw;   //!
   TBranch        *b_FatJet_pt_nom;   //!
   TBranch        *b_FatJet_mass_raw;   //!
   TBranch        *b_FatJet_mass_nom;   //!
   TBranch        *b_FatJet_corr_JEC;   //!
   TBranch        *b_FatJet_corr_JER;   //!
   TBranch        *b_FatJet_corr_JMS;   //!
   TBranch        *b_FatJet_corr_JMR;   //!
   TBranch        *b_FatJet_msoftdrop_raw;   //!
   TBranch        *b_FatJet_msoftdrop_nom;   //!
   TBranch        *b_FatJet_msoftdrop_corr_JMR;   //!
   TBranch        *b_FatJet_msoftdrop_corr_JMS;   //!
   TBranch        *b_FatJet_msoftdrop_corr_PUPPI;   //!
   TBranch        *b_FatJet_msoftdrop_tau21DDT_nom;   //!
   TBranch        *b_FatJet_pt_jerUp;   //!
   TBranch        *b_FatJet_mass_jerUp;   //!
   TBranch        *b_FatJet_mass_jmrUp;   //!
   TBranch        *b_FatJet_mass_jmsUp;   //!
   TBranch        *b_FatJet_msoftdrop_jerUp;   //!
   TBranch        *b_FatJet_msoftdrop_jmrUp;   //!
   TBranch        *b_FatJet_msoftdrop_jmsUp;   //!
   TBranch        *b_FatJet_msoftdrop_tau21DDT_jerUp;   //!
   TBranch        *b_FatJet_msoftdrop_tau21DDT_jmrUp;   //!
   TBranch        *b_FatJet_msoftdrop_tau21DDT_jmsUp;   //!
   TBranch        *b_FatJet_pt_jesTotalUp;   //!
   TBranch        *b_FatJet_mass_jesTotalUp;   //!
   TBranch        *b_FatJet_msoftdrop_jesTotalUp;   //!
   TBranch        *b_FatJet_pt_jerDown;   //!
   TBranch        *b_FatJet_mass_jerDown;   //!
   TBranch        *b_FatJet_mass_jmrDown;   //!
   TBranch        *b_FatJet_mass_jmsDown;   //!
   TBranch        *b_FatJet_msoftdrop_jerDown;   //!
   TBranch        *b_FatJet_msoftdrop_jmrDown;   //!
   TBranch        *b_FatJet_msoftdrop_jmsDown;   //!
   TBranch        *b_FatJet_msoftdrop_tau21DDT_jerDown;   //!
   TBranch        *b_FatJet_msoftdrop_tau21DDT_jmrDown;   //!
   TBranch        *b_FatJet_msoftdrop_tau21DDT_jmsDown;   //!
   TBranch        *b_FatJet_pt_jesTotalDown;   //!
   TBranch        *b_FatJet_mass_jesTotalDown;   //!
   TBranch        *b_FatJet_msoftdrop_jesTotalDown;   //!
   TBranch        *b_nCleanFatJet;   //!
   TBranch        *b_CleanFatJet_jetIdx;   //!
   TBranch        *b_CleanFatJet_pt;   //!
   TBranch        *b_CleanFatJet_eta;   //!
   TBranch        *b_CleanFatJet_phi;   //!
   TBranch        *b_CleanFatJet_mass;   //!
   TBranch        *b_CleanFatJet_tau21;   //!
   TBranch        *b_nCleanJetNotFat;   //!
   TBranch        *b_CleanJetNotFat_jetIdx;   //!
   TBranch        *b_CleanJetNotFat_deltaR;   //!
   TBranch        *b_nLeptonGen;   //!
   TBranch        *b_LeptonGen_MotherPID;   //!
   TBranch        *b_LeptonGen_MotherStatus;   //!
   TBranch        *b_LeptonGen_pdgId;   //!
   TBranch        *b_LeptonGen_status;   //!
   TBranch        *b_LeptonGen_eta;   //!
   TBranch        *b_LeptonGen_phi;   //!
   TBranch        *b_LeptonGen_pt;   //!
   TBranch        *b_LeptonGen_mass;   //!
   TBranch        *b_LeptonGen_fromHardProcess;   //!
   TBranch        *b_LeptonGen_isDirectHadronDecayProduct;   //!
   TBranch        *b_LeptonGen_isDirectPromptTauDecayProduct;   //!
   TBranch        *b_LeptonGen_isPrompt;   //!
   TBranch        *b_LeptonGen_isTauDecayProduct;   //!
   TBranch        *b_nNeutrinoGen;   //!
   TBranch        *b_NeutrinoGen_MotherPID;   //!
   TBranch        *b_NeutrinoGen_MotherStatus;   //!
   TBranch        *b_NeutrinoGen_pdgId;   //!
   TBranch        *b_NeutrinoGen_status;   //!
   TBranch        *b_NeutrinoGen_eta;   //!
   TBranch        *b_NeutrinoGen_phi;   //!
   TBranch        *b_NeutrinoGen_pt;   //!
   TBranch        *b_NeutrinoGen_mass;   //!
   TBranch        *b_NeutrinoGen_fromHardProcess;   //!
   TBranch        *b_NeutrinoGen_isDirectHadronDecayProduct;   //!
   TBranch        *b_NeutrinoGen_isDirectPromptTauDecayProduct;   //!
   TBranch        *b_NeutrinoGen_isPrompt;   //!
   TBranch        *b_NeutrinoGen_isTauDecayProduct;   //!
   TBranch        *b_nPhotonGen;   //!
   TBranch        *b_PhotonGen_MotherPID;   //!
   TBranch        *b_PhotonGen_MotherStatus;   //!
   TBranch        *b_PhotonGen_pdgId;   //!
   TBranch        *b_PhotonGen_status;   //!
   TBranch        *b_PhotonGen_eta;   //!
   TBranch        *b_PhotonGen_phi;   //!
   TBranch        *b_PhotonGen_pt;   //!
   TBranch        *b_PhotonGen_mass;   //!
   TBranch        *b_PhotonGen_fromHardProcess;   //!
   TBranch        *b_PhotonGen_isDirectHadronDecayProduct;   //!
   TBranch        *b_PhotonGen_isDirectPromptTauDecayProduct;   //!
   TBranch        *b_PhotonGen_isPrompt;   //!
   TBranch        *b_PhotonGen_isTauDecayProduct;   //!
   TBranch        *b_gen_ptllmet;   //!
   TBranch        *b_gen_ptll;   //!
   TBranch        *b_gen_mll;   //!
   TBranch        *b_gen_llchannel;   //!
   TBranch        *b_gen_mlvlv;   //!
   TBranch        *b_lhe_mlvlv;   //!
   TBranch        *b_lhe_mWp;   //!
   TBranch        *b_lhe_mWm;   //!
   TBranch        *b_Lepton_genmatched;   //!
   TBranch        *b_Lepton_promptgenmatched;   //!
   TBranch        *b_higgsGenPt;   //!
   TBranch        *b_higgsGenEta;   //!
   TBranch        *b_higgsGenPhi;   //!
   TBranch        *b_higgsGenMass;   //!
   TBranch        *b_genVPt;   //!
   TBranch        *b_nllnnloW;   //!
   TBranch        *b_nllW;   //!
   TBranch        *b_nllW_Rup;   //!
   TBranch        *b_nllW_Qup;   //!
   TBranch        *b_nllW_Rdown;   //!
   TBranch        *b_nllW_Qdown;   //!
   TBranch        *b_gen_mww;   //!
   TBranch        *b_gen_ptww;   //!
   TBranch        *b_Gen_ZGstar_mu1_pt;   //!
   TBranch        *b_Gen_ZGstar_mu1_eta;   //!
   TBranch        *b_Gen_ZGstar_mu1_phi;   //!
   TBranch        *b_Gen_ZGstar_mu2_pt;   //!
   TBranch        *b_Gen_ZGstar_mu2_eta;   //!
   TBranch        *b_Gen_ZGstar_mu2_phi;   //!
   TBranch        *b_Gen_ZGstar_ele1_pt;   //!
   TBranch        *b_Gen_ZGstar_ele1_eta;   //!
   TBranch        *b_Gen_ZGstar_ele1_phi;   //!
   TBranch        *b_Gen_ZGstar_ele2_pt;   //!
   TBranch        *b_Gen_ZGstar_ele2_eta;   //!
   TBranch        *b_Gen_ZGstar_ele2_phi;   //!
   TBranch        *b_Gen_ZGstar_mass;   //!
   TBranch        *b_Gen_ZGstar_deltaR;   //!
   TBranch        *b_Gen_ZGstar_MomId;   //!
   TBranch        *b_Gen_ZGstar_MomStatus;   //!
   TBranch        *b_nDressedLepton;   //!
   TBranch        *b_DressedLepton_pdgId;   //!
   TBranch        *b_DressedLepton_pt;   //!
   TBranch        *b_DressedLepton_eta;   //!
   TBranch        *b_DressedLepton_phi;   //!
   TBranch        *b_DressedLepton_mass;   //!
   TBranch        *b_baseW;   //!
   TBranch        *b_Xsec;   //!
   TBranch        *b_CleanJet_mass;   //!
   TBranch        *b_CleanJet_corr_JER;   //!
   TBranch        *b_CleanJet_pt_JERUp;   //!
   TBranch        *b_CleanJet_mass_JERUp;   //!
   TBranch        *b_CleanJet_pt_JERDown;   //!
   TBranch        *b_CleanJet_mass_JERDown;   //!
   TBranch        *b_Jet_btagSF_deepcsv_M_down;   //!
   TBranch        *b_Jet_btagSF_deepcsv_M;   //!
   TBranch        *b_Jet_btagSF_deepcsv_M_up;   //!
   TBranch        *b_Jet_btagSF_deepcsv_shape_down_hf;   //!
   TBranch        *b_Jet_btagSF_deepcsv_shape;   //!
   TBranch        *b_Jet_btagSF_deepcsv_shape_up_cferr1;   //!
   TBranch        *b_Jet_btagSF_deepcsv_shape_up_jes;   //!
   TBranch        *b_Jet_btagSF_deepcsv_shape_down_cferr2;   //!
   TBranch        *b_Jet_btagSF_deepcsv_shape_up_lf;   //!
   TBranch        *b_Jet_btagSF_deepcsv_shape_down_lf;   //!
   TBranch        *b_Jet_btagSF_deepcsv_shape_down_cferr1;   //!
   TBranch        *b_Jet_btagSF_deepcsv_shape_up_lfstats1;   //!
   TBranch        *b_Jet_btagSF_deepcsv_shape_up_lfstats2;   //!
   TBranch        *b_Jet_btagSF_deepcsv_shape_up_hfstats1;   //!
   TBranch        *b_Jet_btagSF_deepcsv_shape_up_hfstats2;   //!
   TBranch        *b_Jet_btagSF_deepcsv_shape_down_lfstats2;   //!
   TBranch        *b_Jet_btagSF_deepcsv_shape_up_hf;   //!
   TBranch        *b_Jet_btagSF_deepcsv_shape_down_lfstats1;   //!
   TBranch        *b_Jet_btagSF_deepcsv_shape_down_jes;   //!
   TBranch        *b_Jet_btagSF_deepcsv_shape_down_hfstats2;   //!
   TBranch        *b_Jet_btagSF_deepcsv_shape_down_hfstats1;   //!
   TBranch        *b_Jet_btagSF_deepcsv_shape_up_cferr2;   //!
   TBranch        *b_Jet_PUIDSF_loose;   //!
   TBranch        *b_Jet_PUIDSF_loose_up;   //!
   TBranch        *b_Jet_PUIDSF_loose_down;   //!
   TBranch        *b_Jet_PUIDSF_medium;   //!
   TBranch        *b_Jet_PUIDSF_medium_up;   //!
   TBranch        *b_Jet_PUIDSF_medium_down;   //!
   TBranch        *b_Jet_PUIDSF_tight;   //!
   TBranch        *b_Jet_PUIDSF_tight_up;   //!
   TBranch        *b_Jet_PUIDSF_tight_down;   //!
   TBranch        *b_Lepton_rochesterSF;   //!
   TBranch        *b_TriggerEmulator;   //!
   TBranch        *b_EMTFbug_veto;   //!
   TBranch        *b_run_period;   //!
   TBranch        *b_Trigger_sngEl;   //!
   TBranch        *b_Trigger_sngMu;   //!
   TBranch        *b_Trigger_dblEl;   //!
   TBranch        *b_Trigger_dblMu;   //!
   TBranch        *b_Trigger_ElMu;   //!
   TBranch        *b_TriggerEffWeight_1l;   //!
   TBranch        *b_TriggerEffWeight_1l_u;   //!
   TBranch        *b_TriggerEffWeight_1l_d;   //!
   TBranch        *b_TriggerEffWeight_2l;   //!
   TBranch        *b_TriggerEffWeight_2l_u;   //!
   TBranch        *b_TriggerEffWeight_2l_d;   //!
   TBranch        *b_TriggerEffWeight_3l;   //!
   TBranch        *b_TriggerEffWeight_3l_u;   //!
   TBranch        *b_TriggerEffWeight_3l_d;   //!
   TBranch        *b_TriggerEffWeight_4l;   //!
   TBranch        *b_TriggerEffWeight_4l_u;   //!
   TBranch        *b_TriggerEffWeight_4l_d;   //!
   TBranch        *b_TriggerEffWeight_sngEl;   //!
   TBranch        *b_TriggerEffWeight_sngMu;   //!
   TBranch        *b_TriggerEffWeight_dblEl;   //!
   TBranch        *b_TriggerEffWeight_dblMu;   //!
   TBranch        *b_TriggerEffWeight_ElMu;   //!
   TBranch        *b_Lepton_RecoSF;   //!
   TBranch        *b_Lepton_RecoSF_Up;   //!
   TBranch        *b_Lepton_RecoSF_Down;   //!
   TBranch        *b_Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_IdIsoSF;   //!
   TBranch        *b_Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_IdIsoSF_Up;   //!
   TBranch        *b_Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_IdIsoSF_Down;   //!
   TBranch        *b_Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_IdIsoSF_Syst;   //!
   TBranch        *b_Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_TotSF;   //!
   TBranch        *b_Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_TotSF_Up;   //!
   TBranch        *b_Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_TotSF_Down;   //!
   TBranch        *b_Lepton_tightElectron_mvaFall17V1Iso_WP90_tthmva_70_IdIsoSF;   //!
   TBranch        *b_Lepton_tightElectron_mvaFall17V1Iso_WP90_tthmva_70_IdIsoSF_Up;   //!
   TBranch        *b_Lepton_tightElectron_mvaFall17V1Iso_WP90_tthmva_70_IdIsoSF_Down;   //!
   TBranch        *b_Lepton_tightElectron_mvaFall17V1Iso_WP90_tthmva_70_IdIsoSF_Syst;   //!
   TBranch        *b_Lepton_tightElectron_mvaFall17V1Iso_WP90_tthmva_70_TotSF;   //!
   TBranch        *b_Lepton_tightElectron_mvaFall17V1Iso_WP90_tthmva_70_TotSF_Up;   //!
   TBranch        *b_Lepton_tightElectron_mvaFall17V1Iso_WP90_tthmva_70_TotSF_Down;   //!
   TBranch        *b_Lepton_tightElectron_mvaFall17V1Iso_WP90_IdIsoSF;   //!
   TBranch        *b_Lepton_tightElectron_mvaFall17V1Iso_WP90_IdIsoSF_Up;   //!
   TBranch        *b_Lepton_tightElectron_mvaFall17V1Iso_WP90_IdIsoSF_Down;   //!
   TBranch        *b_Lepton_tightElectron_mvaFall17V1Iso_WP90_IdIsoSF_Syst;   //!
   TBranch        *b_Lepton_tightElectron_mvaFall17V1Iso_WP90_TotSF;   //!
   TBranch        *b_Lepton_tightElectron_mvaFall17V1Iso_WP90_TotSF_Up;   //!
   TBranch        *b_Lepton_tightElectron_mvaFall17V1Iso_WP90_TotSF_Down;   //!
   TBranch        *b_Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_tthmva_70_IdIsoSF;   //!
   TBranch        *b_Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_tthmva_70_IdIsoSF_Up;   //!
   TBranch        *b_Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_tthmva_70_IdIsoSF_Down;   //!
   TBranch        *b_Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_tthmva_70_IdIsoSF_Syst;   //!
   TBranch        *b_Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_tthmva_70_TotSF;   //!
   TBranch        *b_Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_tthmva_70_TotSF_Up;   //!
   TBranch        *b_Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_tthmva_70_TotSF_Down;   //!
   TBranch        *b_Lepton_tightMuon_cut_Tight_HWWW_tthmva_80_IdIsoSF;   //!
   TBranch        *b_Lepton_tightMuon_cut_Tight_HWWW_tthmva_80_IdIsoSF_Up;   //!
   TBranch        *b_Lepton_tightMuon_cut_Tight_HWWW_tthmva_80_IdIsoSF_Down;   //!
   TBranch        *b_Lepton_tightMuon_cut_Tight_HWWW_tthmva_80_IdIsoSF_Syst;   //!
   TBranch        *b_Lepton_tightMuon_cut_Tight_HWWW_tthmva_80_TotSF;   //!
   TBranch        *b_Lepton_tightMuon_cut_Tight_HWWW_tthmva_80_TotSF_Up;   //!
   TBranch        *b_Lepton_tightMuon_cut_Tight_HWWW_tthmva_80_TotSF_Down;   //!
   TBranch        *b_Lepton_tightMuon_cut_Tight_HWWW_IdIsoSF;   //!
   TBranch        *b_Lepton_tightMuon_cut_Tight_HWWW_IdIsoSF_Up;   //!
   TBranch        *b_Lepton_tightMuon_cut_Tight_HWWW_IdIsoSF_Down;   //!
   TBranch        *b_Lepton_tightMuon_cut_Tight_HWWW_IdIsoSF_Syst;   //!
   TBranch        *b_Lepton_tightMuon_cut_Tight_HWWW_TotSF;   //!
   TBranch        *b_Lepton_tightMuon_cut_Tight_HWWW_TotSF_Up;   //!
   TBranch        *b_Lepton_tightMuon_cut_Tight_HWWW_TotSF_Down;   //!
   TBranch        *b_puWeight_2018;   //!
   TBranch        *b_puWeight;   //!
   TBranch        *b_puWeight_2018Up;   //!
   TBranch        *b_puWeightUp;   //!
   TBranch        *b_puWeight_2018Down;   //!
   TBranch        *b_puWeightDown;   //!
   TBranch        *b_mll;   //!
   TBranch        *b_dphill;   //!
   TBranch        *b_yll;   //!
   TBranch        *b_ptll;   //!
   TBranch        *b_pt1;   //!
   TBranch        *b_pt2;   //!
   TBranch        *b_mth;   //!
   TBranch        *b_mcoll;   //!
   TBranch        *b_mcollWW;   //!
   TBranch        *b_mTi;   //!
   TBranch        *b_mTe;   //!
   TBranch        *b_choiMass;   //!
   TBranch        *b_mR;   //!
   TBranch        *b_mT2;   //!
   TBranch        *b_channel;   //!
   TBranch        *b_drll;   //!
   TBranch        *b_dphilljet;   //!
   TBranch        *b_dphilljetjet;   //!
   TBranch        *b_dphilljetjet_cut;   //!
   TBranch        *b_dphillmet;   //!
   TBranch        *b_dphilmet;   //!
   TBranch        *b_dphilmet1;   //!
   TBranch        *b_dphilmet2;   //!
   TBranch        *b_mtw1;   //!
   TBranch        *b_mtw2;   //!
   TBranch        *b_mjj;   //!
   TBranch        *b_detajj;   //!
   TBranch        *b_njet;   //!
   TBranch        *b_mllWgSt;   //!
   TBranch        *b_drllWgSt;   //!
   TBranch        *b_mllThird;   //!
   TBranch        *b_mllOneThree;   //!
   TBranch        *b_mllTwoThree;   //!
   TBranch        *b_drllOneThree;   //!
   TBranch        *b_drllTwoThree;   //!
   TBranch        *b_dphijet1met;   //!
   TBranch        *b_dphijet2met;   //!
   TBranch        *b_dphijjmet;   //!
   TBranch        *b_dphijjmet_cut;   //!
   TBranch        *b_dphilep1jet1;   //!
   TBranch        *b_dphilep1jet2;   //!
   TBranch        *b_dphilep2jet1;   //!
   TBranch        *b_dphilep2jet2;   //!
   TBranch        *b_mindetajl;   //!
   TBranch        *b_detall;   //!
   TBranch        *b_dphijj;   //!
   TBranch        *b_maxdphilepjj;   //!
   TBranch        *b_dphilep1jj;   //!
   TBranch        *b_dphilep2jj;   //!
   TBranch        *b_ht;   //!
   TBranch        *b_vht_pt;   //!
   TBranch        *b_vht_phi;   //!
   TBranch        *b_projpfmet;   //!
   TBranch        *b_dphiltkmet;   //!
   TBranch        *b_projtkmet;   //!
   TBranch        *b_mpmet;   //!
   TBranch        *b_pTWW;   //!
   TBranch        *b_pTHjj;   //!
   TBranch        *b_recoil;   //!
   TBranch        *b_jetpt1_cut;   //!
   TBranch        *b_jetpt2_cut;   //!
   TBranch        *b_dphilljet_cut;   //!
   TBranch        *b_dphijet1met_cut;   //!
   TBranch        *b_dphijet2met_cut;   //!
   TBranch        *b_PfMetDivSumMet;   //!
   TBranch        *b_upara;   //!
   TBranch        *b_uperp;   //!
   TBranch        *b_m2ljj20;   //!
   TBranch        *b_m2ljj30;   //!
   TBranch        *b_ptTOT_cut;   //!
   TBranch        *b_mTOT_cut;   //!
   TBranch        *b_OLV1_cut;   //!
   TBranch        *b_OLV2_cut;   //!
   TBranch        *b_Ceta_cut;   //!
   TBranch        *b_mlljj20_whss;   //!
   TBranch        *b_mlljj30_whss;   //!
   TBranch        *b_WlepPt_whss;   //!
   TBranch        *b_WlepMt_whss;   //!
   TBranch        *b_WH3l_dphilmet;   //!
   TBranch        *b_WH3l_drOSll;   //!
   TBranch        *b_WH3l_ZVeto;   //!
   TBranch        *b_WH3l_flagOSSF;   //!
   TBranch        *b_ZH3l_checkmZ;   //!
   TBranch        *b_ZH3l_njet;   //!
   TBranch        *b_ZH3l_pdgid_l;   //!
   TBranch        *b_WH3l_mOSll;   //!
   TBranch        *b_WH3l_mtWWW;   //!
   TBranch        *b_ZH3l_mTlmet;   //!
   TBranch        *b_WH3l_ptOSll;   //!
   TBranch        *b_ZH3l_mTlmetj;   //!
   TBranch        *b_ZH3l_pTlmetjj;   //!
   TBranch        *b_WH3l_ptlll;   //!
   TBranch        *b_WH3l_chlll;   //!
   TBranch        *b_ZH3l_Z4lveto;   //!
   TBranch        *b_ZH3l_dmjjmW;   //!
   TBranch        *b_ZH3l_dphilmetjj;   //!
   TBranch        *b_ZH3l_mTlmetjj;   //!
   TBranch        *b_WH3l_ptW;   //!
   TBranch        *b_ZH3l_pTlmetj;   //!
   TBranch        *b_ZH3l_pTZ;   //!
   TBranch        *b_WH3l_mtlmet;   //!
   TBranch        *b_WH3l_dphilllmet;   //!
   TBranch        *b_WH3l_nbjet;   //!
   TBranch        *b_ZH3l_dphilmetj;   //!
   TBranch        *b_WH3l_njet;   //!
   TBranch        *b_WH3l_ptWWW;   //!
   TBranch        *b_WH3l_mlll;   //!
   TBranch        *b_pfmetPhi_zh4l;   //!
   TBranch        *b_z0Mass_zh4l;   //!
   TBranch        *b_z0Pt_zh4l;   //!
   TBranch        *b_z1Mass_zh4l;   //!
   TBranch        *b_z1Pt_zh4l;   //!
   TBranch        *b_zaMass_zh4l;   //!
   TBranch        *b_zbMass_zh4l;   //!
   TBranch        *b_flagZ1SF_zh4l;   //!
   TBranch        *b_z0DeltaPhi_zh4l;   //!
   TBranch        *b_z1DeltaPhi_zh4l;   //!
   TBranch        *b_zaDeltaPhi_zh4l;   //!
   TBranch        *b_zbDeltaPhi_zh4l;   //!
   TBranch        *b_minDeltaPhi_zh4l;   //!
   TBranch        *b_z0DeltaR_zh4l;   //!
   TBranch        *b_z1DeltaR_zh4l;   //!
   TBranch        *b_zaDeltaR_zh4l;   //!
   TBranch        *b_zbDeltaR_zh4l;   //!
   TBranch        *b_lep1Mt_zh4l;   //!
   TBranch        *b_lep2Mt_zh4l;   //!
   TBranch        *b_lep3Mt_zh4l;   //!
   TBranch        *b_lep4Mt_zh4l;   //!
   TBranch        *b_minMt_zh4l;   //!
   TBranch        *b_z1Mt_zh4l;   //!
   TBranch        *b_mllll_zh4l;   //!
   TBranch        *b_chllll_zh4l;   //!
   TBranch        *b_z1dPhi_lep1MET_zh4l;   //!
   TBranch        *b_z1dPhi_lep2MET_zh4l;   //!
   TBranch        *b_z1mindPhi_lepMET_zh4l;   //!
   TBranch        *b_LepCut2l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW;   //!
   TBranch        *b_LepSF3l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW_tthmva_80;   //!
   TBranch        *b_SFweight4l;   //!
   TBranch        *b_LepSF4l__ele_mvaFall17V1Iso_WP90_SS__Do;   //!
   TBranch        *b_LepCut4l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW;   //!
   TBranch        *b_LepCut2l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW_tthmva_80;   //!
   TBranch        *b_LepCut3l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW;   //!
   TBranch        *b_LepSF3l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW_tthmva_80;   //!
   TBranch        *b_LepSF2l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__Do;   //!
   TBranch        *b_LepSF4l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__Do;   //!
   TBranch        *b_LepSF4l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW;   //!
   TBranch        *b_LepCut3l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW_tthmva_80;   //!
   TBranch        *b_LepSF3l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__Up;   //!
   TBranch        *b_LepCut2l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW;   //!
   TBranch        *b_LepSF4l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW_tthmva_80;   //!
   TBranch        *b_LepSF3l__ele_mvaFall17V1Iso_WP90_SS__Do;   //!
   TBranch        *b_LepCut2l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW_tthmva_80;   //!
   TBranch        *b_LepSF4l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__Up;   //!
   TBranch        *b_LepSF2l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__Up;   //!
   TBranch        *b_LepSF2l__mu_cut_Tight_HWWW_tthmva_80__Up;   //!
   TBranch        *b_LepCut4l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW_tthmva_80;   //!
   TBranch        *b_LepSF2l__ele_mvaFall17V1Iso_WP90_SS__Up;   //!
   TBranch        *b_LepCut4l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW;   //!
   TBranch        *b_LepSF4l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW_tthmva_80;   //!
   TBranch        *b_LepSF3l__ele_mvaFall17V1Iso_WP90__Do;   //!
   TBranch        *b_LepSF2l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW_tthmva_80;   //!
   TBranch        *b_LepSF2l__ele_mvaFall17V1Iso_WP90__Do;   //!
   TBranch        *b_LepSF3l__mu_cut_Tight_HWWW_tthmva_80__Up;   //!
   TBranch        *b_LepSF3l__mu_cut_Tight_HWWW__Up;   //!
   TBranch        *b_LepSF3l__mu_cut_Tight_HWWW_tthmva_80__Do;   //!
   TBranch        *b_LepSF3l__ele_mvaFall17V1Iso_WP90_tthmva_70__Up;   //!
   TBranch        *b_LepCut4l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW_tthmva_80;   //!
   TBranch        *b_LepSF2l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW_tthmva_80;   //!
   TBranch        *b_LepCut3l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW;   //!
   TBranch        *b_LepSF3l__ele_mvaFall17V1Iso_WP90__Up;   //!
   TBranch        *b_LepSF3l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW;   //!
   TBranch        *b_LepSF2l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW;   //!
   TBranch        *b_LepSF4l__ele_mvaFall17V1Iso_WP90_SS__Up;   //!
   TBranch        *b_LepCut3l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW;   //!
   TBranch        *b_LepSF2l__ele_mvaFall17V1Iso_WP90__Up;   //!
   TBranch        *b_GenLepMatch3l;   //!
   TBranch        *b_LepSF2l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW_tthmva_80;   //!
   TBranch        *b_LepSF2l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW;   //!
   TBranch        *b_LepSF4l__mu_cut_Tight_HWWW_tthmva_80__Do;   //!
   TBranch        *b_LepCut4l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW;   //!
   TBranch        *b_LepSF3l__ele_mvaFall17V1Iso_WP90_tthmva_70__Do;   //!
   TBranch        *b_LepSF4l__mu_cut_Tight_HWWW__Do;   //!
   TBranch        *b_LepSF4l__mu_cut_Tight_HWWW_tthmva_80__Up;   //!
   TBranch        *b_LepSF4l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW_tthmva_80;   //!
   TBranch        *b_SFweight2lMH;   //!
   TBranch        *b_LepSF3l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW_tthmva_80;   //!
   TBranch        *b_LepSF2l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW;   //!
   TBranch        *b_LepSF2l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW;   //!
   TBranch        *b_LepSF3l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW;   //!
   TBranch        *b_LepSF3l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW_tthmva_80;   //!
   TBranch        *b_LepSF4l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW_tthmva_80;   //!
   TBranch        *b_METFilter_MC;   //!
   TBranch        *b_LepCut2l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW_tthmva_80;   //!
   TBranch        *b_LepSF3l__mu_cut_Tight_HWWW__Do;   //!
   TBranch        *b_GenLepMatch2l;   //!
   TBranch        *b_LepCut4l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW_tthmva_80;   //!
   TBranch        *b_LepSF2l__mu_cut_Tight_HWWW__Up;   //!
   TBranch        *b_LepSF2l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW_tthmva_80;   //!
   TBranch        *b_LepSF4l__ele_mvaFall17V1Iso_WP90__Up;   //!
   TBranch        *b_LepCut3l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW_tthmva_80;   //!
   TBranch        *b_SFweight2l;   //!
   TBranch        *b_LepCut2l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW;   //!
   TBranch        *b_LepSF2l__ele_mvaFall17V1Iso_WP90_tthmva_70__Up;   //!
   TBranch        *b_LepSF4l__ele_mvaFall17V1Iso_WP90_tthmva_70__Up;   //!
   TBranch        *b_LepCut3l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW;   //!
   TBranch        *b_LepSF3l__ele_mvaFall17V1Iso_WP90_SS__Up;   //!
   TBranch        *b_LepSF4l__ele_mvaFall17V1Iso_WP90__Do;   //!
   TBranch        *b_LepSF3l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__Do;   //!
   TBranch        *b_LepSF3l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW;   //!
   TBranch        *b_LepCut2l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW_tthmva_80;   //!
   TBranch        *b_LepSF2l__mu_cut_Tight_HWWW__Do;   //!
   TBranch        *b_LepCut4l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW;   //!
   TBranch        *b_LepSF2l__mu_cut_Tight_HWWW_tthmva_80__Do;   //!
   TBranch        *b_LepCut3l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW_tthmva_80;   //!
   TBranch        *b_SFweight3l;   //!
   TBranch        *b_GenLepMatch4l;   //!
   TBranch        *b_LepCut4l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW_tthmva_80;   //!
   TBranch        *b_LepSF4l__mu_cut_Tight_HWWW__Up;   //!
   TBranch        *b_LepSF4l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW;   //!
   TBranch        *b_XSWeight;   //!
   TBranch        *b_LepSF4l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW;   //!
   TBranch        *b_LepSF2l__ele_mvaFall17V1Iso_WP90_SS__Do;   //!
   TBranch        *b_LepSF3l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW;   //!
   TBranch        *b_LepSF4l__ele_mvaFall17V1Iso_WP90_tthmva_70__Do;   //!
   TBranch        *b_LepSF2l__ele_mvaFall17V1Iso_WP90_tthmva_70__Do;   //!
   TBranch        *b_LepCut3l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW_tthmva_80;   //!
   TBranch        *b_LepSF4l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW;   //!
   TBranch        *b_LepCut2l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW;   //!
   TBranch        *b_embed_tautauveto;   //!
   TBranch        *b_BoostedWtagSF_nominal;   //!
   TBranch        *b_BoostedWtagSF_up;   //!
   TBranch        *b_BoostedWtagSF_down;   //!
   TBranch        *b_dymva_alt_dnn_2j;   //!
   TBranch        *b_dymva_alt_dnn_VH;   //!
   TBranch        *b_dymva_alt_dnn_0j;   //!
   TBranch        *b_dymva_alt_dnn_1j;   //!
   TBranch        *b_dymva_alt_bdt_VBF;   //!
   TBranch        *b_dymva_alt_bdt_0j;   //!
   TBranch        *b_dymva_alt_dnn_VBF;   //!
   TBranch        *b_dymva_alt_bdt_VH;   //!
   TBranch        *b_dymva_alt_bdt_2j;   //!
   TBranch        *b_dymva_alt_bdt_1j;   //!
   TBranch        *b_Mucca2HDMFull;   //!
   TBranch        *b_hm;   //!
   TBranch        *b_me_vbf_hsm;   //!
   TBranch        *b_me_vbf_hm;   //!
   TBranch        *b_me_vbf_hp;   //!
   TBranch        *b_me_vbf_hl;   //!
   TBranch        *b_me_vbf_mixhm;   //!
   TBranch        *b_me_vbf_mixhp;   //!
   TBranch        *b_me_wh_hsm;   //!
   TBranch        *b_me_wh_hm;   //!
   TBranch        *b_me_wh_hp;   //!
   TBranch        *b_me_wh_hl;   //!
   TBranch        *b_me_wh_mixhm;   //!
   TBranch        *b_me_wh_mixhp;   //!
   TBranch        *b_me_zh_hsm;   //!
   TBranch        *b_me_zh_hm;   //!
   TBranch        *b_me_zh_hp;   //!
   TBranch        *b_me_zh_hl;   //!
   TBranch        *b_me_zh_mixhm;   //!
   TBranch        *b_me_zh_mixhp;   //!
   TBranch        *b_me_qcd_hsm;   //!
   TBranch        *b_pjjSm_wh;   //!
   TBranch        *b_pjjTr_wh;   //!
   TBranch        *b_pjjSm_zh;   //!
   TBranch        *b_pjjTr_zh;   //!
   TBranch        *b_meAvg_wh;   //!
   TBranch        *b_meAvg_zh;   //!

   Events(TTree *tree=0);
   virtual ~Events();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef Events_cxx
Events::Events(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("root://eoscms.cern.ch//eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Autumn18_102X_nAODv7_Full2018v7/MCl1loose2018v7__MCCorr2018v7__l2loose__l2tightOR2018v7/nanoLatino_WW-LO__part0.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("root://eoscms.cern.ch//eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Autumn18_102X_nAODv7_Full2018v7/MCl1loose2018v7__MCCorr2018v7__l2loose__l2tightOR2018v7/nanoLatino_WW-LO__part0.root");
      }
      f->GetObject("Events",tree);

   }
   Init(tree);
}

Events::~Events()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t Events::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t Events::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void Events::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("luminosityBlock", &luminosityBlock, &b_luminosityBlock);
   fChain->SetBranchAddress("event", &event, &b_event);
   fChain->SetBranchAddress("HTXS_Higgs_pt", &HTXS_Higgs_pt, &b_HTXS_Higgs_pt);
   fChain->SetBranchAddress("HTXS_Higgs_y", &HTXS_Higgs_y, &b_HTXS_Higgs_y);
   fChain->SetBranchAddress("HTXS_stage1_1_cat_pTjet25GeV", &HTXS_stage1_1_cat_pTjet25GeV, &b_HTXS_stage1_1_cat_pTjet25GeV);
   fChain->SetBranchAddress("HTXS_stage1_1_cat_pTjet30GeV", &HTXS_stage1_1_cat_pTjet30GeV, &b_HTXS_stage1_1_cat_pTjet30GeV);
   fChain->SetBranchAddress("HTXS_stage1_1_fine_cat_pTjet25GeV", &HTXS_stage1_1_fine_cat_pTjet25GeV, &b_HTXS_stage1_1_fine_cat_pTjet25GeV);
   fChain->SetBranchAddress("HTXS_stage1_1_fine_cat_pTjet30GeV", &HTXS_stage1_1_fine_cat_pTjet30GeV, &b_HTXS_stage1_1_fine_cat_pTjet30GeV);
   fChain->SetBranchAddress("HTXS_stage1_2_cat_pTjet25GeV", &HTXS_stage1_2_cat_pTjet25GeV, &b_HTXS_stage1_2_cat_pTjet25GeV);
   fChain->SetBranchAddress("HTXS_stage1_2_cat_pTjet30GeV", &HTXS_stage1_2_cat_pTjet30GeV, &b_HTXS_stage1_2_cat_pTjet30GeV);
   fChain->SetBranchAddress("HTXS_stage1_2_fine_cat_pTjet25GeV", &HTXS_stage1_2_fine_cat_pTjet25GeV, &b_HTXS_stage1_2_fine_cat_pTjet25GeV);
   fChain->SetBranchAddress("HTXS_stage1_2_fine_cat_pTjet30GeV", &HTXS_stage1_2_fine_cat_pTjet30GeV, &b_HTXS_stage1_2_fine_cat_pTjet30GeV);
   fChain->SetBranchAddress("HTXS_stage_0", &HTXS_stage_0, &b_HTXS_stage_0);
   fChain->SetBranchAddress("HTXS_stage_1_pTjet25", &HTXS_stage_1_pTjet25, &b_HTXS_stage_1_pTjet25);
   fChain->SetBranchAddress("HTXS_stage_1_pTjet30", &HTXS_stage_1_pTjet30, &b_HTXS_stage_1_pTjet30);
   fChain->SetBranchAddress("HTXS_njets25", &HTXS_njets25, &b_HTXS_njets25);
   fChain->SetBranchAddress("HTXS_njets30", &HTXS_njets30, &b_HTXS_njets30);
   fChain->SetBranchAddress("btagWeight_CSVV2", &btagWeight_CSVV2, &b_btagWeight_CSVV2);
   fChain->SetBranchAddress("btagWeight_DeepCSVB", &btagWeight_DeepCSVB, &b_btagWeight_DeepCSVB);
   fChain->SetBranchAddress("CaloMET_phi", &CaloMET_phi, &b_CaloMET_phi);
   fChain->SetBranchAddress("CaloMET_pt", &CaloMET_pt, &b_CaloMET_pt);
   fChain->SetBranchAddress("CaloMET_sumEt", &CaloMET_sumEt, &b_CaloMET_sumEt);
   fChain->SetBranchAddress("ChsMET_phi", &ChsMET_phi, &b_ChsMET_phi);
   fChain->SetBranchAddress("ChsMET_pt", &ChsMET_pt, &b_ChsMET_pt);
   fChain->SetBranchAddress("ChsMET_sumEt", &ChsMET_sumEt, &b_ChsMET_sumEt);
   fChain->SetBranchAddress("nCorrT1METJet", &nCorrT1METJet, &b_nCorrT1METJet);
   fChain->SetBranchAddress("CorrT1METJet_area", CorrT1METJet_area, &b_CorrT1METJet_area);
   fChain->SetBranchAddress("CorrT1METJet_eta", CorrT1METJet_eta, &b_CorrT1METJet_eta);
   fChain->SetBranchAddress("CorrT1METJet_muonSubtrFactor", CorrT1METJet_muonSubtrFactor, &b_CorrT1METJet_muonSubtrFactor);
   fChain->SetBranchAddress("CorrT1METJet_phi", CorrT1METJet_phi, &b_CorrT1METJet_phi);
   fChain->SetBranchAddress("CorrT1METJet_rawPt", CorrT1METJet_rawPt, &b_CorrT1METJet_rawPt);
   fChain->SetBranchAddress("nElectron", &nElectron, &b_nElectron);
   fChain->SetBranchAddress("Electron_deltaEtaSC", Electron_deltaEtaSC, &b_Electron_deltaEtaSC);
   fChain->SetBranchAddress("Electron_dr03EcalRecHitSumEt", Electron_dr03EcalRecHitSumEt, &b_Electron_dr03EcalRecHitSumEt);
   fChain->SetBranchAddress("Electron_dr03HcalDepth1TowerSumEt", Electron_dr03HcalDepth1TowerSumEt, &b_Electron_dr03HcalDepth1TowerSumEt);
   fChain->SetBranchAddress("Electron_dr03TkSumPt", Electron_dr03TkSumPt, &b_Electron_dr03TkSumPt);
   fChain->SetBranchAddress("Electron_dr03TkSumPtHEEP", Electron_dr03TkSumPtHEEP, &b_Electron_dr03TkSumPtHEEP);
   fChain->SetBranchAddress("Electron_dxy", Electron_dxy, &b_Electron_dxy);
   fChain->SetBranchAddress("Electron_dxyErr", Electron_dxyErr, &b_Electron_dxyErr);
   fChain->SetBranchAddress("Electron_dz", Electron_dz, &b_Electron_dz);
   fChain->SetBranchAddress("Electron_dzErr", Electron_dzErr, &b_Electron_dzErr);
   fChain->SetBranchAddress("Electron_eCorr", Electron_eCorr, &b_Electron_eCorr);
   fChain->SetBranchAddress("Electron_eInvMinusPInv", Electron_eInvMinusPInv, &b_Electron_eInvMinusPInv);
   fChain->SetBranchAddress("Electron_energyErr", Electron_energyErr, &b_Electron_energyErr);
   fChain->SetBranchAddress("Electron_eta", Electron_eta, &b_Electron_eta);
   fChain->SetBranchAddress("Electron_hoe", Electron_hoe, &b_Electron_hoe);
   fChain->SetBranchAddress("Electron_ip3d", Electron_ip3d, &b_Electron_ip3d);
   fChain->SetBranchAddress("Electron_jetPtRelv2", Electron_jetPtRelv2, &b_Electron_jetPtRelv2);
   fChain->SetBranchAddress("Electron_jetRelIso", Electron_jetRelIso, &b_Electron_jetRelIso);
   fChain->SetBranchAddress("Electron_mass", Electron_mass, &b_Electron_mass);
   fChain->SetBranchAddress("Electron_miniPFRelIso_all", Electron_miniPFRelIso_all, &b_Electron_miniPFRelIso_all);
   fChain->SetBranchAddress("Electron_miniPFRelIso_chg", Electron_miniPFRelIso_chg, &b_Electron_miniPFRelIso_chg);
   fChain->SetBranchAddress("Electron_mvaFall17V1Iso", Electron_mvaFall17V1Iso, &b_Electron_mvaFall17V1Iso);
   fChain->SetBranchAddress("Electron_mvaFall17V1noIso", Electron_mvaFall17V1noIso, &b_Electron_mvaFall17V1noIso);
   fChain->SetBranchAddress("Electron_mvaFall17V2Iso", Electron_mvaFall17V2Iso, &b_Electron_mvaFall17V2Iso);
   fChain->SetBranchAddress("Electron_mvaFall17V2noIso", Electron_mvaFall17V2noIso, &b_Electron_mvaFall17V2noIso);
   fChain->SetBranchAddress("Electron_pfRelIso03_all", Electron_pfRelIso03_all, &b_Electron_pfRelIso03_all);
   fChain->SetBranchAddress("Electron_pfRelIso03_chg", Electron_pfRelIso03_chg, &b_Electron_pfRelIso03_chg);
   fChain->SetBranchAddress("Electron_phi", Electron_phi, &b_Electron_phi);
   fChain->SetBranchAddress("Electron_pt", Electron_pt, &b_Electron_pt);
   fChain->SetBranchAddress("Electron_r9", Electron_r9, &b_Electron_r9);
   fChain->SetBranchAddress("Electron_scEtOverPt", Electron_scEtOverPt, &b_Electron_scEtOverPt);
   fChain->SetBranchAddress("Electron_sieie", Electron_sieie, &b_Electron_sieie);
   fChain->SetBranchAddress("Electron_sip3d", Electron_sip3d, &b_Electron_sip3d);
   fChain->SetBranchAddress("Electron_mvaTTH", Electron_mvaTTH, &b_Electron_mvaTTH);
   fChain->SetBranchAddress("Electron_charge", Electron_charge, &b_Electron_charge);
   fChain->SetBranchAddress("Electron_cutBased", Electron_cutBased, &b_Electron_cutBased);
   fChain->SetBranchAddress("Electron_cutBased_Fall17_V1", Electron_cutBased_Fall17_V1, &b_Electron_cutBased_Fall17_V1);
   fChain->SetBranchAddress("Electron_jetIdx", Electron_jetIdx, &b_Electron_jetIdx);
   fChain->SetBranchAddress("Electron_pdgId", Electron_pdgId, &b_Electron_pdgId);
   fChain->SetBranchAddress("Electron_photonIdx", Electron_photonIdx, &b_Electron_photonIdx);
   fChain->SetBranchAddress("Electron_tightCharge", Electron_tightCharge, &b_Electron_tightCharge);
   fChain->SetBranchAddress("Electron_vidNestedWPBitmap", Electron_vidNestedWPBitmap, &b_Electron_vidNestedWPBitmap);
   fChain->SetBranchAddress("Electron_vidNestedWPBitmapHEEP", Electron_vidNestedWPBitmapHEEP, &b_Electron_vidNestedWPBitmapHEEP);
   fChain->SetBranchAddress("Electron_convVeto", Electron_convVeto, &b_Electron_convVeto);
   fChain->SetBranchAddress("Electron_cutBased_HEEP", Electron_cutBased_HEEP, &b_Electron_cutBased_HEEP);
   fChain->SetBranchAddress("Electron_isPFcand", Electron_isPFcand, &b_Electron_isPFcand);
   fChain->SetBranchAddress("Electron_lostHits", Electron_lostHits, &b_Electron_lostHits);
   fChain->SetBranchAddress("Electron_mvaFall17V1Iso_WP80", Electron_mvaFall17V1Iso_WP80, &b_Electron_mvaFall17V1Iso_WP80);
   fChain->SetBranchAddress("Electron_mvaFall17V1Iso_WP90", Electron_mvaFall17V1Iso_WP90, &b_Electron_mvaFall17V1Iso_WP90);
   fChain->SetBranchAddress("Electron_mvaFall17V1Iso_WPL", Electron_mvaFall17V1Iso_WPL, &b_Electron_mvaFall17V1Iso_WPL);
   fChain->SetBranchAddress("Electron_mvaFall17V1noIso_WP80", Electron_mvaFall17V1noIso_WP80, &b_Electron_mvaFall17V1noIso_WP80);
   fChain->SetBranchAddress("Electron_mvaFall17V1noIso_WP90", Electron_mvaFall17V1noIso_WP90, &b_Electron_mvaFall17V1noIso_WP90);
   fChain->SetBranchAddress("Electron_mvaFall17V1noIso_WPL", Electron_mvaFall17V1noIso_WPL, &b_Electron_mvaFall17V1noIso_WPL);
   fChain->SetBranchAddress("Electron_mvaFall17V2Iso_WP80", Electron_mvaFall17V2Iso_WP80, &b_Electron_mvaFall17V2Iso_WP80);
   fChain->SetBranchAddress("Electron_mvaFall17V2Iso_WP90", Electron_mvaFall17V2Iso_WP90, &b_Electron_mvaFall17V2Iso_WP90);
   fChain->SetBranchAddress("Electron_mvaFall17V2Iso_WPL", Electron_mvaFall17V2Iso_WPL, &b_Electron_mvaFall17V2Iso_WPL);
   fChain->SetBranchAddress("Electron_mvaFall17V2noIso_WP80", Electron_mvaFall17V2noIso_WP80, &b_Electron_mvaFall17V2noIso_WP80);
   fChain->SetBranchAddress("Electron_mvaFall17V2noIso_WP90", Electron_mvaFall17V2noIso_WP90, &b_Electron_mvaFall17V2noIso_WP90);
   fChain->SetBranchAddress("Electron_mvaFall17V2noIso_WPL", Electron_mvaFall17V2noIso_WPL, &b_Electron_mvaFall17V2noIso_WPL);
   fChain->SetBranchAddress("Electron_seedGain", Electron_seedGain, &b_Electron_seedGain);
   fChain->SetBranchAddress("Flag_ecalBadCalibFilterV2", &Flag_ecalBadCalibFilterV2, &b_Flag_ecalBadCalibFilterV2);
   fChain->SetBranchAddress("nFatJet", &nFatJet, &b_nFatJet);
   fChain->SetBranchAddress("FatJet_area", FatJet_area, &b_FatJet_area);
   fChain->SetBranchAddress("FatJet_btagCMVA", FatJet_btagCMVA, &b_FatJet_btagCMVA);
   fChain->SetBranchAddress("FatJet_btagCSVV2", FatJet_btagCSVV2, &b_FatJet_btagCSVV2);
   fChain->SetBranchAddress("FatJet_btagDDBvL", FatJet_btagDDBvL, &b_FatJet_btagDDBvL);
   fChain->SetBranchAddress("FatJet_btagDDBvL_noMD", FatJet_btagDDBvL_noMD, &b_FatJet_btagDDBvL_noMD);
   fChain->SetBranchAddress("FatJet_btagDDCvB", FatJet_btagDDCvB, &b_FatJet_btagDDCvB);
   fChain->SetBranchAddress("FatJet_btagDDCvB_noMD", FatJet_btagDDCvB_noMD, &b_FatJet_btagDDCvB_noMD);
   fChain->SetBranchAddress("FatJet_btagDDCvL", FatJet_btagDDCvL, &b_FatJet_btagDDCvL);
   fChain->SetBranchAddress("FatJet_btagDDCvL_noMD", FatJet_btagDDCvL_noMD, &b_FatJet_btagDDCvL_noMD);
   fChain->SetBranchAddress("FatJet_btagDeepB", FatJet_btagDeepB, &b_FatJet_btagDeepB);
   fChain->SetBranchAddress("FatJet_btagHbb", FatJet_btagHbb, &b_FatJet_btagHbb);
   fChain->SetBranchAddress("FatJet_deepTagMD_H4qvsQCD", FatJet_deepTagMD_H4qvsQCD, &b_FatJet_deepTagMD_H4qvsQCD);
   fChain->SetBranchAddress("FatJet_deepTagMD_HbbvsQCD", FatJet_deepTagMD_HbbvsQCD, &b_FatJet_deepTagMD_HbbvsQCD);
   fChain->SetBranchAddress("FatJet_deepTagMD_TvsQCD", FatJet_deepTagMD_TvsQCD, &b_FatJet_deepTagMD_TvsQCD);
   fChain->SetBranchAddress("FatJet_deepTagMD_WvsQCD", FatJet_deepTagMD_WvsQCD, &b_FatJet_deepTagMD_WvsQCD);
   fChain->SetBranchAddress("FatJet_deepTagMD_ZHbbvsQCD", FatJet_deepTagMD_ZHbbvsQCD, &b_FatJet_deepTagMD_ZHbbvsQCD);
   fChain->SetBranchAddress("FatJet_deepTagMD_ZHccvsQCD", FatJet_deepTagMD_ZHccvsQCD, &b_FatJet_deepTagMD_ZHccvsQCD);
   fChain->SetBranchAddress("FatJet_deepTagMD_ZbbvsQCD", FatJet_deepTagMD_ZbbvsQCD, &b_FatJet_deepTagMD_ZbbvsQCD);
   fChain->SetBranchAddress("FatJet_deepTagMD_ZvsQCD", FatJet_deepTagMD_ZvsQCD, &b_FatJet_deepTagMD_ZvsQCD);
   fChain->SetBranchAddress("FatJet_deepTagMD_bbvsLight", FatJet_deepTagMD_bbvsLight, &b_FatJet_deepTagMD_bbvsLight);
   fChain->SetBranchAddress("FatJet_deepTagMD_ccvsLight", FatJet_deepTagMD_ccvsLight, &b_FatJet_deepTagMD_ccvsLight);
   fChain->SetBranchAddress("FatJet_deepTag_H", FatJet_deepTag_H, &b_FatJet_deepTag_H);
   fChain->SetBranchAddress("FatJet_deepTag_QCD", FatJet_deepTag_QCD, &b_FatJet_deepTag_QCD);
   fChain->SetBranchAddress("FatJet_deepTag_QCDothers", FatJet_deepTag_QCDothers, &b_FatJet_deepTag_QCDothers);
   fChain->SetBranchAddress("FatJet_deepTag_TvsQCD", FatJet_deepTag_TvsQCD, &b_FatJet_deepTag_TvsQCD);
   fChain->SetBranchAddress("FatJet_deepTag_WvsQCD", FatJet_deepTag_WvsQCD, &b_FatJet_deepTag_WvsQCD);
   fChain->SetBranchAddress("FatJet_deepTag_ZvsQCD", FatJet_deepTag_ZvsQCD, &b_FatJet_deepTag_ZvsQCD);
   fChain->SetBranchAddress("FatJet_eta", FatJet_eta, &b_FatJet_eta);
   fChain->SetBranchAddress("FatJet_mass", FatJet_mass, &b_FatJet_mass);
   fChain->SetBranchAddress("FatJet_msoftdrop", FatJet_msoftdrop, &b_FatJet_msoftdrop);
   fChain->SetBranchAddress("FatJet_n2b1", FatJet_n2b1, &b_FatJet_n2b1);
   fChain->SetBranchAddress("FatJet_n3b1", FatJet_n3b1, &b_FatJet_n3b1);
   fChain->SetBranchAddress("FatJet_phi", FatJet_phi, &b_FatJet_phi);
   fChain->SetBranchAddress("FatJet_pt", FatJet_pt, &b_FatJet_pt);
   fChain->SetBranchAddress("FatJet_rawFactor", FatJet_rawFactor, &b_FatJet_rawFactor);
   fChain->SetBranchAddress("FatJet_tau1", FatJet_tau1, &b_FatJet_tau1);
   fChain->SetBranchAddress("FatJet_tau2", FatJet_tau2, &b_FatJet_tau2);
   fChain->SetBranchAddress("FatJet_tau3", FatJet_tau3, &b_FatJet_tau3);
   fChain->SetBranchAddress("FatJet_tau4", FatJet_tau4, &b_FatJet_tau4);
   fChain->SetBranchAddress("FatJet_lsf3", FatJet_lsf3, &b_FatJet_lsf3);
   fChain->SetBranchAddress("FatJet_jetId", FatJet_jetId, &b_FatJet_jetId);
   fChain->SetBranchAddress("FatJet_subJetIdx1", FatJet_subJetIdx1, &b_FatJet_subJetIdx1);
   fChain->SetBranchAddress("FatJet_subJetIdx2", FatJet_subJetIdx2, &b_FatJet_subJetIdx2);
   fChain->SetBranchAddress("FatJet_electronIdx3SJ", FatJet_electronIdx3SJ, &b_FatJet_electronIdx3SJ);
   fChain->SetBranchAddress("FatJet_muonIdx3SJ", FatJet_muonIdx3SJ, &b_FatJet_muonIdx3SJ);
   fChain->SetBranchAddress("nFsrPhoton", &nFsrPhoton, &b_nFsrPhoton);
   fChain->SetBranchAddress("FsrPhoton_dROverEt2", FsrPhoton_dROverEt2, &b_FsrPhoton_dROverEt2);
   fChain->SetBranchAddress("FsrPhoton_eta", FsrPhoton_eta, &b_FsrPhoton_eta);
   fChain->SetBranchAddress("FsrPhoton_phi", FsrPhoton_phi, &b_FsrPhoton_phi);
   fChain->SetBranchAddress("FsrPhoton_pt", FsrPhoton_pt, &b_FsrPhoton_pt);
   fChain->SetBranchAddress("FsrPhoton_relIso03", FsrPhoton_relIso03, &b_FsrPhoton_relIso03);
   fChain->SetBranchAddress("FsrPhoton_muonIdx", FsrPhoton_muonIdx, &b_FsrPhoton_muonIdx);
   fChain->SetBranchAddress("nGenJetAK8", &nGenJetAK8, &b_nGenJetAK8);
   fChain->SetBranchAddress("GenJetAK8_eta", GenJetAK8_eta, &b_GenJetAK8_eta);
   fChain->SetBranchAddress("GenJetAK8_mass", GenJetAK8_mass, &b_GenJetAK8_mass);
   fChain->SetBranchAddress("GenJetAK8_phi", GenJetAK8_phi, &b_GenJetAK8_phi);
   fChain->SetBranchAddress("GenJetAK8_pt", GenJetAK8_pt, &b_GenJetAK8_pt);
   fChain->SetBranchAddress("nGenJet", &nGenJet, &b_nGenJet);
   fChain->SetBranchAddress("GenJet_eta", GenJet_eta, &b_GenJet_eta);
   fChain->SetBranchAddress("GenJet_mass", GenJet_mass, &b_GenJet_mass);
   fChain->SetBranchAddress("GenJet_phi", GenJet_phi, &b_GenJet_phi);
   fChain->SetBranchAddress("GenJet_pt", GenJet_pt, &b_GenJet_pt);
   fChain->SetBranchAddress("nGenPart", &nGenPart, &b_nGenPart);
   fChain->SetBranchAddress("GenPart_eta", GenPart_eta, &b_GenPart_eta);
   fChain->SetBranchAddress("GenPart_mass", GenPart_mass, &b_GenPart_mass);
   fChain->SetBranchAddress("GenPart_phi", GenPart_phi, &b_GenPart_phi);
   fChain->SetBranchAddress("GenPart_pt", GenPart_pt, &b_GenPart_pt);
   fChain->SetBranchAddress("GenPart_genPartIdxMother", GenPart_genPartIdxMother, &b_GenPart_genPartIdxMother);
   fChain->SetBranchAddress("GenPart_pdgId", GenPart_pdgId, &b_GenPart_pdgId);
   fChain->SetBranchAddress("GenPart_status", GenPart_status, &b_GenPart_status);
   fChain->SetBranchAddress("GenPart_statusFlags", GenPart_statusFlags, &b_GenPart_statusFlags);
   fChain->SetBranchAddress("nSubGenJetAK8", &nSubGenJetAK8, &b_nSubGenJetAK8);
   fChain->SetBranchAddress("SubGenJetAK8_eta", SubGenJetAK8_eta, &b_SubGenJetAK8_eta);
   fChain->SetBranchAddress("SubGenJetAK8_mass", SubGenJetAK8_mass, &b_SubGenJetAK8_mass);
   fChain->SetBranchAddress("SubGenJetAK8_phi", SubGenJetAK8_phi, &b_SubGenJetAK8_phi);
   fChain->SetBranchAddress("SubGenJetAK8_pt", SubGenJetAK8_pt, &b_SubGenJetAK8_pt);
   fChain->SetBranchAddress("Generator_binvar", &Generator_binvar, &b_Generator_binvar);
   fChain->SetBranchAddress("Generator_scalePDF", &Generator_scalePDF, &b_Generator_scalePDF);
   fChain->SetBranchAddress("Generator_weight", &Generator_weight, &b_Generator_weight);
   fChain->SetBranchAddress("Generator_x1", &Generator_x1, &b_Generator_x1);
   fChain->SetBranchAddress("Generator_x2", &Generator_x2, &b_Generator_x2);
   fChain->SetBranchAddress("Generator_xpdf1", &Generator_xpdf1, &b_Generator_xpdf1);
   fChain->SetBranchAddress("Generator_xpdf2", &Generator_xpdf2, &b_Generator_xpdf2);
   fChain->SetBranchAddress("Generator_id1", &Generator_id1, &b_Generator_id1);
   fChain->SetBranchAddress("Generator_id2", &Generator_id2, &b_Generator_id2);
   fChain->SetBranchAddress("nGenVisTau", &nGenVisTau, &b_nGenVisTau);
   fChain->SetBranchAddress("GenVisTau_eta", GenVisTau_eta, &b_GenVisTau_eta);
   fChain->SetBranchAddress("GenVisTau_mass", GenVisTau_mass, &b_GenVisTau_mass);
   fChain->SetBranchAddress("GenVisTau_phi", GenVisTau_phi, &b_GenVisTau_phi);
   fChain->SetBranchAddress("GenVisTau_pt", GenVisTau_pt, &b_GenVisTau_pt);
   fChain->SetBranchAddress("GenVisTau_charge", GenVisTau_charge, &b_GenVisTau_charge);
   fChain->SetBranchAddress("GenVisTau_genPartIdxMother", GenVisTau_genPartIdxMother, &b_GenVisTau_genPartIdxMother);
   fChain->SetBranchAddress("GenVisTau_status", GenVisTau_status, &b_GenVisTau_status);
   fChain->SetBranchAddress("genWeight", &genWeight, &b_genWeight);
   fChain->SetBranchAddress("nPSWeight", &nPSWeight, &b_nPSWeight);
   fChain->SetBranchAddress("PSWeight", PSWeight, &b_PSWeight);
   fChain->SetBranchAddress("nIsoTrack", &nIsoTrack, &b_nIsoTrack);
   fChain->SetBranchAddress("IsoTrack_dxy", IsoTrack_dxy, &b_IsoTrack_dxy);
   fChain->SetBranchAddress("IsoTrack_dz", IsoTrack_dz, &b_IsoTrack_dz);
   fChain->SetBranchAddress("IsoTrack_eta", IsoTrack_eta, &b_IsoTrack_eta);
   fChain->SetBranchAddress("IsoTrack_pfRelIso03_all", IsoTrack_pfRelIso03_all, &b_IsoTrack_pfRelIso03_all);
   fChain->SetBranchAddress("IsoTrack_pfRelIso03_chg", IsoTrack_pfRelIso03_chg, &b_IsoTrack_pfRelIso03_chg);
   fChain->SetBranchAddress("IsoTrack_phi", IsoTrack_phi, &b_IsoTrack_phi);
   fChain->SetBranchAddress("IsoTrack_pt", IsoTrack_pt, &b_IsoTrack_pt);
   fChain->SetBranchAddress("IsoTrack_miniPFRelIso_all", IsoTrack_miniPFRelIso_all, &b_IsoTrack_miniPFRelIso_all);
   fChain->SetBranchAddress("IsoTrack_miniPFRelIso_chg", IsoTrack_miniPFRelIso_chg, &b_IsoTrack_miniPFRelIso_chg);
   fChain->SetBranchAddress("IsoTrack_fromPV", IsoTrack_fromPV, &b_IsoTrack_fromPV);
   fChain->SetBranchAddress("IsoTrack_pdgId", IsoTrack_pdgId, &b_IsoTrack_pdgId);
   fChain->SetBranchAddress("IsoTrack_isHighPurityTrack", IsoTrack_isHighPurityTrack, &b_IsoTrack_isHighPurityTrack);
   fChain->SetBranchAddress("IsoTrack_isPFcand", IsoTrack_isPFcand, &b_IsoTrack_isPFcand);
   fChain->SetBranchAddress("IsoTrack_isFromLostTrack", IsoTrack_isFromLostTrack, &b_IsoTrack_isFromLostTrack);
   fChain->SetBranchAddress("nJet", &nJet, &b_nJet);
   fChain->SetBranchAddress("Jet_area", Jet_area, &b_Jet_area);
   fChain->SetBranchAddress("Jet_btagCMVA", Jet_btagCMVA, &b_Jet_btagCMVA);
   fChain->SetBranchAddress("Jet_btagCSVV2", Jet_btagCSVV2, &b_Jet_btagCSVV2);
   fChain->SetBranchAddress("Jet_btagDeepB", Jet_btagDeepB, &b_Jet_btagDeepB);
   fChain->SetBranchAddress("Jet_btagDeepC", Jet_btagDeepC, &b_Jet_btagDeepC);
   fChain->SetBranchAddress("Jet_btagDeepFlavB", Jet_btagDeepFlavB, &b_Jet_btagDeepFlavB);
   fChain->SetBranchAddress("Jet_btagDeepFlavC", Jet_btagDeepFlavC, &b_Jet_btagDeepFlavC);
   fChain->SetBranchAddress("Jet_chEmEF", Jet_chEmEF, &b_Jet_chEmEF);
   fChain->SetBranchAddress("Jet_chFPV0EF", Jet_chFPV0EF, &b_Jet_chFPV0EF);
   fChain->SetBranchAddress("Jet_chFPV1EF", Jet_chFPV1EF, &b_Jet_chFPV1EF);
   fChain->SetBranchAddress("Jet_chFPV2EF", Jet_chFPV2EF, &b_Jet_chFPV2EF);
   fChain->SetBranchAddress("Jet_chFPV3EF", Jet_chFPV3EF, &b_Jet_chFPV3EF);
   fChain->SetBranchAddress("Jet_chHEF", Jet_chHEF, &b_Jet_chHEF);
   fChain->SetBranchAddress("Jet_eta", Jet_eta, &b_Jet_eta);
   fChain->SetBranchAddress("Jet_mass", Jet_mass, &b_Jet_mass);
   fChain->SetBranchAddress("Jet_muEF", Jet_muEF, &b_Jet_muEF);
   fChain->SetBranchAddress("Jet_muonSubtrFactor", Jet_muonSubtrFactor, &b_Jet_muonSubtrFactor);
   fChain->SetBranchAddress("Jet_neEmEF", Jet_neEmEF, &b_Jet_neEmEF);
   fChain->SetBranchAddress("Jet_neHEF", Jet_neHEF, &b_Jet_neHEF);
   fChain->SetBranchAddress("Jet_phi", Jet_phi, &b_Jet_phi);
   fChain->SetBranchAddress("Jet_pt", Jet_pt, &b_Jet_pt);
   fChain->SetBranchAddress("Jet_puIdDisc", Jet_puIdDisc, &b_Jet_puIdDisc);
   fChain->SetBranchAddress("Jet_qgl", Jet_qgl, &b_Jet_qgl);
   fChain->SetBranchAddress("Jet_rawFactor", Jet_rawFactor, &b_Jet_rawFactor);
   fChain->SetBranchAddress("Jet_bRegCorr", Jet_bRegCorr, &b_Jet_bRegCorr);
   fChain->SetBranchAddress("Jet_bRegRes", Jet_bRegRes, &b_Jet_bRegRes);
   fChain->SetBranchAddress("Jet_cRegCorr", Jet_cRegCorr, &b_Jet_cRegCorr);
   fChain->SetBranchAddress("Jet_cRegRes", Jet_cRegRes, &b_Jet_cRegRes);
   fChain->SetBranchAddress("Jet_electronIdx1", Jet_electronIdx1, &b_Jet_electronIdx1);
   fChain->SetBranchAddress("Jet_electronIdx2", Jet_electronIdx2, &b_Jet_electronIdx2);
   fChain->SetBranchAddress("Jet_jetId", Jet_jetId, &b_Jet_jetId);
   fChain->SetBranchAddress("Jet_muonIdx1", Jet_muonIdx1, &b_Jet_muonIdx1);
   fChain->SetBranchAddress("Jet_muonIdx2", Jet_muonIdx2, &b_Jet_muonIdx2);
   fChain->SetBranchAddress("Jet_nConstituents", Jet_nConstituents, &b_Jet_nConstituents);
   fChain->SetBranchAddress("Jet_nElectrons", Jet_nElectrons, &b_Jet_nElectrons);
   fChain->SetBranchAddress("Jet_nMuons", Jet_nMuons, &b_Jet_nMuons);
   fChain->SetBranchAddress("Jet_puId", Jet_puId, &b_Jet_puId);
   fChain->SetBranchAddress("GenMET_phi", &GenMET_phi, &b_GenMET_phi);
   fChain->SetBranchAddress("GenMET_pt", &GenMET_pt, &b_GenMET_pt);
   fChain->SetBranchAddress("MET_MetUnclustEnUpDeltaX", &MET_MetUnclustEnUpDeltaX, &b_MET_MetUnclustEnUpDeltaX);
   fChain->SetBranchAddress("MET_MetUnclustEnUpDeltaY", &MET_MetUnclustEnUpDeltaY, &b_MET_MetUnclustEnUpDeltaY);
   fChain->SetBranchAddress("MET_covXX", &MET_covXX, &b_MET_covXX);
   fChain->SetBranchAddress("MET_covXY", &MET_covXY, &b_MET_covXY);
   fChain->SetBranchAddress("MET_covYY", &MET_covYY, &b_MET_covYY);
   fChain->SetBranchAddress("MET_phi", &MET_phi, &b_MET_phi);
   fChain->SetBranchAddress("MET_pt", &MET_pt, &b_MET_pt);
   fChain->SetBranchAddress("MET_significance", &MET_significance, &b_MET_significance);
   fChain->SetBranchAddress("MET_sumEt", &MET_sumEt, &b_MET_sumEt);
   fChain->SetBranchAddress("MET_sumPtUnclustered", &MET_sumPtUnclustered, &b_MET_sumPtUnclustered);
   fChain->SetBranchAddress("nMuon", &nMuon, &b_nMuon);
   fChain->SetBranchAddress("Muon_dxy", Muon_dxy, &b_Muon_dxy);
   fChain->SetBranchAddress("Muon_dxyErr", Muon_dxyErr, &b_Muon_dxyErr);
   fChain->SetBranchAddress("Muon_dxybs", Muon_dxybs, &b_Muon_dxybs);
   fChain->SetBranchAddress("Muon_dz", Muon_dz, &b_Muon_dz);
   fChain->SetBranchAddress("Muon_dzErr", Muon_dzErr, &b_Muon_dzErr);
   fChain->SetBranchAddress("Muon_eta", Muon_eta, &b_Muon_eta);
   fChain->SetBranchAddress("Muon_ip3d", Muon_ip3d, &b_Muon_ip3d);
   fChain->SetBranchAddress("Muon_jetPtRelv2", Muon_jetPtRelv2, &b_Muon_jetPtRelv2);
   fChain->SetBranchAddress("Muon_jetRelIso", Muon_jetRelIso, &b_Muon_jetRelIso);
   fChain->SetBranchAddress("Muon_mass", Muon_mass, &b_Muon_mass);
   fChain->SetBranchAddress("Muon_miniPFRelIso_all", Muon_miniPFRelIso_all, &b_Muon_miniPFRelIso_all);
   fChain->SetBranchAddress("Muon_miniPFRelIso_chg", Muon_miniPFRelIso_chg, &b_Muon_miniPFRelIso_chg);
   fChain->SetBranchAddress("Muon_pfRelIso03_all", Muon_pfRelIso03_all, &b_Muon_pfRelIso03_all);
   fChain->SetBranchAddress("Muon_pfRelIso03_chg", Muon_pfRelIso03_chg, &b_Muon_pfRelIso03_chg);
   fChain->SetBranchAddress("Muon_pfRelIso04_all", Muon_pfRelIso04_all, &b_Muon_pfRelIso04_all);
   fChain->SetBranchAddress("Muon_phi", Muon_phi, &b_Muon_phi);
   fChain->SetBranchAddress("Muon_pt", Muon_pt, &b_Muon_pt);
   fChain->SetBranchAddress("Muon_ptErr", Muon_ptErr, &b_Muon_ptErr);
   fChain->SetBranchAddress("Muon_segmentComp", Muon_segmentComp, &b_Muon_segmentComp);
   fChain->SetBranchAddress("Muon_sip3d", Muon_sip3d, &b_Muon_sip3d);
   fChain->SetBranchAddress("Muon_softMva", Muon_softMva, &b_Muon_softMva);
   fChain->SetBranchAddress("Muon_tkRelIso", Muon_tkRelIso, &b_Muon_tkRelIso);
   fChain->SetBranchAddress("Muon_tunepRelPt", Muon_tunepRelPt, &b_Muon_tunepRelPt);
   fChain->SetBranchAddress("Muon_mvaLowPt", Muon_mvaLowPt, &b_Muon_mvaLowPt);
   fChain->SetBranchAddress("Muon_mvaTTH", Muon_mvaTTH, &b_Muon_mvaTTH);
   fChain->SetBranchAddress("Muon_charge", Muon_charge, &b_Muon_charge);
   fChain->SetBranchAddress("Muon_jetIdx", Muon_jetIdx, &b_Muon_jetIdx);
   fChain->SetBranchAddress("Muon_nStations", Muon_nStations, &b_Muon_nStations);
   fChain->SetBranchAddress("Muon_nTrackerLayers", Muon_nTrackerLayers, &b_Muon_nTrackerLayers);
   fChain->SetBranchAddress("Muon_pdgId", Muon_pdgId, &b_Muon_pdgId);
   fChain->SetBranchAddress("Muon_tightCharge", Muon_tightCharge, &b_Muon_tightCharge);
   fChain->SetBranchAddress("Muon_fsrPhotonIdx", Muon_fsrPhotonIdx, &b_Muon_fsrPhotonIdx);
   fChain->SetBranchAddress("Muon_highPtId", Muon_highPtId, &b_Muon_highPtId);
   fChain->SetBranchAddress("Muon_highPurity", Muon_highPurity, &b_Muon_highPurity);
   fChain->SetBranchAddress("Muon_inTimeMuon", Muon_inTimeMuon, &b_Muon_inTimeMuon);
   fChain->SetBranchAddress("Muon_isGlobal", Muon_isGlobal, &b_Muon_isGlobal);
   fChain->SetBranchAddress("Muon_isPFcand", Muon_isPFcand, &b_Muon_isPFcand);
   fChain->SetBranchAddress("Muon_isTracker", Muon_isTracker, &b_Muon_isTracker);
   fChain->SetBranchAddress("Muon_looseId", Muon_looseId, &b_Muon_looseId);
   fChain->SetBranchAddress("Muon_mediumId", Muon_mediumId, &b_Muon_mediumId);
   fChain->SetBranchAddress("Muon_mediumPromptId", Muon_mediumPromptId, &b_Muon_mediumPromptId);
   fChain->SetBranchAddress("Muon_miniIsoId", Muon_miniIsoId, &b_Muon_miniIsoId);
   fChain->SetBranchAddress("Muon_multiIsoId", Muon_multiIsoId, &b_Muon_multiIsoId);
   fChain->SetBranchAddress("Muon_mvaId", Muon_mvaId, &b_Muon_mvaId);
   fChain->SetBranchAddress("Muon_pfIsoId", Muon_pfIsoId, &b_Muon_pfIsoId);
   fChain->SetBranchAddress("Muon_softId", Muon_softId, &b_Muon_softId);
   fChain->SetBranchAddress("Muon_softMvaId", Muon_softMvaId, &b_Muon_softMvaId);
   fChain->SetBranchAddress("Muon_tightId", Muon_tightId, &b_Muon_tightId);
   fChain->SetBranchAddress("Muon_tkIsoId", Muon_tkIsoId, &b_Muon_tkIsoId);
   fChain->SetBranchAddress("Muon_triggerIdLoose", Muon_triggerIdLoose, &b_Muon_triggerIdLoose);
   fChain->SetBranchAddress("nPhoton", &nPhoton, &b_nPhoton);
   fChain->SetBranchAddress("Photon_eCorr", Photon_eCorr, &b_Photon_eCorr);
   fChain->SetBranchAddress("Photon_energyErr", Photon_energyErr, &b_Photon_energyErr);
   fChain->SetBranchAddress("Photon_eta", Photon_eta, &b_Photon_eta);
   fChain->SetBranchAddress("Photon_hoe", Photon_hoe, &b_Photon_hoe);
   fChain->SetBranchAddress("Photon_mass", Photon_mass, &b_Photon_mass);
   fChain->SetBranchAddress("Photon_mvaID", Photon_mvaID, &b_Photon_mvaID);
   fChain->SetBranchAddress("Photon_mvaID_Fall17V1p1", Photon_mvaID_Fall17V1p1, &b_Photon_mvaID_Fall17V1p1);
   fChain->SetBranchAddress("Photon_pfRelIso03_all", Photon_pfRelIso03_all, &b_Photon_pfRelIso03_all);
   fChain->SetBranchAddress("Photon_pfRelIso03_chg", Photon_pfRelIso03_chg, &b_Photon_pfRelIso03_chg);
   fChain->SetBranchAddress("Photon_phi", Photon_phi, &b_Photon_phi);
   fChain->SetBranchAddress("Photon_pt", Photon_pt, &b_Photon_pt);
   fChain->SetBranchAddress("Photon_r9", Photon_r9, &b_Photon_r9);
   fChain->SetBranchAddress("Photon_sieie", Photon_sieie, &b_Photon_sieie);
   fChain->SetBranchAddress("Photon_charge", Photon_charge, &b_Photon_charge);
   fChain->SetBranchAddress("Photon_cutBased", Photon_cutBased, &b_Photon_cutBased);
   fChain->SetBranchAddress("Photon_cutBased_Fall17V1Bitmap", Photon_cutBased_Fall17V1Bitmap, &b_Photon_cutBased_Fall17V1Bitmap);
   fChain->SetBranchAddress("Photon_electronIdx", Photon_electronIdx, &b_Photon_electronIdx);
   fChain->SetBranchAddress("Photon_jetIdx", Photon_jetIdx, &b_Photon_jetIdx);
   fChain->SetBranchAddress("Photon_pdgId", Photon_pdgId, &b_Photon_pdgId);
   fChain->SetBranchAddress("Photon_vidNestedWPBitmap", Photon_vidNestedWPBitmap, &b_Photon_vidNestedWPBitmap);
   fChain->SetBranchAddress("Photon_electronVeto", Photon_electronVeto, &b_Photon_electronVeto);
   fChain->SetBranchAddress("Photon_isScEtaEB", Photon_isScEtaEB, &b_Photon_isScEtaEB);
   fChain->SetBranchAddress("Photon_isScEtaEE", Photon_isScEtaEE, &b_Photon_isScEtaEE);
   fChain->SetBranchAddress("Photon_mvaID_WP80", Photon_mvaID_WP80, &b_Photon_mvaID_WP80);
   fChain->SetBranchAddress("Photon_mvaID_WP90", Photon_mvaID_WP90, &b_Photon_mvaID_WP90);
   fChain->SetBranchAddress("Photon_pixelSeed", Photon_pixelSeed, &b_Photon_pixelSeed);
   fChain->SetBranchAddress("Photon_seedGain", Photon_seedGain, &b_Photon_seedGain);
   fChain->SetBranchAddress("Pileup_nTrueInt", &Pileup_nTrueInt, &b_Pileup_nTrueInt);
   fChain->SetBranchAddress("Pileup_pudensity", &Pileup_pudensity, &b_Pileup_pudensity);
   fChain->SetBranchAddress("Pileup_gpudensity", &Pileup_gpudensity, &b_Pileup_gpudensity);
   fChain->SetBranchAddress("Pileup_nPU", &Pileup_nPU, &b_Pileup_nPU);
   fChain->SetBranchAddress("Pileup_sumEOOT", &Pileup_sumEOOT, &b_Pileup_sumEOOT);
   fChain->SetBranchAddress("Pileup_sumLOOT", &Pileup_sumLOOT, &b_Pileup_sumLOOT);
   fChain->SetBranchAddress("PuppiMET_phi", &PuppiMET_phi, &b_PuppiMET_phi);
   fChain->SetBranchAddress("PuppiMET_phiJERUp", &PuppiMET_phiJERUp, &b_PuppiMET_phiJERUp);
   fChain->SetBranchAddress("PuppiMET_phiJESUp", &PuppiMET_phiJESUp, &b_PuppiMET_phiJESUp);
   fChain->SetBranchAddress("PuppiMET_pt", &PuppiMET_pt, &b_PuppiMET_pt);
   fChain->SetBranchAddress("PuppiMET_ptJERUp", &PuppiMET_ptJERUp, &b_PuppiMET_ptJERUp);
   fChain->SetBranchAddress("PuppiMET_ptJESUp", &PuppiMET_ptJESUp, &b_PuppiMET_ptJESUp);
   fChain->SetBranchAddress("PuppiMET_sumEt", &PuppiMET_sumEt, &b_PuppiMET_sumEt);
   fChain->SetBranchAddress("RawMET_phi", &RawMET_phi, &b_RawMET_phi);
   fChain->SetBranchAddress("RawMET_pt", &RawMET_pt, &b_RawMET_pt);
   fChain->SetBranchAddress("RawMET_sumEt", &RawMET_sumEt, &b_RawMET_sumEt);
   fChain->SetBranchAddress("RawPuppiMET_phi", &RawPuppiMET_phi, &b_RawPuppiMET_phi);
   fChain->SetBranchAddress("RawPuppiMET_pt", &RawPuppiMET_pt, &b_RawPuppiMET_pt);
   fChain->SetBranchAddress("RawPuppiMET_sumEt", &RawPuppiMET_sumEt, &b_RawPuppiMET_sumEt);
   fChain->SetBranchAddress("fixedGridRhoFastjetAll", &fixedGridRhoFastjetAll, &b_fixedGridRhoFastjetAll);
   fChain->SetBranchAddress("fixedGridRhoFastjetCentral", &fixedGridRhoFastjetCentral, &b_fixedGridRhoFastjetCentral);
   fChain->SetBranchAddress("fixedGridRhoFastjetCentralCalo", &fixedGridRhoFastjetCentralCalo, &b_fixedGridRhoFastjetCentralCalo);
   fChain->SetBranchAddress("fixedGridRhoFastjetCentralChargedPileUp", &fixedGridRhoFastjetCentralChargedPileUp, &b_fixedGridRhoFastjetCentralChargedPileUp);
   fChain->SetBranchAddress("fixedGridRhoFastjetCentralNeutral", &fixedGridRhoFastjetCentralNeutral, &b_fixedGridRhoFastjetCentralNeutral);
   fChain->SetBranchAddress("nGenDressedLepton", &nGenDressedLepton, &b_nGenDressedLepton);
   fChain->SetBranchAddress("GenDressedLepton_eta", GenDressedLepton_eta, &b_GenDressedLepton_eta);
   fChain->SetBranchAddress("GenDressedLepton_mass", GenDressedLepton_mass, &b_GenDressedLepton_mass);
   fChain->SetBranchAddress("GenDressedLepton_phi", GenDressedLepton_phi, &b_GenDressedLepton_phi);
   fChain->SetBranchAddress("GenDressedLepton_pt", GenDressedLepton_pt, &b_GenDressedLepton_pt);
   fChain->SetBranchAddress("GenDressedLepton_pdgId", GenDressedLepton_pdgId, &b_GenDressedLepton_pdgId);
   fChain->SetBranchAddress("GenDressedLepton_hasTauAnc", GenDressedLepton_hasTauAnc, &b_GenDressedLepton_hasTauAnc);
   fChain->SetBranchAddress("nGenIsolatedPhoton", &nGenIsolatedPhoton, &b_nGenIsolatedPhoton);
   fChain->SetBranchAddress("GenIsolatedPhoton_eta", GenIsolatedPhoton_eta, &b_GenIsolatedPhoton_eta);
   fChain->SetBranchAddress("GenIsolatedPhoton_mass", GenIsolatedPhoton_mass, &b_GenIsolatedPhoton_mass);
   fChain->SetBranchAddress("GenIsolatedPhoton_phi", GenIsolatedPhoton_phi, &b_GenIsolatedPhoton_phi);
   fChain->SetBranchAddress("GenIsolatedPhoton_pt", GenIsolatedPhoton_pt, &b_GenIsolatedPhoton_pt);
   fChain->SetBranchAddress("nSoftActivityJet", &nSoftActivityJet, &b_nSoftActivityJet);
   fChain->SetBranchAddress("SoftActivityJet_eta", SoftActivityJet_eta, &b_SoftActivityJet_eta);
   fChain->SetBranchAddress("SoftActivityJet_phi", SoftActivityJet_phi, &b_SoftActivityJet_phi);
   fChain->SetBranchAddress("SoftActivityJet_pt", SoftActivityJet_pt, &b_SoftActivityJet_pt);
   fChain->SetBranchAddress("SoftActivityJetHT", &SoftActivityJetHT, &b_SoftActivityJetHT);
   fChain->SetBranchAddress("SoftActivityJetHT10", &SoftActivityJetHT10, &b_SoftActivityJetHT10);
   fChain->SetBranchAddress("SoftActivityJetHT2", &SoftActivityJetHT2, &b_SoftActivityJetHT2);
   fChain->SetBranchAddress("SoftActivityJetHT5", &SoftActivityJetHT5, &b_SoftActivityJetHT5);
   fChain->SetBranchAddress("SoftActivityJetNjets10", &SoftActivityJetNjets10, &b_SoftActivityJetNjets10);
   fChain->SetBranchAddress("SoftActivityJetNjets2", &SoftActivityJetNjets2, &b_SoftActivityJetNjets2);
   fChain->SetBranchAddress("SoftActivityJetNjets5", &SoftActivityJetNjets5, &b_SoftActivityJetNjets5);
   fChain->SetBranchAddress("nSubJet", &nSubJet, &b_nSubJet);
   fChain->SetBranchAddress("SubJet_btagCMVA", SubJet_btagCMVA, &b_SubJet_btagCMVA);
   fChain->SetBranchAddress("SubJet_btagCSVV2", SubJet_btagCSVV2, &b_SubJet_btagCSVV2);
   fChain->SetBranchAddress("SubJet_btagDeepB", SubJet_btagDeepB, &b_SubJet_btagDeepB);
   fChain->SetBranchAddress("SubJet_eta", SubJet_eta, &b_SubJet_eta);
   fChain->SetBranchAddress("SubJet_mass", SubJet_mass, &b_SubJet_mass);
   fChain->SetBranchAddress("SubJet_n2b1", SubJet_n2b1, &b_SubJet_n2b1);
   fChain->SetBranchAddress("SubJet_n3b1", SubJet_n3b1, &b_SubJet_n3b1);
   fChain->SetBranchAddress("SubJet_phi", SubJet_phi, &b_SubJet_phi);
   fChain->SetBranchAddress("SubJet_pt", SubJet_pt, &b_SubJet_pt);
   fChain->SetBranchAddress("SubJet_rawFactor", SubJet_rawFactor, &b_SubJet_rawFactor);
   fChain->SetBranchAddress("SubJet_tau1", SubJet_tau1, &b_SubJet_tau1);
   fChain->SetBranchAddress("SubJet_tau2", SubJet_tau2, &b_SubJet_tau2);
   fChain->SetBranchAddress("SubJet_tau3", SubJet_tau3, &b_SubJet_tau3);
   fChain->SetBranchAddress("SubJet_tau4", SubJet_tau4, &b_SubJet_tau4);
   fChain->SetBranchAddress("nTau", &nTau, &b_nTau);
   fChain->SetBranchAddress("Tau_chargedIso", Tau_chargedIso, &b_Tau_chargedIso);
   fChain->SetBranchAddress("Tau_dxy", Tau_dxy, &b_Tau_dxy);
   fChain->SetBranchAddress("Tau_dz", Tau_dz, &b_Tau_dz);
   fChain->SetBranchAddress("Tau_eta", Tau_eta, &b_Tau_eta);
   fChain->SetBranchAddress("Tau_leadTkDeltaEta", Tau_leadTkDeltaEta, &b_Tau_leadTkDeltaEta);
   fChain->SetBranchAddress("Tau_leadTkDeltaPhi", Tau_leadTkDeltaPhi, &b_Tau_leadTkDeltaPhi);
   fChain->SetBranchAddress("Tau_leadTkPtOverTauPt", Tau_leadTkPtOverTauPt, &b_Tau_leadTkPtOverTauPt);
   fChain->SetBranchAddress("Tau_mass", Tau_mass, &b_Tau_mass);
   fChain->SetBranchAddress("Tau_neutralIso", Tau_neutralIso, &b_Tau_neutralIso);
   fChain->SetBranchAddress("Tau_phi", Tau_phi, &b_Tau_phi);
   fChain->SetBranchAddress("Tau_photonsOutsideSignalCone", Tau_photonsOutsideSignalCone, &b_Tau_photonsOutsideSignalCone);
   fChain->SetBranchAddress("Tau_pt", Tau_pt, &b_Tau_pt);
   fChain->SetBranchAddress("Tau_puCorr", Tau_puCorr, &b_Tau_puCorr);
   fChain->SetBranchAddress("Tau_rawAntiEle", Tau_rawAntiEle, &b_Tau_rawAntiEle);
   fChain->SetBranchAddress("Tau_rawAntiEle2018", Tau_rawAntiEle2018, &b_Tau_rawAntiEle2018);
   fChain->SetBranchAddress("Tau_rawDeepTau2017v2p1VSe", Tau_rawDeepTau2017v2p1VSe, &b_Tau_rawDeepTau2017v2p1VSe);
   fChain->SetBranchAddress("Tau_rawDeepTau2017v2p1VSjet", Tau_rawDeepTau2017v2p1VSjet, &b_Tau_rawDeepTau2017v2p1VSjet);
   fChain->SetBranchAddress("Tau_rawDeepTau2017v2p1VSmu", Tau_rawDeepTau2017v2p1VSmu, &b_Tau_rawDeepTau2017v2p1VSmu);
   fChain->SetBranchAddress("Tau_rawIso", Tau_rawIso, &b_Tau_rawIso);
   fChain->SetBranchAddress("Tau_rawIsodR03", Tau_rawIsodR03, &b_Tau_rawIsodR03);
   fChain->SetBranchAddress("Tau_rawMVAnewDM2017v2", Tau_rawMVAnewDM2017v2, &b_Tau_rawMVAnewDM2017v2);
   fChain->SetBranchAddress("Tau_rawMVAoldDM", Tau_rawMVAoldDM, &b_Tau_rawMVAoldDM);
   fChain->SetBranchAddress("Tau_rawMVAoldDM2017v1", Tau_rawMVAoldDM2017v1, &b_Tau_rawMVAoldDM2017v1);
   fChain->SetBranchAddress("Tau_rawMVAoldDM2017v2", Tau_rawMVAoldDM2017v2, &b_Tau_rawMVAoldDM2017v2);
   fChain->SetBranchAddress("Tau_rawMVAoldDMdR032017v2", Tau_rawMVAoldDMdR032017v2, &b_Tau_rawMVAoldDMdR032017v2);
   fChain->SetBranchAddress("Tau_charge", Tau_charge, &b_Tau_charge);
   fChain->SetBranchAddress("Tau_decayMode", Tau_decayMode, &b_Tau_decayMode);
   fChain->SetBranchAddress("Tau_jetIdx", Tau_jetIdx, &b_Tau_jetIdx);
   fChain->SetBranchAddress("Tau_rawAntiEleCat", Tau_rawAntiEleCat, &b_Tau_rawAntiEleCat);
   fChain->SetBranchAddress("Tau_rawAntiEleCat2018", Tau_rawAntiEleCat2018, &b_Tau_rawAntiEleCat2018);
   fChain->SetBranchAddress("Tau_idAntiEle", Tau_idAntiEle, &b_Tau_idAntiEle);
   fChain->SetBranchAddress("Tau_idAntiEle2018", Tau_idAntiEle2018, &b_Tau_idAntiEle2018);
   fChain->SetBranchAddress("Tau_idAntiMu", Tau_idAntiMu, &b_Tau_idAntiMu);
   fChain->SetBranchAddress("Tau_idDecayMode", Tau_idDecayMode, &b_Tau_idDecayMode);
   fChain->SetBranchAddress("Tau_idDecayModeNewDMs", Tau_idDecayModeNewDMs, &b_Tau_idDecayModeNewDMs);
   fChain->SetBranchAddress("Tau_idDeepTau2017v2p1VSe", Tau_idDeepTau2017v2p1VSe, &b_Tau_idDeepTau2017v2p1VSe);
   fChain->SetBranchAddress("Tau_idDeepTau2017v2p1VSjet", Tau_idDeepTau2017v2p1VSjet, &b_Tau_idDeepTau2017v2p1VSjet);
   fChain->SetBranchAddress("Tau_idDeepTau2017v2p1VSmu", Tau_idDeepTau2017v2p1VSmu, &b_Tau_idDeepTau2017v2p1VSmu);
   fChain->SetBranchAddress("Tau_idMVAnewDM2017v2", Tau_idMVAnewDM2017v2, &b_Tau_idMVAnewDM2017v2);
   fChain->SetBranchAddress("Tau_idMVAoldDM", Tau_idMVAoldDM, &b_Tau_idMVAoldDM);
   fChain->SetBranchAddress("Tau_idMVAoldDM2017v1", Tau_idMVAoldDM2017v1, &b_Tau_idMVAoldDM2017v1);
   fChain->SetBranchAddress("Tau_idMVAoldDM2017v2", Tau_idMVAoldDM2017v2, &b_Tau_idMVAoldDM2017v2);
   fChain->SetBranchAddress("Tau_idMVAoldDMdR032017v2", Tau_idMVAoldDMdR032017v2, &b_Tau_idMVAoldDMdR032017v2);
   fChain->SetBranchAddress("TkMET_phi", &TkMET_phi, &b_TkMET_phi);
   fChain->SetBranchAddress("TkMET_pt", &TkMET_pt, &b_TkMET_pt);
   fChain->SetBranchAddress("TkMET_sumEt", &TkMET_sumEt, &b_TkMET_sumEt);
   fChain->SetBranchAddress("nTrigObj", &nTrigObj, &b_nTrigObj);
   fChain->SetBranchAddress("TrigObj_pt", TrigObj_pt, &b_TrigObj_pt);
   fChain->SetBranchAddress("TrigObj_eta", TrigObj_eta, &b_TrigObj_eta);
   fChain->SetBranchAddress("TrigObj_phi", TrigObj_phi, &b_TrigObj_phi);
   fChain->SetBranchAddress("TrigObj_l1pt", TrigObj_l1pt, &b_TrigObj_l1pt);
   fChain->SetBranchAddress("TrigObj_l1pt_2", TrigObj_l1pt_2, &b_TrigObj_l1pt_2);
   fChain->SetBranchAddress("TrigObj_l2pt", TrigObj_l2pt, &b_TrigObj_l2pt);
   fChain->SetBranchAddress("TrigObj_id", TrigObj_id, &b_TrigObj_id);
   fChain->SetBranchAddress("TrigObj_l1iso", TrigObj_l1iso, &b_TrigObj_l1iso);
   fChain->SetBranchAddress("TrigObj_l1charge", TrigObj_l1charge, &b_TrigObj_l1charge);
   fChain->SetBranchAddress("TrigObj_filterBits", TrigObj_filterBits, &b_TrigObj_filterBits);
   fChain->SetBranchAddress("genTtbarId", &genTtbarId, &b_genTtbarId);
   fChain->SetBranchAddress("nOtherPV", &nOtherPV, &b_nOtherPV);
   fChain->SetBranchAddress("OtherPV_z", OtherPV_z, &b_OtherPV_z);
   fChain->SetBranchAddress("PV_ndof", &PV_ndof, &b_PV_ndof);
   fChain->SetBranchAddress("PV_x", &PV_x, &b_PV_x);
   fChain->SetBranchAddress("PV_y", &PV_y, &b_PV_y);
   fChain->SetBranchAddress("PV_z", &PV_z, &b_PV_z);
   fChain->SetBranchAddress("PV_chi2", &PV_chi2, &b_PV_chi2);
   fChain->SetBranchAddress("PV_score", &PV_score, &b_PV_score);
   fChain->SetBranchAddress("PV_npvs", &PV_npvs, &b_PV_npvs);
   fChain->SetBranchAddress("PV_npvsGood", &PV_npvsGood, &b_PV_npvsGood);
   fChain->SetBranchAddress("nSV", &nSV, &b_nSV);
   fChain->SetBranchAddress("SV_dlen", SV_dlen, &b_SV_dlen);
   fChain->SetBranchAddress("SV_dlenSig", SV_dlenSig, &b_SV_dlenSig);
   fChain->SetBranchAddress("SV_dxy", SV_dxy, &b_SV_dxy);
   fChain->SetBranchAddress("SV_dxySig", SV_dxySig, &b_SV_dxySig);
   fChain->SetBranchAddress("SV_pAngle", SV_pAngle, &b_SV_pAngle);
   fChain->SetBranchAddress("Electron_genPartIdx", Electron_genPartIdx, &b_Electron_genPartIdx);
   fChain->SetBranchAddress("Electron_genPartFlav", Electron_genPartFlav, &b_Electron_genPartFlav);
   fChain->SetBranchAddress("FatJet_genJetAK8Idx", FatJet_genJetAK8Idx, &b_FatJet_genJetAK8Idx);
   fChain->SetBranchAddress("FatJet_hadronFlavour", FatJet_hadronFlavour, &b_FatJet_hadronFlavour);
   fChain->SetBranchAddress("FatJet_nBHadrons", FatJet_nBHadrons, &b_FatJet_nBHadrons);
   fChain->SetBranchAddress("FatJet_nCHadrons", FatJet_nCHadrons, &b_FatJet_nCHadrons);
   fChain->SetBranchAddress("GenJetAK8_partonFlavour", GenJetAK8_partonFlavour, &b_GenJetAK8_partonFlavour);
   fChain->SetBranchAddress("GenJetAK8_hadronFlavour", GenJetAK8_hadronFlavour, &b_GenJetAK8_hadronFlavour);
   fChain->SetBranchAddress("GenJet_partonFlavour", GenJet_partonFlavour, &b_GenJet_partonFlavour);
   fChain->SetBranchAddress("GenJet_hadronFlavour", GenJet_hadronFlavour, &b_GenJet_hadronFlavour);
   fChain->SetBranchAddress("Jet_genJetIdx", Jet_genJetIdx, &b_Jet_genJetIdx);
   fChain->SetBranchAddress("Jet_hadronFlavour", Jet_hadronFlavour, &b_Jet_hadronFlavour);
   fChain->SetBranchAddress("Jet_partonFlavour", Jet_partonFlavour, &b_Jet_partonFlavour);
   fChain->SetBranchAddress("Muon_genPartIdx", Muon_genPartIdx, &b_Muon_genPartIdx);
   fChain->SetBranchAddress("Muon_genPartFlav", Muon_genPartFlav, &b_Muon_genPartFlav);
   fChain->SetBranchAddress("Photon_genPartIdx", Photon_genPartIdx, &b_Photon_genPartIdx);
   fChain->SetBranchAddress("Photon_genPartFlav", Photon_genPartFlav, &b_Photon_genPartFlav);
   fChain->SetBranchAddress("MET_fiducialGenPhi", &MET_fiducialGenPhi, &b_MET_fiducialGenPhi);
   fChain->SetBranchAddress("MET_fiducialGenPt", &MET_fiducialGenPt, &b_MET_fiducialGenPt);
   fChain->SetBranchAddress("Electron_cleanmask", Electron_cleanmask, &b_Electron_cleanmask);
   fChain->SetBranchAddress("Jet_cleanmask", Jet_cleanmask, &b_Jet_cleanmask);
   fChain->SetBranchAddress("Muon_cleanmask", Muon_cleanmask, &b_Muon_cleanmask);
   fChain->SetBranchAddress("Photon_cleanmask", Photon_cleanmask, &b_Photon_cleanmask);
   fChain->SetBranchAddress("Tau_cleanmask", Tau_cleanmask, &b_Tau_cleanmask);
   fChain->SetBranchAddress("SubJet_nBHadrons", SubJet_nBHadrons, &b_SubJet_nBHadrons);
   fChain->SetBranchAddress("SubJet_nCHadrons", SubJet_nCHadrons, &b_SubJet_nCHadrons);
   fChain->SetBranchAddress("SV_chi2", SV_chi2, &b_SV_chi2);
   fChain->SetBranchAddress("SV_eta", SV_eta, &b_SV_eta);
   fChain->SetBranchAddress("SV_mass", SV_mass, &b_SV_mass);
   fChain->SetBranchAddress("SV_ndof", SV_ndof, &b_SV_ndof);
   fChain->SetBranchAddress("SV_phi", SV_phi, &b_SV_phi);
   fChain->SetBranchAddress("SV_pt", SV_pt, &b_SV_pt);
   fChain->SetBranchAddress("SV_x", SV_x, &b_SV_x);
   fChain->SetBranchAddress("SV_y", SV_y, &b_SV_y);
   fChain->SetBranchAddress("SV_z", SV_z, &b_SV_z);
   fChain->SetBranchAddress("Tau_genPartIdx", Tau_genPartIdx, &b_Tau_genPartIdx);
   fChain->SetBranchAddress("Tau_genPartFlav", Tau_genPartFlav, &b_Tau_genPartFlav);
   fChain->SetBranchAddress("L1_AlwaysTrue", &L1_AlwaysTrue, &b_L1_AlwaysTrue);
   fChain->SetBranchAddress("L1_BPTX_AND_Ref1_VME", &L1_BPTX_AND_Ref1_VME, &b_L1_BPTX_AND_Ref1_VME);
   fChain->SetBranchAddress("L1_BPTX_AND_Ref3_VME", &L1_BPTX_AND_Ref3_VME, &b_L1_BPTX_AND_Ref3_VME);
   fChain->SetBranchAddress("L1_BPTX_AND_Ref4_VME", &L1_BPTX_AND_Ref4_VME, &b_L1_BPTX_AND_Ref4_VME);
   fChain->SetBranchAddress("L1_BPTX_BeamGas_B1_VME", &L1_BPTX_BeamGas_B1_VME, &b_L1_BPTX_BeamGas_B1_VME);
   fChain->SetBranchAddress("L1_BPTX_BeamGas_B2_VME", &L1_BPTX_BeamGas_B2_VME, &b_L1_BPTX_BeamGas_B2_VME);
   fChain->SetBranchAddress("L1_BPTX_BeamGas_Ref1_VME", &L1_BPTX_BeamGas_Ref1_VME, &b_L1_BPTX_BeamGas_Ref1_VME);
   fChain->SetBranchAddress("L1_BPTX_BeamGas_Ref2_VME", &L1_BPTX_BeamGas_Ref2_VME, &b_L1_BPTX_BeamGas_Ref2_VME);
   fChain->SetBranchAddress("L1_BPTX_NotOR_VME", &L1_BPTX_NotOR_VME, &b_L1_BPTX_NotOR_VME);
   fChain->SetBranchAddress("L1_BPTX_OR_Ref3_VME", &L1_BPTX_OR_Ref3_VME, &b_L1_BPTX_OR_Ref3_VME);
   fChain->SetBranchAddress("L1_BPTX_OR_Ref4_VME", &L1_BPTX_OR_Ref4_VME, &b_L1_BPTX_OR_Ref4_VME);
   fChain->SetBranchAddress("L1_BPTX_RefAND_VME", &L1_BPTX_RefAND_VME, &b_L1_BPTX_RefAND_VME);
   fChain->SetBranchAddress("L1_BptxMinus", &L1_BptxMinus, &b_L1_BptxMinus);
   fChain->SetBranchAddress("L1_BptxOR", &L1_BptxOR, &b_L1_BptxOR);
   fChain->SetBranchAddress("L1_BptxPlus", &L1_BptxPlus, &b_L1_BptxPlus);
   fChain->SetBranchAddress("L1_BptxXOR", &L1_BptxXOR, &b_L1_BptxXOR);
   fChain->SetBranchAddress("L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142", &L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142, &b_L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142);
   fChain->SetBranchAddress("L1_DoubleEG8er2p5_HTT260er", &L1_DoubleEG8er2p5_HTT260er, &b_L1_DoubleEG8er2p5_HTT260er);
   fChain->SetBranchAddress("L1_DoubleEG8er2p5_HTT280er", &L1_DoubleEG8er2p5_HTT280er, &b_L1_DoubleEG8er2p5_HTT280er);
   fChain->SetBranchAddress("L1_DoubleEG8er2p5_HTT300er", &L1_DoubleEG8er2p5_HTT300er, &b_L1_DoubleEG8er2p5_HTT300er);
   fChain->SetBranchAddress("L1_DoubleEG8er2p5_HTT320er", &L1_DoubleEG8er2p5_HTT320er, &b_L1_DoubleEG8er2p5_HTT320er);
   fChain->SetBranchAddress("L1_DoubleEG8er2p5_HTT340er", &L1_DoubleEG8er2p5_HTT340er, &b_L1_DoubleEG8er2p5_HTT340er);
   fChain->SetBranchAddress("L1_DoubleEG_15_10_er2p5", &L1_DoubleEG_15_10_er2p5, &b_L1_DoubleEG_15_10_er2p5);
   fChain->SetBranchAddress("L1_DoubleEG_20_10_er2p5", &L1_DoubleEG_20_10_er2p5, &b_L1_DoubleEG_20_10_er2p5);
   fChain->SetBranchAddress("L1_DoubleEG_22_10_er2p5", &L1_DoubleEG_22_10_er2p5, &b_L1_DoubleEG_22_10_er2p5);
   fChain->SetBranchAddress("L1_DoubleEG_25_12_er2p5", &L1_DoubleEG_25_12_er2p5, &b_L1_DoubleEG_25_12_er2p5);
   fChain->SetBranchAddress("L1_DoubleEG_25_14_er2p5", &L1_DoubleEG_25_14_er2p5, &b_L1_DoubleEG_25_14_er2p5);
   fChain->SetBranchAddress("L1_DoubleEG_27_14_er2p5", &L1_DoubleEG_27_14_er2p5, &b_L1_DoubleEG_27_14_er2p5);
   fChain->SetBranchAddress("L1_DoubleEG_LooseIso20_10_er2p5", &L1_DoubleEG_LooseIso20_10_er2p5, &b_L1_DoubleEG_LooseIso20_10_er2p5);
   fChain->SetBranchAddress("L1_DoubleEG_LooseIso22_10_er2p5", &L1_DoubleEG_LooseIso22_10_er2p5, &b_L1_DoubleEG_LooseIso22_10_er2p5);
   fChain->SetBranchAddress("L1_DoubleEG_LooseIso22_12_er2p5", &L1_DoubleEG_LooseIso22_12_er2p5, &b_L1_DoubleEG_LooseIso22_12_er2p5);
   fChain->SetBranchAddress("L1_DoubleEG_LooseIso25_12_er2p5", &L1_DoubleEG_LooseIso25_12_er2p5, &b_L1_DoubleEG_LooseIso25_12_er2p5);
   fChain->SetBranchAddress("L1_DoubleIsoTau32er2p1", &L1_DoubleIsoTau32er2p1, &b_L1_DoubleIsoTau32er2p1);
   fChain->SetBranchAddress("L1_DoubleIsoTau34er2p1", &L1_DoubleIsoTau34er2p1, &b_L1_DoubleIsoTau34er2p1);
   fChain->SetBranchAddress("L1_DoubleIsoTau36er2p1", &L1_DoubleIsoTau36er2p1, &b_L1_DoubleIsoTau36er2p1);
   fChain->SetBranchAddress("L1_DoubleJet100er2p3_dEta_Max1p6", &L1_DoubleJet100er2p3_dEta_Max1p6, &b_L1_DoubleJet100er2p3_dEta_Max1p6);
   fChain->SetBranchAddress("L1_DoubleJet100er2p5", &L1_DoubleJet100er2p5, &b_L1_DoubleJet100er2p5);
   fChain->SetBranchAddress("L1_DoubleJet112er2p3_dEta_Max1p6", &L1_DoubleJet112er2p3_dEta_Max1p6, &b_L1_DoubleJet112er2p3_dEta_Max1p6);
   fChain->SetBranchAddress("L1_DoubleJet120er2p5", &L1_DoubleJet120er2p5, &b_L1_DoubleJet120er2p5);
   fChain->SetBranchAddress("L1_DoubleJet150er2p5", &L1_DoubleJet150er2p5, &b_L1_DoubleJet150er2p5);
   fChain->SetBranchAddress("L1_DoubleJet30er2p5_Mass_Min150_dEta_Max1p5", &L1_DoubleJet30er2p5_Mass_Min150_dEta_Max1p5, &b_L1_DoubleJet30er2p5_Mass_Min150_dEta_Max1p5);
   fChain->SetBranchAddress("L1_DoubleJet30er2p5_Mass_Min200_dEta_Max1p5", &L1_DoubleJet30er2p5_Mass_Min200_dEta_Max1p5, &b_L1_DoubleJet30er2p5_Mass_Min200_dEta_Max1p5);
   fChain->SetBranchAddress("L1_DoubleJet30er2p5_Mass_Min250_dEta_Max1p5", &L1_DoubleJet30er2p5_Mass_Min250_dEta_Max1p5, &b_L1_DoubleJet30er2p5_Mass_Min250_dEta_Max1p5);
   fChain->SetBranchAddress("L1_DoubleJet30er2p5_Mass_Min300_dEta_Max1p5", &L1_DoubleJet30er2p5_Mass_Min300_dEta_Max1p5, &b_L1_DoubleJet30er2p5_Mass_Min300_dEta_Max1p5);
   fChain->SetBranchAddress("L1_DoubleJet30er2p5_Mass_Min330_dEta_Max1p5", &L1_DoubleJet30er2p5_Mass_Min330_dEta_Max1p5, &b_L1_DoubleJet30er2p5_Mass_Min330_dEta_Max1p5);
   fChain->SetBranchAddress("L1_DoubleJet30er2p5_Mass_Min360_dEta_Max1p5", &L1_DoubleJet30er2p5_Mass_Min360_dEta_Max1p5, &b_L1_DoubleJet30er2p5_Mass_Min360_dEta_Max1p5);
   fChain->SetBranchAddress("L1_DoubleJet35_Mass_Min450_IsoTau45_RmOvlp", &L1_DoubleJet35_Mass_Min450_IsoTau45_RmOvlp, &b_L1_DoubleJet35_Mass_Min450_IsoTau45_RmOvlp);
   fChain->SetBranchAddress("L1_DoubleJet40er2p5", &L1_DoubleJet40er2p5, &b_L1_DoubleJet40er2p5);
   fChain->SetBranchAddress("L1_DoubleJet_100_30_DoubleJet30_Mass_Min620", &L1_DoubleJet_100_30_DoubleJet30_Mass_Min620, &b_L1_DoubleJet_100_30_DoubleJet30_Mass_Min620);
   fChain->SetBranchAddress("L1_DoubleJet_110_35_DoubleJet35_Mass_Min620", &L1_DoubleJet_110_35_DoubleJet35_Mass_Min620, &b_L1_DoubleJet_110_35_DoubleJet35_Mass_Min620);
   fChain->SetBranchAddress("L1_DoubleJet_115_40_DoubleJet40_Mass_Min620", &L1_DoubleJet_115_40_DoubleJet40_Mass_Min620, &b_L1_DoubleJet_115_40_DoubleJet40_Mass_Min620);
   fChain->SetBranchAddress("L1_DoubleJet_115_40_DoubleJet40_Mass_Min620_Jet60TT28", &L1_DoubleJet_115_40_DoubleJet40_Mass_Min620_Jet60TT28, &b_L1_DoubleJet_115_40_DoubleJet40_Mass_Min620_Jet60TT28);
   fChain->SetBranchAddress("L1_DoubleJet_120_45_DoubleJet45_Mass_Min620", &L1_DoubleJet_120_45_DoubleJet45_Mass_Min620, &b_L1_DoubleJet_120_45_DoubleJet45_Mass_Min620);
   fChain->SetBranchAddress("L1_DoubleJet_120_45_DoubleJet45_Mass_Min620_Jet60TT28", &L1_DoubleJet_120_45_DoubleJet45_Mass_Min620_Jet60TT28, &b_L1_DoubleJet_120_45_DoubleJet45_Mass_Min620_Jet60TT28);
   fChain->SetBranchAddress("L1_DoubleJet_80_30_Mass_Min420_DoubleMu0_SQ", &L1_DoubleJet_80_30_Mass_Min420_DoubleMu0_SQ, &b_L1_DoubleJet_80_30_Mass_Min420_DoubleMu0_SQ);
   fChain->SetBranchAddress("L1_DoubleJet_80_30_Mass_Min420_IsoTau40_RmOvlp", &L1_DoubleJet_80_30_Mass_Min420_IsoTau40_RmOvlp, &b_L1_DoubleJet_80_30_Mass_Min420_IsoTau40_RmOvlp);
   fChain->SetBranchAddress("L1_DoubleJet_80_30_Mass_Min420_Mu8", &L1_DoubleJet_80_30_Mass_Min420_Mu8, &b_L1_DoubleJet_80_30_Mass_Min420_Mu8);
   fChain->SetBranchAddress("L1_DoubleJet_90_30_DoubleJet30_Mass_Min620", &L1_DoubleJet_90_30_DoubleJet30_Mass_Min620, &b_L1_DoubleJet_90_30_DoubleJet30_Mass_Min620);
   fChain->SetBranchAddress("L1_DoubleLooseIsoEG22er2p1", &L1_DoubleLooseIsoEG22er2p1, &b_L1_DoubleLooseIsoEG22er2p1);
   fChain->SetBranchAddress("L1_DoubleLooseIsoEG24er2p1", &L1_DoubleLooseIsoEG24er2p1, &b_L1_DoubleLooseIsoEG24er2p1);
   fChain->SetBranchAddress("L1_DoubleMu0", &L1_DoubleMu0, &b_L1_DoubleMu0);
   fChain->SetBranchAddress("L1_DoubleMu0_Mass_Min1", &L1_DoubleMu0_Mass_Min1, &b_L1_DoubleMu0_Mass_Min1);
   fChain->SetBranchAddress("L1_DoubleMu0_OQ", &L1_DoubleMu0_OQ, &b_L1_DoubleMu0_OQ);
   fChain->SetBranchAddress("L1_DoubleMu0_SQ", &L1_DoubleMu0_SQ, &b_L1_DoubleMu0_SQ);
   fChain->SetBranchAddress("L1_DoubleMu0_SQ_OS", &L1_DoubleMu0_SQ_OS, &b_L1_DoubleMu0_SQ_OS);
   fChain->SetBranchAddress("L1_DoubleMu0_dR_Max1p6_Jet90er2p5_dR_Max0p8", &L1_DoubleMu0_dR_Max1p6_Jet90er2p5_dR_Max0p8, &b_L1_DoubleMu0_dR_Max1p6_Jet90er2p5_dR_Max0p8);
   fChain->SetBranchAddress("L1_DoubleMu0er1p4_SQ_OS_dR_Max1p4", &L1_DoubleMu0er1p4_SQ_OS_dR_Max1p4, &b_L1_DoubleMu0er1p4_SQ_OS_dR_Max1p4);
   fChain->SetBranchAddress("L1_DoubleMu0er1p5_SQ", &L1_DoubleMu0er1p5_SQ, &b_L1_DoubleMu0er1p5_SQ);
   fChain->SetBranchAddress("L1_DoubleMu0er1p5_SQ_OS", &L1_DoubleMu0er1p5_SQ_OS, &b_L1_DoubleMu0er1p5_SQ_OS);
   fChain->SetBranchAddress("L1_DoubleMu0er1p5_SQ_OS_dR_Max1p4", &L1_DoubleMu0er1p5_SQ_OS_dR_Max1p4, &b_L1_DoubleMu0er1p5_SQ_OS_dR_Max1p4);
   fChain->SetBranchAddress("L1_DoubleMu0er1p5_SQ_dR_Max1p4", &L1_DoubleMu0er1p5_SQ_dR_Max1p4, &b_L1_DoubleMu0er1p5_SQ_dR_Max1p4);
   fChain->SetBranchAddress("L1_DoubleMu0er2p0_SQ_OS_dR_Max1p4", &L1_DoubleMu0er2p0_SQ_OS_dR_Max1p4, &b_L1_DoubleMu0er2p0_SQ_OS_dR_Max1p4);
   fChain->SetBranchAddress("L1_DoubleMu0er2p0_SQ_dR_Max1p4", &L1_DoubleMu0er2p0_SQ_dR_Max1p4, &b_L1_DoubleMu0er2p0_SQ_dR_Max1p4);
   fChain->SetBranchAddress("L1_DoubleMu10_SQ", &L1_DoubleMu10_SQ, &b_L1_DoubleMu10_SQ);
   fChain->SetBranchAddress("L1_DoubleMu18er2p1", &L1_DoubleMu18er2p1, &b_L1_DoubleMu18er2p1);
   fChain->SetBranchAddress("L1_DoubleMu3_OS_DoubleEG7p5Upsilon", &L1_DoubleMu3_OS_DoubleEG7p5Upsilon, &b_L1_DoubleMu3_OS_DoubleEG7p5Upsilon);
   fChain->SetBranchAddress("L1_DoubleMu3_SQ_ETMHF50_HTT60er", &L1_DoubleMu3_SQ_ETMHF50_HTT60er, &b_L1_DoubleMu3_SQ_ETMHF50_HTT60er);
   fChain->SetBranchAddress("L1_DoubleMu3_SQ_ETMHF50_Jet60er2p5", &L1_DoubleMu3_SQ_ETMHF50_Jet60er2p5, &b_L1_DoubleMu3_SQ_ETMHF50_Jet60er2p5);
   fChain->SetBranchAddress("L1_DoubleMu3_SQ_ETMHF50_Jet60er2p5_OR_DoubleJet40er2p5", &L1_DoubleMu3_SQ_ETMHF50_Jet60er2p5_OR_DoubleJet40er2p5, &b_L1_DoubleMu3_SQ_ETMHF50_Jet60er2p5_OR_DoubleJet40er2p5);
   fChain->SetBranchAddress("L1_DoubleMu3_SQ_ETMHF60_Jet60er2p5", &L1_DoubleMu3_SQ_ETMHF60_Jet60er2p5, &b_L1_DoubleMu3_SQ_ETMHF60_Jet60er2p5);
   fChain->SetBranchAddress("L1_DoubleMu3_SQ_HTT220er", &L1_DoubleMu3_SQ_HTT220er, &b_L1_DoubleMu3_SQ_HTT220er);
   fChain->SetBranchAddress("L1_DoubleMu3_SQ_HTT240er", &L1_DoubleMu3_SQ_HTT240er, &b_L1_DoubleMu3_SQ_HTT240er);
   fChain->SetBranchAddress("L1_DoubleMu3_SQ_HTT260er", &L1_DoubleMu3_SQ_HTT260er, &b_L1_DoubleMu3_SQ_HTT260er);
   fChain->SetBranchAddress("L1_DoubleMu3_dR_Max1p6_Jet90er2p5_dR_Max0p8", &L1_DoubleMu3_dR_Max1p6_Jet90er2p5_dR_Max0p8, &b_L1_DoubleMu3_dR_Max1p6_Jet90er2p5_dR_Max0p8);
   fChain->SetBranchAddress("L1_DoubleMu4_SQ_EG9er2p5", &L1_DoubleMu4_SQ_EG9er2p5, &b_L1_DoubleMu4_SQ_EG9er2p5);
   fChain->SetBranchAddress("L1_DoubleMu4_SQ_OS", &L1_DoubleMu4_SQ_OS, &b_L1_DoubleMu4_SQ_OS);
   fChain->SetBranchAddress("L1_DoubleMu4_SQ_OS_dR_Max1p2", &L1_DoubleMu4_SQ_OS_dR_Max1p2, &b_L1_DoubleMu4_SQ_OS_dR_Max1p2);
   fChain->SetBranchAddress("L1_DoubleMu4p5_SQ_OS", &L1_DoubleMu4p5_SQ_OS, &b_L1_DoubleMu4p5_SQ_OS);
   fChain->SetBranchAddress("L1_DoubleMu4p5_SQ_OS_dR_Max1p2", &L1_DoubleMu4p5_SQ_OS_dR_Max1p2, &b_L1_DoubleMu4p5_SQ_OS_dR_Max1p2);
   fChain->SetBranchAddress("L1_DoubleMu4p5er2p0_SQ_OS", &L1_DoubleMu4p5er2p0_SQ_OS, &b_L1_DoubleMu4p5er2p0_SQ_OS);
   fChain->SetBranchAddress("L1_DoubleMu4p5er2p0_SQ_OS_Mass7to18", &L1_DoubleMu4p5er2p0_SQ_OS_Mass7to18, &b_L1_DoubleMu4p5er2p0_SQ_OS_Mass7to18);
   fChain->SetBranchAddress("L1_DoubleMu5Upsilon_OS_DoubleEG3", &L1_DoubleMu5Upsilon_OS_DoubleEG3, &b_L1_DoubleMu5Upsilon_OS_DoubleEG3);
   fChain->SetBranchAddress("L1_DoubleMu5_SQ_EG9er2p5", &L1_DoubleMu5_SQ_EG9er2p5, &b_L1_DoubleMu5_SQ_EG9er2p5);
   fChain->SetBranchAddress("L1_DoubleMu9_SQ", &L1_DoubleMu9_SQ, &b_L1_DoubleMu9_SQ);
   fChain->SetBranchAddress("L1_DoubleMu_12_5", &L1_DoubleMu_12_5, &b_L1_DoubleMu_12_5);
   fChain->SetBranchAddress("L1_DoubleMu_15_5_SQ", &L1_DoubleMu_15_5_SQ, &b_L1_DoubleMu_15_5_SQ);
   fChain->SetBranchAddress("L1_DoubleMu_15_7", &L1_DoubleMu_15_7, &b_L1_DoubleMu_15_7);
   fChain->SetBranchAddress("L1_DoubleMu_15_7_Mass_Min1", &L1_DoubleMu_15_7_Mass_Min1, &b_L1_DoubleMu_15_7_Mass_Min1);
   fChain->SetBranchAddress("L1_DoubleMu_15_7_SQ", &L1_DoubleMu_15_7_SQ, &b_L1_DoubleMu_15_7_SQ);
   fChain->SetBranchAddress("L1_DoubleTau70er2p1", &L1_DoubleTau70er2p1, &b_L1_DoubleTau70er2p1);
   fChain->SetBranchAddress("L1_ETM120", &L1_ETM120, &b_L1_ETM120);
   fChain->SetBranchAddress("L1_ETM150", &L1_ETM150, &b_L1_ETM150);
   fChain->SetBranchAddress("L1_ETMHF100", &L1_ETMHF100, &b_L1_ETMHF100);
   fChain->SetBranchAddress("L1_ETMHF100_HTT60er", &L1_ETMHF100_HTT60er, &b_L1_ETMHF100_HTT60er);
   fChain->SetBranchAddress("L1_ETMHF110", &L1_ETMHF110, &b_L1_ETMHF110);
   fChain->SetBranchAddress("L1_ETMHF110_HTT60er", &L1_ETMHF110_HTT60er, &b_L1_ETMHF110_HTT60er);
   fChain->SetBranchAddress("L1_ETMHF110_HTT60er_NotSecondBunchInTrain", &L1_ETMHF110_HTT60er_NotSecondBunchInTrain, &b_L1_ETMHF110_HTT60er_NotSecondBunchInTrain);
   fChain->SetBranchAddress("L1_ETMHF120", &L1_ETMHF120, &b_L1_ETMHF120);
   fChain->SetBranchAddress("L1_ETMHF120_HTT60er", &L1_ETMHF120_HTT60er, &b_L1_ETMHF120_HTT60er);
   fChain->SetBranchAddress("L1_ETMHF120_NotSecondBunchInTrain", &L1_ETMHF120_NotSecondBunchInTrain, &b_L1_ETMHF120_NotSecondBunchInTrain);
   fChain->SetBranchAddress("L1_ETMHF130", &L1_ETMHF130, &b_L1_ETMHF130);
   fChain->SetBranchAddress("L1_ETMHF130_HTT60er", &L1_ETMHF130_HTT60er, &b_L1_ETMHF130_HTT60er);
   fChain->SetBranchAddress("L1_ETMHF140", &L1_ETMHF140, &b_L1_ETMHF140);
   fChain->SetBranchAddress("L1_ETMHF150", &L1_ETMHF150, &b_L1_ETMHF150);
   fChain->SetBranchAddress("L1_ETMHF90_HTT60er", &L1_ETMHF90_HTT60er, &b_L1_ETMHF90_HTT60er);
   fChain->SetBranchAddress("L1_ETT1200", &L1_ETT1200, &b_L1_ETT1200);
   fChain->SetBranchAddress("L1_ETT1600", &L1_ETT1600, &b_L1_ETT1600);
   fChain->SetBranchAddress("L1_ETT2000", &L1_ETT2000, &b_L1_ETT2000);
   fChain->SetBranchAddress("L1_FirstBunchAfterTrain", &L1_FirstBunchAfterTrain, &b_L1_FirstBunchAfterTrain);
   fChain->SetBranchAddress("L1_FirstBunchBeforeTrain", &L1_FirstBunchBeforeTrain, &b_L1_FirstBunchBeforeTrain);
   fChain->SetBranchAddress("L1_FirstBunchInTrain", &L1_FirstBunchInTrain, &b_L1_FirstBunchInTrain);
   fChain->SetBranchAddress("L1_FirstCollisionInOrbit", &L1_FirstCollisionInOrbit, &b_L1_FirstCollisionInOrbit);
   fChain->SetBranchAddress("L1_FirstCollisionInTrain", &L1_FirstCollisionInTrain, &b_L1_FirstCollisionInTrain);
   fChain->SetBranchAddress("L1_HCAL_LaserMon_Trig", &L1_HCAL_LaserMon_Trig, &b_L1_HCAL_LaserMon_Trig);
   fChain->SetBranchAddress("L1_HCAL_LaserMon_Veto", &L1_HCAL_LaserMon_Veto, &b_L1_HCAL_LaserMon_Veto);
   fChain->SetBranchAddress("L1_HTT120er", &L1_HTT120er, &b_L1_HTT120er);
   fChain->SetBranchAddress("L1_HTT160er", &L1_HTT160er, &b_L1_HTT160er);
   fChain->SetBranchAddress("L1_HTT200er", &L1_HTT200er, &b_L1_HTT200er);
   fChain->SetBranchAddress("L1_HTT255er", &L1_HTT255er, &b_L1_HTT255er);
   fChain->SetBranchAddress("L1_HTT280er", &L1_HTT280er, &b_L1_HTT280er);
   fChain->SetBranchAddress("L1_HTT280er_QuadJet_70_55_40_35_er2p4", &L1_HTT280er_QuadJet_70_55_40_35_er2p4, &b_L1_HTT280er_QuadJet_70_55_40_35_er2p4);
   fChain->SetBranchAddress("L1_HTT320er", &L1_HTT320er, &b_L1_HTT320er);
   fChain->SetBranchAddress("L1_HTT320er_QuadJet_70_55_40_40_er2p4", &L1_HTT320er_QuadJet_70_55_40_40_er2p4, &b_L1_HTT320er_QuadJet_70_55_40_40_er2p4);
   fChain->SetBranchAddress("L1_HTT320er_QuadJet_80_60_er2p1_45_40_er2p3", &L1_HTT320er_QuadJet_80_60_er2p1_45_40_er2p3, &b_L1_HTT320er_QuadJet_80_60_er2p1_45_40_er2p3);
   fChain->SetBranchAddress("L1_HTT320er_QuadJet_80_60_er2p1_50_45_er2p3", &L1_HTT320er_QuadJet_80_60_er2p1_50_45_er2p3, &b_L1_HTT320er_QuadJet_80_60_er2p1_50_45_er2p3);
   fChain->SetBranchAddress("L1_HTT360er", &L1_HTT360er, &b_L1_HTT360er);
   fChain->SetBranchAddress("L1_HTT400er", &L1_HTT400er, &b_L1_HTT400er);
   fChain->SetBranchAddress("L1_HTT450er", &L1_HTT450er, &b_L1_HTT450er);
   fChain->SetBranchAddress("L1_IsoEG32er2p5_Mt40", &L1_IsoEG32er2p5_Mt40, &b_L1_IsoEG32er2p5_Mt40);
   fChain->SetBranchAddress("L1_IsoEG32er2p5_Mt44", &L1_IsoEG32er2p5_Mt44, &b_L1_IsoEG32er2p5_Mt44);
   fChain->SetBranchAddress("L1_IsoEG32er2p5_Mt48", &L1_IsoEG32er2p5_Mt48, &b_L1_IsoEG32er2p5_Mt48);
   fChain->SetBranchAddress("L1_IsoTau40er2p1_ETMHF100", &L1_IsoTau40er2p1_ETMHF100, &b_L1_IsoTau40er2p1_ETMHF100);
   fChain->SetBranchAddress("L1_IsoTau40er2p1_ETMHF110", &L1_IsoTau40er2p1_ETMHF110, &b_L1_IsoTau40er2p1_ETMHF110);
   fChain->SetBranchAddress("L1_IsoTau40er2p1_ETMHF120", &L1_IsoTau40er2p1_ETMHF120, &b_L1_IsoTau40er2p1_ETMHF120);
   fChain->SetBranchAddress("L1_IsoTau40er2p1_ETMHF90", &L1_IsoTau40er2p1_ETMHF90, &b_L1_IsoTau40er2p1_ETMHF90);
   fChain->SetBranchAddress("L1_IsolatedBunch", &L1_IsolatedBunch, &b_L1_IsolatedBunch);
   fChain->SetBranchAddress("L1_LastBunchInTrain", &L1_LastBunchInTrain, &b_L1_LastBunchInTrain);
   fChain->SetBranchAddress("L1_LastCollisionInTrain", &L1_LastCollisionInTrain, &b_L1_LastCollisionInTrain);
   fChain->SetBranchAddress("L1_LooseIsoEG22er2p1_IsoTau26er2p1_dR_Min0p3", &L1_LooseIsoEG22er2p1_IsoTau26er2p1_dR_Min0p3, &b_L1_LooseIsoEG22er2p1_IsoTau26er2p1_dR_Min0p3);
   fChain->SetBranchAddress("L1_LooseIsoEG22er2p1_Tau70er2p1_dR_Min0p3", &L1_LooseIsoEG22er2p1_Tau70er2p1_dR_Min0p3, &b_L1_LooseIsoEG22er2p1_Tau70er2p1_dR_Min0p3);
   fChain->SetBranchAddress("L1_LooseIsoEG24er2p1_HTT100er", &L1_LooseIsoEG24er2p1_HTT100er, &b_L1_LooseIsoEG24er2p1_HTT100er);
   fChain->SetBranchAddress("L1_LooseIsoEG24er2p1_IsoTau27er2p1_dR_Min0p3", &L1_LooseIsoEG24er2p1_IsoTau27er2p1_dR_Min0p3, &b_L1_LooseIsoEG24er2p1_IsoTau27er2p1_dR_Min0p3);
   fChain->SetBranchAddress("L1_LooseIsoEG26er2p1_HTT100er", &L1_LooseIsoEG26er2p1_HTT100er, &b_L1_LooseIsoEG26er2p1_HTT100er);
   fChain->SetBranchAddress("L1_LooseIsoEG26er2p1_Jet34er2p5_dR_Min0p3", &L1_LooseIsoEG26er2p1_Jet34er2p5_dR_Min0p3, &b_L1_LooseIsoEG26er2p1_Jet34er2p5_dR_Min0p3);
   fChain->SetBranchAddress("L1_LooseIsoEG28er2p1_HTT100er", &L1_LooseIsoEG28er2p1_HTT100er, &b_L1_LooseIsoEG28er2p1_HTT100er);
   fChain->SetBranchAddress("L1_LooseIsoEG28er2p1_Jet34er2p5_dR_Min0p3", &L1_LooseIsoEG28er2p1_Jet34er2p5_dR_Min0p3, &b_L1_LooseIsoEG28er2p1_Jet34er2p5_dR_Min0p3);
   fChain->SetBranchAddress("L1_LooseIsoEG30er2p1_HTT100er", &L1_LooseIsoEG30er2p1_HTT100er, &b_L1_LooseIsoEG30er2p1_HTT100er);
   fChain->SetBranchAddress("L1_LooseIsoEG30er2p1_Jet34er2p5_dR_Min0p3", &L1_LooseIsoEG30er2p1_Jet34er2p5_dR_Min0p3, &b_L1_LooseIsoEG30er2p1_Jet34er2p5_dR_Min0p3);
   fChain->SetBranchAddress("L1_MinimumBiasHF0_AND_BptxAND", &L1_MinimumBiasHF0_AND_BptxAND, &b_L1_MinimumBiasHF0_AND_BptxAND);
   fChain->SetBranchAddress("L1_Mu10er2p3_Jet32er2p3_dR_Max0p4_DoubleJet32er2p3_dEta_Max1p6", &L1_Mu10er2p3_Jet32er2p3_dR_Max0p4_DoubleJet32er2p3_dEta_Max1p6, &b_L1_Mu10er2p3_Jet32er2p3_dR_Max0p4_DoubleJet32er2p3_dEta_Max1p6);
   fChain->SetBranchAddress("L1_Mu12er2p3_Jet40er2p1_dR_Max0p4_DoubleJet40er2p1_dEta_Max1p6", &L1_Mu12er2p3_Jet40er2p1_dR_Max0p4_DoubleJet40er2p1_dEta_Max1p6, &b_L1_Mu12er2p3_Jet40er2p1_dR_Max0p4_DoubleJet40er2p1_dEta_Max1p6);
   fChain->SetBranchAddress("L1_Mu12er2p3_Jet40er2p3_dR_Max0p4_DoubleJet40er2p3_dEta_Max1p6", &L1_Mu12er2p3_Jet40er2p3_dR_Max0p4_DoubleJet40er2p3_dEta_Max1p6, &b_L1_Mu12er2p3_Jet40er2p3_dR_Max0p4_DoubleJet40er2p3_dEta_Max1p6);
   fChain->SetBranchAddress("L1_Mu18er2p1_Tau24er2p1", &L1_Mu18er2p1_Tau24er2p1, &b_L1_Mu18er2p1_Tau24er2p1);
   fChain->SetBranchAddress("L1_Mu18er2p1_Tau26er2p1", &L1_Mu18er2p1_Tau26er2p1, &b_L1_Mu18er2p1_Tau26er2p1);
   fChain->SetBranchAddress("L1_Mu20_EG10er2p5", &L1_Mu20_EG10er2p5, &b_L1_Mu20_EG10er2p5);
   fChain->SetBranchAddress("L1_Mu22er2p1_IsoTau32er2p1", &L1_Mu22er2p1_IsoTau32er2p1, &b_L1_Mu22er2p1_IsoTau32er2p1);
   fChain->SetBranchAddress("L1_Mu22er2p1_IsoTau34er2p1", &L1_Mu22er2p1_IsoTau34er2p1, &b_L1_Mu22er2p1_IsoTau34er2p1);
   fChain->SetBranchAddress("L1_Mu22er2p1_IsoTau36er2p1", &L1_Mu22er2p1_IsoTau36er2p1, &b_L1_Mu22er2p1_IsoTau36er2p1);
   fChain->SetBranchAddress("L1_Mu22er2p1_IsoTau40er2p1", &L1_Mu22er2p1_IsoTau40er2p1, &b_L1_Mu22er2p1_IsoTau40er2p1);
   fChain->SetBranchAddress("L1_Mu22er2p1_Tau70er2p1", &L1_Mu22er2p1_Tau70er2p1, &b_L1_Mu22er2p1_Tau70er2p1);
   fChain->SetBranchAddress("L1_Mu3_Jet120er2p5_dR_Max0p4", &L1_Mu3_Jet120er2p5_dR_Max0p4, &b_L1_Mu3_Jet120er2p5_dR_Max0p4);
   fChain->SetBranchAddress("L1_Mu3_Jet120er2p5_dR_Max0p8", &L1_Mu3_Jet120er2p5_dR_Max0p8, &b_L1_Mu3_Jet120er2p5_dR_Max0p8);
   fChain->SetBranchAddress("L1_Mu3_Jet16er2p5_dR_Max0p4", &L1_Mu3_Jet16er2p5_dR_Max0p4, &b_L1_Mu3_Jet16er2p5_dR_Max0p4);
   fChain->SetBranchAddress("L1_Mu3_Jet30er2p5", &L1_Mu3_Jet30er2p5, &b_L1_Mu3_Jet30er2p5);
   fChain->SetBranchAddress("L1_Mu3_Jet35er2p5_dR_Max0p4", &L1_Mu3_Jet35er2p5_dR_Max0p4, &b_L1_Mu3_Jet35er2p5_dR_Max0p4);
   fChain->SetBranchAddress("L1_Mu3_Jet60er2p5_dR_Max0p4", &L1_Mu3_Jet60er2p5_dR_Max0p4, &b_L1_Mu3_Jet60er2p5_dR_Max0p4);
   fChain->SetBranchAddress("L1_Mu3_Jet80er2p5_dR_Max0p4", &L1_Mu3_Jet80er2p5_dR_Max0p4, &b_L1_Mu3_Jet80er2p5_dR_Max0p4);
   fChain->SetBranchAddress("L1_Mu3er1p5_Jet100er2p5_ETMHF40", &L1_Mu3er1p5_Jet100er2p5_ETMHF40, &b_L1_Mu3er1p5_Jet100er2p5_ETMHF40);
   fChain->SetBranchAddress("L1_Mu3er1p5_Jet100er2p5_ETMHF50", &L1_Mu3er1p5_Jet100er2p5_ETMHF50, &b_L1_Mu3er1p5_Jet100er2p5_ETMHF50);
   fChain->SetBranchAddress("L1_Mu5_EG23er2p5", &L1_Mu5_EG23er2p5, &b_L1_Mu5_EG23er2p5);
   fChain->SetBranchAddress("L1_Mu5_LooseIsoEG20er2p5", &L1_Mu5_LooseIsoEG20er2p5, &b_L1_Mu5_LooseIsoEG20er2p5);
   fChain->SetBranchAddress("L1_Mu6_DoubleEG10er2p5", &L1_Mu6_DoubleEG10er2p5, &b_L1_Mu6_DoubleEG10er2p5);
   fChain->SetBranchAddress("L1_Mu6_DoubleEG12er2p5", &L1_Mu6_DoubleEG12er2p5, &b_L1_Mu6_DoubleEG12er2p5);
   fChain->SetBranchAddress("L1_Mu6_DoubleEG15er2p5", &L1_Mu6_DoubleEG15er2p5, &b_L1_Mu6_DoubleEG15er2p5);
   fChain->SetBranchAddress("L1_Mu6_DoubleEG17er2p5", &L1_Mu6_DoubleEG17er2p5, &b_L1_Mu6_DoubleEG17er2p5);
   fChain->SetBranchAddress("L1_Mu6_HTT240er", &L1_Mu6_HTT240er, &b_L1_Mu6_HTT240er);
   fChain->SetBranchAddress("L1_Mu6_HTT250er", &L1_Mu6_HTT250er, &b_L1_Mu6_HTT250er);
   fChain->SetBranchAddress("L1_Mu7_EG23er2p5", &L1_Mu7_EG23er2p5, &b_L1_Mu7_EG23er2p5);
   fChain->SetBranchAddress("L1_Mu7_LooseIsoEG20er2p5", &L1_Mu7_LooseIsoEG20er2p5, &b_L1_Mu7_LooseIsoEG20er2p5);
   fChain->SetBranchAddress("L1_Mu7_LooseIsoEG23er2p5", &L1_Mu7_LooseIsoEG23er2p5, &b_L1_Mu7_LooseIsoEG23er2p5);
   fChain->SetBranchAddress("L1_NotBptxOR", &L1_NotBptxOR, &b_L1_NotBptxOR);
   fChain->SetBranchAddress("L1_QuadJet36er2p5_IsoTau52er2p1", &L1_QuadJet36er2p5_IsoTau52er2p1, &b_L1_QuadJet36er2p5_IsoTau52er2p1);
   fChain->SetBranchAddress("L1_QuadJet60er2p5", &L1_QuadJet60er2p5, &b_L1_QuadJet60er2p5);
   fChain->SetBranchAddress("L1_QuadJet_95_75_65_20_DoubleJet_75_65_er2p5_Jet20_FWD3p0", &L1_QuadJet_95_75_65_20_DoubleJet_75_65_er2p5_Jet20_FWD3p0, &b_L1_QuadJet_95_75_65_20_DoubleJet_75_65_er2p5_Jet20_FWD3p0);
   fChain->SetBranchAddress("L1_QuadMu0", &L1_QuadMu0, &b_L1_QuadMu0);
   fChain->SetBranchAddress("L1_QuadMu0_OQ", &L1_QuadMu0_OQ, &b_L1_QuadMu0_OQ);
   fChain->SetBranchAddress("L1_QuadMu0_SQ", &L1_QuadMu0_SQ, &b_L1_QuadMu0_SQ);
   fChain->SetBranchAddress("L1_SecondBunchInTrain", &L1_SecondBunchInTrain, &b_L1_SecondBunchInTrain);
   fChain->SetBranchAddress("L1_SecondLastBunchInTrain", &L1_SecondLastBunchInTrain, &b_L1_SecondLastBunchInTrain);
   fChain->SetBranchAddress("L1_SingleEG10er2p5", &L1_SingleEG10er2p5, &b_L1_SingleEG10er2p5);
   fChain->SetBranchAddress("L1_SingleEG15er2p5", &L1_SingleEG15er2p5, &b_L1_SingleEG15er2p5);
   fChain->SetBranchAddress("L1_SingleEG26er2p5", &L1_SingleEG26er2p5, &b_L1_SingleEG26er2p5);
   fChain->SetBranchAddress("L1_SingleEG34er2p5", &L1_SingleEG34er2p5, &b_L1_SingleEG34er2p5);
   fChain->SetBranchAddress("L1_SingleEG36er2p5", &L1_SingleEG36er2p5, &b_L1_SingleEG36er2p5);
   fChain->SetBranchAddress("L1_SingleEG38er2p5", &L1_SingleEG38er2p5, &b_L1_SingleEG38er2p5);
   fChain->SetBranchAddress("L1_SingleEG40er2p5", &L1_SingleEG40er2p5, &b_L1_SingleEG40er2p5);
   fChain->SetBranchAddress("L1_SingleEG42er2p5", &L1_SingleEG42er2p5, &b_L1_SingleEG42er2p5);
   fChain->SetBranchAddress("L1_SingleEG45er2p5", &L1_SingleEG45er2p5, &b_L1_SingleEG45er2p5);
   fChain->SetBranchAddress("L1_SingleEG50", &L1_SingleEG50, &b_L1_SingleEG50);
   fChain->SetBranchAddress("L1_SingleEG60", &L1_SingleEG60, &b_L1_SingleEG60);
   fChain->SetBranchAddress("L1_SingleEG8er2p5", &L1_SingleEG8er2p5, &b_L1_SingleEG8er2p5);
   fChain->SetBranchAddress("L1_SingleIsoEG24er1p5", &L1_SingleIsoEG24er1p5, &b_L1_SingleIsoEG24er1p5);
   fChain->SetBranchAddress("L1_SingleIsoEG24er2p1", &L1_SingleIsoEG24er2p1, &b_L1_SingleIsoEG24er2p1);
   fChain->SetBranchAddress("L1_SingleIsoEG26er1p5", &L1_SingleIsoEG26er1p5, &b_L1_SingleIsoEG26er1p5);
   fChain->SetBranchAddress("L1_SingleIsoEG26er2p1", &L1_SingleIsoEG26er2p1, &b_L1_SingleIsoEG26er2p1);
   fChain->SetBranchAddress("L1_SingleIsoEG26er2p5", &L1_SingleIsoEG26er2p5, &b_L1_SingleIsoEG26er2p5);
   fChain->SetBranchAddress("L1_SingleIsoEG28er1p5", &L1_SingleIsoEG28er1p5, &b_L1_SingleIsoEG28er1p5);
   fChain->SetBranchAddress("L1_SingleIsoEG28er2p1", &L1_SingleIsoEG28er2p1, &b_L1_SingleIsoEG28er2p1);
   fChain->SetBranchAddress("L1_SingleIsoEG28er2p5", &L1_SingleIsoEG28er2p5, &b_L1_SingleIsoEG28er2p5);
   fChain->SetBranchAddress("L1_SingleIsoEG30er2p1", &L1_SingleIsoEG30er2p1, &b_L1_SingleIsoEG30er2p1);
   fChain->SetBranchAddress("L1_SingleIsoEG30er2p5", &L1_SingleIsoEG30er2p5, &b_L1_SingleIsoEG30er2p5);
   fChain->SetBranchAddress("L1_SingleIsoEG32er2p1", &L1_SingleIsoEG32er2p1, &b_L1_SingleIsoEG32er2p1);
   fChain->SetBranchAddress("L1_SingleIsoEG32er2p5", &L1_SingleIsoEG32er2p5, &b_L1_SingleIsoEG32er2p5);
   fChain->SetBranchAddress("L1_SingleIsoEG34er2p5", &L1_SingleIsoEG34er2p5, &b_L1_SingleIsoEG34er2p5);
   fChain->SetBranchAddress("L1_SingleJet10erHE", &L1_SingleJet10erHE, &b_L1_SingleJet10erHE);
   fChain->SetBranchAddress("L1_SingleJet120", &L1_SingleJet120, &b_L1_SingleJet120);
   fChain->SetBranchAddress("L1_SingleJet120_FWD3p0", &L1_SingleJet120_FWD3p0, &b_L1_SingleJet120_FWD3p0);
   fChain->SetBranchAddress("L1_SingleJet120er2p5", &L1_SingleJet120er2p5, &b_L1_SingleJet120er2p5);
   fChain->SetBranchAddress("L1_SingleJet12erHE", &L1_SingleJet12erHE, &b_L1_SingleJet12erHE);
   fChain->SetBranchAddress("L1_SingleJet140er2p5", &L1_SingleJet140er2p5, &b_L1_SingleJet140er2p5);
   fChain->SetBranchAddress("L1_SingleJet140er2p5_ETMHF80", &L1_SingleJet140er2p5_ETMHF80, &b_L1_SingleJet140er2p5_ETMHF80);
   fChain->SetBranchAddress("L1_SingleJet140er2p5_ETMHF90", &L1_SingleJet140er2p5_ETMHF90, &b_L1_SingleJet140er2p5_ETMHF90);
   fChain->SetBranchAddress("L1_SingleJet160er2p5", &L1_SingleJet160er2p5, &b_L1_SingleJet160er2p5);
   fChain->SetBranchAddress("L1_SingleJet180", &L1_SingleJet180, &b_L1_SingleJet180);
   fChain->SetBranchAddress("L1_SingleJet180er2p5", &L1_SingleJet180er2p5, &b_L1_SingleJet180er2p5);
   fChain->SetBranchAddress("L1_SingleJet200", &L1_SingleJet200, &b_L1_SingleJet200);
   fChain->SetBranchAddress("L1_SingleJet20er2p5_NotBptxOR", &L1_SingleJet20er2p5_NotBptxOR, &b_L1_SingleJet20er2p5_NotBptxOR);
   fChain->SetBranchAddress("L1_SingleJet20er2p5_NotBptxOR_3BX", &L1_SingleJet20er2p5_NotBptxOR_3BX, &b_L1_SingleJet20er2p5_NotBptxOR_3BX);
   fChain->SetBranchAddress("L1_SingleJet35", &L1_SingleJet35, &b_L1_SingleJet35);
   fChain->SetBranchAddress("L1_SingleJet35_FWD3p0", &L1_SingleJet35_FWD3p0, &b_L1_SingleJet35_FWD3p0);
   fChain->SetBranchAddress("L1_SingleJet35er2p5", &L1_SingleJet35er2p5, &b_L1_SingleJet35er2p5);
   fChain->SetBranchAddress("L1_SingleJet43er2p5_NotBptxOR_3BX", &L1_SingleJet43er2p5_NotBptxOR_3BX, &b_L1_SingleJet43er2p5_NotBptxOR_3BX);
   fChain->SetBranchAddress("L1_SingleJet46er2p5_NotBptxOR_3BX", &L1_SingleJet46er2p5_NotBptxOR_3BX, &b_L1_SingleJet46er2p5_NotBptxOR_3BX);
   fChain->SetBranchAddress("L1_SingleJet60", &L1_SingleJet60, &b_L1_SingleJet60);
   fChain->SetBranchAddress("L1_SingleJet60_FWD3p0", &L1_SingleJet60_FWD3p0, &b_L1_SingleJet60_FWD3p0);
   fChain->SetBranchAddress("L1_SingleJet60er2p5", &L1_SingleJet60er2p5, &b_L1_SingleJet60er2p5);
   fChain->SetBranchAddress("L1_SingleJet8erHE", &L1_SingleJet8erHE, &b_L1_SingleJet8erHE);
   fChain->SetBranchAddress("L1_SingleJet90", &L1_SingleJet90, &b_L1_SingleJet90);
   fChain->SetBranchAddress("L1_SingleJet90_FWD3p0", &L1_SingleJet90_FWD3p0, &b_L1_SingleJet90_FWD3p0);
   fChain->SetBranchAddress("L1_SingleJet90er2p5", &L1_SingleJet90er2p5, &b_L1_SingleJet90er2p5);
   fChain->SetBranchAddress("L1_SingleLooseIsoEG28er1p5", &L1_SingleLooseIsoEG28er1p5, &b_L1_SingleLooseIsoEG28er1p5);
   fChain->SetBranchAddress("L1_SingleLooseIsoEG30er1p5", &L1_SingleLooseIsoEG30er1p5, &b_L1_SingleLooseIsoEG30er1p5);
   fChain->SetBranchAddress("L1_SingleMu0_BMTF", &L1_SingleMu0_BMTF, &b_L1_SingleMu0_BMTF);
   fChain->SetBranchAddress("L1_SingleMu0_DQ", &L1_SingleMu0_DQ, &b_L1_SingleMu0_DQ);
   fChain->SetBranchAddress("L1_SingleMu0_EMTF", &L1_SingleMu0_EMTF, &b_L1_SingleMu0_EMTF);
   fChain->SetBranchAddress("L1_SingleMu0_OMTF", &L1_SingleMu0_OMTF, &b_L1_SingleMu0_OMTF);
   fChain->SetBranchAddress("L1_SingleMu10er1p5", &L1_SingleMu10er1p5, &b_L1_SingleMu10er1p5);
   fChain->SetBranchAddress("L1_SingleMu12_DQ_BMTF", &L1_SingleMu12_DQ_BMTF, &b_L1_SingleMu12_DQ_BMTF);
   fChain->SetBranchAddress("L1_SingleMu12_DQ_EMTF", &L1_SingleMu12_DQ_EMTF, &b_L1_SingleMu12_DQ_EMTF);
   fChain->SetBranchAddress("L1_SingleMu12_DQ_OMTF", &L1_SingleMu12_DQ_OMTF, &b_L1_SingleMu12_DQ_OMTF);
   fChain->SetBranchAddress("L1_SingleMu12er1p5", &L1_SingleMu12er1p5, &b_L1_SingleMu12er1p5);
   fChain->SetBranchAddress("L1_SingleMu14er1p5", &L1_SingleMu14er1p5, &b_L1_SingleMu14er1p5);
   fChain->SetBranchAddress("L1_SingleMu15_DQ", &L1_SingleMu15_DQ, &b_L1_SingleMu15_DQ);
   fChain->SetBranchAddress("L1_SingleMu16er1p5", &L1_SingleMu16er1p5, &b_L1_SingleMu16er1p5);
   fChain->SetBranchAddress("L1_SingleMu18", &L1_SingleMu18, &b_L1_SingleMu18);
   fChain->SetBranchAddress("L1_SingleMu18er1p5", &L1_SingleMu18er1p5, &b_L1_SingleMu18er1p5);
   fChain->SetBranchAddress("L1_SingleMu20", &L1_SingleMu20, &b_L1_SingleMu20);
   fChain->SetBranchAddress("L1_SingleMu22", &L1_SingleMu22, &b_L1_SingleMu22);
   fChain->SetBranchAddress("L1_SingleMu22_BMTF", &L1_SingleMu22_BMTF, &b_L1_SingleMu22_BMTF);
   fChain->SetBranchAddress("L1_SingleMu22_EMTF", &L1_SingleMu22_EMTF, &b_L1_SingleMu22_EMTF);
   fChain->SetBranchAddress("L1_SingleMu22_OMTF", &L1_SingleMu22_OMTF, &b_L1_SingleMu22_OMTF);
   fChain->SetBranchAddress("L1_SingleMu25", &L1_SingleMu25, &b_L1_SingleMu25);
   fChain->SetBranchAddress("L1_SingleMu3", &L1_SingleMu3, &b_L1_SingleMu3);
   fChain->SetBranchAddress("L1_SingleMu5", &L1_SingleMu5, &b_L1_SingleMu5);
   fChain->SetBranchAddress("L1_SingleMu6er1p5", &L1_SingleMu6er1p5, &b_L1_SingleMu6er1p5);
   fChain->SetBranchAddress("L1_SingleMu7", &L1_SingleMu7, &b_L1_SingleMu7);
   fChain->SetBranchAddress("L1_SingleMu7_DQ", &L1_SingleMu7_DQ, &b_L1_SingleMu7_DQ);
   fChain->SetBranchAddress("L1_SingleMu7er1p5", &L1_SingleMu7er1p5, &b_L1_SingleMu7er1p5);
   fChain->SetBranchAddress("L1_SingleMu8er1p5", &L1_SingleMu8er1p5, &b_L1_SingleMu8er1p5);
   fChain->SetBranchAddress("L1_SingleMu9er1p5", &L1_SingleMu9er1p5, &b_L1_SingleMu9er1p5);
   fChain->SetBranchAddress("L1_SingleMuCosmics", &L1_SingleMuCosmics, &b_L1_SingleMuCosmics);
   fChain->SetBranchAddress("L1_SingleMuCosmics_BMTF", &L1_SingleMuCosmics_BMTF, &b_L1_SingleMuCosmics_BMTF);
   fChain->SetBranchAddress("L1_SingleMuCosmics_EMTF", &L1_SingleMuCosmics_EMTF, &b_L1_SingleMuCosmics_EMTF);
   fChain->SetBranchAddress("L1_SingleMuCosmics_OMTF", &L1_SingleMuCosmics_OMTF, &b_L1_SingleMuCosmics_OMTF);
   fChain->SetBranchAddress("L1_SingleMuOpen", &L1_SingleMuOpen, &b_L1_SingleMuOpen);
   fChain->SetBranchAddress("L1_SingleMuOpen_NotBptxOR", &L1_SingleMuOpen_NotBptxOR, &b_L1_SingleMuOpen_NotBptxOR);
   fChain->SetBranchAddress("L1_SingleMuOpen_er1p1_NotBptxOR_3BX", &L1_SingleMuOpen_er1p1_NotBptxOR_3BX, &b_L1_SingleMuOpen_er1p1_NotBptxOR_3BX);
   fChain->SetBranchAddress("L1_SingleMuOpen_er1p4_NotBptxOR_3BX", &L1_SingleMuOpen_er1p4_NotBptxOR_3BX, &b_L1_SingleMuOpen_er1p4_NotBptxOR_3BX);
   fChain->SetBranchAddress("L1_SingleTau120er2p1", &L1_SingleTau120er2p1, &b_L1_SingleTau120er2p1);
   fChain->SetBranchAddress("L1_SingleTau130er2p1", &L1_SingleTau130er2p1, &b_L1_SingleTau130er2p1);
   fChain->SetBranchAddress("L1_TOTEM_1", &L1_TOTEM_1, &b_L1_TOTEM_1);
   fChain->SetBranchAddress("L1_TOTEM_2", &L1_TOTEM_2, &b_L1_TOTEM_2);
   fChain->SetBranchAddress("L1_TOTEM_3", &L1_TOTEM_3, &b_L1_TOTEM_3);
   fChain->SetBranchAddress("L1_TOTEM_4", &L1_TOTEM_4, &b_L1_TOTEM_4);
   fChain->SetBranchAddress("L1_TripleEG16er2p5", &L1_TripleEG16er2p5, &b_L1_TripleEG16er2p5);
   fChain->SetBranchAddress("L1_TripleEG_16_12_8_er2p5", &L1_TripleEG_16_12_8_er2p5, &b_L1_TripleEG_16_12_8_er2p5);
   fChain->SetBranchAddress("L1_TripleEG_16_15_8_er2p5", &L1_TripleEG_16_15_8_er2p5, &b_L1_TripleEG_16_15_8_er2p5);
   fChain->SetBranchAddress("L1_TripleEG_18_17_8_er2p5", &L1_TripleEG_18_17_8_er2p5, &b_L1_TripleEG_18_17_8_er2p5);
   fChain->SetBranchAddress("L1_TripleEG_18_18_12_er2p5", &L1_TripleEG_18_18_12_er2p5, &b_L1_TripleEG_18_18_12_er2p5);
   fChain->SetBranchAddress("L1_TripleJet_100_80_70_DoubleJet_80_70_er2p5", &L1_TripleJet_100_80_70_DoubleJet_80_70_er2p5, &b_L1_TripleJet_100_80_70_DoubleJet_80_70_er2p5);
   fChain->SetBranchAddress("L1_TripleJet_105_85_75_DoubleJet_85_75_er2p5", &L1_TripleJet_105_85_75_DoubleJet_85_75_er2p5, &b_L1_TripleJet_105_85_75_DoubleJet_85_75_er2p5);
   fChain->SetBranchAddress("L1_TripleJet_95_75_65_DoubleJet_75_65_er2p5", &L1_TripleJet_95_75_65_DoubleJet_75_65_er2p5, &b_L1_TripleJet_95_75_65_DoubleJet_75_65_er2p5);
   fChain->SetBranchAddress("L1_TripleMu0", &L1_TripleMu0, &b_L1_TripleMu0);
   fChain->SetBranchAddress("L1_TripleMu0_OQ", &L1_TripleMu0_OQ, &b_L1_TripleMu0_OQ);
   fChain->SetBranchAddress("L1_TripleMu0_SQ", &L1_TripleMu0_SQ, &b_L1_TripleMu0_SQ);
   fChain->SetBranchAddress("L1_TripleMu3", &L1_TripleMu3, &b_L1_TripleMu3);
   fChain->SetBranchAddress("L1_TripleMu3_SQ", &L1_TripleMu3_SQ, &b_L1_TripleMu3_SQ);
   fChain->SetBranchAddress("L1_TripleMu_5SQ_3SQ_0OQ", &L1_TripleMu_5SQ_3SQ_0OQ, &b_L1_TripleMu_5SQ_3SQ_0OQ);
   fChain->SetBranchAddress("L1_TripleMu_5SQ_3SQ_0OQ_DoubleMu_5_3_SQ_OS_Mass_Max9", &L1_TripleMu_5SQ_3SQ_0OQ_DoubleMu_5_3_SQ_OS_Mass_Max9, &b_L1_TripleMu_5SQ_3SQ_0OQ_DoubleMu_5_3_SQ_OS_Mass_Max9);
   fChain->SetBranchAddress("L1_TripleMu_5SQ_3SQ_0_DoubleMu_5_3_SQ_OS_Mass_Max9", &L1_TripleMu_5SQ_3SQ_0_DoubleMu_5_3_SQ_OS_Mass_Max9, &b_L1_TripleMu_5SQ_3SQ_0_DoubleMu_5_3_SQ_OS_Mass_Max9);
   fChain->SetBranchAddress("L1_TripleMu_5_3_3", &L1_TripleMu_5_3_3, &b_L1_TripleMu_5_3_3);
   fChain->SetBranchAddress("L1_TripleMu_5_3_3_SQ", &L1_TripleMu_5_3_3_SQ, &b_L1_TripleMu_5_3_3_SQ);
   fChain->SetBranchAddress("L1_TripleMu_5_3p5_2p5", &L1_TripleMu_5_3p5_2p5, &b_L1_TripleMu_5_3p5_2p5);
   fChain->SetBranchAddress("L1_TripleMu_5_3p5_2p5_DoubleMu_5_2p5_OS_Mass_5to17", &L1_TripleMu_5_3p5_2p5_DoubleMu_5_2p5_OS_Mass_5to17, &b_L1_TripleMu_5_3p5_2p5_DoubleMu_5_2p5_OS_Mass_5to17);
   fChain->SetBranchAddress("L1_TripleMu_5_3p5_2p5_OQ_DoubleMu_5_2p5_OQ_OS_Mass_5to17", &L1_TripleMu_5_3p5_2p5_OQ_DoubleMu_5_2p5_OQ_OS_Mass_5to17, &b_L1_TripleMu_5_3p5_2p5_OQ_DoubleMu_5_2p5_OQ_OS_Mass_5to17);
   fChain->SetBranchAddress("L1_TripleMu_5_4_2p5_DoubleMu_5_2p5_OS_Mass_5to17", &L1_TripleMu_5_4_2p5_DoubleMu_5_2p5_OS_Mass_5to17, &b_L1_TripleMu_5_4_2p5_DoubleMu_5_2p5_OS_Mass_5to17);
   fChain->SetBranchAddress("L1_TripleMu_5_5_3", &L1_TripleMu_5_5_3, &b_L1_TripleMu_5_5_3);
   fChain->SetBranchAddress("L1_UnpairedBunchBptxMinus", &L1_UnpairedBunchBptxMinus, &b_L1_UnpairedBunchBptxMinus);
   fChain->SetBranchAddress("L1_UnpairedBunchBptxPlus", &L1_UnpairedBunchBptxPlus, &b_L1_UnpairedBunchBptxPlus);
   fChain->SetBranchAddress("L1_ZeroBias", &L1_ZeroBias, &b_L1_ZeroBias);
   fChain->SetBranchAddress("L1_ZeroBias_copy", &L1_ZeroBias_copy, &b_L1_ZeroBias_copy);
   fChain->SetBranchAddress("Flag_HBHENoiseFilter", &Flag_HBHENoiseFilter, &b_Flag_HBHENoiseFilter);
   fChain->SetBranchAddress("Flag_HBHENoiseIsoFilter", &Flag_HBHENoiseIsoFilter, &b_Flag_HBHENoiseIsoFilter);
   fChain->SetBranchAddress("Flag_CSCTightHaloFilter", &Flag_CSCTightHaloFilter, &b_Flag_CSCTightHaloFilter);
   fChain->SetBranchAddress("Flag_CSCTightHaloTrkMuUnvetoFilter", &Flag_CSCTightHaloTrkMuUnvetoFilter, &b_Flag_CSCTightHaloTrkMuUnvetoFilter);
   fChain->SetBranchAddress("Flag_CSCTightHalo2015Filter", &Flag_CSCTightHalo2015Filter, &b_Flag_CSCTightHalo2015Filter);
   fChain->SetBranchAddress("Flag_globalTightHalo2016Filter", &Flag_globalTightHalo2016Filter, &b_Flag_globalTightHalo2016Filter);
   fChain->SetBranchAddress("Flag_globalSuperTightHalo2016Filter", &Flag_globalSuperTightHalo2016Filter, &b_Flag_globalSuperTightHalo2016Filter);
   fChain->SetBranchAddress("Flag_HcalStripHaloFilter", &Flag_HcalStripHaloFilter, &b_Flag_HcalStripHaloFilter);
   fChain->SetBranchAddress("Flag_hcalLaserEventFilter", &Flag_hcalLaserEventFilter, &b_Flag_hcalLaserEventFilter);
   fChain->SetBranchAddress("Flag_EcalDeadCellTriggerPrimitiveFilter", &Flag_EcalDeadCellTriggerPrimitiveFilter, &b_Flag_EcalDeadCellTriggerPrimitiveFilter);
   fChain->SetBranchAddress("Flag_EcalDeadCellBoundaryEnergyFilter", &Flag_EcalDeadCellBoundaryEnergyFilter, &b_Flag_EcalDeadCellBoundaryEnergyFilter);
   fChain->SetBranchAddress("Flag_ecalBadCalibFilter", &Flag_ecalBadCalibFilter, &b_Flag_ecalBadCalibFilter);
   fChain->SetBranchAddress("Flag_goodVertices", &Flag_goodVertices, &b_Flag_goodVertices);
   fChain->SetBranchAddress("Flag_eeBadScFilter", &Flag_eeBadScFilter, &b_Flag_eeBadScFilter);
   fChain->SetBranchAddress("Flag_ecalLaserCorrFilter", &Flag_ecalLaserCorrFilter, &b_Flag_ecalLaserCorrFilter);
   fChain->SetBranchAddress("Flag_trkPOGFilters", &Flag_trkPOGFilters, &b_Flag_trkPOGFilters);
   fChain->SetBranchAddress("Flag_chargedHadronTrackResolutionFilter", &Flag_chargedHadronTrackResolutionFilter, &b_Flag_chargedHadronTrackResolutionFilter);
   fChain->SetBranchAddress("Flag_muonBadTrackFilter", &Flag_muonBadTrackFilter, &b_Flag_muonBadTrackFilter);
   fChain->SetBranchAddress("Flag_BadChargedCandidateFilter", &Flag_BadChargedCandidateFilter, &b_Flag_BadChargedCandidateFilter);
   fChain->SetBranchAddress("Flag_BadPFMuonFilter", &Flag_BadPFMuonFilter, &b_Flag_BadPFMuonFilter);
   fChain->SetBranchAddress("Flag_BadChargedCandidateSummer16Filter", &Flag_BadChargedCandidateSummer16Filter, &b_Flag_BadChargedCandidateSummer16Filter);
   fChain->SetBranchAddress("Flag_BadPFMuonSummer16Filter", &Flag_BadPFMuonSummer16Filter, &b_Flag_BadPFMuonSummer16Filter);
   fChain->SetBranchAddress("Flag_trkPOG_manystripclus53X", &Flag_trkPOG_manystripclus53X, &b_Flag_trkPOG_manystripclus53X);
   fChain->SetBranchAddress("Flag_trkPOG_toomanystripclus53X", &Flag_trkPOG_toomanystripclus53X, &b_Flag_trkPOG_toomanystripclus53X);
   fChain->SetBranchAddress("Flag_trkPOG_logErrorTooManyClusters", &Flag_trkPOG_logErrorTooManyClusters, &b_Flag_trkPOG_logErrorTooManyClusters);
   fChain->SetBranchAddress("Flag_METFilters", &Flag_METFilters, &b_Flag_METFilters);
   fChain->SetBranchAddress("L1Reco_step", &L1Reco_step, &b_L1Reco_step);
   fChain->SetBranchAddress("L1simulation_step", &L1simulation_step, &b_L1simulation_step);
   fChain->SetBranchAddress("HLTriggerFirstPath", &HLTriggerFirstPath, &b_HLTriggerFirstPath);
   fChain->SetBranchAddress("HLT_AK8PFJet360_TrimMass30", &HLT_AK8PFJet360_TrimMass30, &b_HLT_AK8PFJet360_TrimMass30);
   fChain->SetBranchAddress("HLT_AK8PFJet380_TrimMass30", &HLT_AK8PFJet380_TrimMass30, &b_HLT_AK8PFJet380_TrimMass30);
   fChain->SetBranchAddress("HLT_AK8PFJet400_TrimMass30", &HLT_AK8PFJet400_TrimMass30, &b_HLT_AK8PFJet400_TrimMass30);
   fChain->SetBranchAddress("HLT_AK8PFJet420_TrimMass30", &HLT_AK8PFJet420_TrimMass30, &b_HLT_AK8PFJet420_TrimMass30);
   fChain->SetBranchAddress("HLT_AK8PFHT750_TrimMass50", &HLT_AK8PFHT750_TrimMass50, &b_HLT_AK8PFHT750_TrimMass50);
   fChain->SetBranchAddress("HLT_AK8PFHT800_TrimMass50", &HLT_AK8PFHT800_TrimMass50, &b_HLT_AK8PFHT800_TrimMass50);
   fChain->SetBranchAddress("HLT_AK8PFHT850_TrimMass50", &HLT_AK8PFHT850_TrimMass50, &b_HLT_AK8PFHT850_TrimMass50);
   fChain->SetBranchAddress("HLT_AK8PFHT900_TrimMass50", &HLT_AK8PFHT900_TrimMass50, &b_HLT_AK8PFHT900_TrimMass50);
   fChain->SetBranchAddress("HLT_CaloJet500_NoJetID", &HLT_CaloJet500_NoJetID, &b_HLT_CaloJet500_NoJetID);
   fChain->SetBranchAddress("HLT_CaloJet550_NoJetID", &HLT_CaloJet550_NoJetID, &b_HLT_CaloJet550_NoJetID);
   fChain->SetBranchAddress("HLT_DoubleMu5_Upsilon_DoubleEle3_CaloIdL_TrackIdL", &HLT_DoubleMu5_Upsilon_DoubleEle3_CaloIdL_TrackIdL, &b_HLT_DoubleMu5_Upsilon_DoubleEle3_CaloIdL_TrackIdL);
   fChain->SetBranchAddress("HLT_DoubleMu3_DoubleEle7p5_CaloIdL_TrackIdL_Upsilon", &HLT_DoubleMu3_DoubleEle7p5_CaloIdL_TrackIdL_Upsilon, &b_HLT_DoubleMu3_DoubleEle7p5_CaloIdL_TrackIdL_Upsilon);
   fChain->SetBranchAddress("HLT_Trimuon5_3p5_2_Upsilon_Muon", &HLT_Trimuon5_3p5_2_Upsilon_Muon, &b_HLT_Trimuon5_3p5_2_Upsilon_Muon);
   fChain->SetBranchAddress("HLT_TrimuonOpen_5_3p5_2_Upsilon_Muon", &HLT_TrimuonOpen_5_3p5_2_Upsilon_Muon, &b_HLT_TrimuonOpen_5_3p5_2_Upsilon_Muon);
   fChain->SetBranchAddress("HLT_DoubleEle25_CaloIdL_MW", &HLT_DoubleEle25_CaloIdL_MW, &b_HLT_DoubleEle25_CaloIdL_MW);
   fChain->SetBranchAddress("HLT_DoubleEle27_CaloIdL_MW", &HLT_DoubleEle27_CaloIdL_MW, &b_HLT_DoubleEle27_CaloIdL_MW);
   fChain->SetBranchAddress("HLT_DoubleEle33_CaloIdL_MW", &HLT_DoubleEle33_CaloIdL_MW, &b_HLT_DoubleEle33_CaloIdL_MW);
   fChain->SetBranchAddress("HLT_DoubleEle24_eta2p1_WPTight_Gsf", &HLT_DoubleEle24_eta2p1_WPTight_Gsf, &b_HLT_DoubleEle24_eta2p1_WPTight_Gsf);
   fChain->SetBranchAddress("HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350", &HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350, &b_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350);
   fChain->SetBranchAddress("HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350", &HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350, &b_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350);
   fChain->SetBranchAddress("HLT_Ele27_Ele37_CaloIdL_MW", &HLT_Ele27_Ele37_CaloIdL_MW, &b_HLT_Ele27_Ele37_CaloIdL_MW);
   fChain->SetBranchAddress("HLT_Mu27_Ele37_CaloIdL_MW", &HLT_Mu27_Ele37_CaloIdL_MW, &b_HLT_Mu27_Ele37_CaloIdL_MW);
   fChain->SetBranchAddress("HLT_Mu37_Ele27_CaloIdL_MW", &HLT_Mu37_Ele27_CaloIdL_MW, &b_HLT_Mu37_Ele27_CaloIdL_MW);
   fChain->SetBranchAddress("HLT_Mu37_TkMu27", &HLT_Mu37_TkMu27, &b_HLT_Mu37_TkMu27);
   fChain->SetBranchAddress("HLT_DoubleMu4_3_Bs", &HLT_DoubleMu4_3_Bs, &b_HLT_DoubleMu4_3_Bs);
   fChain->SetBranchAddress("HLT_DoubleMu4_3_Jpsi", &HLT_DoubleMu4_3_Jpsi, &b_HLT_DoubleMu4_3_Jpsi);
   fChain->SetBranchAddress("HLT_DoubleMu4_JpsiTrk_Displaced", &HLT_DoubleMu4_JpsiTrk_Displaced, &b_HLT_DoubleMu4_JpsiTrk_Displaced);
   fChain->SetBranchAddress("HLT_DoubleMu4_LowMassNonResonantTrk_Displaced", &HLT_DoubleMu4_LowMassNonResonantTrk_Displaced, &b_HLT_DoubleMu4_LowMassNonResonantTrk_Displaced);
   fChain->SetBranchAddress("HLT_DoubleMu3_Trk_Tau3mu", &HLT_DoubleMu3_Trk_Tau3mu, &b_HLT_DoubleMu3_Trk_Tau3mu);
   fChain->SetBranchAddress("HLT_DoubleMu3_TkMu_DsTau3Mu", &HLT_DoubleMu3_TkMu_DsTau3Mu, &b_HLT_DoubleMu3_TkMu_DsTau3Mu);
   fChain->SetBranchAddress("HLT_DoubleMu4_PsiPrimeTrk_Displaced", &HLT_DoubleMu4_PsiPrimeTrk_Displaced, &b_HLT_DoubleMu4_PsiPrimeTrk_Displaced);
   fChain->SetBranchAddress("HLT_DoubleMu4_Mass3p8_DZ_PFHT350", &HLT_DoubleMu4_Mass3p8_DZ_PFHT350, &b_HLT_DoubleMu4_Mass3p8_DZ_PFHT350);
   fChain->SetBranchAddress("HLT_Mu3_PFJet40", &HLT_Mu3_PFJet40, &b_HLT_Mu3_PFJet40);
   fChain->SetBranchAddress("HLT_Mu7p5_L2Mu2_Jpsi", &HLT_Mu7p5_L2Mu2_Jpsi, &b_HLT_Mu7p5_L2Mu2_Jpsi);
   fChain->SetBranchAddress("HLT_Mu7p5_L2Mu2_Upsilon", &HLT_Mu7p5_L2Mu2_Upsilon, &b_HLT_Mu7p5_L2Mu2_Upsilon);
   fChain->SetBranchAddress("HLT_Mu7p5_Track2_Jpsi", &HLT_Mu7p5_Track2_Jpsi, &b_HLT_Mu7p5_Track2_Jpsi);
   fChain->SetBranchAddress("HLT_Mu7p5_Track3p5_Jpsi", &HLT_Mu7p5_Track3p5_Jpsi, &b_HLT_Mu7p5_Track3p5_Jpsi);
   fChain->SetBranchAddress("HLT_Mu7p5_Track7_Jpsi", &HLT_Mu7p5_Track7_Jpsi, &b_HLT_Mu7p5_Track7_Jpsi);
   fChain->SetBranchAddress("HLT_Mu7p5_Track2_Upsilon", &HLT_Mu7p5_Track2_Upsilon, &b_HLT_Mu7p5_Track2_Upsilon);
   fChain->SetBranchAddress("HLT_Mu7p5_Track3p5_Upsilon", &HLT_Mu7p5_Track3p5_Upsilon, &b_HLT_Mu7p5_Track3p5_Upsilon);
   fChain->SetBranchAddress("HLT_Mu7p5_Track7_Upsilon", &HLT_Mu7p5_Track7_Upsilon, &b_HLT_Mu7p5_Track7_Upsilon);
   fChain->SetBranchAddress("HLT_Mu3_L1SingleMu5orSingleMu7", &HLT_Mu3_L1SingleMu5orSingleMu7, &b_HLT_Mu3_L1SingleMu5orSingleMu7);
   fChain->SetBranchAddress("HLT_DoublePhoton33_CaloIdL", &HLT_DoublePhoton33_CaloIdL, &b_HLT_DoublePhoton33_CaloIdL);
   fChain->SetBranchAddress("HLT_DoublePhoton70", &HLT_DoublePhoton70, &b_HLT_DoublePhoton70);
   fChain->SetBranchAddress("HLT_DoublePhoton85", &HLT_DoublePhoton85, &b_HLT_DoublePhoton85);
   fChain->SetBranchAddress("HLT_Ele20_WPTight_Gsf", &HLT_Ele20_WPTight_Gsf, &b_HLT_Ele20_WPTight_Gsf);
   fChain->SetBranchAddress("HLT_Ele15_WPLoose_Gsf", &HLT_Ele15_WPLoose_Gsf, &b_HLT_Ele15_WPLoose_Gsf);
   fChain->SetBranchAddress("HLT_Ele17_WPLoose_Gsf", &HLT_Ele17_WPLoose_Gsf, &b_HLT_Ele17_WPLoose_Gsf);
   fChain->SetBranchAddress("HLT_Ele20_WPLoose_Gsf", &HLT_Ele20_WPLoose_Gsf, &b_HLT_Ele20_WPLoose_Gsf);
   fChain->SetBranchAddress("HLT_Ele20_eta2p1_WPLoose_Gsf", &HLT_Ele20_eta2p1_WPLoose_Gsf, &b_HLT_Ele20_eta2p1_WPLoose_Gsf);
   fChain->SetBranchAddress("HLT_DiEle27_WPTightCaloOnly_L1DoubleEG", &HLT_DiEle27_WPTightCaloOnly_L1DoubleEG, &b_HLT_DiEle27_WPTightCaloOnly_L1DoubleEG);
   fChain->SetBranchAddress("HLT_Ele27_WPTight_Gsf", &HLT_Ele27_WPTight_Gsf, &b_HLT_Ele27_WPTight_Gsf);
   fChain->SetBranchAddress("HLT_Ele28_WPTight_Gsf", &HLT_Ele28_WPTight_Gsf, &b_HLT_Ele28_WPTight_Gsf);
   fChain->SetBranchAddress("HLT_Ele30_WPTight_Gsf", &HLT_Ele30_WPTight_Gsf, &b_HLT_Ele30_WPTight_Gsf);
   fChain->SetBranchAddress("HLT_Ele32_WPTight_Gsf", &HLT_Ele32_WPTight_Gsf, &b_HLT_Ele32_WPTight_Gsf);
   fChain->SetBranchAddress("HLT_Ele35_WPTight_Gsf", &HLT_Ele35_WPTight_Gsf, &b_HLT_Ele35_WPTight_Gsf);
   fChain->SetBranchAddress("HLT_Ele35_WPTight_Gsf_L1EGMT", &HLT_Ele35_WPTight_Gsf_L1EGMT, &b_HLT_Ele35_WPTight_Gsf_L1EGMT);
   fChain->SetBranchAddress("HLT_Ele38_WPTight_Gsf", &HLT_Ele38_WPTight_Gsf, &b_HLT_Ele38_WPTight_Gsf);
   fChain->SetBranchAddress("HLT_Ele40_WPTight_Gsf", &HLT_Ele40_WPTight_Gsf, &b_HLT_Ele40_WPTight_Gsf);
   fChain->SetBranchAddress("HLT_Ele32_WPTight_Gsf_L1DoubleEG", &HLT_Ele32_WPTight_Gsf_L1DoubleEG, &b_HLT_Ele32_WPTight_Gsf_L1DoubleEG);
   fChain->SetBranchAddress("HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_CrossL1", &HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_CrossL1, &b_HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_CrossL1);
   fChain->SetBranchAddress("HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_CrossL1", &HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_CrossL1, &b_HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_CrossL1);
   fChain->SetBranchAddress("HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_CrossL1", &HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_CrossL1, &b_HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_CrossL1);
   fChain->SetBranchAddress("HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1", &HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1, &b_HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1);
   fChain->SetBranchAddress("HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1", &HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1, &b_HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1);
   fChain->SetBranchAddress("HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1", &HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1, &b_HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1);
   fChain->SetBranchAddress("HLT_HT450_Beamspot", &HLT_HT450_Beamspot, &b_HLT_HT450_Beamspot);
   fChain->SetBranchAddress("HLT_HT300_Beamspot", &HLT_HT300_Beamspot, &b_HLT_HT300_Beamspot);
   fChain->SetBranchAddress("HLT_ZeroBias_Beamspot", &HLT_ZeroBias_Beamspot, &b_HLT_ZeroBias_Beamspot);
   fChain->SetBranchAddress("HLT_IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_CrossL1", &HLT_IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_CrossL1, &b_HLT_IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_CrossL1);
   fChain->SetBranchAddress("HLT_IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_CrossL1", &HLT_IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_CrossL1, &b_HLT_IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_CrossL1);
   fChain->SetBranchAddress("HLT_IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_CrossL1", &HLT_IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_CrossL1, &b_HLT_IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_CrossL1);
   fChain->SetBranchAddress("HLT_IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1", &HLT_IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1, &b_HLT_IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1);
   fChain->SetBranchAddress("HLT_IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1", &HLT_IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1, &b_HLT_IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1);
   fChain->SetBranchAddress("HLT_IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1", &HLT_IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1, &b_HLT_IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1);
   fChain->SetBranchAddress("HLT_IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1", &HLT_IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1, &b_HLT_IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1);
   fChain->SetBranchAddress("HLT_IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1", &HLT_IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1, &b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1);
   fChain->SetBranchAddress("HLT_IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1", &HLT_IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1, &b_HLT_IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1);
   fChain->SetBranchAddress("HLT_IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1", &HLT_IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1, &b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1);
   fChain->SetBranchAddress("HLT_IsoMu27_LooseChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1", &HLT_IsoMu27_LooseChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1, &b_HLT_IsoMu27_LooseChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1);
   fChain->SetBranchAddress("HLT_IsoMu27_MediumChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1", &HLT_IsoMu27_MediumChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1, &b_HLT_IsoMu27_MediumChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1);
   fChain->SetBranchAddress("HLT_IsoMu27_TightChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1", &HLT_IsoMu27_TightChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1, &b_HLT_IsoMu27_TightChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1);
   fChain->SetBranchAddress("HLT_IsoMu20", &HLT_IsoMu20, &b_HLT_IsoMu20);
   fChain->SetBranchAddress("HLT_IsoMu24", &HLT_IsoMu24, &b_HLT_IsoMu24);
   fChain->SetBranchAddress("HLT_IsoMu24_eta2p1", &HLT_IsoMu24_eta2p1, &b_HLT_IsoMu24_eta2p1);
   fChain->SetBranchAddress("HLT_IsoMu27", &HLT_IsoMu27, &b_HLT_IsoMu27);
   fChain->SetBranchAddress("HLT_IsoMu30", &HLT_IsoMu30, &b_HLT_IsoMu30);
   fChain->SetBranchAddress("HLT_UncorrectedJetE30_NoBPTX", &HLT_UncorrectedJetE30_NoBPTX, &b_HLT_UncorrectedJetE30_NoBPTX);
   fChain->SetBranchAddress("HLT_UncorrectedJetE30_NoBPTX3BX", &HLT_UncorrectedJetE30_NoBPTX3BX, &b_HLT_UncorrectedJetE30_NoBPTX3BX);
   fChain->SetBranchAddress("HLT_UncorrectedJetE60_NoBPTX3BX", &HLT_UncorrectedJetE60_NoBPTX3BX, &b_HLT_UncorrectedJetE60_NoBPTX3BX);
   fChain->SetBranchAddress("HLT_UncorrectedJetE70_NoBPTX3BX", &HLT_UncorrectedJetE70_NoBPTX3BX, &b_HLT_UncorrectedJetE70_NoBPTX3BX);
   fChain->SetBranchAddress("HLT_L1SingleMu18", &HLT_L1SingleMu18, &b_HLT_L1SingleMu18);
   fChain->SetBranchAddress("HLT_L1SingleMu25", &HLT_L1SingleMu25, &b_HLT_L1SingleMu25);
   fChain->SetBranchAddress("HLT_L2Mu10", &HLT_L2Mu10, &b_HLT_L2Mu10);
   fChain->SetBranchAddress("HLT_L2Mu10_NoVertex_NoBPTX3BX", &HLT_L2Mu10_NoVertex_NoBPTX3BX, &b_HLT_L2Mu10_NoVertex_NoBPTX3BX);
   fChain->SetBranchAddress("HLT_L2Mu10_NoVertex_NoBPTX", &HLT_L2Mu10_NoVertex_NoBPTX, &b_HLT_L2Mu10_NoVertex_NoBPTX);
   fChain->SetBranchAddress("HLT_L2Mu45_NoVertex_3Sta_NoBPTX3BX", &HLT_L2Mu45_NoVertex_3Sta_NoBPTX3BX, &b_HLT_L2Mu45_NoVertex_3Sta_NoBPTX3BX);
   fChain->SetBranchAddress("HLT_L2Mu40_NoVertex_3Sta_NoBPTX3BX", &HLT_L2Mu40_NoVertex_3Sta_NoBPTX3BX, &b_HLT_L2Mu40_NoVertex_3Sta_NoBPTX3BX);
   fChain->SetBranchAddress("HLT_L2Mu50", &HLT_L2Mu50, &b_HLT_L2Mu50);
   fChain->SetBranchAddress("HLT_L2Mu23NoVtx_2Cha", &HLT_L2Mu23NoVtx_2Cha, &b_HLT_L2Mu23NoVtx_2Cha);
   fChain->SetBranchAddress("HLT_L2Mu23NoVtx_2Cha_CosmicSeed", &HLT_L2Mu23NoVtx_2Cha_CosmicSeed, &b_HLT_L2Mu23NoVtx_2Cha_CosmicSeed);
   fChain->SetBranchAddress("HLT_DoubleL2Mu30NoVtx_2Cha_CosmicSeed_Eta2p4", &HLT_DoubleL2Mu30NoVtx_2Cha_CosmicSeed_Eta2p4, &b_HLT_DoubleL2Mu30NoVtx_2Cha_CosmicSeed_Eta2p4);
   fChain->SetBranchAddress("HLT_DoubleL2Mu30NoVtx_2Cha_Eta2p4", &HLT_DoubleL2Mu30NoVtx_2Cha_Eta2p4, &b_HLT_DoubleL2Mu30NoVtx_2Cha_Eta2p4);
   fChain->SetBranchAddress("HLT_DoubleL2Mu50", &HLT_DoubleL2Mu50, &b_HLT_DoubleL2Mu50);
   fChain->SetBranchAddress("HLT_DoubleL2Mu23NoVtx_2Cha_CosmicSeed", &HLT_DoubleL2Mu23NoVtx_2Cha_CosmicSeed, &b_HLT_DoubleL2Mu23NoVtx_2Cha_CosmicSeed);
   fChain->SetBranchAddress("HLT_DoubleL2Mu23NoVtx_2Cha_CosmicSeed_NoL2Matched", &HLT_DoubleL2Mu23NoVtx_2Cha_CosmicSeed_NoL2Matched, &b_HLT_DoubleL2Mu23NoVtx_2Cha_CosmicSeed_NoL2Matched);
   fChain->SetBranchAddress("HLT_DoubleL2Mu25NoVtx_2Cha_CosmicSeed", &HLT_DoubleL2Mu25NoVtx_2Cha_CosmicSeed, &b_HLT_DoubleL2Mu25NoVtx_2Cha_CosmicSeed);
   fChain->SetBranchAddress("HLT_DoubleL2Mu25NoVtx_2Cha_CosmicSeed_NoL2Matched", &HLT_DoubleL2Mu25NoVtx_2Cha_CosmicSeed_NoL2Matched, &b_HLT_DoubleL2Mu25NoVtx_2Cha_CosmicSeed_NoL2Matched);
   fChain->SetBranchAddress("HLT_DoubleL2Mu25NoVtx_2Cha_CosmicSeed_Eta2p4", &HLT_DoubleL2Mu25NoVtx_2Cha_CosmicSeed_Eta2p4, &b_HLT_DoubleL2Mu25NoVtx_2Cha_CosmicSeed_Eta2p4);
   fChain->SetBranchAddress("HLT_DoubleL2Mu23NoVtx_2Cha", &HLT_DoubleL2Mu23NoVtx_2Cha, &b_HLT_DoubleL2Mu23NoVtx_2Cha);
   fChain->SetBranchAddress("HLT_DoubleL2Mu23NoVtx_2Cha_NoL2Matched", &HLT_DoubleL2Mu23NoVtx_2Cha_NoL2Matched, &b_HLT_DoubleL2Mu23NoVtx_2Cha_NoL2Matched);
   fChain->SetBranchAddress("HLT_DoubleL2Mu25NoVtx_2Cha", &HLT_DoubleL2Mu25NoVtx_2Cha, &b_HLT_DoubleL2Mu25NoVtx_2Cha);
   fChain->SetBranchAddress("HLT_DoubleL2Mu25NoVtx_2Cha_NoL2Matched", &HLT_DoubleL2Mu25NoVtx_2Cha_NoL2Matched, &b_HLT_DoubleL2Mu25NoVtx_2Cha_NoL2Matched);
   fChain->SetBranchAddress("HLT_DoubleL2Mu25NoVtx_2Cha_Eta2p4", &HLT_DoubleL2Mu25NoVtx_2Cha_Eta2p4, &b_HLT_DoubleL2Mu25NoVtx_2Cha_Eta2p4);
   fChain->SetBranchAddress("HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL", &HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL, &b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL);
   fChain->SetBranchAddress("HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL", &HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL, &b_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL);
   fChain->SetBranchAddress("HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ", &HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ, &b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ);
   fChain->SetBranchAddress("HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ", &HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ, &b_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ);
   fChain->SetBranchAddress("HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8", &HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8, &b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8);
   fChain->SetBranchAddress("HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8", &HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8, &b_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8);
   fChain->SetBranchAddress("HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8", &HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8, &b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8);
   fChain->SetBranchAddress("HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8", &HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8, &b_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8);
   fChain->SetBranchAddress("HLT_Mu25_TkMu0_Onia", &HLT_Mu25_TkMu0_Onia, &b_HLT_Mu25_TkMu0_Onia);
   fChain->SetBranchAddress("HLT_Mu30_TkMu0_Psi", &HLT_Mu30_TkMu0_Psi, &b_HLT_Mu30_TkMu0_Psi);
   fChain->SetBranchAddress("HLT_Mu30_TkMu0_Upsilon", &HLT_Mu30_TkMu0_Upsilon, &b_HLT_Mu30_TkMu0_Upsilon);
   fChain->SetBranchAddress("HLT_Mu20_TkMu0_Phi", &HLT_Mu20_TkMu0_Phi, &b_HLT_Mu20_TkMu0_Phi);
   fChain->SetBranchAddress("HLT_Mu25_TkMu0_Phi", &HLT_Mu25_TkMu0_Phi, &b_HLT_Mu25_TkMu0_Phi);
   fChain->SetBranchAddress("HLT_Mu12", &HLT_Mu12, &b_HLT_Mu12);
   fChain->SetBranchAddress("HLT_Mu15", &HLT_Mu15, &b_HLT_Mu15);
   fChain->SetBranchAddress("HLT_Mu20", &HLT_Mu20, &b_HLT_Mu20);
   fChain->SetBranchAddress("HLT_Mu27", &HLT_Mu27, &b_HLT_Mu27);
   fChain->SetBranchAddress("HLT_Mu50", &HLT_Mu50, &b_HLT_Mu50);
   fChain->SetBranchAddress("HLT_Mu55", &HLT_Mu55, &b_HLT_Mu55);
   fChain->SetBranchAddress("HLT_OldMu100", &HLT_OldMu100, &b_HLT_OldMu100);
   fChain->SetBranchAddress("HLT_TkMu100", &HLT_TkMu100, &b_HLT_TkMu100);
   fChain->SetBranchAddress("HLT_DiPFJetAve40", &HLT_DiPFJetAve40, &b_HLT_DiPFJetAve40);
   fChain->SetBranchAddress("HLT_DiPFJetAve60", &HLT_DiPFJetAve60, &b_HLT_DiPFJetAve60);
   fChain->SetBranchAddress("HLT_DiPFJetAve80", &HLT_DiPFJetAve80, &b_HLT_DiPFJetAve80);
   fChain->SetBranchAddress("HLT_DiPFJetAve140", &HLT_DiPFJetAve140, &b_HLT_DiPFJetAve140);
   fChain->SetBranchAddress("HLT_DiPFJetAve200", &HLT_DiPFJetAve200, &b_HLT_DiPFJetAve200);
   fChain->SetBranchAddress("HLT_DiPFJetAve260", &HLT_DiPFJetAve260, &b_HLT_DiPFJetAve260);
   fChain->SetBranchAddress("HLT_DiPFJetAve320", &HLT_DiPFJetAve320, &b_HLT_DiPFJetAve320);
   fChain->SetBranchAddress("HLT_DiPFJetAve400", &HLT_DiPFJetAve400, &b_HLT_DiPFJetAve400);
   fChain->SetBranchAddress("HLT_DiPFJetAve500", &HLT_DiPFJetAve500, &b_HLT_DiPFJetAve500);
   fChain->SetBranchAddress("HLT_DiPFJetAve60_HFJEC", &HLT_DiPFJetAve60_HFJEC, &b_HLT_DiPFJetAve60_HFJEC);
   fChain->SetBranchAddress("HLT_DiPFJetAve80_HFJEC", &HLT_DiPFJetAve80_HFJEC, &b_HLT_DiPFJetAve80_HFJEC);
   fChain->SetBranchAddress("HLT_DiPFJetAve100_HFJEC", &HLT_DiPFJetAve100_HFJEC, &b_HLT_DiPFJetAve100_HFJEC);
   fChain->SetBranchAddress("HLT_DiPFJetAve160_HFJEC", &HLT_DiPFJetAve160_HFJEC, &b_HLT_DiPFJetAve160_HFJEC);
   fChain->SetBranchAddress("HLT_DiPFJetAve220_HFJEC", &HLT_DiPFJetAve220_HFJEC, &b_HLT_DiPFJetAve220_HFJEC);
   fChain->SetBranchAddress("HLT_DiPFJetAve300_HFJEC", &HLT_DiPFJetAve300_HFJEC, &b_HLT_DiPFJetAve300_HFJEC);
   fChain->SetBranchAddress("HLT_AK8PFJet15", &HLT_AK8PFJet15, &b_HLT_AK8PFJet15);
   fChain->SetBranchAddress("HLT_AK8PFJet25", &HLT_AK8PFJet25, &b_HLT_AK8PFJet25);
   fChain->SetBranchAddress("HLT_AK8PFJet40", &HLT_AK8PFJet40, &b_HLT_AK8PFJet40);
   fChain->SetBranchAddress("HLT_AK8PFJet60", &HLT_AK8PFJet60, &b_HLT_AK8PFJet60);
   fChain->SetBranchAddress("HLT_AK8PFJet80", &HLT_AK8PFJet80, &b_HLT_AK8PFJet80);
   fChain->SetBranchAddress("HLT_AK8PFJet140", &HLT_AK8PFJet140, &b_HLT_AK8PFJet140);
   fChain->SetBranchAddress("HLT_AK8PFJet200", &HLT_AK8PFJet200, &b_HLT_AK8PFJet200);
   fChain->SetBranchAddress("HLT_AK8PFJet260", &HLT_AK8PFJet260, &b_HLT_AK8PFJet260);
   fChain->SetBranchAddress("HLT_AK8PFJet320", &HLT_AK8PFJet320, &b_HLT_AK8PFJet320);
   fChain->SetBranchAddress("HLT_AK8PFJet400", &HLT_AK8PFJet400, &b_HLT_AK8PFJet400);
   fChain->SetBranchAddress("HLT_AK8PFJet450", &HLT_AK8PFJet450, &b_HLT_AK8PFJet450);
   fChain->SetBranchAddress("HLT_AK8PFJet500", &HLT_AK8PFJet500, &b_HLT_AK8PFJet500);
   fChain->SetBranchAddress("HLT_AK8PFJet550", &HLT_AK8PFJet550, &b_HLT_AK8PFJet550);
   fChain->SetBranchAddress("HLT_PFJet15", &HLT_PFJet15, &b_HLT_PFJet15);
   fChain->SetBranchAddress("HLT_PFJet25", &HLT_PFJet25, &b_HLT_PFJet25);
   fChain->SetBranchAddress("HLT_PFJet40", &HLT_PFJet40, &b_HLT_PFJet40);
   fChain->SetBranchAddress("HLT_PFJet60", &HLT_PFJet60, &b_HLT_PFJet60);
   fChain->SetBranchAddress("HLT_PFJet80", &HLT_PFJet80, &b_HLT_PFJet80);
   fChain->SetBranchAddress("HLT_PFJet140", &HLT_PFJet140, &b_HLT_PFJet140);
   fChain->SetBranchAddress("HLT_PFJet200", &HLT_PFJet200, &b_HLT_PFJet200);
   fChain->SetBranchAddress("HLT_PFJet260", &HLT_PFJet260, &b_HLT_PFJet260);
   fChain->SetBranchAddress("HLT_PFJet320", &HLT_PFJet320, &b_HLT_PFJet320);
   fChain->SetBranchAddress("HLT_PFJet400", &HLT_PFJet400, &b_HLT_PFJet400);
   fChain->SetBranchAddress("HLT_PFJet450", &HLT_PFJet450, &b_HLT_PFJet450);
   fChain->SetBranchAddress("HLT_PFJet500", &HLT_PFJet500, &b_HLT_PFJet500);
   fChain->SetBranchAddress("HLT_PFJet550", &HLT_PFJet550, &b_HLT_PFJet550);
   fChain->SetBranchAddress("HLT_PFJetFwd15", &HLT_PFJetFwd15, &b_HLT_PFJetFwd15);
   fChain->SetBranchAddress("HLT_PFJetFwd25", &HLT_PFJetFwd25, &b_HLT_PFJetFwd25);
   fChain->SetBranchAddress("HLT_PFJetFwd40", &HLT_PFJetFwd40, &b_HLT_PFJetFwd40);
   fChain->SetBranchAddress("HLT_PFJetFwd60", &HLT_PFJetFwd60, &b_HLT_PFJetFwd60);
   fChain->SetBranchAddress("HLT_PFJetFwd80", &HLT_PFJetFwd80, &b_HLT_PFJetFwd80);
   fChain->SetBranchAddress("HLT_PFJetFwd140", &HLT_PFJetFwd140, &b_HLT_PFJetFwd140);
   fChain->SetBranchAddress("HLT_PFJetFwd200", &HLT_PFJetFwd200, &b_HLT_PFJetFwd200);
   fChain->SetBranchAddress("HLT_PFJetFwd260", &HLT_PFJetFwd260, &b_HLT_PFJetFwd260);
   fChain->SetBranchAddress("HLT_PFJetFwd320", &HLT_PFJetFwd320, &b_HLT_PFJetFwd320);
   fChain->SetBranchAddress("HLT_PFJetFwd400", &HLT_PFJetFwd400, &b_HLT_PFJetFwd400);
   fChain->SetBranchAddress("HLT_PFJetFwd450", &HLT_PFJetFwd450, &b_HLT_PFJetFwd450);
   fChain->SetBranchAddress("HLT_PFJetFwd500", &HLT_PFJetFwd500, &b_HLT_PFJetFwd500);
   fChain->SetBranchAddress("HLT_AK8PFJetFwd15", &HLT_AK8PFJetFwd15, &b_HLT_AK8PFJetFwd15);
   fChain->SetBranchAddress("HLT_AK8PFJetFwd25", &HLT_AK8PFJetFwd25, &b_HLT_AK8PFJetFwd25);
   fChain->SetBranchAddress("HLT_AK8PFJetFwd40", &HLT_AK8PFJetFwd40, &b_HLT_AK8PFJetFwd40);
   fChain->SetBranchAddress("HLT_AK8PFJetFwd60", &HLT_AK8PFJetFwd60, &b_HLT_AK8PFJetFwd60);
   fChain->SetBranchAddress("HLT_AK8PFJetFwd80", &HLT_AK8PFJetFwd80, &b_HLT_AK8PFJetFwd80);
   fChain->SetBranchAddress("HLT_AK8PFJetFwd140", &HLT_AK8PFJetFwd140, &b_HLT_AK8PFJetFwd140);
   fChain->SetBranchAddress("HLT_AK8PFJetFwd200", &HLT_AK8PFJetFwd200, &b_HLT_AK8PFJetFwd200);
   fChain->SetBranchAddress("HLT_AK8PFJetFwd260", &HLT_AK8PFJetFwd260, &b_HLT_AK8PFJetFwd260);
   fChain->SetBranchAddress("HLT_AK8PFJetFwd320", &HLT_AK8PFJetFwd320, &b_HLT_AK8PFJetFwd320);
   fChain->SetBranchAddress("HLT_AK8PFJetFwd400", &HLT_AK8PFJetFwd400, &b_HLT_AK8PFJetFwd400);
   fChain->SetBranchAddress("HLT_AK8PFJetFwd450", &HLT_AK8PFJetFwd450, &b_HLT_AK8PFJetFwd450);
   fChain->SetBranchAddress("HLT_AK8PFJetFwd500", &HLT_AK8PFJetFwd500, &b_HLT_AK8PFJetFwd500);
   fChain->SetBranchAddress("HLT_PFHT180", &HLT_PFHT180, &b_HLT_PFHT180);
   fChain->SetBranchAddress("HLT_PFHT250", &HLT_PFHT250, &b_HLT_PFHT250);
   fChain->SetBranchAddress("HLT_PFHT370", &HLT_PFHT370, &b_HLT_PFHT370);
   fChain->SetBranchAddress("HLT_PFHT430", &HLT_PFHT430, &b_HLT_PFHT430);
   fChain->SetBranchAddress("HLT_PFHT510", &HLT_PFHT510, &b_HLT_PFHT510);
   fChain->SetBranchAddress("HLT_PFHT590", &HLT_PFHT590, &b_HLT_PFHT590);
   fChain->SetBranchAddress("HLT_PFHT680", &HLT_PFHT680, &b_HLT_PFHT680);
   fChain->SetBranchAddress("HLT_PFHT780", &HLT_PFHT780, &b_HLT_PFHT780);
   fChain->SetBranchAddress("HLT_PFHT890", &HLT_PFHT890, &b_HLT_PFHT890);
   fChain->SetBranchAddress("HLT_PFHT1050", &HLT_PFHT1050, &b_HLT_PFHT1050);
   fChain->SetBranchAddress("HLT_PFHT500_PFMET100_PFMHT100_IDTight", &HLT_PFHT500_PFMET100_PFMHT100_IDTight, &b_HLT_PFHT500_PFMET100_PFMHT100_IDTight);
   fChain->SetBranchAddress("HLT_PFHT500_PFMET110_PFMHT110_IDTight", &HLT_PFHT500_PFMET110_PFMHT110_IDTight, &b_HLT_PFHT500_PFMET110_PFMHT110_IDTight);
   fChain->SetBranchAddress("HLT_PFHT700_PFMET85_PFMHT85_IDTight", &HLT_PFHT700_PFMET85_PFMHT85_IDTight, &b_HLT_PFHT700_PFMET85_PFMHT85_IDTight);
   fChain->SetBranchAddress("HLT_PFHT700_PFMET95_PFMHT95_IDTight", &HLT_PFHT700_PFMET95_PFMHT95_IDTight, &b_HLT_PFHT700_PFMET95_PFMHT95_IDTight);
   fChain->SetBranchAddress("HLT_PFHT800_PFMET75_PFMHT75_IDTight", &HLT_PFHT800_PFMET75_PFMHT75_IDTight, &b_HLT_PFHT800_PFMET75_PFMHT75_IDTight);
   fChain->SetBranchAddress("HLT_PFHT800_PFMET85_PFMHT85_IDTight", &HLT_PFHT800_PFMET85_PFMHT85_IDTight, &b_HLT_PFHT800_PFMET85_PFMHT85_IDTight);
   fChain->SetBranchAddress("HLT_PFMET110_PFMHT110_IDTight", &HLT_PFMET110_PFMHT110_IDTight, &b_HLT_PFMET110_PFMHT110_IDTight);
   fChain->SetBranchAddress("HLT_PFMET120_PFMHT120_IDTight", &HLT_PFMET120_PFMHT120_IDTight, &b_HLT_PFMET120_PFMHT120_IDTight);
   fChain->SetBranchAddress("HLT_PFMET130_PFMHT130_IDTight", &HLT_PFMET130_PFMHT130_IDTight, &b_HLT_PFMET130_PFMHT130_IDTight);
   fChain->SetBranchAddress("HLT_PFMET140_PFMHT140_IDTight", &HLT_PFMET140_PFMHT140_IDTight, &b_HLT_PFMET140_PFMHT140_IDTight);
   fChain->SetBranchAddress("HLT_PFMET100_PFMHT100_IDTight_CaloBTagDeepCSV_3p1", &HLT_PFMET100_PFMHT100_IDTight_CaloBTagDeepCSV_3p1, &b_HLT_PFMET100_PFMHT100_IDTight_CaloBTagDeepCSV_3p1);
   fChain->SetBranchAddress("HLT_PFMET110_PFMHT110_IDTight_CaloBTagDeepCSV_3p1", &HLT_PFMET110_PFMHT110_IDTight_CaloBTagDeepCSV_3p1, &b_HLT_PFMET110_PFMHT110_IDTight_CaloBTagDeepCSV_3p1);
   fChain->SetBranchAddress("HLT_PFMET120_PFMHT120_IDTight_CaloBTagDeepCSV_3p1", &HLT_PFMET120_PFMHT120_IDTight_CaloBTagDeepCSV_3p1, &b_HLT_PFMET120_PFMHT120_IDTight_CaloBTagDeepCSV_3p1);
   fChain->SetBranchAddress("HLT_PFMET130_PFMHT130_IDTight_CaloBTagDeepCSV_3p1", &HLT_PFMET130_PFMHT130_IDTight_CaloBTagDeepCSV_3p1, &b_HLT_PFMET130_PFMHT130_IDTight_CaloBTagDeepCSV_3p1);
   fChain->SetBranchAddress("HLT_PFMET140_PFMHT140_IDTight_CaloBTagDeepCSV_3p1", &HLT_PFMET140_PFMHT140_IDTight_CaloBTagDeepCSV_3p1, &b_HLT_PFMET140_PFMHT140_IDTight_CaloBTagDeepCSV_3p1);
   fChain->SetBranchAddress("HLT_PFMET120_PFMHT120_IDTight_PFHT60", &HLT_PFMET120_PFMHT120_IDTight_PFHT60, &b_HLT_PFMET120_PFMHT120_IDTight_PFHT60);
   fChain->SetBranchAddress("HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60", &HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60, &b_HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60);
   fChain->SetBranchAddress("HLT_PFMETTypeOne120_PFMHT120_IDTight_PFHT60", &HLT_PFMETTypeOne120_PFMHT120_IDTight_PFHT60, &b_HLT_PFMETTypeOne120_PFMHT120_IDTight_PFHT60);
   fChain->SetBranchAddress("HLT_PFMETTypeOne110_PFMHT110_IDTight", &HLT_PFMETTypeOne110_PFMHT110_IDTight, &b_HLT_PFMETTypeOne110_PFMHT110_IDTight);
   fChain->SetBranchAddress("HLT_PFMETTypeOne120_PFMHT120_IDTight", &HLT_PFMETTypeOne120_PFMHT120_IDTight, &b_HLT_PFMETTypeOne120_PFMHT120_IDTight);
   fChain->SetBranchAddress("HLT_PFMETTypeOne130_PFMHT130_IDTight", &HLT_PFMETTypeOne130_PFMHT130_IDTight, &b_HLT_PFMETTypeOne130_PFMHT130_IDTight);
   fChain->SetBranchAddress("HLT_PFMETTypeOne140_PFMHT140_IDTight", &HLT_PFMETTypeOne140_PFMHT140_IDTight, &b_HLT_PFMETTypeOne140_PFMHT140_IDTight);
   fChain->SetBranchAddress("HLT_PFMETNoMu110_PFMHTNoMu110_IDTight", &HLT_PFMETNoMu110_PFMHTNoMu110_IDTight, &b_HLT_PFMETNoMu110_PFMHTNoMu110_IDTight);
   fChain->SetBranchAddress("HLT_PFMETNoMu120_PFMHTNoMu120_IDTight", &HLT_PFMETNoMu120_PFMHTNoMu120_IDTight, &b_HLT_PFMETNoMu120_PFMHTNoMu120_IDTight);
   fChain->SetBranchAddress("HLT_PFMETNoMu130_PFMHTNoMu130_IDTight", &HLT_PFMETNoMu130_PFMHTNoMu130_IDTight, &b_HLT_PFMETNoMu130_PFMHTNoMu130_IDTight);
   fChain->SetBranchAddress("HLT_PFMETNoMu140_PFMHTNoMu140_IDTight", &HLT_PFMETNoMu140_PFMHTNoMu140_IDTight, &b_HLT_PFMETNoMu140_PFMHTNoMu140_IDTight);
   fChain->SetBranchAddress("HLT_MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight", &HLT_MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight, &b_HLT_MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight);
   fChain->SetBranchAddress("HLT_MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight", &HLT_MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight, &b_HLT_MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight);
   fChain->SetBranchAddress("HLT_MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight", &HLT_MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight, &b_HLT_MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight);
   fChain->SetBranchAddress("HLT_MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight", &HLT_MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight, &b_HLT_MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight);
   fChain->SetBranchAddress("HLT_L1ETMHadSeeds", &HLT_L1ETMHadSeeds, &b_HLT_L1ETMHadSeeds);
   fChain->SetBranchAddress("HLT_CaloMHT90", &HLT_CaloMHT90, &b_HLT_CaloMHT90);
   fChain->SetBranchAddress("HLT_CaloMET80_NotCleaned", &HLT_CaloMET80_NotCleaned, &b_HLT_CaloMET80_NotCleaned);
   fChain->SetBranchAddress("HLT_CaloMET90_NotCleaned", &HLT_CaloMET90_NotCleaned, &b_HLT_CaloMET90_NotCleaned);
   fChain->SetBranchAddress("HLT_CaloMET100_NotCleaned", &HLT_CaloMET100_NotCleaned, &b_HLT_CaloMET100_NotCleaned);
   fChain->SetBranchAddress("HLT_CaloMET110_NotCleaned", &HLT_CaloMET110_NotCleaned, &b_HLT_CaloMET110_NotCleaned);
   fChain->SetBranchAddress("HLT_CaloMET250_NotCleaned", &HLT_CaloMET250_NotCleaned, &b_HLT_CaloMET250_NotCleaned);
   fChain->SetBranchAddress("HLT_CaloMET70_HBHECleaned", &HLT_CaloMET70_HBHECleaned, &b_HLT_CaloMET70_HBHECleaned);
   fChain->SetBranchAddress("HLT_CaloMET80_HBHECleaned", &HLT_CaloMET80_HBHECleaned, &b_HLT_CaloMET80_HBHECleaned);
   fChain->SetBranchAddress("HLT_CaloMET90_HBHECleaned", &HLT_CaloMET90_HBHECleaned, &b_HLT_CaloMET90_HBHECleaned);
   fChain->SetBranchAddress("HLT_CaloMET100_HBHECleaned", &HLT_CaloMET100_HBHECleaned, &b_HLT_CaloMET100_HBHECleaned);
   fChain->SetBranchAddress("HLT_CaloMET250_HBHECleaned", &HLT_CaloMET250_HBHECleaned, &b_HLT_CaloMET250_HBHECleaned);
   fChain->SetBranchAddress("HLT_CaloMET300_HBHECleaned", &HLT_CaloMET300_HBHECleaned, &b_HLT_CaloMET300_HBHECleaned);
   fChain->SetBranchAddress("HLT_CaloMET350_HBHECleaned", &HLT_CaloMET350_HBHECleaned, &b_HLT_CaloMET350_HBHECleaned);
   fChain->SetBranchAddress("HLT_PFMET200_NotCleaned", &HLT_PFMET200_NotCleaned, &b_HLT_PFMET200_NotCleaned);
   fChain->SetBranchAddress("HLT_PFMET200_HBHECleaned", &HLT_PFMET200_HBHECleaned, &b_HLT_PFMET200_HBHECleaned);
   fChain->SetBranchAddress("HLT_PFMET250_HBHECleaned", &HLT_PFMET250_HBHECleaned, &b_HLT_PFMET250_HBHECleaned);
   fChain->SetBranchAddress("HLT_PFMET300_HBHECleaned", &HLT_PFMET300_HBHECleaned, &b_HLT_PFMET300_HBHECleaned);
   fChain->SetBranchAddress("HLT_PFMET200_HBHE_BeamHaloCleaned", &HLT_PFMET200_HBHE_BeamHaloCleaned, &b_HLT_PFMET200_HBHE_BeamHaloCleaned);
   fChain->SetBranchAddress("HLT_PFMETTypeOne200_HBHE_BeamHaloCleaned", &HLT_PFMETTypeOne200_HBHE_BeamHaloCleaned, &b_HLT_PFMETTypeOne200_HBHE_BeamHaloCleaned);
   fChain->SetBranchAddress("HLT_MET105_IsoTrk50", &HLT_MET105_IsoTrk50, &b_HLT_MET105_IsoTrk50);
   fChain->SetBranchAddress("HLT_MET120_IsoTrk50", &HLT_MET120_IsoTrk50, &b_HLT_MET120_IsoTrk50);
   fChain->SetBranchAddress("HLT_SingleJet30_Mu12_SinglePFJet40", &HLT_SingleJet30_Mu12_SinglePFJet40, &b_HLT_SingleJet30_Mu12_SinglePFJet40);
   fChain->SetBranchAddress("HLT_Mu12_DoublePFJets40_CaloBTagDeepCSV_p71", &HLT_Mu12_DoublePFJets40_CaloBTagDeepCSV_p71, &b_HLT_Mu12_DoublePFJets40_CaloBTagDeepCSV_p71);
   fChain->SetBranchAddress("HLT_Mu12_DoublePFJets100_CaloBTagDeepCSV_p71", &HLT_Mu12_DoublePFJets100_CaloBTagDeepCSV_p71, &b_HLT_Mu12_DoublePFJets100_CaloBTagDeepCSV_p71);
   fChain->SetBranchAddress("HLT_Mu12_DoublePFJets200_CaloBTagDeepCSV_p71", &HLT_Mu12_DoublePFJets200_CaloBTagDeepCSV_p71, &b_HLT_Mu12_DoublePFJets200_CaloBTagDeepCSV_p71);
   fChain->SetBranchAddress("HLT_Mu12_DoublePFJets350_CaloBTagDeepCSV_p71", &HLT_Mu12_DoublePFJets350_CaloBTagDeepCSV_p71, &b_HLT_Mu12_DoublePFJets350_CaloBTagDeepCSV_p71);
   fChain->SetBranchAddress("HLT_Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagDeepCSV_p71", &HLT_Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagDeepCSV_p71, &b_HLT_Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagDeepCSV_p71);
   fChain->SetBranchAddress("HLT_Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagDeepCSV_p71", &HLT_Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagDeepCSV_p71, &b_HLT_Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagDeepCSV_p71);
   fChain->SetBranchAddress("HLT_Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagDeepCSV_p71", &HLT_Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagDeepCSV_p71, &b_HLT_Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagDeepCSV_p71);
   fChain->SetBranchAddress("HLT_DoublePFJets40_CaloBTagDeepCSV_p71", &HLT_DoublePFJets40_CaloBTagDeepCSV_p71, &b_HLT_DoublePFJets40_CaloBTagDeepCSV_p71);
   fChain->SetBranchAddress("HLT_DoublePFJets100_CaloBTagDeepCSV_p71", &HLT_DoublePFJets100_CaloBTagDeepCSV_p71, &b_HLT_DoublePFJets100_CaloBTagDeepCSV_p71);
   fChain->SetBranchAddress("HLT_DoublePFJets200_CaloBTagDeepCSV_p71", &HLT_DoublePFJets200_CaloBTagDeepCSV_p71, &b_HLT_DoublePFJets200_CaloBTagDeepCSV_p71);
   fChain->SetBranchAddress("HLT_DoublePFJets350_CaloBTagDeepCSV_p71", &HLT_DoublePFJets350_CaloBTagDeepCSV_p71, &b_HLT_DoublePFJets350_CaloBTagDeepCSV_p71);
   fChain->SetBranchAddress("HLT_DoublePFJets116MaxDeta1p6_DoubleCaloBTagDeepCSV_p71", &HLT_DoublePFJets116MaxDeta1p6_DoubleCaloBTagDeepCSV_p71, &b_HLT_DoublePFJets116MaxDeta1p6_DoubleCaloBTagDeepCSV_p71);
   fChain->SetBranchAddress("HLT_DoublePFJets128MaxDeta1p6_DoubleCaloBTagDeepCSV_p71", &HLT_DoublePFJets128MaxDeta1p6_DoubleCaloBTagDeepCSV_p71, &b_HLT_DoublePFJets128MaxDeta1p6_DoubleCaloBTagDeepCSV_p71);
   fChain->SetBranchAddress("HLT_Photon300_NoHE", &HLT_Photon300_NoHE, &b_HLT_Photon300_NoHE);
   fChain->SetBranchAddress("HLT_Mu8_TrkIsoVVL", &HLT_Mu8_TrkIsoVVL, &b_HLT_Mu8_TrkIsoVVL);
   fChain->SetBranchAddress("HLT_Mu8_DiEle12_CaloIdL_TrackIdL_DZ", &HLT_Mu8_DiEle12_CaloIdL_TrackIdL_DZ, &b_HLT_Mu8_DiEle12_CaloIdL_TrackIdL_DZ);
   fChain->SetBranchAddress("HLT_Mu8_DiEle12_CaloIdL_TrackIdL", &HLT_Mu8_DiEle12_CaloIdL_TrackIdL, &b_HLT_Mu8_DiEle12_CaloIdL_TrackIdL);
   fChain->SetBranchAddress("HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ", &HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ, &b_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ);
   fChain->SetBranchAddress("HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350", &HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350, &b_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350);
   fChain->SetBranchAddress("HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ", &HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ, &b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ);
   fChain->SetBranchAddress("HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30", &HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30, &b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30);
   fChain->SetBranchAddress("HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30", &HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30, &b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30);
   fChain->SetBranchAddress("HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30_PFBtagDeepCSV_1p5", &HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30_PFBtagDeepCSV_1p5, &b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30_PFBtagDeepCSV_1p5);
   fChain->SetBranchAddress("HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30_CaloBtagDeepCSV_1p5", &HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30_CaloBtagDeepCSV_1p5, &b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30_CaloBtagDeepCSV_1p5);
   fChain->SetBranchAddress("HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL", &HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL, &b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL);
   fChain->SetBranchAddress("HLT_Mu17_TrkIsoVVL", &HLT_Mu17_TrkIsoVVL, &b_HLT_Mu17_TrkIsoVVL);
   fChain->SetBranchAddress("HLT_Mu19_TrkIsoVVL", &HLT_Mu19_TrkIsoVVL, &b_HLT_Mu19_TrkIsoVVL);
   fChain->SetBranchAddress("HLT_BTagMu_AK4DiJet20_Mu5", &HLT_BTagMu_AK4DiJet20_Mu5, &b_HLT_BTagMu_AK4DiJet20_Mu5);
   fChain->SetBranchAddress("HLT_BTagMu_AK4DiJet40_Mu5", &HLT_BTagMu_AK4DiJet40_Mu5, &b_HLT_BTagMu_AK4DiJet40_Mu5);
   fChain->SetBranchAddress("HLT_BTagMu_AK4DiJet70_Mu5", &HLT_BTagMu_AK4DiJet70_Mu5, &b_HLT_BTagMu_AK4DiJet70_Mu5);
   fChain->SetBranchAddress("HLT_BTagMu_AK4DiJet110_Mu5", &HLT_BTagMu_AK4DiJet110_Mu5, &b_HLT_BTagMu_AK4DiJet110_Mu5);
   fChain->SetBranchAddress("HLT_BTagMu_AK4DiJet170_Mu5", &HLT_BTagMu_AK4DiJet170_Mu5, &b_HLT_BTagMu_AK4DiJet170_Mu5);
   fChain->SetBranchAddress("HLT_BTagMu_AK4Jet300_Mu5", &HLT_BTagMu_AK4Jet300_Mu5, &b_HLT_BTagMu_AK4Jet300_Mu5);
   fChain->SetBranchAddress("HLT_BTagMu_AK8DiJet170_Mu5", &HLT_BTagMu_AK8DiJet170_Mu5, &b_HLT_BTagMu_AK8DiJet170_Mu5);
   fChain->SetBranchAddress("HLT_BTagMu_AK8Jet170_DoubleMu5", &HLT_BTagMu_AK8Jet170_DoubleMu5, &b_HLT_BTagMu_AK8Jet170_DoubleMu5);
   fChain->SetBranchAddress("HLT_BTagMu_AK8Jet300_Mu5", &HLT_BTagMu_AK8Jet300_Mu5, &b_HLT_BTagMu_AK8Jet300_Mu5);
   fChain->SetBranchAddress("HLT_BTagMu_AK4DiJet20_Mu5_noalgo", &HLT_BTagMu_AK4DiJet20_Mu5_noalgo, &b_HLT_BTagMu_AK4DiJet20_Mu5_noalgo);
   fChain->SetBranchAddress("HLT_BTagMu_AK4DiJet40_Mu5_noalgo", &HLT_BTagMu_AK4DiJet40_Mu5_noalgo, &b_HLT_BTagMu_AK4DiJet40_Mu5_noalgo);
   fChain->SetBranchAddress("HLT_BTagMu_AK4DiJet70_Mu5_noalgo", &HLT_BTagMu_AK4DiJet70_Mu5_noalgo, &b_HLT_BTagMu_AK4DiJet70_Mu5_noalgo);
   fChain->SetBranchAddress("HLT_BTagMu_AK4DiJet110_Mu5_noalgo", &HLT_BTagMu_AK4DiJet110_Mu5_noalgo, &b_HLT_BTagMu_AK4DiJet110_Mu5_noalgo);
   fChain->SetBranchAddress("HLT_BTagMu_AK4DiJet170_Mu5_noalgo", &HLT_BTagMu_AK4DiJet170_Mu5_noalgo, &b_HLT_BTagMu_AK4DiJet170_Mu5_noalgo);
   fChain->SetBranchAddress("HLT_BTagMu_AK4Jet300_Mu5_noalgo", &HLT_BTagMu_AK4Jet300_Mu5_noalgo, &b_HLT_BTagMu_AK4Jet300_Mu5_noalgo);
   fChain->SetBranchAddress("HLT_BTagMu_AK8DiJet170_Mu5_noalgo", &HLT_BTagMu_AK8DiJet170_Mu5_noalgo, &b_HLT_BTagMu_AK8DiJet170_Mu5_noalgo);
   fChain->SetBranchAddress("HLT_BTagMu_AK8Jet170_DoubleMu5_noalgo", &HLT_BTagMu_AK8Jet170_DoubleMu5_noalgo, &b_HLT_BTagMu_AK8Jet170_DoubleMu5_noalgo);
   fChain->SetBranchAddress("HLT_BTagMu_AK8Jet300_Mu5_noalgo", &HLT_BTagMu_AK8Jet300_Mu5_noalgo, &b_HLT_BTagMu_AK8Jet300_Mu5_noalgo);
   fChain->SetBranchAddress("HLT_Ele15_Ele8_CaloIdL_TrackIdL_IsoVL", &HLT_Ele15_Ele8_CaloIdL_TrackIdL_IsoVL, &b_HLT_Ele15_Ele8_CaloIdL_TrackIdL_IsoVL);
   fChain->SetBranchAddress("HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ", &HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ, &b_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ);
   fChain->SetBranchAddress("HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL", &HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL, &b_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL);
   fChain->SetBranchAddress("HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ", &HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ, &b_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ);
   fChain->SetBranchAddress("HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL", &HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL, &b_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL);
   fChain->SetBranchAddress("HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL", &HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL, &b_HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL);
   fChain->SetBranchAddress("HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ", &HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ, &b_HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ);
   fChain->SetBranchAddress("HLT_Mu12_DoublePhoton20", &HLT_Mu12_DoublePhoton20, &b_HLT_Mu12_DoublePhoton20);
   fChain->SetBranchAddress("HLT_TriplePhoton_20_20_20_CaloIdLV2", &HLT_TriplePhoton_20_20_20_CaloIdLV2, &b_HLT_TriplePhoton_20_20_20_CaloIdLV2);
   fChain->SetBranchAddress("HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL", &HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL, &b_HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL);
   fChain->SetBranchAddress("HLT_TriplePhoton_30_30_10_CaloIdLV2", &HLT_TriplePhoton_30_30_10_CaloIdLV2, &b_HLT_TriplePhoton_30_30_10_CaloIdLV2);
   fChain->SetBranchAddress("HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL", &HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL, &b_HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL);
   fChain->SetBranchAddress("HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL", &HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL, &b_HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL);
   fChain->SetBranchAddress("HLT_Photon20", &HLT_Photon20, &b_HLT_Photon20);
   fChain->SetBranchAddress("HLT_Photon33", &HLT_Photon33, &b_HLT_Photon33);
   fChain->SetBranchAddress("HLT_Photon50", &HLT_Photon50, &b_HLT_Photon50);
   fChain->SetBranchAddress("HLT_Photon75", &HLT_Photon75, &b_HLT_Photon75);
   fChain->SetBranchAddress("HLT_Photon90", &HLT_Photon90, &b_HLT_Photon90);
   fChain->SetBranchAddress("HLT_Photon120", &HLT_Photon120, &b_HLT_Photon120);
   fChain->SetBranchAddress("HLT_Photon150", &HLT_Photon150, &b_HLT_Photon150);
   fChain->SetBranchAddress("HLT_Photon175", &HLT_Photon175, &b_HLT_Photon175);
   fChain->SetBranchAddress("HLT_Photon200", &HLT_Photon200, &b_HLT_Photon200);
   fChain->SetBranchAddress("HLT_Photon100EB_TightID_TightIso", &HLT_Photon100EB_TightID_TightIso, &b_HLT_Photon100EB_TightID_TightIso);
   fChain->SetBranchAddress("HLT_Photon110EB_TightID_TightIso", &HLT_Photon110EB_TightID_TightIso, &b_HLT_Photon110EB_TightID_TightIso);
   fChain->SetBranchAddress("HLT_Photon120EB_TightID_TightIso", &HLT_Photon120EB_TightID_TightIso, &b_HLT_Photon120EB_TightID_TightIso);
   fChain->SetBranchAddress("HLT_Photon100EBHE10", &HLT_Photon100EBHE10, &b_HLT_Photon100EBHE10);
   fChain->SetBranchAddress("HLT_Photon100EEHE10", &HLT_Photon100EEHE10, &b_HLT_Photon100EEHE10);
   fChain->SetBranchAddress("HLT_Photon100EE_TightID_TightIso", &HLT_Photon100EE_TightID_TightIso, &b_HLT_Photon100EE_TightID_TightIso);
   fChain->SetBranchAddress("HLT_Photon50_R9Id90_HE10_IsoM", &HLT_Photon50_R9Id90_HE10_IsoM, &b_HLT_Photon50_R9Id90_HE10_IsoM);
   fChain->SetBranchAddress("HLT_Photon75_R9Id90_HE10_IsoM", &HLT_Photon75_R9Id90_HE10_IsoM, &b_HLT_Photon75_R9Id90_HE10_IsoM);
   fChain->SetBranchAddress("HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3", &HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3, &b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3);
   fChain->SetBranchAddress("HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3", &HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3, &b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3);
   fChain->SetBranchAddress("HLT_Photon90_R9Id90_HE10_IsoM", &HLT_Photon90_R9Id90_HE10_IsoM, &b_HLT_Photon90_R9Id90_HE10_IsoM);
   fChain->SetBranchAddress("HLT_Photon120_R9Id90_HE10_IsoM", &HLT_Photon120_R9Id90_HE10_IsoM, &b_HLT_Photon120_R9Id90_HE10_IsoM);
   fChain->SetBranchAddress("HLT_Photon165_R9Id90_HE10_IsoM", &HLT_Photon165_R9Id90_HE10_IsoM, &b_HLT_Photon165_R9Id90_HE10_IsoM);
   fChain->SetBranchAddress("HLT_Photon90_CaloIdL_PFHT700", &HLT_Photon90_CaloIdL_PFHT700, &b_HLT_Photon90_CaloIdL_PFHT700);
   fChain->SetBranchAddress("HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90", &HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90, &b_HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90);
   fChain->SetBranchAddress("HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95", &HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95, &b_HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95);
   fChain->SetBranchAddress("HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55", &HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55, &b_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55);
   fChain->SetBranchAddress("HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55", &HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55, &b_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55);
   fChain->SetBranchAddress("HLT_Photon35_TwoProngs35", &HLT_Photon35_TwoProngs35, &b_HLT_Photon35_TwoProngs35);
   fChain->SetBranchAddress("HLT_IsoMu24_TwoProngs35", &HLT_IsoMu24_TwoProngs35, &b_HLT_IsoMu24_TwoProngs35);
   fChain->SetBranchAddress("HLT_Dimuon0_Jpsi_L1_NoOS", &HLT_Dimuon0_Jpsi_L1_NoOS, &b_HLT_Dimuon0_Jpsi_L1_NoOS);
   fChain->SetBranchAddress("HLT_Dimuon0_Jpsi_NoVertexing_NoOS", &HLT_Dimuon0_Jpsi_NoVertexing_NoOS, &b_HLT_Dimuon0_Jpsi_NoVertexing_NoOS);
   fChain->SetBranchAddress("HLT_Dimuon0_Jpsi", &HLT_Dimuon0_Jpsi, &b_HLT_Dimuon0_Jpsi);
   fChain->SetBranchAddress("HLT_Dimuon0_Jpsi_NoVertexing", &HLT_Dimuon0_Jpsi_NoVertexing, &b_HLT_Dimuon0_Jpsi_NoVertexing);
   fChain->SetBranchAddress("HLT_Dimuon0_Jpsi_L1_4R_0er1p5R", &HLT_Dimuon0_Jpsi_L1_4R_0er1p5R, &b_HLT_Dimuon0_Jpsi_L1_4R_0er1p5R);
   fChain->SetBranchAddress("HLT_Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R", &HLT_Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R, &b_HLT_Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R);
   fChain->SetBranchAddress("HLT_Dimuon0_Jpsi3p5_Muon2", &HLT_Dimuon0_Jpsi3p5_Muon2, &b_HLT_Dimuon0_Jpsi3p5_Muon2);
   fChain->SetBranchAddress("HLT_Dimuon0_Upsilon_L1_4p5", &HLT_Dimuon0_Upsilon_L1_4p5, &b_HLT_Dimuon0_Upsilon_L1_4p5);
   fChain->SetBranchAddress("HLT_Dimuon0_Upsilon_L1_5", &HLT_Dimuon0_Upsilon_L1_5, &b_HLT_Dimuon0_Upsilon_L1_5);
   fChain->SetBranchAddress("HLT_Dimuon0_Upsilon_L1_4p5NoOS", &HLT_Dimuon0_Upsilon_L1_4p5NoOS, &b_HLT_Dimuon0_Upsilon_L1_4p5NoOS);
   fChain->SetBranchAddress("HLT_Dimuon0_Upsilon_L1_4p5er2p0", &HLT_Dimuon0_Upsilon_L1_4p5er2p0, &b_HLT_Dimuon0_Upsilon_L1_4p5er2p0);
   fChain->SetBranchAddress("HLT_Dimuon0_Upsilon_L1_4p5er2p0M", &HLT_Dimuon0_Upsilon_L1_4p5er2p0M, &b_HLT_Dimuon0_Upsilon_L1_4p5er2p0M);
   fChain->SetBranchAddress("HLT_Dimuon0_Upsilon_NoVertexing", &HLT_Dimuon0_Upsilon_NoVertexing, &b_HLT_Dimuon0_Upsilon_NoVertexing);
   fChain->SetBranchAddress("HLT_Dimuon0_Upsilon_L1_5M", &HLT_Dimuon0_Upsilon_L1_5M, &b_HLT_Dimuon0_Upsilon_L1_5M);
   fChain->SetBranchAddress("HLT_Dimuon0_LowMass_L1_0er1p5R", &HLT_Dimuon0_LowMass_L1_0er1p5R, &b_HLT_Dimuon0_LowMass_L1_0er1p5R);
   fChain->SetBranchAddress("HLT_Dimuon0_LowMass_L1_0er1p5", &HLT_Dimuon0_LowMass_L1_0er1p5, &b_HLT_Dimuon0_LowMass_L1_0er1p5);
   fChain->SetBranchAddress("HLT_Dimuon0_LowMass", &HLT_Dimuon0_LowMass, &b_HLT_Dimuon0_LowMass);
   fChain->SetBranchAddress("HLT_Dimuon0_LowMass_L1_4", &HLT_Dimuon0_LowMass_L1_4, &b_HLT_Dimuon0_LowMass_L1_4);
   fChain->SetBranchAddress("HLT_Dimuon0_LowMass_L1_4R", &HLT_Dimuon0_LowMass_L1_4R, &b_HLT_Dimuon0_LowMass_L1_4R);
   fChain->SetBranchAddress("HLT_Dimuon0_LowMass_L1_TM530", &HLT_Dimuon0_LowMass_L1_TM530, &b_HLT_Dimuon0_LowMass_L1_TM530);
   fChain->SetBranchAddress("HLT_Dimuon0_Upsilon_Muon_L1_TM0", &HLT_Dimuon0_Upsilon_Muon_L1_TM0, &b_HLT_Dimuon0_Upsilon_Muon_L1_TM0);
   fChain->SetBranchAddress("HLT_Dimuon0_Upsilon_Muon_NoL1Mass", &HLT_Dimuon0_Upsilon_Muon_NoL1Mass, &b_HLT_Dimuon0_Upsilon_Muon_NoL1Mass);
   fChain->SetBranchAddress("HLT_TripleMu_5_3_3_Mass3p8_DZ", &HLT_TripleMu_5_3_3_Mass3p8_DZ, &b_HLT_TripleMu_5_3_3_Mass3p8_DZ);
   fChain->SetBranchAddress("HLT_TripleMu_10_5_5_DZ", &HLT_TripleMu_10_5_5_DZ, &b_HLT_TripleMu_10_5_5_DZ);
   fChain->SetBranchAddress("HLT_TripleMu_12_10_5", &HLT_TripleMu_12_10_5, &b_HLT_TripleMu_12_10_5);
   fChain->SetBranchAddress("HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15", &HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15, &b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15);
   fChain->SetBranchAddress("HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1", &HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1, &b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1);
   fChain->SetBranchAddress("HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15", &HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15, &b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15);
   fChain->SetBranchAddress("HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1", &HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1, &b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1);
   fChain->SetBranchAddress("HLT_DoubleMu3_DZ_PFMET50_PFMHT60", &HLT_DoubleMu3_DZ_PFMET50_PFMHT60, &b_HLT_DoubleMu3_DZ_PFMET50_PFMHT60);
   fChain->SetBranchAddress("HLT_DoubleMu3_DZ_PFMET70_PFMHT70", &HLT_DoubleMu3_DZ_PFMET70_PFMHT70, &b_HLT_DoubleMu3_DZ_PFMET70_PFMHT70);
   fChain->SetBranchAddress("HLT_DoubleMu3_DZ_PFMET90_PFMHT90", &HLT_DoubleMu3_DZ_PFMET90_PFMHT90, &b_HLT_DoubleMu3_DZ_PFMET90_PFMHT90);
   fChain->SetBranchAddress("HLT_DoubleMu3_Trk_Tau3mu_NoL1Mass", &HLT_DoubleMu3_Trk_Tau3mu_NoL1Mass, &b_HLT_DoubleMu3_Trk_Tau3mu_NoL1Mass);
   fChain->SetBranchAddress("HLT_DoubleMu4_Jpsi_Displaced", &HLT_DoubleMu4_Jpsi_Displaced, &b_HLT_DoubleMu4_Jpsi_Displaced);
   fChain->SetBranchAddress("HLT_DoubleMu4_Jpsi_NoVertexing", &HLT_DoubleMu4_Jpsi_NoVertexing, &b_HLT_DoubleMu4_Jpsi_NoVertexing);
   fChain->SetBranchAddress("HLT_DoubleMu4_JpsiTrkTrk_Displaced", &HLT_DoubleMu4_JpsiTrkTrk_Displaced, &b_HLT_DoubleMu4_JpsiTrkTrk_Displaced);
   fChain->SetBranchAddress("HLT_DoubleMu43NoFiltersNoVtx", &HLT_DoubleMu43NoFiltersNoVtx, &b_HLT_DoubleMu43NoFiltersNoVtx);
   fChain->SetBranchAddress("HLT_DoubleMu48NoFiltersNoVtx", &HLT_DoubleMu48NoFiltersNoVtx, &b_HLT_DoubleMu48NoFiltersNoVtx);
   fChain->SetBranchAddress("HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL", &HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL, &b_HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL);
   fChain->SetBranchAddress("HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL", &HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL, &b_HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL);
   fChain->SetBranchAddress("HLT_Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL", &HLT_Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL, &b_HLT_Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL);
   fChain->SetBranchAddress("HLT_Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL", &HLT_Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL, &b_HLT_Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL);
   fChain->SetBranchAddress("HLT_DoubleMu33NoFiltersNoVtxDisplaced", &HLT_DoubleMu33NoFiltersNoVtxDisplaced, &b_HLT_DoubleMu33NoFiltersNoVtxDisplaced);
   fChain->SetBranchAddress("HLT_DoubleMu40NoFiltersNoVtxDisplaced", &HLT_DoubleMu40NoFiltersNoVtxDisplaced, &b_HLT_DoubleMu40NoFiltersNoVtxDisplaced);
   fChain->SetBranchAddress("HLT_DoubleMu20_7_Mass0to30_L1_DM4", &HLT_DoubleMu20_7_Mass0to30_L1_DM4, &b_HLT_DoubleMu20_7_Mass0to30_L1_DM4);
   fChain->SetBranchAddress("HLT_DoubleMu20_7_Mass0to30_L1_DM4EG", &HLT_DoubleMu20_7_Mass0to30_L1_DM4EG, &b_HLT_DoubleMu20_7_Mass0to30_L1_DM4EG);
   fChain->SetBranchAddress("HLT_HT425", &HLT_HT425, &b_HLT_HT425);
   fChain->SetBranchAddress("HLT_HT430_DisplacedDijet40_DisplacedTrack", &HLT_HT430_DisplacedDijet40_DisplacedTrack, &b_HLT_HT430_DisplacedDijet40_DisplacedTrack);
   fChain->SetBranchAddress("HLT_HT500_DisplacedDijet40_DisplacedTrack", &HLT_HT500_DisplacedDijet40_DisplacedTrack, &b_HLT_HT500_DisplacedDijet40_DisplacedTrack);
   fChain->SetBranchAddress("HLT_HT430_DisplacedDijet60_DisplacedTrack", &HLT_HT430_DisplacedDijet60_DisplacedTrack, &b_HLT_HT430_DisplacedDijet60_DisplacedTrack);
   fChain->SetBranchAddress("HLT_HT400_DisplacedDijet40_DisplacedTrack", &HLT_HT400_DisplacedDijet40_DisplacedTrack, &b_HLT_HT400_DisplacedDijet40_DisplacedTrack);
   fChain->SetBranchAddress("HLT_HT650_DisplacedDijet60_Inclusive", &HLT_HT650_DisplacedDijet60_Inclusive, &b_HLT_HT650_DisplacedDijet60_Inclusive);
   fChain->SetBranchAddress("HLT_HT550_DisplacedDijet60_Inclusive", &HLT_HT550_DisplacedDijet60_Inclusive, &b_HLT_HT550_DisplacedDijet60_Inclusive);
   fChain->SetBranchAddress("HLT_DiJet110_35_Mjj650_PFMET110", &HLT_DiJet110_35_Mjj650_PFMET110, &b_HLT_DiJet110_35_Mjj650_PFMET110);
   fChain->SetBranchAddress("HLT_DiJet110_35_Mjj650_PFMET120", &HLT_DiJet110_35_Mjj650_PFMET120, &b_HLT_DiJet110_35_Mjj650_PFMET120);
   fChain->SetBranchAddress("HLT_DiJet110_35_Mjj650_PFMET130", &HLT_DiJet110_35_Mjj650_PFMET130, &b_HLT_DiJet110_35_Mjj650_PFMET130);
   fChain->SetBranchAddress("HLT_TripleJet110_35_35_Mjj650_PFMET110", &HLT_TripleJet110_35_35_Mjj650_PFMET110, &b_HLT_TripleJet110_35_35_Mjj650_PFMET110);
   fChain->SetBranchAddress("HLT_TripleJet110_35_35_Mjj650_PFMET120", &HLT_TripleJet110_35_35_Mjj650_PFMET120, &b_HLT_TripleJet110_35_35_Mjj650_PFMET120);
   fChain->SetBranchAddress("HLT_TripleJet110_35_35_Mjj650_PFMET130", &HLT_TripleJet110_35_35_Mjj650_PFMET130, &b_HLT_TripleJet110_35_35_Mjj650_PFMET130);
   fChain->SetBranchAddress("HLT_Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned", &HLT_Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned, &b_HLT_Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned);
   fChain->SetBranchAddress("HLT_Ele28_eta2p1_WPTight_Gsf_HT150", &HLT_Ele28_eta2p1_WPTight_Gsf_HT150, &b_HLT_Ele28_eta2p1_WPTight_Gsf_HT150);
   fChain->SetBranchAddress("HLT_Ele28_HighEta_SC20_Mass55", &HLT_Ele28_HighEta_SC20_Mass55, &b_HLT_Ele28_HighEta_SC20_Mass55);
   fChain->SetBranchAddress("HLT_DoubleMu20_7_Mass0to30_Photon23", &HLT_DoubleMu20_7_Mass0to30_Photon23, &b_HLT_DoubleMu20_7_Mass0to30_Photon23);
   fChain->SetBranchAddress("HLT_Ele15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5", &HLT_Ele15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5, &b_HLT_Ele15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5);
   fChain->SetBranchAddress("HLT_Ele15_IsoVVVL_PFHT450_PFMET50", &HLT_Ele15_IsoVVVL_PFHT450_PFMET50, &b_HLT_Ele15_IsoVVVL_PFHT450_PFMET50);
   fChain->SetBranchAddress("HLT_Ele15_IsoVVVL_PFHT450", &HLT_Ele15_IsoVVVL_PFHT450, &b_HLT_Ele15_IsoVVVL_PFHT450);
   fChain->SetBranchAddress("HLT_Ele50_IsoVVVL_PFHT450", &HLT_Ele50_IsoVVVL_PFHT450, &b_HLT_Ele50_IsoVVVL_PFHT450);
   fChain->SetBranchAddress("HLT_Ele15_IsoVVVL_PFHT600", &HLT_Ele15_IsoVVVL_PFHT600, &b_HLT_Ele15_IsoVVVL_PFHT600);
   fChain->SetBranchAddress("HLT_Mu4_TrkIsoVVL_DiPFJet90_40_DEta3p5_MJJ750_HTT300_PFMETNoMu60", &HLT_Mu4_TrkIsoVVL_DiPFJet90_40_DEta3p5_MJJ750_HTT300_PFMETNoMu60, &b_HLT_Mu4_TrkIsoVVL_DiPFJet90_40_DEta3p5_MJJ750_HTT300_PFMETNoMu60);
   fChain->SetBranchAddress("HLT_Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60", &HLT_Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60, &b_HLT_Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60);
   fChain->SetBranchAddress("HLT_Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60", &HLT_Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60, &b_HLT_Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60);
   fChain->SetBranchAddress("HLT_Mu15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5", &HLT_Mu15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5, &b_HLT_Mu15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5);
   fChain->SetBranchAddress("HLT_Mu15_IsoVVVL_PFHT450_PFMET50", &HLT_Mu15_IsoVVVL_PFHT450_PFMET50, &b_HLT_Mu15_IsoVVVL_PFHT450_PFMET50);
   fChain->SetBranchAddress("HLT_Mu15_IsoVVVL_PFHT450", &HLT_Mu15_IsoVVVL_PFHT450, &b_HLT_Mu15_IsoVVVL_PFHT450);
   fChain->SetBranchAddress("HLT_Mu50_IsoVVVL_PFHT450", &HLT_Mu50_IsoVVVL_PFHT450, &b_HLT_Mu50_IsoVVVL_PFHT450);
   fChain->SetBranchAddress("HLT_Mu15_IsoVVVL_PFHT600", &HLT_Mu15_IsoVVVL_PFHT600, &b_HLT_Mu15_IsoVVVL_PFHT600);
   fChain->SetBranchAddress("HLT_Mu3er1p5_PFJet100er2p5_PFMET70_PFMHT70_IDTight", &HLT_Mu3er1p5_PFJet100er2p5_PFMET70_PFMHT70_IDTight, &b_HLT_Mu3er1p5_PFJet100er2p5_PFMET70_PFMHT70_IDTight);
   fChain->SetBranchAddress("HLT_Mu3er1p5_PFJet100er2p5_PFMET80_PFMHT80_IDTight", &HLT_Mu3er1p5_PFJet100er2p5_PFMET80_PFMHT80_IDTight, &b_HLT_Mu3er1p5_PFJet100er2p5_PFMET80_PFMHT80_IDTight);
   fChain->SetBranchAddress("HLT_Mu3er1p5_PFJet100er2p5_PFMET90_PFMHT90_IDTight", &HLT_Mu3er1p5_PFJet100er2p5_PFMET90_PFMHT90_IDTight, &b_HLT_Mu3er1p5_PFJet100er2p5_PFMET90_PFMHT90_IDTight);
   fChain->SetBranchAddress("HLT_Mu3er1p5_PFJet100er2p5_PFMET100_PFMHT100_IDTight", &HLT_Mu3er1p5_PFJet100er2p5_PFMET100_PFMHT100_IDTight, &b_HLT_Mu3er1p5_PFJet100er2p5_PFMET100_PFMHT100_IDTight);
   fChain->SetBranchAddress("HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu70_PFMHTNoMu70_IDTight", &HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu70_PFMHTNoMu70_IDTight, &b_HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu70_PFMHTNoMu70_IDTight);
   fChain->SetBranchAddress("HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu80_PFMHTNoMu80_IDTight", &HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu80_PFMHTNoMu80_IDTight, &b_HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu80_PFMHTNoMu80_IDTight);
   fChain->SetBranchAddress("HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu90_PFMHTNoMu90_IDTight", &HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu90_PFMHTNoMu90_IDTight, &b_HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu90_PFMHTNoMu90_IDTight);
   fChain->SetBranchAddress("HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu100_PFMHTNoMu100_IDTight", &HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu100_PFMHTNoMu100_IDTight, &b_HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu100_PFMHTNoMu100_IDTight);
   fChain->SetBranchAddress("HLT_Dimuon10_PsiPrime_Barrel_Seagulls", &HLT_Dimuon10_PsiPrime_Barrel_Seagulls, &b_HLT_Dimuon10_PsiPrime_Barrel_Seagulls);
   fChain->SetBranchAddress("HLT_Dimuon20_Jpsi_Barrel_Seagulls", &HLT_Dimuon20_Jpsi_Barrel_Seagulls, &b_HLT_Dimuon20_Jpsi_Barrel_Seagulls);
   fChain->SetBranchAddress("HLT_Dimuon12_Upsilon_y1p4", &HLT_Dimuon12_Upsilon_y1p4, &b_HLT_Dimuon12_Upsilon_y1p4);
   fChain->SetBranchAddress("HLT_Dimuon14_Phi_Barrel_Seagulls", &HLT_Dimuon14_Phi_Barrel_Seagulls, &b_HLT_Dimuon14_Phi_Barrel_Seagulls);
   fChain->SetBranchAddress("HLT_Dimuon18_PsiPrime", &HLT_Dimuon18_PsiPrime, &b_HLT_Dimuon18_PsiPrime);
   fChain->SetBranchAddress("HLT_Dimuon25_Jpsi", &HLT_Dimuon25_Jpsi, &b_HLT_Dimuon25_Jpsi);
   fChain->SetBranchAddress("HLT_Dimuon18_PsiPrime_noCorrL1", &HLT_Dimuon18_PsiPrime_noCorrL1, &b_HLT_Dimuon18_PsiPrime_noCorrL1);
   fChain->SetBranchAddress("HLT_Dimuon24_Upsilon_noCorrL1", &HLT_Dimuon24_Upsilon_noCorrL1, &b_HLT_Dimuon24_Upsilon_noCorrL1);
   fChain->SetBranchAddress("HLT_Dimuon24_Phi_noCorrL1", &HLT_Dimuon24_Phi_noCorrL1, &b_HLT_Dimuon24_Phi_noCorrL1);
   fChain->SetBranchAddress("HLT_Dimuon25_Jpsi_noCorrL1", &HLT_Dimuon25_Jpsi_noCorrL1, &b_HLT_Dimuon25_Jpsi_noCorrL1);
   fChain->SetBranchAddress("HLT_DiMu4_Ele9_CaloIdL_TrackIdL_DZ_Mass3p8", &HLT_DiMu4_Ele9_CaloIdL_TrackIdL_DZ_Mass3p8, &b_HLT_DiMu4_Ele9_CaloIdL_TrackIdL_DZ_Mass3p8);
   fChain->SetBranchAddress("HLT_DiMu9_Ele9_CaloIdL_TrackIdL_DZ", &HLT_DiMu9_Ele9_CaloIdL_TrackIdL_DZ, &b_HLT_DiMu9_Ele9_CaloIdL_TrackIdL_DZ);
   fChain->SetBranchAddress("HLT_DiMu9_Ele9_CaloIdL_TrackIdL", &HLT_DiMu9_Ele9_CaloIdL_TrackIdL, &b_HLT_DiMu9_Ele9_CaloIdL_TrackIdL);
   fChain->SetBranchAddress("HLT_DoubleIsoMu20_eta2p1", &HLT_DoubleIsoMu20_eta2p1, &b_HLT_DoubleIsoMu20_eta2p1);
   fChain->SetBranchAddress("HLT_TrkMu12_DoubleTrkMu5NoFiltersNoVtx", &HLT_TrkMu12_DoubleTrkMu5NoFiltersNoVtx, &b_HLT_TrkMu12_DoubleTrkMu5NoFiltersNoVtx);
   fChain->SetBranchAddress("HLT_TrkMu16_DoubleTrkMu6NoFiltersNoVtx", &HLT_TrkMu16_DoubleTrkMu6NoFiltersNoVtx, &b_HLT_TrkMu16_DoubleTrkMu6NoFiltersNoVtx);
   fChain->SetBranchAddress("HLT_TrkMu17_DoubleTrkMu8NoFiltersNoVtx", &HLT_TrkMu17_DoubleTrkMu8NoFiltersNoVtx, &b_HLT_TrkMu17_DoubleTrkMu8NoFiltersNoVtx);
   fChain->SetBranchAddress("HLT_Mu8", &HLT_Mu8, &b_HLT_Mu8);
   fChain->SetBranchAddress("HLT_Mu17", &HLT_Mu17, &b_HLT_Mu17);
   fChain->SetBranchAddress("HLT_Mu19", &HLT_Mu19, &b_HLT_Mu19);
   fChain->SetBranchAddress("HLT_Mu17_Photon30_IsoCaloId", &HLT_Mu17_Photon30_IsoCaloId, &b_HLT_Mu17_Photon30_IsoCaloId);
   fChain->SetBranchAddress("HLT_Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30", &HLT_Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30, &b_HLT_Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30);
   fChain->SetBranchAddress("HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30", &HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30, &b_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30);
   fChain->SetBranchAddress("HLT_Ele15_CaloIdL_TrackIdL_IsoVL_PFJet30", &HLT_Ele15_CaloIdL_TrackIdL_IsoVL_PFJet30, &b_HLT_Ele15_CaloIdL_TrackIdL_IsoVL_PFJet30);
   fChain->SetBranchAddress("HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30", &HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30, &b_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30);
   fChain->SetBranchAddress("HLT_Ele8_CaloIdM_TrackIdM_PFJet30", &HLT_Ele8_CaloIdM_TrackIdM_PFJet30, &b_HLT_Ele8_CaloIdM_TrackIdM_PFJet30);
   fChain->SetBranchAddress("HLT_Ele17_CaloIdM_TrackIdM_PFJet30", &HLT_Ele17_CaloIdM_TrackIdM_PFJet30, &b_HLT_Ele17_CaloIdM_TrackIdM_PFJet30);
   fChain->SetBranchAddress("HLT_Ele23_CaloIdM_TrackIdM_PFJet30", &HLT_Ele23_CaloIdM_TrackIdM_PFJet30, &b_HLT_Ele23_CaloIdM_TrackIdM_PFJet30);
   fChain->SetBranchAddress("HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165", &HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165, &b_HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165);
   fChain->SetBranchAddress("HLT_Ele115_CaloIdVT_GsfTrkIdT", &HLT_Ele115_CaloIdVT_GsfTrkIdT, &b_HLT_Ele115_CaloIdVT_GsfTrkIdT);
   fChain->SetBranchAddress("HLT_Ele135_CaloIdVT_GsfTrkIdT", &HLT_Ele135_CaloIdVT_GsfTrkIdT, &b_HLT_Ele135_CaloIdVT_GsfTrkIdT);
   fChain->SetBranchAddress("HLT_Ele145_CaloIdVT_GsfTrkIdT", &HLT_Ele145_CaloIdVT_GsfTrkIdT, &b_HLT_Ele145_CaloIdVT_GsfTrkIdT);
   fChain->SetBranchAddress("HLT_Ele200_CaloIdVT_GsfTrkIdT", &HLT_Ele200_CaloIdVT_GsfTrkIdT, &b_HLT_Ele200_CaloIdVT_GsfTrkIdT);
   fChain->SetBranchAddress("HLT_Ele250_CaloIdVT_GsfTrkIdT", &HLT_Ele250_CaloIdVT_GsfTrkIdT, &b_HLT_Ele250_CaloIdVT_GsfTrkIdT);
   fChain->SetBranchAddress("HLT_Ele300_CaloIdVT_GsfTrkIdT", &HLT_Ele300_CaloIdVT_GsfTrkIdT, &b_HLT_Ele300_CaloIdVT_GsfTrkIdT);
   fChain->SetBranchAddress("HLT_PFHT330PT30_QuadPFJet_75_60_45_40_TriplePFBTagDeepCSV_4p5", &HLT_PFHT330PT30_QuadPFJet_75_60_45_40_TriplePFBTagDeepCSV_4p5, &b_HLT_PFHT330PT30_QuadPFJet_75_60_45_40_TriplePFBTagDeepCSV_4p5);
   fChain->SetBranchAddress("HLT_PFHT330PT30_QuadPFJet_75_60_45_40", &HLT_PFHT330PT30_QuadPFJet_75_60_45_40, &b_HLT_PFHT330PT30_QuadPFJet_75_60_45_40);
   fChain->SetBranchAddress("HLT_PFHT400_SixPFJet32_DoublePFBTagDeepCSV_2p94", &HLT_PFHT400_SixPFJet32_DoublePFBTagDeepCSV_2p94, &b_HLT_PFHT400_SixPFJet32_DoublePFBTagDeepCSV_2p94);
   fChain->SetBranchAddress("HLT_PFHT400_SixPFJet32", &HLT_PFHT400_SixPFJet32, &b_HLT_PFHT400_SixPFJet32);
   fChain->SetBranchAddress("HLT_PFHT450_SixPFJet36_PFBTagDeepCSV_1p59", &HLT_PFHT450_SixPFJet36_PFBTagDeepCSV_1p59, &b_HLT_PFHT450_SixPFJet36_PFBTagDeepCSV_1p59);
   fChain->SetBranchAddress("HLT_PFHT450_SixPFJet36", &HLT_PFHT450_SixPFJet36, &b_HLT_PFHT450_SixPFJet36);
   fChain->SetBranchAddress("HLT_PFHT350", &HLT_PFHT350, &b_HLT_PFHT350);
   fChain->SetBranchAddress("HLT_PFHT350MinPFJet15", &HLT_PFHT350MinPFJet15, &b_HLT_PFHT350MinPFJet15);
   fChain->SetBranchAddress("HLT_Photon60_R9Id90_CaloIdL_IsoL", &HLT_Photon60_R9Id90_CaloIdL_IsoL, &b_HLT_Photon60_R9Id90_CaloIdL_IsoL);
   fChain->SetBranchAddress("HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL", &HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL, &b_HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL);
   fChain->SetBranchAddress("HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15", &HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15, &b_HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15);
   fChain->SetBranchAddress("HLT_ECALHT800", &HLT_ECALHT800, &b_HLT_ECALHT800);
   fChain->SetBranchAddress("HLT_DiSC30_18_EIso_AND_HE_Mass70", &HLT_DiSC30_18_EIso_AND_HE_Mass70, &b_HLT_DiSC30_18_EIso_AND_HE_Mass70);
   fChain->SetBranchAddress("HLT_Physics", &HLT_Physics, &b_HLT_Physics);
   fChain->SetBranchAddress("HLT_Physics_part0", &HLT_Physics_part0, &b_HLT_Physics_part0);
   fChain->SetBranchAddress("HLT_Physics_part1", &HLT_Physics_part1, &b_HLT_Physics_part1);
   fChain->SetBranchAddress("HLT_Physics_part2", &HLT_Physics_part2, &b_HLT_Physics_part2);
   fChain->SetBranchAddress("HLT_Physics_part3", &HLT_Physics_part3, &b_HLT_Physics_part3);
   fChain->SetBranchAddress("HLT_Physics_part4", &HLT_Physics_part4, &b_HLT_Physics_part4);
   fChain->SetBranchAddress("HLT_Physics_part5", &HLT_Physics_part5, &b_HLT_Physics_part5);
   fChain->SetBranchAddress("HLT_Physics_part6", &HLT_Physics_part6, &b_HLT_Physics_part6);
   fChain->SetBranchAddress("HLT_Physics_part7", &HLT_Physics_part7, &b_HLT_Physics_part7);
   fChain->SetBranchAddress("HLT_Random", &HLT_Random, &b_HLT_Random);
   fChain->SetBranchAddress("HLT_ZeroBias", &HLT_ZeroBias, &b_HLT_ZeroBias);
   fChain->SetBranchAddress("HLT_ZeroBias_Alignment", &HLT_ZeroBias_Alignment, &b_HLT_ZeroBias_Alignment);
   fChain->SetBranchAddress("HLT_ZeroBias_part0", &HLT_ZeroBias_part0, &b_HLT_ZeroBias_part0);
   fChain->SetBranchAddress("HLT_ZeroBias_part1", &HLT_ZeroBias_part1, &b_HLT_ZeroBias_part1);
   fChain->SetBranchAddress("HLT_ZeroBias_part2", &HLT_ZeroBias_part2, &b_HLT_ZeroBias_part2);
   fChain->SetBranchAddress("HLT_ZeroBias_part3", &HLT_ZeroBias_part3, &b_HLT_ZeroBias_part3);
   fChain->SetBranchAddress("HLT_ZeroBias_part4", &HLT_ZeroBias_part4, &b_HLT_ZeroBias_part4);
   fChain->SetBranchAddress("HLT_ZeroBias_part5", &HLT_ZeroBias_part5, &b_HLT_ZeroBias_part5);
   fChain->SetBranchAddress("HLT_ZeroBias_part6", &HLT_ZeroBias_part6, &b_HLT_ZeroBias_part6);
   fChain->SetBranchAddress("HLT_ZeroBias_part7", &HLT_ZeroBias_part7, &b_HLT_ZeroBias_part7);
   fChain->SetBranchAddress("HLT_AK4CaloJet30", &HLT_AK4CaloJet30, &b_HLT_AK4CaloJet30);
   fChain->SetBranchAddress("HLT_AK4CaloJet40", &HLT_AK4CaloJet40, &b_HLT_AK4CaloJet40);
   fChain->SetBranchAddress("HLT_AK4CaloJet50", &HLT_AK4CaloJet50, &b_HLT_AK4CaloJet50);
   fChain->SetBranchAddress("HLT_AK4CaloJet80", &HLT_AK4CaloJet80, &b_HLT_AK4CaloJet80);
   fChain->SetBranchAddress("HLT_AK4CaloJet100", &HLT_AK4CaloJet100, &b_HLT_AK4CaloJet100);
   fChain->SetBranchAddress("HLT_AK4CaloJet120", &HLT_AK4CaloJet120, &b_HLT_AK4CaloJet120);
   fChain->SetBranchAddress("HLT_AK4PFJet30", &HLT_AK4PFJet30, &b_HLT_AK4PFJet30);
   fChain->SetBranchAddress("HLT_AK4PFJet50", &HLT_AK4PFJet50, &b_HLT_AK4PFJet50);
   fChain->SetBranchAddress("HLT_AK4PFJet80", &HLT_AK4PFJet80, &b_HLT_AK4PFJet80);
   fChain->SetBranchAddress("HLT_AK4PFJet100", &HLT_AK4PFJet100, &b_HLT_AK4PFJet100);
   fChain->SetBranchAddress("HLT_AK4PFJet120", &HLT_AK4PFJet120, &b_HLT_AK4PFJet120);
   fChain->SetBranchAddress("HLT_SinglePhoton10_Eta3p1ForPPRef", &HLT_SinglePhoton10_Eta3p1ForPPRef, &b_HLT_SinglePhoton10_Eta3p1ForPPRef);
   fChain->SetBranchAddress("HLT_SinglePhoton20_Eta3p1ForPPRef", &HLT_SinglePhoton20_Eta3p1ForPPRef, &b_HLT_SinglePhoton20_Eta3p1ForPPRef);
   fChain->SetBranchAddress("HLT_SinglePhoton30_Eta3p1ForPPRef", &HLT_SinglePhoton30_Eta3p1ForPPRef, &b_HLT_SinglePhoton30_Eta3p1ForPPRef);
   fChain->SetBranchAddress("HLT_Photon20_HoverELoose", &HLT_Photon20_HoverELoose, &b_HLT_Photon20_HoverELoose);
   fChain->SetBranchAddress("HLT_Photon30_HoverELoose", &HLT_Photon30_HoverELoose, &b_HLT_Photon30_HoverELoose);
   fChain->SetBranchAddress("HLT_EcalCalibration", &HLT_EcalCalibration, &b_HLT_EcalCalibration);
   fChain->SetBranchAddress("HLT_HcalCalibration", &HLT_HcalCalibration, &b_HLT_HcalCalibration);
   fChain->SetBranchAddress("HLT_L1UnpairedBunchBptxMinus", &HLT_L1UnpairedBunchBptxMinus, &b_HLT_L1UnpairedBunchBptxMinus);
   fChain->SetBranchAddress("HLT_L1UnpairedBunchBptxPlus", &HLT_L1UnpairedBunchBptxPlus, &b_HLT_L1UnpairedBunchBptxPlus);
   fChain->SetBranchAddress("HLT_L1NotBptxOR", &HLT_L1NotBptxOR, &b_HLT_L1NotBptxOR);
   fChain->SetBranchAddress("HLT_L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142", &HLT_L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142, &b_HLT_L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142);
   fChain->SetBranchAddress("HLT_CDC_L2cosmic_5_er1p0", &HLT_CDC_L2cosmic_5_er1p0, &b_HLT_CDC_L2cosmic_5_er1p0);
   fChain->SetBranchAddress("HLT_CDC_L2cosmic_5p5_er1p0", &HLT_CDC_L2cosmic_5p5_er1p0, &b_HLT_CDC_L2cosmic_5p5_er1p0);
   fChain->SetBranchAddress("HLT_HcalNZS", &HLT_HcalNZS, &b_HLT_HcalNZS);
   fChain->SetBranchAddress("HLT_HcalPhiSym", &HLT_HcalPhiSym, &b_HLT_HcalPhiSym);
   fChain->SetBranchAddress("HLT_HcalIsolatedbunch", &HLT_HcalIsolatedbunch, &b_HLT_HcalIsolatedbunch);
   fChain->SetBranchAddress("HLT_IsoTrackHB", &HLT_IsoTrackHB, &b_HLT_IsoTrackHB);
   fChain->SetBranchAddress("HLT_IsoTrackHE", &HLT_IsoTrackHE, &b_HLT_IsoTrackHE);
   fChain->SetBranchAddress("HLT_ZeroBias_FirstCollisionAfterAbortGap", &HLT_ZeroBias_FirstCollisionAfterAbortGap, &b_HLT_ZeroBias_FirstCollisionAfterAbortGap);
   fChain->SetBranchAddress("HLT_ZeroBias_IsolatedBunches", &HLT_ZeroBias_IsolatedBunches, &b_HLT_ZeroBias_IsolatedBunches);
   fChain->SetBranchAddress("HLT_ZeroBias_FirstCollisionInTrain", &HLT_ZeroBias_FirstCollisionInTrain, &b_HLT_ZeroBias_FirstCollisionInTrain);
   fChain->SetBranchAddress("HLT_ZeroBias_LastCollisionInTrain", &HLT_ZeroBias_LastCollisionInTrain, &b_HLT_ZeroBias_LastCollisionInTrain);
   fChain->SetBranchAddress("HLT_ZeroBias_FirstBXAfterTrain", &HLT_ZeroBias_FirstBXAfterTrain, &b_HLT_ZeroBias_FirstBXAfterTrain);
   fChain->SetBranchAddress("HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr", &HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr, &b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr);
   fChain->SetBranchAddress("HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90", &HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90, &b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90);
   fChain->SetBranchAddress("HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100", &HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100, &b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100);
   fChain->SetBranchAddress("HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110", &HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110, &b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110);
   fChain->SetBranchAddress("HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120", &HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120, &b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120);
   fChain->SetBranchAddress("HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130", &HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130, &b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130);
   fChain->SetBranchAddress("HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET140", &HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET140, &b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET140);
   fChain->SetBranchAddress("HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr", &HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr, &b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr);
   fChain->SetBranchAddress("HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr", &HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr, &b_HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr);
   fChain->SetBranchAddress("HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1", &HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1, &b_HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1);
   fChain->SetBranchAddress("HLT_MediumChargedIsoPFTau200HighPtRelaxedIso_Trk50_eta2p1", &HLT_MediumChargedIsoPFTau200HighPtRelaxedIso_Trk50_eta2p1, &b_HLT_MediumChargedIsoPFTau200HighPtRelaxedIso_Trk50_eta2p1);
   fChain->SetBranchAddress("HLT_MediumChargedIsoPFTau220HighPtRelaxedIso_Trk50_eta2p1", &HLT_MediumChargedIsoPFTau220HighPtRelaxedIso_Trk50_eta2p1, &b_HLT_MediumChargedIsoPFTau220HighPtRelaxedIso_Trk50_eta2p1);
   fChain->SetBranchAddress("HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL", &HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL, &b_HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL);
   fChain->SetBranchAddress("HLT_Rsq0p35", &HLT_Rsq0p35, &b_HLT_Rsq0p35);
   fChain->SetBranchAddress("HLT_Rsq0p40", &HLT_Rsq0p40, &b_HLT_Rsq0p40);
   fChain->SetBranchAddress("HLT_RsqMR300_Rsq0p09_MR200", &HLT_RsqMR300_Rsq0p09_MR200, &b_HLT_RsqMR300_Rsq0p09_MR200);
   fChain->SetBranchAddress("HLT_RsqMR320_Rsq0p09_MR200", &HLT_RsqMR320_Rsq0p09_MR200, &b_HLT_RsqMR320_Rsq0p09_MR200);
   fChain->SetBranchAddress("HLT_RsqMR300_Rsq0p09_MR200_4jet", &HLT_RsqMR300_Rsq0p09_MR200_4jet, &b_HLT_RsqMR300_Rsq0p09_MR200_4jet);
   fChain->SetBranchAddress("HLT_RsqMR320_Rsq0p09_MR200_4jet", &HLT_RsqMR320_Rsq0p09_MR200_4jet, &b_HLT_RsqMR320_Rsq0p09_MR200_4jet);
   fChain->SetBranchAddress("HLT_IsoMu27_MET90", &HLT_IsoMu27_MET90, &b_HLT_IsoMu27_MET90);
   fChain->SetBranchAddress("HLT_DoubleTightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg", &HLT_DoubleTightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg, &b_HLT_DoubleTightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg);
   fChain->SetBranchAddress("HLT_DoubleMediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg", &HLT_DoubleMediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg, &b_HLT_DoubleMediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg);
   fChain->SetBranchAddress("HLT_DoubleMediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg", &HLT_DoubleMediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg, &b_HLT_DoubleMediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg);
   fChain->SetBranchAddress("HLT_DoubleTightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg", &HLT_DoubleTightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg, &b_HLT_DoubleTightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg);
   fChain->SetBranchAddress("HLT_DoubleMediumChargedIsoPFTauHPS40_Trk1_eta2p1_Reg", &HLT_DoubleMediumChargedIsoPFTauHPS40_Trk1_eta2p1_Reg, &b_HLT_DoubleMediumChargedIsoPFTauHPS40_Trk1_eta2p1_Reg);
   fChain->SetBranchAddress("HLT_DoubleTightChargedIsoPFTauHPS40_Trk1_eta2p1_Reg", &HLT_DoubleTightChargedIsoPFTauHPS40_Trk1_eta2p1_Reg, &b_HLT_DoubleTightChargedIsoPFTauHPS40_Trk1_eta2p1_Reg);
   fChain->SetBranchAddress("HLT_DoubleMediumChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg", &HLT_DoubleMediumChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg, &b_HLT_DoubleMediumChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg);
   fChain->SetBranchAddress("HLT_DoubleTightChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg", &HLT_DoubleTightChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg, &b_HLT_DoubleTightChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg);
   fChain->SetBranchAddress("HLT_VBF_DoubleLooseChargedIsoPFTauHPS20_Trk1_eta2p1", &HLT_VBF_DoubleLooseChargedIsoPFTauHPS20_Trk1_eta2p1, &b_HLT_VBF_DoubleLooseChargedIsoPFTauHPS20_Trk1_eta2p1);
   fChain->SetBranchAddress("HLT_VBF_DoubleMediumChargedIsoPFTauHPS20_Trk1_eta2p1", &HLT_VBF_DoubleMediumChargedIsoPFTauHPS20_Trk1_eta2p1, &b_HLT_VBF_DoubleMediumChargedIsoPFTauHPS20_Trk1_eta2p1);
   fChain->SetBranchAddress("HLT_VBF_DoubleTightChargedIsoPFTauHPS20_Trk1_eta2p1", &HLT_VBF_DoubleTightChargedIsoPFTauHPS20_Trk1_eta2p1, &b_HLT_VBF_DoubleTightChargedIsoPFTauHPS20_Trk1_eta2p1);
   fChain->SetBranchAddress("HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50", &HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50, &b_HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50);
   fChain->SetBranchAddress("HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3", &HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3, &b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3);
   fChain->SetBranchAddress("HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3", &HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3, &b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3);
   fChain->SetBranchAddress("HLT_PFMET100_PFMHT100_IDTight_PFHT60", &HLT_PFMET100_PFMHT100_IDTight_PFHT60, &b_HLT_PFMET100_PFMHT100_IDTight_PFHT60);
   fChain->SetBranchAddress("HLT_PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60", &HLT_PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60, &b_HLT_PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60);
   fChain->SetBranchAddress("HLT_PFMETTypeOne100_PFMHT100_IDTight_PFHT60", &HLT_PFMETTypeOne100_PFMHT100_IDTight_PFHT60, &b_HLT_PFMETTypeOne100_PFMHT100_IDTight_PFHT60);
   fChain->SetBranchAddress("HLT_Mu18_Mu9_SameSign", &HLT_Mu18_Mu9_SameSign, &b_HLT_Mu18_Mu9_SameSign);
   fChain->SetBranchAddress("HLT_Mu18_Mu9_SameSign_DZ", &HLT_Mu18_Mu9_SameSign_DZ, &b_HLT_Mu18_Mu9_SameSign_DZ);
   fChain->SetBranchAddress("HLT_Mu18_Mu9", &HLT_Mu18_Mu9, &b_HLT_Mu18_Mu9);
   fChain->SetBranchAddress("HLT_Mu18_Mu9_DZ", &HLT_Mu18_Mu9_DZ, &b_HLT_Mu18_Mu9_DZ);
   fChain->SetBranchAddress("HLT_Mu20_Mu10_SameSign", &HLT_Mu20_Mu10_SameSign, &b_HLT_Mu20_Mu10_SameSign);
   fChain->SetBranchAddress("HLT_Mu20_Mu10_SameSign_DZ", &HLT_Mu20_Mu10_SameSign_DZ, &b_HLT_Mu20_Mu10_SameSign_DZ);
   fChain->SetBranchAddress("HLT_Mu20_Mu10", &HLT_Mu20_Mu10, &b_HLT_Mu20_Mu10);
   fChain->SetBranchAddress("HLT_Mu20_Mu10_DZ", &HLT_Mu20_Mu10_DZ, &b_HLT_Mu20_Mu10_DZ);
   fChain->SetBranchAddress("HLT_Mu23_Mu12_SameSign", &HLT_Mu23_Mu12_SameSign, &b_HLT_Mu23_Mu12_SameSign);
   fChain->SetBranchAddress("HLT_Mu23_Mu12_SameSign_DZ", &HLT_Mu23_Mu12_SameSign_DZ, &b_HLT_Mu23_Mu12_SameSign_DZ);
   fChain->SetBranchAddress("HLT_Mu23_Mu12", &HLT_Mu23_Mu12, &b_HLT_Mu23_Mu12);
   fChain->SetBranchAddress("HLT_Mu23_Mu12_DZ", &HLT_Mu23_Mu12_DZ, &b_HLT_Mu23_Mu12_DZ);
   fChain->SetBranchAddress("HLT_DoubleMu2_Jpsi_DoubleTrk1_Phi1p05", &HLT_DoubleMu2_Jpsi_DoubleTrk1_Phi1p05, &b_HLT_DoubleMu2_Jpsi_DoubleTrk1_Phi1p05);
   fChain->SetBranchAddress("HLT_DoubleMu2_Jpsi_DoubleTkMu0_Phi", &HLT_DoubleMu2_Jpsi_DoubleTkMu0_Phi, &b_HLT_DoubleMu2_Jpsi_DoubleTkMu0_Phi);
   fChain->SetBranchAddress("HLT_DoubleMu3_DCA_PFMET50_PFMHT60", &HLT_DoubleMu3_DCA_PFMET50_PFMHT60, &b_HLT_DoubleMu3_DCA_PFMET50_PFMHT60);
   fChain->SetBranchAddress("HLT_TripleMu_5_3_3_Mass3p8_DCA", &HLT_TripleMu_5_3_3_Mass3p8_DCA, &b_HLT_TripleMu_5_3_3_Mass3p8_DCA);
   fChain->SetBranchAddress("HLT_QuadPFJet98_83_71_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1", &HLT_QuadPFJet98_83_71_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1, &b_HLT_QuadPFJet98_83_71_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1);
   fChain->SetBranchAddress("HLT_QuadPFJet103_88_75_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1", &HLT_QuadPFJet103_88_75_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1, &b_HLT_QuadPFJet103_88_75_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1);
   fChain->SetBranchAddress("HLT_QuadPFJet111_90_80_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1", &HLT_QuadPFJet111_90_80_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1, &b_HLT_QuadPFJet111_90_80_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1);
   fChain->SetBranchAddress("HLT_QuadPFJet98_83_71_15_PFBTagDeepCSV_1p3_VBF2", &HLT_QuadPFJet98_83_71_15_PFBTagDeepCSV_1p3_VBF2, &b_HLT_QuadPFJet98_83_71_15_PFBTagDeepCSV_1p3_VBF2);
   fChain->SetBranchAddress("HLT_QuadPFJet103_88_75_15_PFBTagDeepCSV_1p3_VBF2", &HLT_QuadPFJet103_88_75_15_PFBTagDeepCSV_1p3_VBF2, &b_HLT_QuadPFJet103_88_75_15_PFBTagDeepCSV_1p3_VBF2);
   fChain->SetBranchAddress("HLT_QuadPFJet105_88_76_15_PFBTagDeepCSV_1p3_VBF2", &HLT_QuadPFJet105_88_76_15_PFBTagDeepCSV_1p3_VBF2, &b_HLT_QuadPFJet105_88_76_15_PFBTagDeepCSV_1p3_VBF2);
   fChain->SetBranchAddress("HLT_QuadPFJet111_90_80_15_PFBTagDeepCSV_1p3_VBF2", &HLT_QuadPFJet111_90_80_15_PFBTagDeepCSV_1p3_VBF2, &b_HLT_QuadPFJet111_90_80_15_PFBTagDeepCSV_1p3_VBF2);
   fChain->SetBranchAddress("HLT_QuadPFJet98_83_71_15", &HLT_QuadPFJet98_83_71_15, &b_HLT_QuadPFJet98_83_71_15);
   fChain->SetBranchAddress("HLT_QuadPFJet103_88_75_15", &HLT_QuadPFJet103_88_75_15, &b_HLT_QuadPFJet103_88_75_15);
   fChain->SetBranchAddress("HLT_QuadPFJet105_88_76_15", &HLT_QuadPFJet105_88_76_15, &b_HLT_QuadPFJet105_88_76_15);
   fChain->SetBranchAddress("HLT_QuadPFJet111_90_80_15", &HLT_QuadPFJet111_90_80_15, &b_HLT_QuadPFJet111_90_80_15);
   fChain->SetBranchAddress("HLT_AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p17", &HLT_AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p17, &b_HLT_AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p17);
   fChain->SetBranchAddress("HLT_AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p1", &HLT_AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p1, &b_HLT_AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p1);
   fChain->SetBranchAddress("HLT_AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_p02", &HLT_AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_p02, &b_HLT_AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_p02);
   fChain->SetBranchAddress("HLT_AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np2", &HLT_AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np2, &b_HLT_AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np2);
   fChain->SetBranchAddress("HLT_AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np4", &HLT_AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np4, &b_HLT_AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np4);
   fChain->SetBranchAddress("HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55", &HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55, &b_HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55);
   fChain->SetBranchAddress("HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto", &HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto, &b_HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto);
   fChain->SetBranchAddress("HLT_Mu12_IP6_part0", &HLT_Mu12_IP6_part0, &b_HLT_Mu12_IP6_part0);
   fChain->SetBranchAddress("HLT_Mu12_IP6_part1", &HLT_Mu12_IP6_part1, &b_HLT_Mu12_IP6_part1);
   fChain->SetBranchAddress("HLT_Mu12_IP6_part2", &HLT_Mu12_IP6_part2, &b_HLT_Mu12_IP6_part2);
   fChain->SetBranchAddress("HLT_Mu12_IP6_part3", &HLT_Mu12_IP6_part3, &b_HLT_Mu12_IP6_part3);
   fChain->SetBranchAddress("HLT_Mu12_IP6_part4", &HLT_Mu12_IP6_part4, &b_HLT_Mu12_IP6_part4);
   fChain->SetBranchAddress("HLT_Mu9_IP5_part0", &HLT_Mu9_IP5_part0, &b_HLT_Mu9_IP5_part0);
   fChain->SetBranchAddress("HLT_Mu9_IP5_part1", &HLT_Mu9_IP5_part1, &b_HLT_Mu9_IP5_part1);
   fChain->SetBranchAddress("HLT_Mu9_IP5_part2", &HLT_Mu9_IP5_part2, &b_HLT_Mu9_IP5_part2);
   fChain->SetBranchAddress("HLT_Mu9_IP5_part3", &HLT_Mu9_IP5_part3, &b_HLT_Mu9_IP5_part3);
   fChain->SetBranchAddress("HLT_Mu9_IP5_part4", &HLT_Mu9_IP5_part4, &b_HLT_Mu9_IP5_part4);
   fChain->SetBranchAddress("HLT_Mu7_IP4_part0", &HLT_Mu7_IP4_part0, &b_HLT_Mu7_IP4_part0);
   fChain->SetBranchAddress("HLT_Mu7_IP4_part1", &HLT_Mu7_IP4_part1, &b_HLT_Mu7_IP4_part1);
   fChain->SetBranchAddress("HLT_Mu7_IP4_part2", &HLT_Mu7_IP4_part2, &b_HLT_Mu7_IP4_part2);
   fChain->SetBranchAddress("HLT_Mu7_IP4_part3", &HLT_Mu7_IP4_part3, &b_HLT_Mu7_IP4_part3);
   fChain->SetBranchAddress("HLT_Mu7_IP4_part4", &HLT_Mu7_IP4_part4, &b_HLT_Mu7_IP4_part4);
   fChain->SetBranchAddress("HLT_Mu9_IP4_part0", &HLT_Mu9_IP4_part0, &b_HLT_Mu9_IP4_part0);
   fChain->SetBranchAddress("HLT_Mu9_IP4_part1", &HLT_Mu9_IP4_part1, &b_HLT_Mu9_IP4_part1);
   fChain->SetBranchAddress("HLT_Mu9_IP4_part2", &HLT_Mu9_IP4_part2, &b_HLT_Mu9_IP4_part2);
   fChain->SetBranchAddress("HLT_Mu9_IP4_part3", &HLT_Mu9_IP4_part3, &b_HLT_Mu9_IP4_part3);
   fChain->SetBranchAddress("HLT_Mu9_IP4_part4", &HLT_Mu9_IP4_part4, &b_HLT_Mu9_IP4_part4);
   fChain->SetBranchAddress("HLT_Mu8_IP5_part0", &HLT_Mu8_IP5_part0, &b_HLT_Mu8_IP5_part0);
   fChain->SetBranchAddress("HLT_Mu8_IP5_part1", &HLT_Mu8_IP5_part1, &b_HLT_Mu8_IP5_part1);
   fChain->SetBranchAddress("HLT_Mu8_IP5_part2", &HLT_Mu8_IP5_part2, &b_HLT_Mu8_IP5_part2);
   fChain->SetBranchAddress("HLT_Mu8_IP5_part3", &HLT_Mu8_IP5_part3, &b_HLT_Mu8_IP5_part3);
   fChain->SetBranchAddress("HLT_Mu8_IP5_part4", &HLT_Mu8_IP5_part4, &b_HLT_Mu8_IP5_part4);
   fChain->SetBranchAddress("HLT_Mu8_IP6_part0", &HLT_Mu8_IP6_part0, &b_HLT_Mu8_IP6_part0);
   fChain->SetBranchAddress("HLT_Mu8_IP6_part1", &HLT_Mu8_IP6_part1, &b_HLT_Mu8_IP6_part1);
   fChain->SetBranchAddress("HLT_Mu8_IP6_part2", &HLT_Mu8_IP6_part2, &b_HLT_Mu8_IP6_part2);
   fChain->SetBranchAddress("HLT_Mu8_IP6_part3", &HLT_Mu8_IP6_part3, &b_HLT_Mu8_IP6_part3);
   fChain->SetBranchAddress("HLT_Mu8_IP6_part4", &HLT_Mu8_IP6_part4, &b_HLT_Mu8_IP6_part4);
   fChain->SetBranchAddress("HLT_Mu9_IP6_part0", &HLT_Mu9_IP6_part0, &b_HLT_Mu9_IP6_part0);
   fChain->SetBranchAddress("HLT_Mu9_IP6_part1", &HLT_Mu9_IP6_part1, &b_HLT_Mu9_IP6_part1);
   fChain->SetBranchAddress("HLT_Mu9_IP6_part2", &HLT_Mu9_IP6_part2, &b_HLT_Mu9_IP6_part2);
   fChain->SetBranchAddress("HLT_Mu9_IP6_part3", &HLT_Mu9_IP6_part3, &b_HLT_Mu9_IP6_part3);
   fChain->SetBranchAddress("HLT_Mu9_IP6_part4", &HLT_Mu9_IP6_part4, &b_HLT_Mu9_IP6_part4);
   fChain->SetBranchAddress("HLT_Mu8_IP3_part0", &HLT_Mu8_IP3_part0, &b_HLT_Mu8_IP3_part0);
   fChain->SetBranchAddress("HLT_Mu8_IP3_part1", &HLT_Mu8_IP3_part1, &b_HLT_Mu8_IP3_part1);
   fChain->SetBranchAddress("HLT_Mu8_IP3_part2", &HLT_Mu8_IP3_part2, &b_HLT_Mu8_IP3_part2);
   fChain->SetBranchAddress("HLT_Mu8_IP3_part3", &HLT_Mu8_IP3_part3, &b_HLT_Mu8_IP3_part3);
   fChain->SetBranchAddress("HLT_Mu8_IP3_part4", &HLT_Mu8_IP3_part4, &b_HLT_Mu8_IP3_part4);
   fChain->SetBranchAddress("HLT_QuadPFJet105_88_76_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1", &HLT_QuadPFJet105_88_76_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1, &b_HLT_QuadPFJet105_88_76_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1);
   fChain->SetBranchAddress("HLT_TrkMu6NoFiltersNoVtx", &HLT_TrkMu6NoFiltersNoVtx, &b_HLT_TrkMu6NoFiltersNoVtx);
   fChain->SetBranchAddress("HLT_TrkMu16NoFiltersNoVtx", &HLT_TrkMu16NoFiltersNoVtx, &b_HLT_TrkMu16NoFiltersNoVtx);
   fChain->SetBranchAddress("HLT_DoubleTrkMu_16_6_NoFiltersNoVtx", &HLT_DoubleTrkMu_16_6_NoFiltersNoVtx, &b_HLT_DoubleTrkMu_16_6_NoFiltersNoVtx);
   fChain->SetBranchAddress("HLTriggerFinalPath", &HLTriggerFinalPath, &b_HLTriggerFinalPath);
   fChain->SetBranchAddress("nLepton", &nLepton, &b_nLepton);
   fChain->SetBranchAddress("Lepton_pdgId", Lepton_pdgId, &b_Lepton_pdgId);
   fChain->SetBranchAddress("Lepton_electronIdx", Lepton_electronIdx, &b_Lepton_electronIdx);
   fChain->SetBranchAddress("Lepton_muonIdx", Lepton_muonIdx, &b_Lepton_muonIdx);
   fChain->SetBranchAddress("Lepton_pt", Lepton_pt, &b_Lepton_pt);
   fChain->SetBranchAddress("Lepton_eta", Lepton_eta, &b_Lepton_eta);
   fChain->SetBranchAddress("Lepton_phi", Lepton_phi, &b_Lepton_phi);
   fChain->SetBranchAddress("nVetoLepton", &nVetoLepton, &b_nVetoLepton);
   fChain->SetBranchAddress("VetoLepton_pdgId", VetoLepton_pdgId, &b_VetoLepton_pdgId);
   fChain->SetBranchAddress("VetoLepton_electronIdx", VetoLepton_electronIdx, &b_VetoLepton_electronIdx);
   fChain->SetBranchAddress("VetoLepton_muonIdx", VetoLepton_muonIdx, &b_VetoLepton_muonIdx);
   fChain->SetBranchAddress("VetoLepton_pt", VetoLepton_pt, &b_VetoLepton_pt);
   fChain->SetBranchAddress("VetoLepton_eta", VetoLepton_eta, &b_VetoLepton_eta);
   fChain->SetBranchAddress("VetoLepton_phi", VetoLepton_phi, &b_VetoLepton_phi);
   fChain->SetBranchAddress("nCleanJet", &nCleanJet, &b_nCleanJet);
   fChain->SetBranchAddress("CleanJet_jetIdx", CleanJet_jetIdx, &b_CleanJet_jetIdx);
   fChain->SetBranchAddress("CleanJet_pt", CleanJet_pt, &b_CleanJet_pt);
   fChain->SetBranchAddress("CleanJet_eta", CleanJet_eta, &b_CleanJet_eta);
   fChain->SetBranchAddress("CleanJet_phi", CleanJet_phi, &b_CleanJet_phi);
   fChain->SetBranchAddress("Lepton_isLoose", Lepton_isLoose, &b_Lepton_isLoose);
   fChain->SetBranchAddress("Lepton_isVeto", Lepton_isVeto, &b_Lepton_isVeto);
   fChain->SetBranchAddress("dmZll_veto", &dmZll_veto, &b_dmZll_veto);
   fChain->SetBranchAddress("Lepton_isTightElectron_mvaFall17V1Iso_WP90_SS", Lepton_isTightElectron_mvaFall17V1Iso_WP90_SS, &b_Lepton_isTightElectron_mvaFall17V1Iso_WP90_SS);
   fChain->SetBranchAddress("Lepton_isTightElectron_mvaFall17V1Iso_WP90_tthmva_70", Lepton_isTightElectron_mvaFall17V1Iso_WP90_tthmva_70, &b_Lepton_isTightElectron_mvaFall17V1Iso_WP90_tthmva_70);
   fChain->SetBranchAddress("Lepton_isTightElectron_mvaFall17V1Iso_WP90", Lepton_isTightElectron_mvaFall17V1Iso_WP90, &b_Lepton_isTightElectron_mvaFall17V1Iso_WP90);
   fChain->SetBranchAddress("Lepton_isTightElectron_mvaFall17V1Iso_WP90_SS_tthmva_70", Lepton_isTightElectron_mvaFall17V1Iso_WP90_SS_tthmva_70, &b_Lepton_isTightElectron_mvaFall17V1Iso_WP90_SS_tthmva_70);
   fChain->SetBranchAddress("Lepton_isTightMuon_cut_Tight_HWWW_tthmva_80", Lepton_isTightMuon_cut_Tight_HWWW_tthmva_80, &b_Lepton_isTightMuon_cut_Tight_HWWW_tthmva_80);
   fChain->SetBranchAddress("Lepton_isTightMuon_cut_Tight_HWWW", Lepton_isTightMuon_cut_Tight_HWWW, &b_Lepton_isTightMuon_cut_Tight_HWWW);
   fChain->SetBranchAddress("FatJet_pt_raw", FatJet_pt_raw, &b_FatJet_pt_raw);
   fChain->SetBranchAddress("FatJet_pt_nom", FatJet_pt_nom, &b_FatJet_pt_nom);
   fChain->SetBranchAddress("FatJet_mass_raw", FatJet_mass_raw, &b_FatJet_mass_raw);
   fChain->SetBranchAddress("FatJet_mass_nom", FatJet_mass_nom, &b_FatJet_mass_nom);
   fChain->SetBranchAddress("FatJet_corr_JEC", FatJet_corr_JEC, &b_FatJet_corr_JEC);
   fChain->SetBranchAddress("FatJet_corr_JER", FatJet_corr_JER, &b_FatJet_corr_JER);
   fChain->SetBranchAddress("FatJet_corr_JMS", FatJet_corr_JMS, &b_FatJet_corr_JMS);
   fChain->SetBranchAddress("FatJet_corr_JMR", FatJet_corr_JMR, &b_FatJet_corr_JMR);
   fChain->SetBranchAddress("FatJet_msoftdrop_raw", FatJet_msoftdrop_raw, &b_FatJet_msoftdrop_raw);
   fChain->SetBranchAddress("FatJet_msoftdrop_nom", FatJet_msoftdrop_nom, &b_FatJet_msoftdrop_nom);
   fChain->SetBranchAddress("FatJet_msoftdrop_corr_JMR", FatJet_msoftdrop_corr_JMR, &b_FatJet_msoftdrop_corr_JMR);
   fChain->SetBranchAddress("FatJet_msoftdrop_corr_JMS", FatJet_msoftdrop_corr_JMS, &b_FatJet_msoftdrop_corr_JMS);
   fChain->SetBranchAddress("FatJet_msoftdrop_corr_PUPPI", FatJet_msoftdrop_corr_PUPPI, &b_FatJet_msoftdrop_corr_PUPPI);
   fChain->SetBranchAddress("FatJet_msoftdrop_tau21DDT_nom", FatJet_msoftdrop_tau21DDT_nom, &b_FatJet_msoftdrop_tau21DDT_nom);
   fChain->SetBranchAddress("FatJet_pt_jerUp", FatJet_pt_jerUp, &b_FatJet_pt_jerUp);
   fChain->SetBranchAddress("FatJet_mass_jerUp", FatJet_mass_jerUp, &b_FatJet_mass_jerUp);
   fChain->SetBranchAddress("FatJet_mass_jmrUp", FatJet_mass_jmrUp, &b_FatJet_mass_jmrUp);
   fChain->SetBranchAddress("FatJet_mass_jmsUp", FatJet_mass_jmsUp, &b_FatJet_mass_jmsUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jerUp", FatJet_msoftdrop_jerUp, &b_FatJet_msoftdrop_jerUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jmrUp", FatJet_msoftdrop_jmrUp, &b_FatJet_msoftdrop_jmrUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jmsUp", FatJet_msoftdrop_jmsUp, &b_FatJet_msoftdrop_jmsUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_tau21DDT_jerUp", FatJet_msoftdrop_tau21DDT_jerUp, &b_FatJet_msoftdrop_tau21DDT_jerUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_tau21DDT_jmrUp", FatJet_msoftdrop_tau21DDT_jmrUp, &b_FatJet_msoftdrop_tau21DDT_jmrUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_tau21DDT_jmsUp", FatJet_msoftdrop_tau21DDT_jmsUp, &b_FatJet_msoftdrop_tau21DDT_jmsUp);
   fChain->SetBranchAddress("FatJet_pt_jesTotalUp", FatJet_pt_jesTotalUp, &b_FatJet_pt_jesTotalUp);
   fChain->SetBranchAddress("FatJet_mass_jesTotalUp", FatJet_mass_jesTotalUp, &b_FatJet_mass_jesTotalUp);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesTotalUp", FatJet_msoftdrop_jesTotalUp, &b_FatJet_msoftdrop_jesTotalUp);
   fChain->SetBranchAddress("FatJet_pt_jerDown", FatJet_pt_jerDown, &b_FatJet_pt_jerDown);
   fChain->SetBranchAddress("FatJet_mass_jerDown", FatJet_mass_jerDown, &b_FatJet_mass_jerDown);
   fChain->SetBranchAddress("FatJet_mass_jmrDown", FatJet_mass_jmrDown, &b_FatJet_mass_jmrDown);
   fChain->SetBranchAddress("FatJet_mass_jmsDown", FatJet_mass_jmsDown, &b_FatJet_mass_jmsDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jerDown", FatJet_msoftdrop_jerDown, &b_FatJet_msoftdrop_jerDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jmrDown", FatJet_msoftdrop_jmrDown, &b_FatJet_msoftdrop_jmrDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jmsDown", FatJet_msoftdrop_jmsDown, &b_FatJet_msoftdrop_jmsDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_tau21DDT_jerDown", FatJet_msoftdrop_tau21DDT_jerDown, &b_FatJet_msoftdrop_tau21DDT_jerDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_tau21DDT_jmrDown", FatJet_msoftdrop_tau21DDT_jmrDown, &b_FatJet_msoftdrop_tau21DDT_jmrDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_tau21DDT_jmsDown", FatJet_msoftdrop_tau21DDT_jmsDown, &b_FatJet_msoftdrop_tau21DDT_jmsDown);
   fChain->SetBranchAddress("FatJet_pt_jesTotalDown", FatJet_pt_jesTotalDown, &b_FatJet_pt_jesTotalDown);
   fChain->SetBranchAddress("FatJet_mass_jesTotalDown", FatJet_mass_jesTotalDown, &b_FatJet_mass_jesTotalDown);
   fChain->SetBranchAddress("FatJet_msoftdrop_jesTotalDown", FatJet_msoftdrop_jesTotalDown, &b_FatJet_msoftdrop_jesTotalDown);
   fChain->SetBranchAddress("nCleanFatJet", &nCleanFatJet, &b_nCleanFatJet);
   fChain->SetBranchAddress("CleanFatJet_jetIdx", CleanFatJet_jetIdx, &b_CleanFatJet_jetIdx);
   fChain->SetBranchAddress("CleanFatJet_pt", CleanFatJet_pt, &b_CleanFatJet_pt);
   fChain->SetBranchAddress("CleanFatJet_eta", CleanFatJet_eta, &b_CleanFatJet_eta);
   fChain->SetBranchAddress("CleanFatJet_phi", CleanFatJet_phi, &b_CleanFatJet_phi);
   fChain->SetBranchAddress("CleanFatJet_mass", CleanFatJet_mass, &b_CleanFatJet_mass);
   fChain->SetBranchAddress("CleanFatJet_tau21", CleanFatJet_tau21, &b_CleanFatJet_tau21);
   fChain->SetBranchAddress("nCleanJetNotFat", &nCleanJetNotFat, &b_nCleanJetNotFat);
   fChain->SetBranchAddress("CleanJetNotFat_jetIdx", CleanJetNotFat_jetIdx, &b_CleanJetNotFat_jetIdx);
   fChain->SetBranchAddress("CleanJetNotFat_deltaR", CleanJetNotFat_deltaR, &b_CleanJetNotFat_deltaR);
   fChain->SetBranchAddress("nLeptonGen", &nLeptonGen, &b_nLeptonGen);
   fChain->SetBranchAddress("LeptonGen_MotherPID", LeptonGen_MotherPID, &b_LeptonGen_MotherPID);
   fChain->SetBranchAddress("LeptonGen_MotherStatus", LeptonGen_MotherStatus, &b_LeptonGen_MotherStatus);
   fChain->SetBranchAddress("LeptonGen_pdgId", LeptonGen_pdgId, &b_LeptonGen_pdgId);
   fChain->SetBranchAddress("LeptonGen_status", LeptonGen_status, &b_LeptonGen_status);
   fChain->SetBranchAddress("LeptonGen_eta", LeptonGen_eta, &b_LeptonGen_eta);
   fChain->SetBranchAddress("LeptonGen_phi", LeptonGen_phi, &b_LeptonGen_phi);
   fChain->SetBranchAddress("LeptonGen_pt", LeptonGen_pt, &b_LeptonGen_pt);
   fChain->SetBranchAddress("LeptonGen_mass", LeptonGen_mass, &b_LeptonGen_mass);
   fChain->SetBranchAddress("LeptonGen_fromHardProcess", LeptonGen_fromHardProcess, &b_LeptonGen_fromHardProcess);
   fChain->SetBranchAddress("LeptonGen_isDirectHadronDecayProduct", LeptonGen_isDirectHadronDecayProduct, &b_LeptonGen_isDirectHadronDecayProduct);
   fChain->SetBranchAddress("LeptonGen_isDirectPromptTauDecayProduct", LeptonGen_isDirectPromptTauDecayProduct, &b_LeptonGen_isDirectPromptTauDecayProduct);
   fChain->SetBranchAddress("LeptonGen_isPrompt", LeptonGen_isPrompt, &b_LeptonGen_isPrompt);
   fChain->SetBranchAddress("LeptonGen_isTauDecayProduct", LeptonGen_isTauDecayProduct, &b_LeptonGen_isTauDecayProduct);
   fChain->SetBranchAddress("nNeutrinoGen", &nNeutrinoGen, &b_nNeutrinoGen);
   fChain->SetBranchAddress("NeutrinoGen_MotherPID", NeutrinoGen_MotherPID, &b_NeutrinoGen_MotherPID);
   fChain->SetBranchAddress("NeutrinoGen_MotherStatus", NeutrinoGen_MotherStatus, &b_NeutrinoGen_MotherStatus);
   fChain->SetBranchAddress("NeutrinoGen_pdgId", NeutrinoGen_pdgId, &b_NeutrinoGen_pdgId);
   fChain->SetBranchAddress("NeutrinoGen_status", NeutrinoGen_status, &b_NeutrinoGen_status);
   fChain->SetBranchAddress("NeutrinoGen_eta", NeutrinoGen_eta, &b_NeutrinoGen_eta);
   fChain->SetBranchAddress("NeutrinoGen_phi", NeutrinoGen_phi, &b_NeutrinoGen_phi);
   fChain->SetBranchAddress("NeutrinoGen_pt", NeutrinoGen_pt, &b_NeutrinoGen_pt);
   fChain->SetBranchAddress("NeutrinoGen_mass", NeutrinoGen_mass, &b_NeutrinoGen_mass);
   fChain->SetBranchAddress("NeutrinoGen_fromHardProcess", NeutrinoGen_fromHardProcess, &b_NeutrinoGen_fromHardProcess);
   fChain->SetBranchAddress("NeutrinoGen_isDirectHadronDecayProduct", NeutrinoGen_isDirectHadronDecayProduct, &b_NeutrinoGen_isDirectHadronDecayProduct);
   fChain->SetBranchAddress("NeutrinoGen_isDirectPromptTauDecayProduct", NeutrinoGen_isDirectPromptTauDecayProduct, &b_NeutrinoGen_isDirectPromptTauDecayProduct);
   fChain->SetBranchAddress("NeutrinoGen_isPrompt", NeutrinoGen_isPrompt, &b_NeutrinoGen_isPrompt);
   fChain->SetBranchAddress("NeutrinoGen_isTauDecayProduct", NeutrinoGen_isTauDecayProduct, &b_NeutrinoGen_isTauDecayProduct);
   fChain->SetBranchAddress("nPhotonGen", &nPhotonGen, &b_nPhotonGen);
   fChain->SetBranchAddress("PhotonGen_MotherPID", PhotonGen_MotherPID, &b_PhotonGen_MotherPID);
   fChain->SetBranchAddress("PhotonGen_MotherStatus", PhotonGen_MotherStatus, &b_PhotonGen_MotherStatus);
   fChain->SetBranchAddress("PhotonGen_pdgId", PhotonGen_pdgId, &b_PhotonGen_pdgId);
   fChain->SetBranchAddress("PhotonGen_status", PhotonGen_status, &b_PhotonGen_status);
   fChain->SetBranchAddress("PhotonGen_eta", PhotonGen_eta, &b_PhotonGen_eta);
   fChain->SetBranchAddress("PhotonGen_phi", PhotonGen_phi, &b_PhotonGen_phi);
   fChain->SetBranchAddress("PhotonGen_pt", PhotonGen_pt, &b_PhotonGen_pt);
   fChain->SetBranchAddress("PhotonGen_mass", PhotonGen_mass, &b_PhotonGen_mass);
   fChain->SetBranchAddress("PhotonGen_fromHardProcess", PhotonGen_fromHardProcess, &b_PhotonGen_fromHardProcess);
   fChain->SetBranchAddress("PhotonGen_isDirectHadronDecayProduct", PhotonGen_isDirectHadronDecayProduct, &b_PhotonGen_isDirectHadronDecayProduct);
   fChain->SetBranchAddress("PhotonGen_isDirectPromptTauDecayProduct", PhotonGen_isDirectPromptTauDecayProduct, &b_PhotonGen_isDirectPromptTauDecayProduct);
   fChain->SetBranchAddress("PhotonGen_isPrompt", PhotonGen_isPrompt, &b_PhotonGen_isPrompt);
   fChain->SetBranchAddress("PhotonGen_isTauDecayProduct", PhotonGen_isTauDecayProduct, &b_PhotonGen_isTauDecayProduct);
   fChain->SetBranchAddress("gen_ptllmet", &gen_ptllmet, &b_gen_ptllmet);
   fChain->SetBranchAddress("gen_ptll", &gen_ptll, &b_gen_ptll);
   fChain->SetBranchAddress("gen_mll", &gen_mll, &b_gen_mll);
   fChain->SetBranchAddress("gen_llchannel", &gen_llchannel, &b_gen_llchannel);
   fChain->SetBranchAddress("gen_mlvlv", &gen_mlvlv, &b_gen_mlvlv);
   fChain->SetBranchAddress("lhe_mlvlv", &lhe_mlvlv, &b_lhe_mlvlv);
   fChain->SetBranchAddress("lhe_mWp", &lhe_mWp, &b_lhe_mWp);
   fChain->SetBranchAddress("lhe_mWm", &lhe_mWm, &b_lhe_mWm);
   fChain->SetBranchAddress("Lepton_genmatched", Lepton_genmatched, &b_Lepton_genmatched);
   fChain->SetBranchAddress("Lepton_promptgenmatched", Lepton_promptgenmatched, &b_Lepton_promptgenmatched);
   fChain->SetBranchAddress("higgsGenPt", &higgsGenPt, &b_higgsGenPt);
   fChain->SetBranchAddress("higgsGenEta", &higgsGenEta, &b_higgsGenEta);
   fChain->SetBranchAddress("higgsGenPhi", &higgsGenPhi, &b_higgsGenPhi);
   fChain->SetBranchAddress("higgsGenMass", &higgsGenMass, &b_higgsGenMass);
   fChain->SetBranchAddress("genVPt", &genVPt, &b_genVPt);
   fChain->SetBranchAddress("nllnnloW", &nllnnloW, &b_nllnnloW);
   fChain->SetBranchAddress("nllW", &nllW, &b_nllW);
   fChain->SetBranchAddress("nllW_Rup", &nllW_Rup, &b_nllW_Rup);
   fChain->SetBranchAddress("nllW_Qup", &nllW_Qup, &b_nllW_Qup);
   fChain->SetBranchAddress("nllW_Rdown", &nllW_Rdown, &b_nllW_Rdown);
   fChain->SetBranchAddress("nllW_Qdown", &nllW_Qdown, &b_nllW_Qdown);
   fChain->SetBranchAddress("gen_mww", &gen_mww, &b_gen_mww);
   fChain->SetBranchAddress("gen_ptww", &gen_ptww, &b_gen_ptww);
   fChain->SetBranchAddress("Gen_ZGstar_mu1_pt", &Gen_ZGstar_mu1_pt, &b_Gen_ZGstar_mu1_pt);
   fChain->SetBranchAddress("Gen_ZGstar_mu1_eta", &Gen_ZGstar_mu1_eta, &b_Gen_ZGstar_mu1_eta);
   fChain->SetBranchAddress("Gen_ZGstar_mu1_phi", &Gen_ZGstar_mu1_phi, &b_Gen_ZGstar_mu1_phi);
   fChain->SetBranchAddress("Gen_ZGstar_mu2_pt", &Gen_ZGstar_mu2_pt, &b_Gen_ZGstar_mu2_pt);
   fChain->SetBranchAddress("Gen_ZGstar_mu2_eta", &Gen_ZGstar_mu2_eta, &b_Gen_ZGstar_mu2_eta);
   fChain->SetBranchAddress("Gen_ZGstar_mu2_phi", &Gen_ZGstar_mu2_phi, &b_Gen_ZGstar_mu2_phi);
   fChain->SetBranchAddress("Gen_ZGstar_ele1_pt", &Gen_ZGstar_ele1_pt, &b_Gen_ZGstar_ele1_pt);
   fChain->SetBranchAddress("Gen_ZGstar_ele1_eta", &Gen_ZGstar_ele1_eta, &b_Gen_ZGstar_ele1_eta);
   fChain->SetBranchAddress("Gen_ZGstar_ele1_phi", &Gen_ZGstar_ele1_phi, &b_Gen_ZGstar_ele1_phi);
   fChain->SetBranchAddress("Gen_ZGstar_ele2_pt", &Gen_ZGstar_ele2_pt, &b_Gen_ZGstar_ele2_pt);
   fChain->SetBranchAddress("Gen_ZGstar_ele2_eta", &Gen_ZGstar_ele2_eta, &b_Gen_ZGstar_ele2_eta);
   fChain->SetBranchAddress("Gen_ZGstar_ele2_phi", &Gen_ZGstar_ele2_phi, &b_Gen_ZGstar_ele2_phi);
   fChain->SetBranchAddress("Gen_ZGstar_mass", &Gen_ZGstar_mass, &b_Gen_ZGstar_mass);
   fChain->SetBranchAddress("Gen_ZGstar_deltaR", &Gen_ZGstar_deltaR, &b_Gen_ZGstar_deltaR);
   fChain->SetBranchAddress("Gen_ZGstar_MomId", &Gen_ZGstar_MomId, &b_Gen_ZGstar_MomId);
   fChain->SetBranchAddress("Gen_ZGstar_MomStatus", &Gen_ZGstar_MomStatus, &b_Gen_ZGstar_MomStatus);
   fChain->SetBranchAddress("nDressedLepton", &nDressedLepton, &b_nDressedLepton);
   fChain->SetBranchAddress("DressedLepton_pdgId", DressedLepton_pdgId, &b_DressedLepton_pdgId);
   fChain->SetBranchAddress("DressedLepton_pt", DressedLepton_pt, &b_DressedLepton_pt);
   fChain->SetBranchAddress("DressedLepton_eta", DressedLepton_eta, &b_DressedLepton_eta);
   fChain->SetBranchAddress("DressedLepton_phi", DressedLepton_phi, &b_DressedLepton_phi);
   fChain->SetBranchAddress("DressedLepton_mass", DressedLepton_mass, &b_DressedLepton_mass);
   fChain->SetBranchAddress("baseW", &baseW, &b_baseW);
   fChain->SetBranchAddress("Xsec", &Xsec, &b_Xsec);
   fChain->SetBranchAddress("CleanJet_mass", CleanJet_mass, &b_CleanJet_mass);
   fChain->SetBranchAddress("CleanJet_corr_JER", CleanJet_corr_JER, &b_CleanJet_corr_JER);
   fChain->SetBranchAddress("CleanJet_pt_JERUp", CleanJet_pt_JERUp, &b_CleanJet_pt_JERUp);
   fChain->SetBranchAddress("CleanJet_mass_JERUp", CleanJet_mass_JERUp, &b_CleanJet_mass_JERUp);
   fChain->SetBranchAddress("CleanJet_pt_JERDown", CleanJet_pt_JERDown, &b_CleanJet_pt_JERDown);
   fChain->SetBranchAddress("CleanJet_mass_JERDown", CleanJet_mass_JERDown, &b_CleanJet_mass_JERDown);
   fChain->SetBranchAddress("Jet_btagSF_deepcsv_M_down", Jet_btagSF_deepcsv_M_down, &b_Jet_btagSF_deepcsv_M_down);
   fChain->SetBranchAddress("Jet_btagSF_deepcsv_M", Jet_btagSF_deepcsv_M, &b_Jet_btagSF_deepcsv_M);
   fChain->SetBranchAddress("Jet_btagSF_deepcsv_M_up", Jet_btagSF_deepcsv_M_up, &b_Jet_btagSF_deepcsv_M_up);
   fChain->SetBranchAddress("Jet_btagSF_deepcsv_shape_down_hf", Jet_btagSF_deepcsv_shape_down_hf, &b_Jet_btagSF_deepcsv_shape_down_hf);
   fChain->SetBranchAddress("Jet_btagSF_deepcsv_shape", Jet_btagSF_deepcsv_shape, &b_Jet_btagSF_deepcsv_shape);
   fChain->SetBranchAddress("Jet_btagSF_deepcsv_shape_up_cferr1", Jet_btagSF_deepcsv_shape_up_cferr1, &b_Jet_btagSF_deepcsv_shape_up_cferr1);
   fChain->SetBranchAddress("Jet_btagSF_deepcsv_shape_up_jes", Jet_btagSF_deepcsv_shape_up_jes, &b_Jet_btagSF_deepcsv_shape_up_jes);
   fChain->SetBranchAddress("Jet_btagSF_deepcsv_shape_down_cferr2", Jet_btagSF_deepcsv_shape_down_cferr2, &b_Jet_btagSF_deepcsv_shape_down_cferr2);
   fChain->SetBranchAddress("Jet_btagSF_deepcsv_shape_up_lf", Jet_btagSF_deepcsv_shape_up_lf, &b_Jet_btagSF_deepcsv_shape_up_lf);
   fChain->SetBranchAddress("Jet_btagSF_deepcsv_shape_down_lf", Jet_btagSF_deepcsv_shape_down_lf, &b_Jet_btagSF_deepcsv_shape_down_lf);
   fChain->SetBranchAddress("Jet_btagSF_deepcsv_shape_down_cferr1", Jet_btagSF_deepcsv_shape_down_cferr1, &b_Jet_btagSF_deepcsv_shape_down_cferr1);
   fChain->SetBranchAddress("Jet_btagSF_deepcsv_shape_up_lfstats1", Jet_btagSF_deepcsv_shape_up_lfstats1, &b_Jet_btagSF_deepcsv_shape_up_lfstats1);
   fChain->SetBranchAddress("Jet_btagSF_deepcsv_shape_up_lfstats2", Jet_btagSF_deepcsv_shape_up_lfstats2, &b_Jet_btagSF_deepcsv_shape_up_lfstats2);
   fChain->SetBranchAddress("Jet_btagSF_deepcsv_shape_up_hfstats1", Jet_btagSF_deepcsv_shape_up_hfstats1, &b_Jet_btagSF_deepcsv_shape_up_hfstats1);
   fChain->SetBranchAddress("Jet_btagSF_deepcsv_shape_up_hfstats2", Jet_btagSF_deepcsv_shape_up_hfstats2, &b_Jet_btagSF_deepcsv_shape_up_hfstats2);
   fChain->SetBranchAddress("Jet_btagSF_deepcsv_shape_down_lfstats2", Jet_btagSF_deepcsv_shape_down_lfstats2, &b_Jet_btagSF_deepcsv_shape_down_lfstats2);
   fChain->SetBranchAddress("Jet_btagSF_deepcsv_shape_up_hf", Jet_btagSF_deepcsv_shape_up_hf, &b_Jet_btagSF_deepcsv_shape_up_hf);
   fChain->SetBranchAddress("Jet_btagSF_deepcsv_shape_down_lfstats1", Jet_btagSF_deepcsv_shape_down_lfstats1, &b_Jet_btagSF_deepcsv_shape_down_lfstats1);
   fChain->SetBranchAddress("Jet_btagSF_deepcsv_shape_down_jes", Jet_btagSF_deepcsv_shape_down_jes, &b_Jet_btagSF_deepcsv_shape_down_jes);
   fChain->SetBranchAddress("Jet_btagSF_deepcsv_shape_down_hfstats2", Jet_btagSF_deepcsv_shape_down_hfstats2, &b_Jet_btagSF_deepcsv_shape_down_hfstats2);
   fChain->SetBranchAddress("Jet_btagSF_deepcsv_shape_down_hfstats1", Jet_btagSF_deepcsv_shape_down_hfstats1, &b_Jet_btagSF_deepcsv_shape_down_hfstats1);
   fChain->SetBranchAddress("Jet_btagSF_deepcsv_shape_up_cferr2", Jet_btagSF_deepcsv_shape_up_cferr2, &b_Jet_btagSF_deepcsv_shape_up_cferr2);
   fChain->SetBranchAddress("Jet_PUIDSF_loose", Jet_PUIDSF_loose, &b_Jet_PUIDSF_loose);
   fChain->SetBranchAddress("Jet_PUIDSF_loose_up", Jet_PUIDSF_loose_up, &b_Jet_PUIDSF_loose_up);
   fChain->SetBranchAddress("Jet_PUIDSF_loose_down", Jet_PUIDSF_loose_down, &b_Jet_PUIDSF_loose_down);
   fChain->SetBranchAddress("Jet_PUIDSF_medium", Jet_PUIDSF_medium, &b_Jet_PUIDSF_medium);
   fChain->SetBranchAddress("Jet_PUIDSF_medium_up", Jet_PUIDSF_medium_up, &b_Jet_PUIDSF_medium_up);
   fChain->SetBranchAddress("Jet_PUIDSF_medium_down", Jet_PUIDSF_medium_down, &b_Jet_PUIDSF_medium_down);
   fChain->SetBranchAddress("Jet_PUIDSF_tight", Jet_PUIDSF_tight, &b_Jet_PUIDSF_tight);
   fChain->SetBranchAddress("Jet_PUIDSF_tight_up", Jet_PUIDSF_tight_up, &b_Jet_PUIDSF_tight_up);
   fChain->SetBranchAddress("Jet_PUIDSF_tight_down", Jet_PUIDSF_tight_down, &b_Jet_PUIDSF_tight_down);
   fChain->SetBranchAddress("Lepton_rochesterSF", Lepton_rochesterSF, &b_Lepton_rochesterSF);
   fChain->SetBranchAddress("TriggerEmulator", TriggerEmulator, &b_TriggerEmulator);
   fChain->SetBranchAddress("EMTFbug_veto", &EMTFbug_veto, &b_EMTFbug_veto);
   fChain->SetBranchAddress("run_period", &run_period, &b_run_period);
   fChain->SetBranchAddress("Trigger_sngEl", &Trigger_sngEl, &b_Trigger_sngEl);
   fChain->SetBranchAddress("Trigger_sngMu", &Trigger_sngMu, &b_Trigger_sngMu);
   fChain->SetBranchAddress("Trigger_dblEl", &Trigger_dblEl, &b_Trigger_dblEl);
   fChain->SetBranchAddress("Trigger_dblMu", &Trigger_dblMu, &b_Trigger_dblMu);
   fChain->SetBranchAddress("Trigger_ElMu", &Trigger_ElMu, &b_Trigger_ElMu);
   fChain->SetBranchAddress("TriggerEffWeight_1l", &TriggerEffWeight_1l, &b_TriggerEffWeight_1l);
   fChain->SetBranchAddress("TriggerEffWeight_1l_u", &TriggerEffWeight_1l_u, &b_TriggerEffWeight_1l_u);
   fChain->SetBranchAddress("TriggerEffWeight_1l_d", &TriggerEffWeight_1l_d, &b_TriggerEffWeight_1l_d);
   fChain->SetBranchAddress("TriggerEffWeight_2l", &TriggerEffWeight_2l, &b_TriggerEffWeight_2l);
   fChain->SetBranchAddress("TriggerEffWeight_2l_u", &TriggerEffWeight_2l_u, &b_TriggerEffWeight_2l_u);
   fChain->SetBranchAddress("TriggerEffWeight_2l_d", &TriggerEffWeight_2l_d, &b_TriggerEffWeight_2l_d);
   fChain->SetBranchAddress("TriggerEffWeight_3l", &TriggerEffWeight_3l, &b_TriggerEffWeight_3l);
   fChain->SetBranchAddress("TriggerEffWeight_3l_u", &TriggerEffWeight_3l_u, &b_TriggerEffWeight_3l_u);
   fChain->SetBranchAddress("TriggerEffWeight_3l_d", &TriggerEffWeight_3l_d, &b_TriggerEffWeight_3l_d);
   fChain->SetBranchAddress("TriggerEffWeight_4l", &TriggerEffWeight_4l, &b_TriggerEffWeight_4l);
   fChain->SetBranchAddress("TriggerEffWeight_4l_u", &TriggerEffWeight_4l_u, &b_TriggerEffWeight_4l_u);
   fChain->SetBranchAddress("TriggerEffWeight_4l_d", &TriggerEffWeight_4l_d, &b_TriggerEffWeight_4l_d);
   fChain->SetBranchAddress("TriggerEffWeight_sngEl", &TriggerEffWeight_sngEl, &b_TriggerEffWeight_sngEl);
   fChain->SetBranchAddress("TriggerEffWeight_sngMu", &TriggerEffWeight_sngMu, &b_TriggerEffWeight_sngMu);
   fChain->SetBranchAddress("TriggerEffWeight_dblEl", &TriggerEffWeight_dblEl, &b_TriggerEffWeight_dblEl);
   fChain->SetBranchAddress("TriggerEffWeight_dblMu", &TriggerEffWeight_dblMu, &b_TriggerEffWeight_dblMu);
   fChain->SetBranchAddress("TriggerEffWeight_ElMu", &TriggerEffWeight_ElMu, &b_TriggerEffWeight_ElMu);
   fChain->SetBranchAddress("Lepton_RecoSF", Lepton_RecoSF, &b_Lepton_RecoSF);
   fChain->SetBranchAddress("Lepton_RecoSF_Up", Lepton_RecoSF_Up, &b_Lepton_RecoSF_Up);
   fChain->SetBranchAddress("Lepton_RecoSF_Down", Lepton_RecoSF_Down, &b_Lepton_RecoSF_Down);
   fChain->SetBranchAddress("Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_IdIsoSF", Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_IdIsoSF, &b_Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_IdIsoSF);
   fChain->SetBranchAddress("Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_IdIsoSF_Up", Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_IdIsoSF_Up, &b_Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_IdIsoSF_Up);
   fChain->SetBranchAddress("Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_IdIsoSF_Down", Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_IdIsoSF_Down, &b_Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_IdIsoSF_Down);
   fChain->SetBranchAddress("Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_IdIsoSF_Syst", Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_IdIsoSF_Syst, &b_Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_IdIsoSF_Syst);
   fChain->SetBranchAddress("Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_TotSF", Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_TotSF, &b_Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_TotSF);
   fChain->SetBranchAddress("Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_TotSF_Up", Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_TotSF_Up, &b_Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_TotSF_Up);
   fChain->SetBranchAddress("Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_TotSF_Down", Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_TotSF_Down, &b_Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_TotSF_Down);
   fChain->SetBranchAddress("Lepton_tightElectron_mvaFall17V1Iso_WP90_tthmva_70_IdIsoSF", Lepton_tightElectron_mvaFall17V1Iso_WP90_tthmva_70_IdIsoSF, &b_Lepton_tightElectron_mvaFall17V1Iso_WP90_tthmva_70_IdIsoSF);
   fChain->SetBranchAddress("Lepton_tightElectron_mvaFall17V1Iso_WP90_tthmva_70_IdIsoSF_Up", Lepton_tightElectron_mvaFall17V1Iso_WP90_tthmva_70_IdIsoSF_Up, &b_Lepton_tightElectron_mvaFall17V1Iso_WP90_tthmva_70_IdIsoSF_Up);
   fChain->SetBranchAddress("Lepton_tightElectron_mvaFall17V1Iso_WP90_tthmva_70_IdIsoSF_Down", Lepton_tightElectron_mvaFall17V1Iso_WP90_tthmva_70_IdIsoSF_Down, &b_Lepton_tightElectron_mvaFall17V1Iso_WP90_tthmva_70_IdIsoSF_Down);
   fChain->SetBranchAddress("Lepton_tightElectron_mvaFall17V1Iso_WP90_tthmva_70_IdIsoSF_Syst", Lepton_tightElectron_mvaFall17V1Iso_WP90_tthmva_70_IdIsoSF_Syst, &b_Lepton_tightElectron_mvaFall17V1Iso_WP90_tthmva_70_IdIsoSF_Syst);
   fChain->SetBranchAddress("Lepton_tightElectron_mvaFall17V1Iso_WP90_tthmva_70_TotSF", Lepton_tightElectron_mvaFall17V1Iso_WP90_tthmva_70_TotSF, &b_Lepton_tightElectron_mvaFall17V1Iso_WP90_tthmva_70_TotSF);
   fChain->SetBranchAddress("Lepton_tightElectron_mvaFall17V1Iso_WP90_tthmva_70_TotSF_Up", Lepton_tightElectron_mvaFall17V1Iso_WP90_tthmva_70_TotSF_Up, &b_Lepton_tightElectron_mvaFall17V1Iso_WP90_tthmva_70_TotSF_Up);
   fChain->SetBranchAddress("Lepton_tightElectron_mvaFall17V1Iso_WP90_tthmva_70_TotSF_Down", Lepton_tightElectron_mvaFall17V1Iso_WP90_tthmva_70_TotSF_Down, &b_Lepton_tightElectron_mvaFall17V1Iso_WP90_tthmva_70_TotSF_Down);
   fChain->SetBranchAddress("Lepton_tightElectron_mvaFall17V1Iso_WP90_IdIsoSF", Lepton_tightElectron_mvaFall17V1Iso_WP90_IdIsoSF, &b_Lepton_tightElectron_mvaFall17V1Iso_WP90_IdIsoSF);
   fChain->SetBranchAddress("Lepton_tightElectron_mvaFall17V1Iso_WP90_IdIsoSF_Up", Lepton_tightElectron_mvaFall17V1Iso_WP90_IdIsoSF_Up, &b_Lepton_tightElectron_mvaFall17V1Iso_WP90_IdIsoSF_Up);
   fChain->SetBranchAddress("Lepton_tightElectron_mvaFall17V1Iso_WP90_IdIsoSF_Down", Lepton_tightElectron_mvaFall17V1Iso_WP90_IdIsoSF_Down, &b_Lepton_tightElectron_mvaFall17V1Iso_WP90_IdIsoSF_Down);
   fChain->SetBranchAddress("Lepton_tightElectron_mvaFall17V1Iso_WP90_IdIsoSF_Syst", Lepton_tightElectron_mvaFall17V1Iso_WP90_IdIsoSF_Syst, &b_Lepton_tightElectron_mvaFall17V1Iso_WP90_IdIsoSF_Syst);
   fChain->SetBranchAddress("Lepton_tightElectron_mvaFall17V1Iso_WP90_TotSF", Lepton_tightElectron_mvaFall17V1Iso_WP90_TotSF, &b_Lepton_tightElectron_mvaFall17V1Iso_WP90_TotSF);
   fChain->SetBranchAddress("Lepton_tightElectron_mvaFall17V1Iso_WP90_TotSF_Up", Lepton_tightElectron_mvaFall17V1Iso_WP90_TotSF_Up, &b_Lepton_tightElectron_mvaFall17V1Iso_WP90_TotSF_Up);
   fChain->SetBranchAddress("Lepton_tightElectron_mvaFall17V1Iso_WP90_TotSF_Down", Lepton_tightElectron_mvaFall17V1Iso_WP90_TotSF_Down, &b_Lepton_tightElectron_mvaFall17V1Iso_WP90_TotSF_Down);
   fChain->SetBranchAddress("Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_tthmva_70_IdIsoSF", Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_tthmva_70_IdIsoSF, &b_Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_tthmva_70_IdIsoSF);
   fChain->SetBranchAddress("Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_tthmva_70_IdIsoSF_Up", Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_tthmva_70_IdIsoSF_Up, &b_Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_tthmva_70_IdIsoSF_Up);
   fChain->SetBranchAddress("Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_tthmva_70_IdIsoSF_Down", Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_tthmva_70_IdIsoSF_Down, &b_Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_tthmva_70_IdIsoSF_Down);
   fChain->SetBranchAddress("Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_tthmva_70_IdIsoSF_Syst", Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_tthmva_70_IdIsoSF_Syst, &b_Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_tthmva_70_IdIsoSF_Syst);
   fChain->SetBranchAddress("Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_tthmva_70_TotSF", Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_tthmva_70_TotSF, &b_Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_tthmva_70_TotSF);
   fChain->SetBranchAddress("Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_tthmva_70_TotSF_Up", Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_tthmva_70_TotSF_Up, &b_Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_tthmva_70_TotSF_Up);
   fChain->SetBranchAddress("Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_tthmva_70_TotSF_Down", Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_tthmva_70_TotSF_Down, &b_Lepton_tightElectron_mvaFall17V1Iso_WP90_SS_tthmva_70_TotSF_Down);
   fChain->SetBranchAddress("Lepton_tightMuon_cut_Tight_HWWW_tthmva_80_IdIsoSF", Lepton_tightMuon_cut_Tight_HWWW_tthmva_80_IdIsoSF, &b_Lepton_tightMuon_cut_Tight_HWWW_tthmva_80_IdIsoSF);
   fChain->SetBranchAddress("Lepton_tightMuon_cut_Tight_HWWW_tthmva_80_IdIsoSF_Up", Lepton_tightMuon_cut_Tight_HWWW_tthmva_80_IdIsoSF_Up, &b_Lepton_tightMuon_cut_Tight_HWWW_tthmva_80_IdIsoSF_Up);
   fChain->SetBranchAddress("Lepton_tightMuon_cut_Tight_HWWW_tthmva_80_IdIsoSF_Down", Lepton_tightMuon_cut_Tight_HWWW_tthmva_80_IdIsoSF_Down, &b_Lepton_tightMuon_cut_Tight_HWWW_tthmva_80_IdIsoSF_Down);
   fChain->SetBranchAddress("Lepton_tightMuon_cut_Tight_HWWW_tthmva_80_IdIsoSF_Syst", Lepton_tightMuon_cut_Tight_HWWW_tthmva_80_IdIsoSF_Syst, &b_Lepton_tightMuon_cut_Tight_HWWW_tthmva_80_IdIsoSF_Syst);
   fChain->SetBranchAddress("Lepton_tightMuon_cut_Tight_HWWW_tthmva_80_TotSF", Lepton_tightMuon_cut_Tight_HWWW_tthmva_80_TotSF, &b_Lepton_tightMuon_cut_Tight_HWWW_tthmva_80_TotSF);
   fChain->SetBranchAddress("Lepton_tightMuon_cut_Tight_HWWW_tthmva_80_TotSF_Up", Lepton_tightMuon_cut_Tight_HWWW_tthmva_80_TotSF_Up, &b_Lepton_tightMuon_cut_Tight_HWWW_tthmva_80_TotSF_Up);
   fChain->SetBranchAddress("Lepton_tightMuon_cut_Tight_HWWW_tthmva_80_TotSF_Down", Lepton_tightMuon_cut_Tight_HWWW_tthmva_80_TotSF_Down, &b_Lepton_tightMuon_cut_Tight_HWWW_tthmva_80_TotSF_Down);
   fChain->SetBranchAddress("Lepton_tightMuon_cut_Tight_HWWW_IdIsoSF", Lepton_tightMuon_cut_Tight_HWWW_IdIsoSF, &b_Lepton_tightMuon_cut_Tight_HWWW_IdIsoSF);
   fChain->SetBranchAddress("Lepton_tightMuon_cut_Tight_HWWW_IdIsoSF_Up", Lepton_tightMuon_cut_Tight_HWWW_IdIsoSF_Up, &b_Lepton_tightMuon_cut_Tight_HWWW_IdIsoSF_Up);
   fChain->SetBranchAddress("Lepton_tightMuon_cut_Tight_HWWW_IdIsoSF_Down", Lepton_tightMuon_cut_Tight_HWWW_IdIsoSF_Down, &b_Lepton_tightMuon_cut_Tight_HWWW_IdIsoSF_Down);
   fChain->SetBranchAddress("Lepton_tightMuon_cut_Tight_HWWW_IdIsoSF_Syst", Lepton_tightMuon_cut_Tight_HWWW_IdIsoSF_Syst, &b_Lepton_tightMuon_cut_Tight_HWWW_IdIsoSF_Syst);
   fChain->SetBranchAddress("Lepton_tightMuon_cut_Tight_HWWW_TotSF", Lepton_tightMuon_cut_Tight_HWWW_TotSF, &b_Lepton_tightMuon_cut_Tight_HWWW_TotSF);
   fChain->SetBranchAddress("Lepton_tightMuon_cut_Tight_HWWW_TotSF_Up", Lepton_tightMuon_cut_Tight_HWWW_TotSF_Up, &b_Lepton_tightMuon_cut_Tight_HWWW_TotSF_Up);
   fChain->SetBranchAddress("Lepton_tightMuon_cut_Tight_HWWW_TotSF_Down", Lepton_tightMuon_cut_Tight_HWWW_TotSF_Down, &b_Lepton_tightMuon_cut_Tight_HWWW_TotSF_Down);
   fChain->SetBranchAddress("puWeight_2018", &puWeight_2018, &b_puWeight_2018);
   fChain->SetBranchAddress("puWeight", &puWeight, &b_puWeight);
   fChain->SetBranchAddress("puWeight_2018Up", &puWeight_2018Up, &b_puWeight_2018Up);
   fChain->SetBranchAddress("puWeightUp", &puWeightUp, &b_puWeightUp);
   fChain->SetBranchAddress("puWeight_2018Down", &puWeight_2018Down, &b_puWeight_2018Down);
   fChain->SetBranchAddress("puWeightDown", &puWeightDown, &b_puWeightDown);
   fChain->SetBranchAddress("mll", &mll, &b_mll);
   fChain->SetBranchAddress("dphill", &dphill, &b_dphill);
   fChain->SetBranchAddress("yll", &yll, &b_yll);
   fChain->SetBranchAddress("ptll", &ptll, &b_ptll);
   fChain->SetBranchAddress("pt1", &pt1, &b_pt1);
   fChain->SetBranchAddress("pt2", &pt2, &b_pt2);
   fChain->SetBranchAddress("mth", &mth, &b_mth);
   fChain->SetBranchAddress("mcoll", &mcoll, &b_mcoll);
   fChain->SetBranchAddress("mcollWW", &mcollWW, &b_mcollWW);
   fChain->SetBranchAddress("mTi", &mTi, &b_mTi);
   fChain->SetBranchAddress("mTe", &mTe, &b_mTe);
   fChain->SetBranchAddress("choiMass", &choiMass, &b_choiMass);
   fChain->SetBranchAddress("mR", &mR, &b_mR);
   fChain->SetBranchAddress("mT2", &mT2, &b_mT2);
   fChain->SetBranchAddress("channel", &channel, &b_channel);
   fChain->SetBranchAddress("drll", &drll, &b_drll);
   fChain->SetBranchAddress("dphilljet", &dphilljet, &b_dphilljet);
   fChain->SetBranchAddress("dphilljetjet", &dphilljetjet, &b_dphilljetjet);
   fChain->SetBranchAddress("dphilljetjet_cut", &dphilljetjet_cut, &b_dphilljetjet_cut);
   fChain->SetBranchAddress("dphillmet", &dphillmet, &b_dphillmet);
   fChain->SetBranchAddress("dphilmet", &dphilmet, &b_dphilmet);
   fChain->SetBranchAddress("dphilmet1", &dphilmet1, &b_dphilmet1);
   fChain->SetBranchAddress("dphilmet2", &dphilmet2, &b_dphilmet2);
   fChain->SetBranchAddress("mtw1", &mtw1, &b_mtw1);
   fChain->SetBranchAddress("mtw2", &mtw2, &b_mtw2);
   fChain->SetBranchAddress("mjj", &mjj, &b_mjj);
   fChain->SetBranchAddress("detajj", &detajj, &b_detajj);
   fChain->SetBranchAddress("njet", &njet, &b_njet);
   fChain->SetBranchAddress("mllWgSt", &mllWgSt, &b_mllWgSt);
   fChain->SetBranchAddress("drllWgSt", &drllWgSt, &b_drllWgSt);
   fChain->SetBranchAddress("mllThird", &mllThird, &b_mllThird);
   fChain->SetBranchAddress("mllOneThree", &mllOneThree, &b_mllOneThree);
   fChain->SetBranchAddress("mllTwoThree", &mllTwoThree, &b_mllTwoThree);
   fChain->SetBranchAddress("drllOneThree", &drllOneThree, &b_drllOneThree);
   fChain->SetBranchAddress("drllTwoThree", &drllTwoThree, &b_drllTwoThree);
   fChain->SetBranchAddress("dphijet1met", &dphijet1met, &b_dphijet1met);
   fChain->SetBranchAddress("dphijet2met", &dphijet2met, &b_dphijet2met);
   fChain->SetBranchAddress("dphijjmet", &dphijjmet, &b_dphijjmet);
   fChain->SetBranchAddress("dphijjmet_cut", &dphijjmet_cut, &b_dphijjmet_cut);
   fChain->SetBranchAddress("dphilep1jet1", &dphilep1jet1, &b_dphilep1jet1);
   fChain->SetBranchAddress("dphilep1jet2", &dphilep1jet2, &b_dphilep1jet2);
   fChain->SetBranchAddress("dphilep2jet1", &dphilep2jet1, &b_dphilep2jet1);
   fChain->SetBranchAddress("dphilep2jet2", &dphilep2jet2, &b_dphilep2jet2);
   fChain->SetBranchAddress("mindetajl", &mindetajl, &b_mindetajl);
   fChain->SetBranchAddress("detall", &detall, &b_detall);
   fChain->SetBranchAddress("dphijj", &dphijj, &b_dphijj);
   fChain->SetBranchAddress("maxdphilepjj", &maxdphilepjj, &b_maxdphilepjj);
   fChain->SetBranchAddress("dphilep1jj", &dphilep1jj, &b_dphilep1jj);
   fChain->SetBranchAddress("dphilep2jj", &dphilep2jj, &b_dphilep2jj);
   fChain->SetBranchAddress("ht", &ht, &b_ht);
   fChain->SetBranchAddress("vht_pt", &vht_pt, &b_vht_pt);
   fChain->SetBranchAddress("vht_phi", &vht_phi, &b_vht_phi);
   fChain->SetBranchAddress("projpfmet", &projpfmet, &b_projpfmet);
   fChain->SetBranchAddress("dphiltkmet", &dphiltkmet, &b_dphiltkmet);
   fChain->SetBranchAddress("projtkmet", &projtkmet, &b_projtkmet);
   fChain->SetBranchAddress("mpmet", &mpmet, &b_mpmet);
   fChain->SetBranchAddress("pTWW", &pTWW, &b_pTWW);
   fChain->SetBranchAddress("pTHjj", &pTHjj, &b_pTHjj);
   fChain->SetBranchAddress("recoil", &recoil, &b_recoil);
   fChain->SetBranchAddress("jetpt1_cut", &jetpt1_cut, &b_jetpt1_cut);
   fChain->SetBranchAddress("jetpt2_cut", &jetpt2_cut, &b_jetpt2_cut);
   fChain->SetBranchAddress("dphilljet_cut", &dphilljet_cut, &b_dphilljet_cut);
   fChain->SetBranchAddress("dphijet1met_cut", &dphijet1met_cut, &b_dphijet1met_cut);
   fChain->SetBranchAddress("dphijet2met_cut", &dphijet2met_cut, &b_dphijet2met_cut);
   fChain->SetBranchAddress("PfMetDivSumMet", &PfMetDivSumMet, &b_PfMetDivSumMet);
   fChain->SetBranchAddress("upara", &upara, &b_upara);
   fChain->SetBranchAddress("uperp", &uperp, &b_uperp);
   fChain->SetBranchAddress("m2ljj20", &m2ljj20, &b_m2ljj20);
   fChain->SetBranchAddress("m2ljj30", &m2ljj30, &b_m2ljj30);
   fChain->SetBranchAddress("ptTOT_cut", &ptTOT_cut, &b_ptTOT_cut);
   fChain->SetBranchAddress("mTOT_cut", &mTOT_cut, &b_mTOT_cut);
   fChain->SetBranchAddress("OLV1_cut", &OLV1_cut, &b_OLV1_cut);
   fChain->SetBranchAddress("OLV2_cut", &OLV2_cut, &b_OLV2_cut);
   fChain->SetBranchAddress("Ceta_cut", &Ceta_cut, &b_Ceta_cut);
   fChain->SetBranchAddress("mlljj20_whss", &mlljj20_whss, &b_mlljj20_whss);
   fChain->SetBranchAddress("mlljj30_whss", &mlljj30_whss, &b_mlljj30_whss);
   fChain->SetBranchAddress("WlepPt_whss", &WlepPt_whss, &b_WlepPt_whss);
   fChain->SetBranchAddress("WlepMt_whss", &WlepMt_whss, &b_WlepMt_whss);
   fChain->SetBranchAddress("WH3l_dphilmet", WH3l_dphilmet, &b_WH3l_dphilmet);
   fChain->SetBranchAddress("WH3l_drOSll", WH3l_drOSll, &b_WH3l_drOSll);
   fChain->SetBranchAddress("WH3l_ZVeto", &WH3l_ZVeto, &b_WH3l_ZVeto);
   fChain->SetBranchAddress("WH3l_flagOSSF", &WH3l_flagOSSF, &b_WH3l_flagOSSF);
   fChain->SetBranchAddress("ZH3l_checkmZ", &ZH3l_checkmZ, &b_ZH3l_checkmZ);
   fChain->SetBranchAddress("ZH3l_njet", &ZH3l_njet, &b_ZH3l_njet);
   fChain->SetBranchAddress("ZH3l_pdgid_l", &ZH3l_pdgid_l, &b_ZH3l_pdgid_l);
   fChain->SetBranchAddress("WH3l_mOSll", WH3l_mOSll, &b_WH3l_mOSll);
   fChain->SetBranchAddress("WH3l_mtWWW", &WH3l_mtWWW, &b_WH3l_mtWWW);
   fChain->SetBranchAddress("ZH3l_mTlmet", &ZH3l_mTlmet, &b_ZH3l_mTlmet);
   fChain->SetBranchAddress("WH3l_ptOSll", WH3l_ptOSll, &b_WH3l_ptOSll);
   fChain->SetBranchAddress("ZH3l_mTlmetj", &ZH3l_mTlmetj, &b_ZH3l_mTlmetj);
   fChain->SetBranchAddress("ZH3l_pTlmetjj", &ZH3l_pTlmetjj, &b_ZH3l_pTlmetjj);
   fChain->SetBranchAddress("WH3l_ptlll", &WH3l_ptlll, &b_WH3l_ptlll);
   fChain->SetBranchAddress("WH3l_chlll", &WH3l_chlll, &b_WH3l_chlll);
   fChain->SetBranchAddress("ZH3l_Z4lveto", &ZH3l_Z4lveto, &b_ZH3l_Z4lveto);
   fChain->SetBranchAddress("ZH3l_dmjjmW", &ZH3l_dmjjmW, &b_ZH3l_dmjjmW);
   fChain->SetBranchAddress("ZH3l_dphilmetjj", &ZH3l_dphilmetjj, &b_ZH3l_dphilmetjj);
   fChain->SetBranchAddress("ZH3l_mTlmetjj", &ZH3l_mTlmetjj, &b_ZH3l_mTlmetjj);
   fChain->SetBranchAddress("WH3l_ptW", &WH3l_ptW, &b_WH3l_ptW);
   fChain->SetBranchAddress("ZH3l_pTlmetj", &ZH3l_pTlmetj, &b_ZH3l_pTlmetj);
   fChain->SetBranchAddress("ZH3l_pTZ", &ZH3l_pTZ, &b_ZH3l_pTZ);
   fChain->SetBranchAddress("WH3l_mtlmet", WH3l_mtlmet, &b_WH3l_mtlmet);
   fChain->SetBranchAddress("WH3l_dphilllmet", &WH3l_dphilllmet, &b_WH3l_dphilllmet);
   fChain->SetBranchAddress("WH3l_nbjet", &WH3l_nbjet, &b_WH3l_nbjet);
   fChain->SetBranchAddress("ZH3l_dphilmetj", &ZH3l_dphilmetj, &b_ZH3l_dphilmetj);
   fChain->SetBranchAddress("WH3l_njet", &WH3l_njet, &b_WH3l_njet);
   fChain->SetBranchAddress("WH3l_ptWWW", &WH3l_ptWWW, &b_WH3l_ptWWW);
   fChain->SetBranchAddress("WH3l_mlll", &WH3l_mlll, &b_WH3l_mlll);
   fChain->SetBranchAddress("pfmetPhi_zh4l", &pfmetPhi_zh4l, &b_pfmetPhi_zh4l);
   fChain->SetBranchAddress("z0Mass_zh4l", &z0Mass_zh4l, &b_z0Mass_zh4l);
   fChain->SetBranchAddress("z0Pt_zh4l", &z0Pt_zh4l, &b_z0Pt_zh4l);
   fChain->SetBranchAddress("z1Mass_zh4l", &z1Mass_zh4l, &b_z1Mass_zh4l);
   fChain->SetBranchAddress("z1Pt_zh4l", &z1Pt_zh4l, &b_z1Pt_zh4l);
   fChain->SetBranchAddress("zaMass_zh4l", &zaMass_zh4l, &b_zaMass_zh4l);
   fChain->SetBranchAddress("zbMass_zh4l", &zbMass_zh4l, &b_zbMass_zh4l);
   fChain->SetBranchAddress("flagZ1SF_zh4l", &flagZ1SF_zh4l, &b_flagZ1SF_zh4l);
   fChain->SetBranchAddress("z0DeltaPhi_zh4l", &z0DeltaPhi_zh4l, &b_z0DeltaPhi_zh4l);
   fChain->SetBranchAddress("z1DeltaPhi_zh4l", &z1DeltaPhi_zh4l, &b_z1DeltaPhi_zh4l);
   fChain->SetBranchAddress("zaDeltaPhi_zh4l", &zaDeltaPhi_zh4l, &b_zaDeltaPhi_zh4l);
   fChain->SetBranchAddress("zbDeltaPhi_zh4l", &zbDeltaPhi_zh4l, &b_zbDeltaPhi_zh4l);
   fChain->SetBranchAddress("minDeltaPhi_zh4l", &minDeltaPhi_zh4l, &b_minDeltaPhi_zh4l);
   fChain->SetBranchAddress("z0DeltaR_zh4l", &z0DeltaR_zh4l, &b_z0DeltaR_zh4l);
   fChain->SetBranchAddress("z1DeltaR_zh4l", &z1DeltaR_zh4l, &b_z1DeltaR_zh4l);
   fChain->SetBranchAddress("zaDeltaR_zh4l", &zaDeltaR_zh4l, &b_zaDeltaR_zh4l);
   fChain->SetBranchAddress("zbDeltaR_zh4l", &zbDeltaR_zh4l, &b_zbDeltaR_zh4l);
   fChain->SetBranchAddress("lep1Mt_zh4l", &lep1Mt_zh4l, &b_lep1Mt_zh4l);
   fChain->SetBranchAddress("lep2Mt_zh4l", &lep2Mt_zh4l, &b_lep2Mt_zh4l);
   fChain->SetBranchAddress("lep3Mt_zh4l", &lep3Mt_zh4l, &b_lep3Mt_zh4l);
   fChain->SetBranchAddress("lep4Mt_zh4l", &lep4Mt_zh4l, &b_lep4Mt_zh4l);
   fChain->SetBranchAddress("minMt_zh4l", &minMt_zh4l, &b_minMt_zh4l);
   fChain->SetBranchAddress("z1Mt_zh4l", &z1Mt_zh4l, &b_z1Mt_zh4l);
   fChain->SetBranchAddress("mllll_zh4l", &mllll_zh4l, &b_mllll_zh4l);
   fChain->SetBranchAddress("chllll_zh4l", &chllll_zh4l, &b_chllll_zh4l);
   fChain->SetBranchAddress("z1dPhi_lep1MET_zh4l", &z1dPhi_lep1MET_zh4l, &b_z1dPhi_lep1MET_zh4l);
   fChain->SetBranchAddress("z1dPhi_lep2MET_zh4l", &z1dPhi_lep2MET_zh4l, &b_z1dPhi_lep2MET_zh4l);
   fChain->SetBranchAddress("z1mindPhi_lepMET_zh4l", &z1mindPhi_lepMET_zh4l, &b_z1mindPhi_lepMET_zh4l);
   fChain->SetBranchAddress("LepCut2l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW", &LepCut2l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW, &b_LepCut2l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW);
   fChain->SetBranchAddress("LepSF3l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW_tthmva_80", &LepSF3l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW_tthmva_80, &b_LepSF3l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW_tthmva_80);
   fChain->SetBranchAddress("SFweight4l", &SFweight4l, &b_SFweight4l);
   fChain->SetBranchAddress("LepSF4l__ele_mvaFall17V1Iso_WP90_SS__Do", &LepSF4l__ele_mvaFall17V1Iso_WP90_SS__Do, &b_LepSF4l__ele_mvaFall17V1Iso_WP90_SS__Do);
   fChain->SetBranchAddress("LepCut4l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW", &LepCut4l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW, &b_LepCut4l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW);
   fChain->SetBranchAddress("LepCut2l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW_tthmva_80", &LepCut2l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW_tthmva_80, &b_LepCut2l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW_tthmva_80);
   fChain->SetBranchAddress("LepCut3l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW", &LepCut3l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW, &b_LepCut3l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW);
   fChain->SetBranchAddress("LepSF3l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW_tthmva_80", &LepSF3l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW_tthmva_80, &b_LepSF3l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW_tthmva_80);
   fChain->SetBranchAddress("LepSF2l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__Do", &LepSF2l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__Do, &b_LepSF2l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__Do);
   fChain->SetBranchAddress("LepSF4l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__Do", &LepSF4l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__Do, &b_LepSF4l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__Do);
   fChain->SetBranchAddress("LepSF4l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW", &LepSF4l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW, &b_LepSF4l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW);
   fChain->SetBranchAddress("LepCut3l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW_tthmva_80", &LepCut3l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW_tthmva_80, &b_LepCut3l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW_tthmva_80);
   fChain->SetBranchAddress("LepSF3l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__Up", &LepSF3l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__Up, &b_LepSF3l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__Up);
   fChain->SetBranchAddress("LepCut2l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW", &LepCut2l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW, &b_LepCut2l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW);
   fChain->SetBranchAddress("LepSF4l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW_tthmva_80", &LepSF4l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW_tthmva_80, &b_LepSF4l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW_tthmva_80);
   fChain->SetBranchAddress("LepSF3l__ele_mvaFall17V1Iso_WP90_SS__Do", &LepSF3l__ele_mvaFall17V1Iso_WP90_SS__Do, &b_LepSF3l__ele_mvaFall17V1Iso_WP90_SS__Do);
   fChain->SetBranchAddress("LepCut2l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW_tthmva_80", &LepCut2l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW_tthmva_80, &b_LepCut2l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW_tthmva_80);
   fChain->SetBranchAddress("LepSF4l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__Up", &LepSF4l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__Up, &b_LepSF4l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__Up);
   fChain->SetBranchAddress("LepSF2l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__Up", &LepSF2l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__Up, &b_LepSF2l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__Up);
   fChain->SetBranchAddress("LepSF2l__mu_cut_Tight_HWWW_tthmva_80__Up", &LepSF2l__mu_cut_Tight_HWWW_tthmva_80__Up, &b_LepSF2l__mu_cut_Tight_HWWW_tthmva_80__Up);
   fChain->SetBranchAddress("LepCut4l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW_tthmva_80", &LepCut4l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW_tthmva_80, &b_LepCut4l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW_tthmva_80);
   fChain->SetBranchAddress("LepSF2l__ele_mvaFall17V1Iso_WP90_SS__Up", &LepSF2l__ele_mvaFall17V1Iso_WP90_SS__Up, &b_LepSF2l__ele_mvaFall17V1Iso_WP90_SS__Up);
   fChain->SetBranchAddress("LepCut4l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW", &LepCut4l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW, &b_LepCut4l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW);
   fChain->SetBranchAddress("LepSF4l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW_tthmva_80", &LepSF4l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW_tthmva_80, &b_LepSF4l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW_tthmva_80);
   fChain->SetBranchAddress("LepSF3l__ele_mvaFall17V1Iso_WP90__Do", &LepSF3l__ele_mvaFall17V1Iso_WP90__Do, &b_LepSF3l__ele_mvaFall17V1Iso_WP90__Do);
   fChain->SetBranchAddress("LepSF2l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW_tthmva_80", &LepSF2l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW_tthmva_80, &b_LepSF2l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW_tthmva_80);
   fChain->SetBranchAddress("LepSF2l__ele_mvaFall17V1Iso_WP90__Do", &LepSF2l__ele_mvaFall17V1Iso_WP90__Do, &b_LepSF2l__ele_mvaFall17V1Iso_WP90__Do);
   fChain->SetBranchAddress("LepSF3l__mu_cut_Tight_HWWW_tthmva_80__Up", &LepSF3l__mu_cut_Tight_HWWW_tthmva_80__Up, &b_LepSF3l__mu_cut_Tight_HWWW_tthmva_80__Up);
   fChain->SetBranchAddress("LepSF3l__mu_cut_Tight_HWWW__Up", &LepSF3l__mu_cut_Tight_HWWW__Up, &b_LepSF3l__mu_cut_Tight_HWWW__Up);
   fChain->SetBranchAddress("LepSF3l__mu_cut_Tight_HWWW_tthmva_80__Do", &LepSF3l__mu_cut_Tight_HWWW_tthmva_80__Do, &b_LepSF3l__mu_cut_Tight_HWWW_tthmva_80__Do);
   fChain->SetBranchAddress("LepSF3l__ele_mvaFall17V1Iso_WP90_tthmva_70__Up", &LepSF3l__ele_mvaFall17V1Iso_WP90_tthmva_70__Up, &b_LepSF3l__ele_mvaFall17V1Iso_WP90_tthmva_70__Up);
   fChain->SetBranchAddress("LepCut4l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW_tthmva_80", &LepCut4l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW_tthmva_80, &b_LepCut4l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW_tthmva_80);
   fChain->SetBranchAddress("LepSF2l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW_tthmva_80", &LepSF2l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW_tthmva_80, &b_LepSF2l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW_tthmva_80);
   fChain->SetBranchAddress("LepCut3l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW", &LepCut3l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW, &b_LepCut3l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW);
   fChain->SetBranchAddress("LepSF3l__ele_mvaFall17V1Iso_WP90__Up", &LepSF3l__ele_mvaFall17V1Iso_WP90__Up, &b_LepSF3l__ele_mvaFall17V1Iso_WP90__Up);
   fChain->SetBranchAddress("LepSF3l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW", &LepSF3l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW, &b_LepSF3l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW);
   fChain->SetBranchAddress("LepSF2l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW", &LepSF2l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW, &b_LepSF2l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW);
   fChain->SetBranchAddress("LepSF4l__ele_mvaFall17V1Iso_WP90_SS__Up", &LepSF4l__ele_mvaFall17V1Iso_WP90_SS__Up, &b_LepSF4l__ele_mvaFall17V1Iso_WP90_SS__Up);
   fChain->SetBranchAddress("LepCut3l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW", &LepCut3l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW, &b_LepCut3l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW);
   fChain->SetBranchAddress("LepSF2l__ele_mvaFall17V1Iso_WP90__Up", &LepSF2l__ele_mvaFall17V1Iso_WP90__Up, &b_LepSF2l__ele_mvaFall17V1Iso_WP90__Up);
   fChain->SetBranchAddress("GenLepMatch3l", &GenLepMatch3l, &b_GenLepMatch3l);
   fChain->SetBranchAddress("LepSF2l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW_tthmva_80", &LepSF2l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW_tthmva_80, &b_LepSF2l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW_tthmva_80);
   fChain->SetBranchAddress("LepSF2l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW", &LepSF2l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW, &b_LepSF2l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW);
   fChain->SetBranchAddress("LepSF4l__mu_cut_Tight_HWWW_tthmva_80__Do", &LepSF4l__mu_cut_Tight_HWWW_tthmva_80__Do, &b_LepSF4l__mu_cut_Tight_HWWW_tthmva_80__Do);
   fChain->SetBranchAddress("LepCut4l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW", &LepCut4l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW, &b_LepCut4l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW);
   fChain->SetBranchAddress("LepSF3l__ele_mvaFall17V1Iso_WP90_tthmva_70__Do", &LepSF3l__ele_mvaFall17V1Iso_WP90_tthmva_70__Do, &b_LepSF3l__ele_mvaFall17V1Iso_WP90_tthmva_70__Do);
   fChain->SetBranchAddress("LepSF4l__mu_cut_Tight_HWWW__Do", &LepSF4l__mu_cut_Tight_HWWW__Do, &b_LepSF4l__mu_cut_Tight_HWWW__Do);
   fChain->SetBranchAddress("LepSF4l__mu_cut_Tight_HWWW_tthmva_80__Up", &LepSF4l__mu_cut_Tight_HWWW_tthmva_80__Up, &b_LepSF4l__mu_cut_Tight_HWWW_tthmva_80__Up);
   fChain->SetBranchAddress("LepSF4l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW_tthmva_80", &LepSF4l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW_tthmva_80, &b_LepSF4l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW_tthmva_80);
   fChain->SetBranchAddress("SFweight2lMH", &SFweight2lMH, &b_SFweight2lMH);
   fChain->SetBranchAddress("LepSF3l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW_tthmva_80", &LepSF3l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW_tthmva_80, &b_LepSF3l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW_tthmva_80);
   fChain->SetBranchAddress("LepSF2l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW", &LepSF2l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW, &b_LepSF2l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW);
   fChain->SetBranchAddress("LepSF2l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW", &LepSF2l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW, &b_LepSF2l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW);
   fChain->SetBranchAddress("LepSF3l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW", &LepSF3l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW, &b_LepSF3l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW);
   fChain->SetBranchAddress("LepSF3l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW_tthmva_80", &LepSF3l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW_tthmva_80, &b_LepSF3l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW_tthmva_80);
   fChain->SetBranchAddress("LepSF4l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW_tthmva_80", &LepSF4l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW_tthmva_80, &b_LepSF4l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW_tthmva_80);
   fChain->SetBranchAddress("METFilter_MC", &METFilter_MC, &b_METFilter_MC);
   fChain->SetBranchAddress("LepCut2l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW_tthmva_80", &LepCut2l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW_tthmva_80, &b_LepCut2l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW_tthmva_80);
   fChain->SetBranchAddress("LepSF3l__mu_cut_Tight_HWWW__Do", &LepSF3l__mu_cut_Tight_HWWW__Do, &b_LepSF3l__mu_cut_Tight_HWWW__Do);
   fChain->SetBranchAddress("GenLepMatch2l", &GenLepMatch2l, &b_GenLepMatch2l);
   fChain->SetBranchAddress("LepCut4l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW_tthmva_80", &LepCut4l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW_tthmva_80, &b_LepCut4l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW_tthmva_80);
   fChain->SetBranchAddress("LepSF2l__mu_cut_Tight_HWWW__Up", &LepSF2l__mu_cut_Tight_HWWW__Up, &b_LepSF2l__mu_cut_Tight_HWWW__Up);
   fChain->SetBranchAddress("LepSF2l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW_tthmva_80", &LepSF2l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW_tthmva_80, &b_LepSF2l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW_tthmva_80);
   fChain->SetBranchAddress("LepSF4l__ele_mvaFall17V1Iso_WP90__Up", &LepSF4l__ele_mvaFall17V1Iso_WP90__Up, &b_LepSF4l__ele_mvaFall17V1Iso_WP90__Up);
   fChain->SetBranchAddress("LepCut3l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW_tthmva_80", &LepCut3l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW_tthmva_80, &b_LepCut3l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW_tthmva_80);
   fChain->SetBranchAddress("SFweight2l", &SFweight2l, &b_SFweight2l);
   fChain->SetBranchAddress("LepCut2l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW", &LepCut2l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW, &b_LepCut2l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW);
   fChain->SetBranchAddress("LepSF2l__ele_mvaFall17V1Iso_WP90_tthmva_70__Up", &LepSF2l__ele_mvaFall17V1Iso_WP90_tthmva_70__Up, &b_LepSF2l__ele_mvaFall17V1Iso_WP90_tthmva_70__Up);
   fChain->SetBranchAddress("LepSF4l__ele_mvaFall17V1Iso_WP90_tthmva_70__Up", &LepSF4l__ele_mvaFall17V1Iso_WP90_tthmva_70__Up, &b_LepSF4l__ele_mvaFall17V1Iso_WP90_tthmva_70__Up);
   fChain->SetBranchAddress("LepCut3l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW", &LepCut3l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW, &b_LepCut3l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW);
   fChain->SetBranchAddress("LepSF3l__ele_mvaFall17V1Iso_WP90_SS__Up", &LepSF3l__ele_mvaFall17V1Iso_WP90_SS__Up, &b_LepSF3l__ele_mvaFall17V1Iso_WP90_SS__Up);
   fChain->SetBranchAddress("LepSF4l__ele_mvaFall17V1Iso_WP90__Do", &LepSF4l__ele_mvaFall17V1Iso_WP90__Do, &b_LepSF4l__ele_mvaFall17V1Iso_WP90__Do);
   fChain->SetBranchAddress("LepSF3l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__Do", &LepSF3l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__Do, &b_LepSF3l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__Do);
   fChain->SetBranchAddress("LepSF3l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW", &LepSF3l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW, &b_LepSF3l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW);
   fChain->SetBranchAddress("LepCut2l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW_tthmva_80", &LepCut2l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW_tthmva_80, &b_LepCut2l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW_tthmva_80);
   fChain->SetBranchAddress("LepSF2l__mu_cut_Tight_HWWW__Do", &LepSF2l__mu_cut_Tight_HWWW__Do, &b_LepSF2l__mu_cut_Tight_HWWW__Do);
   fChain->SetBranchAddress("LepCut4l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW", &LepCut4l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW, &b_LepCut4l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW);
   fChain->SetBranchAddress("LepSF2l__mu_cut_Tight_HWWW_tthmva_80__Do", &LepSF2l__mu_cut_Tight_HWWW_tthmva_80__Do, &b_LepSF2l__mu_cut_Tight_HWWW_tthmva_80__Do);
   fChain->SetBranchAddress("LepCut3l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW_tthmva_80", &LepCut3l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW_tthmva_80, &b_LepCut3l__ele_mvaFall17V1Iso_WP90_SS__mu_cut_Tight_HWWW_tthmva_80);
   fChain->SetBranchAddress("SFweight3l", &SFweight3l, &b_SFweight3l);
   fChain->SetBranchAddress("GenLepMatch4l", &GenLepMatch4l, &b_GenLepMatch4l);
   fChain->SetBranchAddress("LepCut4l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW_tthmva_80", &LepCut4l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW_tthmva_80, &b_LepCut4l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW_tthmva_80);
   fChain->SetBranchAddress("LepSF4l__mu_cut_Tight_HWWW__Up", &LepSF4l__mu_cut_Tight_HWWW__Up, &b_LepSF4l__mu_cut_Tight_HWWW__Up);
   fChain->SetBranchAddress("LepSF4l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW", &LepSF4l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW, &b_LepSF4l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW);
   fChain->SetBranchAddress("XSWeight", &XSWeight, &b_XSWeight);
   fChain->SetBranchAddress("LepSF4l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW", &LepSF4l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW, &b_LepSF4l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW);
   fChain->SetBranchAddress("LepSF2l__ele_mvaFall17V1Iso_WP90_SS__Do", &LepSF2l__ele_mvaFall17V1Iso_WP90_SS__Do, &b_LepSF2l__ele_mvaFall17V1Iso_WP90_SS__Do);
   fChain->SetBranchAddress("LepSF3l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW", &LepSF3l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW, &b_LepSF3l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW);
   fChain->SetBranchAddress("LepSF4l__ele_mvaFall17V1Iso_WP90_tthmva_70__Do", &LepSF4l__ele_mvaFall17V1Iso_WP90_tthmva_70__Do, &b_LepSF4l__ele_mvaFall17V1Iso_WP90_tthmva_70__Do);
   fChain->SetBranchAddress("LepSF2l__ele_mvaFall17V1Iso_WP90_tthmva_70__Do", &LepSF2l__ele_mvaFall17V1Iso_WP90_tthmva_70__Do, &b_LepSF2l__ele_mvaFall17V1Iso_WP90_tthmva_70__Do);
   fChain->SetBranchAddress("LepCut3l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW_tthmva_80", &LepCut3l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW_tthmva_80, &b_LepCut3l__ele_mvaFall17V1Iso_WP90_SS_tthmva_70__mu_cut_Tight_HWWW_tthmva_80);
   fChain->SetBranchAddress("LepSF4l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW", &LepSF4l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW, &b_LepSF4l__ele_mvaFall17V1Iso_WP90__mu_cut_Tight_HWWW);
   fChain->SetBranchAddress("LepCut2l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW", &LepCut2l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW, &b_LepCut2l__ele_mvaFall17V1Iso_WP90_tthmva_70__mu_cut_Tight_HWWW);
   fChain->SetBranchAddress("embed_tautauveto", &embed_tautauveto, &b_embed_tautauveto);
   fChain->SetBranchAddress("BoostedWtagSF_nominal", &BoostedWtagSF_nominal, &b_BoostedWtagSF_nominal);
   fChain->SetBranchAddress("BoostedWtagSF_up", &BoostedWtagSF_up, &b_BoostedWtagSF_up);
   fChain->SetBranchAddress("BoostedWtagSF_down", &BoostedWtagSF_down, &b_BoostedWtagSF_down);
   fChain->SetBranchAddress("dymva_alt_dnn_2j", &dymva_alt_dnn_2j, &b_dymva_alt_dnn_2j);
   fChain->SetBranchAddress("dymva_alt_dnn_VH", &dymva_alt_dnn_VH, &b_dymva_alt_dnn_VH);
   fChain->SetBranchAddress("dymva_alt_dnn_0j", &dymva_alt_dnn_0j, &b_dymva_alt_dnn_0j);
   fChain->SetBranchAddress("dymva_alt_dnn_1j", &dymva_alt_dnn_1j, &b_dymva_alt_dnn_1j);
   fChain->SetBranchAddress("dymva_alt_bdt_VBF", &dymva_alt_bdt_VBF, &b_dymva_alt_bdt_VBF);
   fChain->SetBranchAddress("dymva_alt_bdt_0j", &dymva_alt_bdt_0j, &b_dymva_alt_bdt_0j);
   fChain->SetBranchAddress("dymva_alt_dnn_VBF", &dymva_alt_dnn_VBF, &b_dymva_alt_dnn_VBF);
   fChain->SetBranchAddress("dymva_alt_bdt_VH", &dymva_alt_bdt_VH, &b_dymva_alt_bdt_VH);
   fChain->SetBranchAddress("dymva_alt_bdt_2j", &dymva_alt_bdt_2j, &b_dymva_alt_bdt_2j);
   fChain->SetBranchAddress("dymva_alt_bdt_1j", &dymva_alt_bdt_1j, &b_dymva_alt_bdt_1j);
   fChain->SetBranchAddress("Mucca2HDMFull", &Mucca2HDMFull, &b_Mucca2HDMFull);
   fChain->SetBranchAddress("hm", &hm, &b_hm);
   fChain->SetBranchAddress("me_vbf_hsm", &me_vbf_hsm, &b_me_vbf_hsm);
   fChain->SetBranchAddress("me_vbf_hm", &me_vbf_hm, &b_me_vbf_hm);
   fChain->SetBranchAddress("me_vbf_hp", &me_vbf_hp, &b_me_vbf_hp);
   fChain->SetBranchAddress("me_vbf_hl", &me_vbf_hl, &b_me_vbf_hl);
   fChain->SetBranchAddress("me_vbf_mixhm", &me_vbf_mixhm, &b_me_vbf_mixhm);
   fChain->SetBranchAddress("me_vbf_mixhp", &me_vbf_mixhp, &b_me_vbf_mixhp);
   fChain->SetBranchAddress("me_wh_hsm", &me_wh_hsm, &b_me_wh_hsm);
   fChain->SetBranchAddress("me_wh_hm", &me_wh_hm, &b_me_wh_hm);
   fChain->SetBranchAddress("me_wh_hp", &me_wh_hp, &b_me_wh_hp);
   fChain->SetBranchAddress("me_wh_hl", &me_wh_hl, &b_me_wh_hl);
   fChain->SetBranchAddress("me_wh_mixhm", &me_wh_mixhm, &b_me_wh_mixhm);
   fChain->SetBranchAddress("me_wh_mixhp", &me_wh_mixhp, &b_me_wh_mixhp);
   fChain->SetBranchAddress("me_zh_hsm", &me_zh_hsm, &b_me_zh_hsm);
   fChain->SetBranchAddress("me_zh_hm", &me_zh_hm, &b_me_zh_hm);
   fChain->SetBranchAddress("me_zh_hp", &me_zh_hp, &b_me_zh_hp);
   fChain->SetBranchAddress("me_zh_hl", &me_zh_hl, &b_me_zh_hl);
   fChain->SetBranchAddress("me_zh_mixhm", &me_zh_mixhm, &b_me_zh_mixhm);
   fChain->SetBranchAddress("me_zh_mixhp", &me_zh_mixhp, &b_me_zh_mixhp);
   fChain->SetBranchAddress("me_qcd_hsm", &me_qcd_hsm, &b_me_qcd_hsm);
   fChain->SetBranchAddress("pjjSm_wh", &pjjSm_wh, &b_pjjSm_wh);
   fChain->SetBranchAddress("pjjTr_wh", &pjjTr_wh, &b_pjjTr_wh);
   fChain->SetBranchAddress("pjjSm_zh", &pjjSm_zh, &b_pjjSm_zh);
   fChain->SetBranchAddress("pjjTr_zh", &pjjTr_zh, &b_pjjTr_zh);
   fChain->SetBranchAddress("meAvg_wh", &meAvg_wh, &b_meAvg_wh);
   fChain->SetBranchAddress("meAvg_zh", &meAvg_zh, &b_meAvg_zh);
   Notify();
}

Bool_t Events::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void Events::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t Events::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef Events_cxx
