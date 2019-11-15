void ranking()
{
//=========Macro generated from canvas: c1/Canvas
//=========  (Fri Nov 15 03:56:17 2019) by ROOT version 6.14/04
   TCanvas *c1 = new TCanvas("c1", "Canvas",0,0,1200,1200);
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
   pad->Range(-2.246968,-3.080645,1.081874,22.72581);
   pad->SetFillColor(0);
   pad->SetBorderMode(0);
   pad->SetBorderSize(2);
   pad->SetLeftMargin(0.4);
   pad->SetRightMargin(0.05);
   pad->SetTopMargin(0.125);
   pad->SetFrameBorderMode(0);
   pad->SetFrameBorderMode(0);
   
   TH2F *axisHist__1 = new TH2F("axisHist__1","axisHist",10,-0.9154315,0.9154315,20,-0.5,19.5);
   axisHist__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   axisHist__1->SetLineColor(ci);
   axisHist__1->GetXaxis()->SetTitle("#Delta#mu/#mu");
   axisHist__1->GetXaxis()->SetNdivisions(506);
   axisHist__1->GetXaxis()->SetLabelFont(42);
   axisHist__1->GetXaxis()->SetTitleSize(0.05);
   axisHist__1->GetXaxis()->SetTitleOffset(0.6);
   axisHist__1->GetXaxis()->SetTitleFont(42);
   axisHist__1->GetYaxis()->SetBinLabel(20,"Vjets_GenMG_lvqq_Res");
   axisHist__1->GetYaxis()->SetBinLabel(19,"XS_Top_Merg");
   axisHist__1->GetYaxis()->SetBinLabel(18,"JET_BGSF_Gammajet_Modelling");
   axisHist__1->GetYaxis()->SetBinLabel(17,"XS_MJ_mu_lvqq_Res");
   axisHist__1->GetYaxis()->SetBinLabel(16,"VV_RFScale_lvqq_Merg");
   axisHist__1->GetYaxis()->SetBinLabel(15,"XS_Top_LP_lvqq_Merg");
   axisHist__1->GetYaxis()->SetBinLabel(14,"XS_Wjets_LP_lvqq_Merg");
   axisHist__1->GetYaxis()->SetBinLabel(13,"XS_Wjets_Res");
   axisHist__1->GetYaxis()->SetBinLabel(12,"XS_SingleTop");
   axisHist__1->GetYaxis()->SetBinLabel(11,"XS_Top_Res");
   axisHist__1->GetYaxis()->SetBinLabel(10,"ttbar_aMC_lvqq_Res");
   axisHist__1->GetYaxis()->SetBinLabel(9,"FATJET_Medium_JET_Rtrk_Baseline_pT");
   axisHist__1->GetYaxis()->SetBinLabel(8,"XS_Dibosons");
   axisHist__1->GetYaxis()->SetBinLabel(7,"JET_CR_JET_JER_EffectiveNP_1");
   axisHist__1->GetYaxis()->SetBinLabel(6,"JET_SigSF_ttbar_Modelling_hadronisation");
   axisHist__1->GetYaxis()->SetBinLabel(5,"ttbar_PH7_lvqq_Res");
   axisHist__1->GetYaxis()->SetBinLabel(4,"JET_CR_JET_JER_EffectiveNP_6");
   axisHist__1->GetYaxis()->SetBinLabel(3,"FATJET_Medium_JET_Rtrk_Tracking_pT");
   axisHist__1->GetYaxis()->SetBinLabel(2,"ttbar_PH7_lvqq_Merg");
   axisHist__1->GetYaxis()->SetBinLabel(1,"VV_RFScale_lvqq_Res");
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
   0.9154315,
   0,
   0.9154315,
   0,
   0.9154315,
   0,
   0.9154315,
   0,
   0.9154315,
   0,
   0.9154315,
   0,
   0.9154315,
   0,
   0.9154315,
   0,
   0.9154315,
   0,
   0.9154315};
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
   0.9154315,
   0,
   0.9154315,
   0,
   0.9154315,
   0,
   0.9154315,
   0,
   0.9154315,
   0,
   0.9154315,
   0,
   0.9154315,
   0,
   0.9154315,
   0,
   0.9154315,
   0,
   0.9154315};
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
   
   TH1F *Graph_Graph03001 = new TH1F("Graph_Graph03001","Graph",100,-1.098518,1.098518);
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
   0.4110964,
   0.2712499,
   0.2832954,
   0.2740932,
   0.2337639,
   0.2361043,
   0.2271969,
   0.1954466,
   0.2212814,
   0.1675562,
   0.1871839,
   0.1676602,
   0.1428181,
   0.1424209,
   0.1909626,
   0.1295153,
   0.1253973,
   0.1069492,
   0.09159103,
   0.01715699};
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
   
   TH1F *Graph_Graph13002 = new TH1F("Graph_Graph13002","Graph",100,0,0.4522061);
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
   0.421114,
   0.3059359,
   0.2786486,
   0.2808524,
   0.2775119,
   0.2652859,
   0.2652859,
   0.227447,
   0.1947089,
   0.2033281,
   0.1716894,
   0.1905618,
   0.163289,
   0.1413555,
   0.08933328,
   0.1087229,
   0.1103051,
   0.09947038,
   0.09711614,
   0.02535212};
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
   
   TH1F *Graph_Graph23003 = new TH1F("Graph_Graph23003","Graph",100,-0.4632254,0);
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
   
   TH2F *axisHist__2 = new TH2F("axisHist__2","axisHist",10,-0.9154315,0.9154315,20,-0.5,19.5);
   axisHist__2->SetStats(0);

   ci = TColor::GetColor("#000099");
   axisHist__2->SetLineColor(ci);
   axisHist__2->GetXaxis()->SetTitle("#Delta#mu/#mu");
   axisHist__2->GetXaxis()->SetNdivisions(506);
   axisHist__2->GetXaxis()->SetLabelFont(42);
   axisHist__2->GetXaxis()->SetTitleSize(0.05);
   axisHist__2->GetXaxis()->SetTitleOffset(0.6);
   axisHist__2->GetXaxis()->SetTitleFont(42);
   axisHist__2->GetYaxis()->SetBinLabel(20,"Vjets_GenMG_lvqq_Res");
   axisHist__2->GetYaxis()->SetBinLabel(19,"XS_Top_Merg");
   axisHist__2->GetYaxis()->SetBinLabel(18,"JET_BGSF_Gammajet_Modelling");
   axisHist__2->GetYaxis()->SetBinLabel(17,"XS_MJ_mu_lvqq_Res");
   axisHist__2->GetYaxis()->SetBinLabel(16,"VV_RFScale_lvqq_Merg");
   axisHist__2->GetYaxis()->SetBinLabel(15,"XS_Top_LP_lvqq_Merg");
   axisHist__2->GetYaxis()->SetBinLabel(14,"XS_Wjets_LP_lvqq_Merg");
   axisHist__2->GetYaxis()->SetBinLabel(13,"XS_Wjets_Res");
   axisHist__2->GetYaxis()->SetBinLabel(12,"XS_SingleTop");
   axisHist__2->GetYaxis()->SetBinLabel(11,"XS_Top_Res");
   axisHist__2->GetYaxis()->SetBinLabel(10,"ttbar_aMC_lvqq_Res");
   axisHist__2->GetYaxis()->SetBinLabel(9,"FATJET_Medium_JET_Rtrk_Baseline_pT");
   axisHist__2->GetYaxis()->SetBinLabel(8,"XS_Dibosons");
   axisHist__2->GetYaxis()->SetBinLabel(7,"JET_CR_JET_JER_EffectiveNP_1");
   axisHist__2->GetYaxis()->SetBinLabel(6,"JET_SigSF_ttbar_Modelling_hadronisation");
   axisHist__2->GetYaxis()->SetBinLabel(5,"ttbar_PH7_lvqq_Res");
   axisHist__2->GetYaxis()->SetBinLabel(4,"JET_CR_JET_JER_EffectiveNP_6");
   axisHist__2->GetYaxis()->SetBinLabel(3,"FATJET_Medium_JET_Rtrk_Tracking_pT");
   axisHist__2->GetYaxis()->SetBinLabel(2,"ttbar_PH7_lvqq_Merg");
   axisHist__2->GetYaxis()->SetBinLabel(1,"VV_RFScale_lvqq_Res");
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
   0.421114,
   0.3059359,
   0.2786486,
   0.2808524,
   0.2775119,
   0.2652859,
   0.2652859,
   0.227447,
   0.1947089,
   0.2033281,
   0.1716894,
   0.1905618,
   0.163289,
   0.1413555,
   0.08933328,
   0.1087229,
   0.1103051,
   0.09947038,
   0.09711614,
   0.02535212};
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
   
   TH1F *Graph_Graph33004 = new TH1F("Graph_Graph33004","Graph",100,-0.4632254,0);
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
   0.5869442,
   0.9443189,
   0.1863615,
   0.05706155,
   0.6657201,
   0.9108863,
   0.8860393,
   1.028101,
   -1.276745,
   0.9604332,
   -1.081783,
   1.570781,
   -0.8224586,
   1.27699,
   -0.09616426,
   -0.9141721,
   -0.08140056,
   0.7977364,
   -0.0536118,
   -2.277155};
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
   0.3842376,
   0.01802633,
   0.7325219,
   0.5228113,
   0.8305657,
   0.01512699,
   0.004979864,
   0.006296243,
   0.8104588,
   0.01166392,
   0.809281,
   0.613058,
   0.9427544,
   0.7818148,
   0.8879165,
   0.8696193,
   0.9662845,
   0.9152411,
   0.97448,
   0.8638823};
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
   0.3756912,
   0.02123337,
   0.7066955,
   0.4644067,
   0.8492557,
   0.01759548,
   0.005133435,
   0.006664845,
   0.8161862,
   0.01407476,
   0.8433759,
   0.6386332,
   0.9263338,
   0.8148734,
   0.8596647,
   0.83689,
   0.9589151,
   0.9127222,
   0.9684553,
   0.8886687};
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
   
   TH1F *Graph_Graph03005 = new TH1F("Graph_Graph03005","Graph",100,-3.676083,2.74446);
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
