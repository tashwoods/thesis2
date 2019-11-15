void ranking()
{
//=========Macro generated from canvas: c1/Canvas
//=========  (Sat Nov  9 03:03:03 2019) by ROOT version 6.14/04
   TCanvas *c1 = new TCanvas("c1", "Canvas",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad
   TPad *pad = new TPad("pad", "",0,0,1,1);
   pad->Draw();
   pad->cd();
   pad->Range(-0.02230942,-3.080645,0.01074157,22.72581);
   pad->SetFillColor(0);
   pad->SetBorderMode(0);
   pad->SetBorderSize(2);
   pad->SetLeftMargin(0.4);
   pad->SetRightMargin(0.05);
   pad->SetTopMargin(0.125);
   pad->SetFrameBorderMode(0);
   pad->SetFrameBorderMode(0);
   
   TH2F *axisHist__1 = new TH2F("axisHist__1","axisHist",10,-0.009089024,0.009089024,20,-0.5,19.5);
   axisHist__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   axisHist__1->SetLineColor(ci);
   axisHist__1->GetXaxis()->SetTitle("#Delta#mu");
   axisHist__1->GetXaxis()->SetNdivisions(506);
   axisHist__1->GetXaxis()->SetLabelFont(42);
   axisHist__1->GetXaxis()->SetTitleSize(0.05);
   axisHist__1->GetXaxis()->SetTitleOffset(0.6);
   axisHist__1->GetXaxis()->SetTitleFont(42);
   axisHist__1->GetYaxis()->SetBinLabel(20,"Vjets_GenMG_lvqq_Merg");
   axisHist__1->GetYaxis()->SetBinLabel(19,"JET_SigSF_ttbar_Modelling_bTagB_0");
   axisHist__1->GetYaxis()->SetBinLabel(18,"JET_SigSF_ttbar_Modelling_bTagB_1");
   axisHist__1->GetYaxis()->SetBinLabel(17,"Vjets_GenMG_lvqq_Res");
   axisHist__1->GetYaxis()->SetBinLabel(16,"Diboson_EWcontribution_lvqq_Merg");
   axisHist__1->GetYaxis()->SetBinLabel(15,"ttbar_FSR_lvqq_Merg");
   axisHist__1->GetYaxis()->SetBinLabel(14,"JET_SigSF_ttbar_Modelling_bTagLight_0");
   axisHist__1->GetYaxis()->SetBinLabel(13,"JET_CR_JET_JER_EffectiveNP_1");
   axisHist__1->GetYaxis()->SetBinLabel(12,"JET_CR_JET_JER_EffectiveNP_6");
   axisHist__1->GetYaxis()->SetBinLabel(11,"XS_Wjets_LP_lvqq_Merg");
   axisHist__1->GetYaxis()->SetBinLabel(10,"JET_CR_JET_EtaIntercalibration_Modelling");
   axisHist__1->GetYaxis()->SetBinLabel(9,"ttbar_PH7_lvqq_Merg");
   axisHist__1->GetYaxis()->SetBinLabel(8,"JET_SigSF_ttbar_Modelling_radiation");
   axisHist__1->GetYaxis()->SetBinLabel(7,"FATJET_Medium_JET_Rtrk_Modelling_pT");
   axisHist__1->GetYaxis()->SetBinLabel(6,"JET_SigSF_ttbar_Modelling_matrixElement");
   axisHist__1->GetYaxis()->SetBinLabel(5,"Vjets_RFScale_lvqq_Res");
   axisHist__1->GetYaxis()->SetBinLabel(4,"XS_Wjets_Merg");
   axisHist__1->GetYaxis()->SetBinLabel(3,"JET_CR_JET_Flavor_Composition");
   axisHist__1->GetYaxis()->SetBinLabel(2,"EL_EFF_Iso_TOTAL_1NPCOR_PLUS_UNCOR");
   axisHist__1->GetYaxis()->SetBinLabel(1,"XS_Top_Res");
   axisHist__1->GetYaxis()->SetLabelFont(42);
   axisHist__1->GetYaxis()->SetLabelSize(0.03);
   axisHist__1->GetYaxis()->SetTitleSize(0.035);
   axisHist__1->GetYaxis()->SetTickLength(0);
   axisHist__1->GetYaxis()->SetTitleOffset(0);
   axisHist__1->GetYaxis()->SetTitleFont(42);
   axisHist__1->GetZaxis()->SetLabelFont(42);
   axisHist__1->GetZaxis()->SetLabelSize(0.035);
   axisHist__1->GetZaxis()->SetTitleSize(0.035);
   axisHist__1->GetZaxis()->SetTitleFont(42);
   axisHist__1->Draw("X+");
   
   Double_t Graph0_fx3001[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fy3001[20] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11,
   12,
   13,
   14,
   15,
   16,
   17,
   18,
   19};
   Double_t Graph0_felx3001[20] = {
   0,
   0.009089024,
   0,
   0.009089024,
   0,
   0.009089024,
   0,
   0.009089024,
   0,
   0.009089024,
   0,
   0.009089024,
   0,
   0.009089024,
   0,
   0.009089024,
   0,
   0.009089024,
   0,
   0.009089024};
   Double_t Graph0_fely3001[20] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph0_fehx3001[20] = {
   0,
   0.009089024,
   0,
   0.009089024,
   0,
   0.009089024,
   0,
   0.009089024,
   0,
   0.009089024,
   0,
   0.009089024,
   0,
   0.009089024,
   0,
   0.009089024,
   0,
   0.009089024,
   0,
   0.009089024};
   Double_t Graph0_fehy3001[20] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,Graph0_fx3001,Graph0_fy3001,Graph0_felx3001,Graph0_fehx3001,Graph0_fely3001,Graph0_fehy3001);
   grae->SetName("Graph0");
   grae->SetTitle("Graph");
   grae->SetFillColor(18);
   
   TH1F *Graph_Graph03001 = new TH1F("Graph_Graph03001","Graph",100,-0.01090683,0.01090683);
   Graph_Graph03001->SetMinimum(-2.5);
   Graph_Graph03001->SetMaximum(21.5);
   Graph_Graph03001->SetDirectory(0);
   Graph_Graph03001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph03001->SetLineColor(ci);
   Graph_Graph03001->GetXaxis()->SetLabelFont(42);
   Graph_Graph03001->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph03001->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph03001->GetXaxis()->SetTitleFont(42);
   Graph_Graph03001->GetYaxis()->SetLabelFont(42);
   Graph_Graph03001->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph03001->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph03001->GetYaxis()->SetTitleOffset(0);
   Graph_Graph03001->GetYaxis()->SetTitleFont(42);
   Graph_Graph03001->GetZaxis()->SetLabelFont(42);
   Graph_Graph03001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph03001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph03001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph03001);
   
   grae->Draw("2 ");
   
   Double_t Graph1_fx3002[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fy3002[20] = {
   19,
   18,
   17,
   16,
   15,
   14,
   13,
   12,
   11,
   10,
   9,
   8,
   7,
   6,
   5,
   4,
   3,
   2,
   1,
   0};
   Double_t Graph1_felx3002[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fely3002[20] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph1_fehx3002[20] = {
   0.004056554,
   0.00413953,
   0.003343422,
   0.002805259,
   0.001744861,
   0.001895781,
   0.001983099,
   0.001413835,
   0.001368592,
   0.001182481,
   0.001350676,
   0.001457762,
   0.001174816,
   0.001254698,
   0.001107013,
   0.0009755116,
   0.0006452376,
   0.0007791235,
   0.0007972284,
   0.0007010922};
   Double_t Graph1_fehy3002[20] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   grae = new TGraphAsymmErrors(20,Graph1_fx3002,Graph1_fy3002,Graph1_felx3002,Graph1_fehx3002,Graph1_fely3002,Graph1_fehy3002);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#3e6b99");
   grae->SetFillColor(ci);
   
   TH1F *Graph_Graph13002 = new TH1F("Graph_Graph13002","Graph",100,0,0.004553483);
   Graph_Graph13002->SetMinimum(-2.5);
   Graph_Graph13002->SetMaximum(21.5);
   Graph_Graph13002->SetDirectory(0);
   Graph_Graph13002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph13002->SetLineColor(ci);
   Graph_Graph13002->GetXaxis()->SetLabelFont(42);
   Graph_Graph13002->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph13002->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph13002->GetXaxis()->SetTitleFont(42);
   Graph_Graph13002->GetYaxis()->SetLabelFont(42);
   Graph_Graph13002->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph13002->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph13002->GetYaxis()->SetTitleOffset(0);
   Graph_Graph13002->GetYaxis()->SetTitleFont(42);
   Graph_Graph13002->GetZaxis()->SetLabelFont(42);
   Graph_Graph13002->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph13002->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph13002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph13002);
   
   grae->Draw("5 ");
   
   Double_t Graph2_fx3003[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fy3003[20] = {
   19,
   18,
   17,
   16,
   15,
   14,
   13,
   12,
   11,
   10,
   9,
   8,
   7,
   6,
   5,
   4,
   3,
   2,
   1,
   0};
   Double_t Graph2_felx3003[20] = {
   0.004206195,
   0.003565313,
   0.002922592,
   0.003025627,
   0.002790403,
   0.00192508,
   0.001805771,
   0.001634739,
   0.001489249,
   0.001570482,
   0.001386992,
   0.001159638,
   0.001290094,
   0.0009750222,
   0.001084162,
   0.001022442,
   0.001151141,
   0.0009285411,
   0.0007877574,
   0.0007626614};
   Double_t Graph2_fely3003[20] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph2_fehx3003[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fehy3003[20] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   grae = new TGraphAsymmErrors(20,Graph2_fx3003,Graph2_fy3003,Graph2_felx3003,Graph2_fehx3003,Graph2_fely3003,Graph2_fehy3003);
   grae->SetName("Graph2");
   grae->SetTitle("Graph");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#3e6b99");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);
   
   TH1F *Graph_Graph23003 = new TH1F("Graph_Graph23003","Graph",100,-0.004626815,0);
   Graph_Graph23003->SetMinimum(-2.5);
   Graph_Graph23003->SetMaximum(21.5);
   Graph_Graph23003->SetDirectory(0);
   Graph_Graph23003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph23003->SetLineColor(ci);
   Graph_Graph23003->GetXaxis()->SetLabelFont(42);
   Graph_Graph23003->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph23003->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph23003->GetXaxis()->SetTitleFont(42);
   Graph_Graph23003->GetYaxis()->SetLabelFont(42);
   Graph_Graph23003->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph23003->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph23003->GetYaxis()->SetTitleOffset(0);
   Graph_Graph23003->GetYaxis()->SetTitleFont(42);
   Graph_Graph23003->GetZaxis()->SetLabelFont(42);
   Graph_Graph23003->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph23003->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph23003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph23003);
   
   grae->Draw("5 ");
   
   TH2F *axisHist__2 = new TH2F("axisHist__2","axisHist",10,-0.009089024,0.009089024,20,-0.5,19.5);
   axisHist__2->SetStats(0);

   ci = TColor::GetColor("#000099");
   axisHist__2->SetLineColor(ci);
   axisHist__2->GetXaxis()->SetTitle("#Delta#mu");
   axisHist__2->GetXaxis()->SetNdivisions(506);
   axisHist__2->GetXaxis()->SetLabelFont(42);
   axisHist__2->GetXaxis()->SetTitleSize(0.05);
   axisHist__2->GetXaxis()->SetTitleOffset(0.6);
   axisHist__2->GetXaxis()->SetTitleFont(42);
   axisHist__2->GetYaxis()->SetBinLabel(20,"Vjets_GenMG_lvqq_Merg");
   axisHist__2->GetYaxis()->SetBinLabel(19,"JET_SigSF_ttbar_Modelling_bTagB_0");
   axisHist__2->GetYaxis()->SetBinLabel(18,"JET_SigSF_ttbar_Modelling_bTagB_1");
   axisHist__2->GetYaxis()->SetBinLabel(17,"Vjets_GenMG_lvqq_Res");
   axisHist__2->GetYaxis()->SetBinLabel(16,"Diboson_EWcontribution_lvqq_Merg");
   axisHist__2->GetYaxis()->SetBinLabel(15,"ttbar_FSR_lvqq_Merg");
   axisHist__2->GetYaxis()->SetBinLabel(14,"JET_SigSF_ttbar_Modelling_bTagLight_0");
   axisHist__2->GetYaxis()->SetBinLabel(13,"JET_CR_JET_JER_EffectiveNP_1");
   axisHist__2->GetYaxis()->SetBinLabel(12,"JET_CR_JET_JER_EffectiveNP_6");
   axisHist__2->GetYaxis()->SetBinLabel(11,"XS_Wjets_LP_lvqq_Merg");
   axisHist__2->GetYaxis()->SetBinLabel(10,"JET_CR_JET_EtaIntercalibration_Modelling");
   axisHist__2->GetYaxis()->SetBinLabel(9,"ttbar_PH7_lvqq_Merg");
   axisHist__2->GetYaxis()->SetBinLabel(8,"JET_SigSF_ttbar_Modelling_radiation");
   axisHist__2->GetYaxis()->SetBinLabel(7,"FATJET_Medium_JET_Rtrk_Modelling_pT");
   axisHist__2->GetYaxis()->SetBinLabel(6,"JET_SigSF_ttbar_Modelling_matrixElement");
   axisHist__2->GetYaxis()->SetBinLabel(5,"Vjets_RFScale_lvqq_Res");
   axisHist__2->GetYaxis()->SetBinLabel(4,"XS_Wjets_Merg");
   axisHist__2->GetYaxis()->SetBinLabel(3,"JET_CR_JET_Flavor_Composition");
   axisHist__2->GetYaxis()->SetBinLabel(2,"EL_EFF_Iso_TOTAL_1NPCOR_PLUS_UNCOR");
   axisHist__2->GetYaxis()->SetBinLabel(1,"XS_Top_Res");
   axisHist__2->GetYaxis()->SetLabelFont(42);
   axisHist__2->GetYaxis()->SetLabelSize(0.03);
   axisHist__2->GetYaxis()->SetTitleSize(0.035);
   axisHist__2->GetYaxis()->SetTickLength(0);
   axisHist__2->GetYaxis()->SetTitleOffset(0);
   axisHist__2->GetYaxis()->SetTitleFont(42);
   axisHist__2->GetZaxis()->SetLabelFont(42);
   axisHist__2->GetZaxis()->SetLabelSize(0.035);
   axisHist__2->GetZaxis()->SetTitleSize(0.035);
   axisHist__2->GetZaxis()->SetTitleFont(42);
   axisHist__2->Draw("sameaxisX+");
   
   Double_t Graph3_fx3004[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph3_fy3004[20] = {
   19,
   18,
   17,
   16,
   15,
   14,
   13,
   12,
   11,
   10,
   9,
   8,
   7,
   6,
   5,
   4,
   3,
   2,
   1,
   0};
   Double_t Graph3_felx3004[20] = {
   0.004206195,
   0.003565313,
   0.002922592,
   0.003025627,
   0.002790403,
   0.00192508,
   0.001805771,
   0.001634739,
   0.001489249,
   0.001570482,
   0.001386992,
   0.001159638,
   0.001290094,
   0.0009750222,
   0.001084162,
   0.001022442,
   0.001151141,
   0.0009285411,
   0.0007877574,
   0.0007626614};
   Double_t Graph3_fely3004[20] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph3_fehx3004[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph3_fehy3004[20] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   grae = new TGraphAsymmErrors(20,Graph3_fx3004,Graph3_fy3004,Graph3_felx3004,Graph3_fehx3004,Graph3_fely3004,Graph3_fehy3004);
   grae->SetName("Graph3");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#3e6b99");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3345);

   ci = TColor::GetColor("#3e6b99");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);
   
   TH1F *Graph_Graph33004 = new TH1F("Graph_Graph33004","Graph",100,-0.004626815,0);
   Graph_Graph33004->SetMinimum(-2.5);
   Graph_Graph33004->SetMaximum(21.5);
   Graph_Graph33004->SetDirectory(0);
   Graph_Graph33004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph33004->SetLineColor(ci);
   Graph_Graph33004->GetXaxis()->SetLabelFont(42);
   Graph_Graph33004->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph33004->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph33004->GetXaxis()->SetTitleFont(42);
   Graph_Graph33004->GetYaxis()->SetLabelFont(42);
   Graph_Graph33004->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph33004->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph33004->GetYaxis()->SetTitleOffset(0);
   Graph_Graph33004->GetYaxis()->SetTitleFont(42);
   Graph_Graph33004->GetZaxis()->SetLabelFont(42);
   Graph_Graph33004->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph33004->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph33004->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph33004);
   
   grae->Draw("5 ");
  
// ------------>Primitives in pad: overlay
   TPad *overlay = new TPad("overlay", "",0,0,1,1);
   overlay->Draw();
   overlay->cd();
   overlay->Range(-4.909091,-3.080645,2.363636,22.72581);
   overlay->SetFillColor(0);
   overlay->SetFillStyle(4000);
   overlay->SetBorderMode(0);
   overlay->SetBorderSize(2);
   overlay->SetLeftMargin(0.4);
   overlay->SetRightMargin(0.05);
   overlay->SetTopMargin(0.125);
   overlay->SetFrameFillStyle(4000);
   overlay->SetFrameBorderMode(0);
   overlay->SetFrameFillStyle(4000);
   overlay->SetFrameBorderMode(0);
   
   TH2F *axisHist2__3 = new TH2F("axisHist2__3","axisHist2",10,-2,2,20,-0.5,19.5);
   axisHist2__3->SetStats(0);

   ci = TColor::GetColor("#000099");
   axisHist2__3->SetLineColor(ci);
   axisHist2__3->GetXaxis()->SetTitle("(#hat{#theta}-#theta_{0})/#sigma");
   axisHist2__3->GetXaxis()->SetNdivisions(505);
   axisHist2__3->GetXaxis()->SetLabelFont(42);
   axisHist2__3->GetXaxis()->SetTitleSize(0.05);
   axisHist2__3->GetXaxis()->SetTitleOffset(0.9);
   axisHist2__3->GetXaxis()->SetTitleFont(42);
   axisHist2__3->GetYaxis()->SetNdivisions(0);
   axisHist2__3->GetYaxis()->SetLabelFont(42);
   axisHist2__3->GetYaxis()->SetLabelSize(0.035);
   axisHist2__3->GetYaxis()->SetTitleSize(0.035);
   axisHist2__3->GetYaxis()->SetTitleOffset(0);
   axisHist2__3->GetYaxis()->SetTitleFont(42);
   axisHist2__3->GetZaxis()->SetLabelFont(42);
   axisHist2__3->GetZaxis()->SetLabelSize(0.035);
   axisHist2__3->GetZaxis()->SetTitleSize(0.035);
   axisHist2__3->GetZaxis()->SetTitleFont(42);
   axisHist2__3->Draw("");
   
   Double_t Graph0_fx3005[20] = {
   0.6246727,
   -0.02156206,
   0.02406511,
   0.9346495,
   0.9422666,
   0.3662167,
   0.01650526,
   -0.2514478,
   -0.2404808,
   0.9003158,
   -0.175935,
   -0.2695706,
   -0.01545843,
   -0.003890375,
   -0.07078337,
   0.3277336,
   0.8837117,
   -0.374512,
   0.1564695,
   1.02096};
   Double_t Graph0_fy3005[20] = {
   19,
   18,
   17,
   16,
   15,
   14,
   13,
   12,
   11,
   10,
   9,
   8,
   7,
   6,
   5,
   4,
   3,
   2,
   1,
   0};
   Double_t Graph0_felx3005[20] = {
   0.7222858,
   0.9975125,
   1.000166,
   0.7190464,
   0.4537855,
   0.9616041,
   1.001275,
   0.7722398,
   0.8783811,
   0.04268532,
   0.9730308,
   0.9491163,
   0.9988447,
   0.7355703,
   0.9977428,
   0.9735354,
   0.06630532,
   0.8846675,
   0.9939042,
   0.03760051};
   Double_t Graph0_fely3005[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fehx3005[20] = {
   0.7120326,
   0.9942671,
   0.9969797,
   0.7313213,
   0.4581868,
   0.961923,
   0.9988096,
   0.810487,
   0.8790973,
   0.04523329,
   0.9775522,
   0.9563867,
   1.000689,
   0.7047457,
   0.9944828,
   0.9777424,
   0.07115035,
   0.891781,
   0.9961985,
   0.03826276};
   Double_t Graph0_fehy3005[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(20,Graph0_fx3005,Graph0_fy3005,Graph0_felx3005,Graph0_fehx3005,Graph0_fely3005,Graph0_fehy3005);
   grae->SetName("Graph0");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(4);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph03005 = new TH1F("Graph_Graph03005","Graph",100,-1.551695,1.958486);
   Graph_Graph03005->SetMinimum(0);
   Graph_Graph03005->SetMaximum(20.9);
   Graph_Graph03005->SetDirectory(0);
   Graph_Graph03005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph03005->SetLineColor(ci);
   Graph_Graph03005->GetXaxis()->SetLabelFont(42);
   Graph_Graph03005->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph03005->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph03005->GetXaxis()->SetTitleFont(42);
   Graph_Graph03005->GetYaxis()->SetNdivisions(0);
   Graph_Graph03005->GetYaxis()->SetLabelFont(42);
   Graph_Graph03005->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph03005->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph03005->GetYaxis()->SetTitleOffset(0);
   Graph_Graph03005->GetYaxis()->SetTitleFont(42);
   Graph_Graph03005->GetZaxis()->SetLabelFont(42);
   Graph_Graph03005->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph03005->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph03005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph03005);
   
   grae->Draw("p");
   TLine *line = new TLine(-1,-0.5,-1,19.5);
   line->SetLineColor(13);
   line->SetLineStyle(7);
   line->SetLineWidth(3);
   line->Draw();
   line = new TLine(1,-0.5,1,19.5);
   line->SetLineColor(13);
   line->SetLineStyle(7);
   line->SetLineWidth(3);
   line->Draw();
   TLatex *   tex = new TLatex(0.05,0.95,"ATLAS");
tex->SetNDC();
   tex->SetTextFont(72);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2,0.95,"Internal");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.05,0.92,"#sqrt{s}=13 TeV, 139.0fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   overlay->Modified();
   pad->cd();
   pad->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
