void L1_MergLP_VBF_WZ_SR()
{
//=========Macro generated from canvas: c2/c2
//=========  (Fri Nov  8 18:43:10 2019) by ROOT version 6.14/04
   TCanvas *c2 = new TCanvas("c2", "c2",0,0,800,1000);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c2->Range(0,0,1,1);
   c2->SetFillColor(0);
   c2->SetBorderMode(0);
   c2->SetBorderSize(2);
   c2->SetTickx(1);
   c2->SetTicky(1);
   c2->SetLeftMargin(0.16);
   c2->SetRightMargin(0.05);
   c2->SetTopMargin(0.05);
   c2->SetBottomMargin(0.16);
   c2->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.4,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-613.924,-1.78654,6348.101,6.221429);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(2);
   pad1->SetLogy();
   pad1->SetTickx(1);
   pad1->SetTicky(1);
   pad1->SetLeftMargin(0.16);
   pad1->SetRightMargin(0.05);
   pad1->SetTopMargin(0.05);
   pad1->SetBottomMargin(0.02);
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameBorderMode(0);
   
   THStack *hs = new THStack();
   hs->SetName("hs");
   hs->SetTitle("hs");
   hs->SetMinimum(0.1);
   hs->SetMaximum(288925.7);
   Double_t xAxis37[21] = {500, 570, 650, 730, 810, 890, 970, 1050, 1130, 1220, 1310, 1400, 1490, 1590, 1690, 1790, 1900, 2010, 2360, 2880, 6000}; 
   
   TH1F *hs_stack_4 = new TH1F("hs_stack_4","hs",20, xAxis37);
   hs_stack_4->SetMinimum(0.02363847);
   hs_stack_4->SetMaximum(662263);
   hs_stack_4->SetDirectory(0);
   hs_stack_4->SetStats(0);
   hs_stack_4->SetLineWidth(2);
   hs_stack_4->SetMarkerStyle(20);
   hs_stack_4->SetMarkerSize(1.2);
   hs_stack_4->GetXaxis()->SetTitle("m(VV) [GeV]");
   hs_stack_4->GetXaxis()->SetLabelFont(43);
   hs_stack_4->GetXaxis()->SetLabelSize(0);
   hs_stack_4->GetXaxis()->SetTitleSize(0);
   hs_stack_4->GetXaxis()->SetTitleOffset(1.4);
   hs_stack_4->GetXaxis()->SetTitleFont(43);
   hs_stack_4->GetYaxis()->SetTitle("Events");
   hs_stack_4->GetYaxis()->SetLabelFont(43);
   hs_stack_4->GetYaxis()->SetLabelSize(25);
   hs_stack_4->GetYaxis()->SetTitleSize(25);
   hs_stack_4->GetYaxis()->SetTitleOffset(2);
   hs_stack_4->GetYaxis()->SetTitleFont(43);
   hs_stack_4->GetZaxis()->SetLabelFont(42);
   hs_stack_4->GetZaxis()->SetLabelSize(0.05);
   hs_stack_4->GetZaxis()->SetTitleSize(0.05);
   hs_stack_4->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_4);
   
   Double_t xAxis38[21] = {500, 570, 650, 730, 810, 890, 970, 1050, 1130, 1220, 1310, 1400, 1490, 1590, 1690, 1790, 1900, 2010, 2360, 2880, 6000}; 
   
   TH1F *combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1 = new TH1F("combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1","Histogram of combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR",20, xAxis38);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->SetBinContent(1,4.364945);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->SetBinContent(2,6.668275);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->SetBinContent(3,4.050027);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->SetBinContent(4,3.512422);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->SetBinContent(5,1.572538);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->SetBinContent(6,1.228648);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->SetBinContent(7,0.5974125);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->SetBinContent(8,0.721554);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->SetBinContent(9,0.1459333);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->SetBinContent(10,0.1668728);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->SetBinContent(11,0.3596533);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->SetBinContent(12,0.06137838);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->SetBinContent(13,0.03753931);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->SetBinContent(14,0.03605326);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->SetBinContent(15,0.01085952);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->SetBinContent(16,0.003820113);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->SetBinContent(17,0.009543652);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->SetBinContent(18,0.05829185);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->SetBinContent(19,0.01496195);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->SetBinContent(20,0.003850155);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->SetBinError(1,9.343388);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->SetBinError(2,11.5484);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->SetBinError(3,9.00003);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->SetBinError(4,8.381434);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->SetBinError(5,5.608097);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->SetBinError(6,4.957111);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->SetBinError(7,3.456624);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->SetBinError(8,3.798826);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->SetBinError(9,1.708411);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->SetBinError(10,1.82687);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->SetBinError(11,2.681989);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->SetBinError(12,1.107957);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->SetBinError(13,0.8664792);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->SetBinError(14,0.8491555);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->SetBinError(15,0.4660368);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->SetBinError(16,0.2764096);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->SetBinError(17,0.4368902);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->SetBinError(18,1.079739);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->SetBinError(19,0.5470275);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->SetBinError(20,0.2774943);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->SetEntries(21);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#99ff99");
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->SetLineColor(ci);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->SetLineWidth(2);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->SetMarkerStyle(20);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->SetMarkerSize(1.2);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->GetXaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->GetXaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->GetXaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->GetXaxis()->SetTitleFont(42);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->GetYaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->GetYaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->GetYaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->GetYaxis()->SetTitleOffset(1.4);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->GetYaxis()->SetTitleFont(42);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->GetZaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1->GetZaxis()->SetTitleFont(42);
   hs->Add(combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1,"");
   Double_t xAxis39[21] = {500, 570, 650, 730, 810, 890, 970, 1050, 1130, 1220, 1310, 1400, 1490, 1590, 1690, 1790, 1900, 2010, 2360, 2880, 6000}; 
   
   TH1F *combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2 = new TH1F("combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2","Histogram of combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR",20, xAxis39);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->SetBinContent(1,9.104846);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->SetBinContent(2,11.5122);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->SetBinContent(3,11.62346);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->SetBinContent(4,5.191735);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->SetBinContent(5,3.865339);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->SetBinContent(6,1.38163);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->SetBinContent(7,0.9936774);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->SetBinContent(8,1.078261);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->SetBinContent(9,1.17586);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->SetBinContent(10,0.6243455);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->SetBinContent(11,0.7748387);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->SetBinContent(12,0.2199702);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->SetBinContent(13,0.2066224);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->SetBinContent(14,2.151486e-07);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->SetBinContent(15,0.2529921);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->SetBinContent(16,1.800659e-07);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->SetBinContent(17,1.918035e-07);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->SetBinContent(18,1.928651e-07);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->SetBinContent(19,1.975287e-07);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->SetBinContent(20,1.131698e-07);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->SetBinError(1,13.49433);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->SetBinError(2,15.1738);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->SetBinError(3,15.24694);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->SetBinError(4,10.18993);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->SetBinError(5,8.792427);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->SetBinError(6,5.256671);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->SetBinError(7,4.457976);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->SetBinError(8,4.643837);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->SetBinError(9,4.849454);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->SetBinError(10,3.533682);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->SetBinError(11,3.936594);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->SetBinError(12,2.097476);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->SetBinError(13,2.032842);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->SetBinError(14,0.002074361);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->SetBinError(15,2.249409);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->SetBinError(16,0.001897714);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->SetBinError(17,0.001958589);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->SetBinError(18,0.001964002);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->SetBinError(19,0.001987605);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->SetBinError(20,0.001504459);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->SetEntries(21);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->SetLineColor(ci);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->SetLineWidth(2);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->SetMarkerStyle(20);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->SetMarkerSize(1.2);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->GetXaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->GetXaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->GetXaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->GetXaxis()->SetTitleFont(42);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->GetYaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->GetYaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->GetYaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->GetYaxis()->SetTitleOffset(1.4);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->GetYaxis()->SetTitleFont(42);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->GetZaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2->GetZaxis()->SetTitleFont(42);
   hs->Add(combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2,"");
   Double_t xAxis40[21] = {500, 570, 650, 730, 810, 890, 970, 1050, 1130, 1220, 1310, 1400, 1490, 1590, 1690, 1790, 1900, 2010, 2360, 2880, 6000}; 
   
   TH1F *combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3 = new TH1F("combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3","Histogram of combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR",20, xAxis40);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->SetBinContent(1,15.62585);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->SetBinContent(2,25.59185);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->SetBinContent(3,22.44024);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->SetBinContent(4,7.794504);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->SetBinContent(5,11.26461);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->SetBinContent(6,7.205267);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->SetBinContent(7,4.995375);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->SetBinContent(8,3.151783);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->SetBinContent(9,4.887629);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->SetBinContent(10,1.495214);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->SetBinContent(11,1.598189);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->SetBinContent(12,0.7678504);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->SetBinContent(13,2.679153);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->SetBinContent(14,1.565038);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->SetBinContent(15,3.447477e-08);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->SetBinContent(16,1.06065);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->SetBinContent(17,0.03296611);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->SetBinContent(18,3.314857e-08);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->SetBinContent(19,0.09204026);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->SetBinContent(20,0.03933602);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->SetBinError(1,17.67815);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->SetBinError(2,22.62381);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->SetBinError(3,21.18501);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->SetBinError(4,12.4856);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->SetBinError(5,15.00974);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->SetBinError(6,12.00439);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->SetBinError(7,9.995374);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->SetBinError(8,7.9395);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->SetBinError(9,9.886991);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->SetBinError(10,5.468481);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->SetBinError(11,5.653653);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->SetBinError(12,3.918802);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->SetBinError(13,7.320045);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->SetBinError(14,5.594708);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->SetBinError(15,0.0008303586);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->SetBinError(16,4.605758);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->SetBinError(17,0.8119866);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->SetBinError(18,0.0008142306);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->SetBinError(19,1.356763);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->SetBinError(20,0.8869726);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->SetEntries(21);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->SetLineColor(ci);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->SetLineWidth(2);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->SetMarkerStyle(20);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->SetMarkerSize(1.2);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->GetXaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->GetXaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->GetXaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->GetXaxis()->SetTitleFont(42);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->GetYaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->GetYaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->GetYaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->GetYaxis()->SetTitleOffset(1.4);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->GetYaxis()->SetTitleFont(42);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->GetZaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3->GetZaxis()->SetTitleFont(42);
   hs->Add(combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3,"");
   Double_t xAxis41[21] = {500, 570, 650, 730, 810, 890, 970, 1050, 1130, 1220, 1310, 1400, 1490, 1590, 1690, 1790, 1900, 2010, 2360, 2880, 6000}; 
   
   TH1F *combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4 = new TH1F("combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4","Histogram of combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR",20, xAxis41);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->SetBinContent(1,46.45599);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->SetBinContent(2,49.4564);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->SetBinContent(3,38.63456);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->SetBinContent(4,23.57427);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->SetBinContent(5,13.82722);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->SetBinContent(6,8.463518);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->SetBinContent(7,3.854111);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->SetBinContent(8,2.766135);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->SetBinContent(9,1.769102);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->SetBinContent(10,0.9487901);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->SetBinContent(11,0.3768106);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->SetBinContent(12,0.1356004);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->SetBinContent(13,0.1160219);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->SetBinContent(14,8.991837e-08);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->SetBinContent(15,0.1191605);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->SetBinContent(16,0.1027723);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->SetBinContent(17,8.016159e-08);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->SetBinContent(18,0.08060528);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->SetBinContent(19,8.255434e-08);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->SetBinContent(20,4.729775e-08);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->SetBinError(1,30.48147);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->SetBinError(2,31.4504);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->SetBinError(3,27.79732);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->SetBinError(4,21.71372);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->SetBinError(5,16.62962);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->SetBinError(6,13.01039);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->SetBinError(7,8.779649);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->SetBinError(8,7.437923);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->SetBinError(9,5.94828);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->SetBinError(10,4.356122);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->SetBinError(11,2.745216);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->SetBinError(12,1.646818);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->SetBinError(13,1.523298);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->SetBinError(14,0.001341032);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->SetBinError(15,1.543765);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->SetBinError(16,1.433683);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->SetBinError(17,0.001266188);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->SetBinError(18,1.269687);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->SetBinError(19,0.001284946);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->SetBinError(20,0.0009726022);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->SetEntries(21);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->SetStats(0);

   ci = TColor::GetColor("#6699ff");
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#6699ff");
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->SetLineColor(ci);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->SetLineWidth(2);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->SetMarkerStyle(20);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->SetMarkerSize(1.2);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->GetXaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->GetXaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->GetXaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->GetXaxis()->SetTitleFont(42);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->GetYaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->GetYaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->GetYaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->GetYaxis()->SetTitleOffset(1.4);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->GetYaxis()->SetTitleFont(42);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->GetZaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4->GetZaxis()->SetTitleFont(42);
   hs->Add(combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4,"");
   Double_t xAxis42[21] = {500, 570, 650, 730, 810, 890, 970, 1050, 1130, 1220, 1310, 1400, 1490, 1590, 1690, 1790, 1900, 2010, 2360, 2880, 6000}; 
   
   TH1F *combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5 = new TH1F("combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5","Histogram of combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR",20, xAxis42);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->SetBinContent(1,165.531);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->SetBinContent(2,195.6969);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->SetBinContent(3,181.6488);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->SetBinContent(4,142.9225);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->SetBinContent(5,93.14395);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->SetBinContent(6,61.7916);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->SetBinContent(7,39.44623);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->SetBinContent(8,27.08991);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->SetBinContent(9,21.17089);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->SetBinContent(10,12.56335);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->SetBinContent(11,10.00008);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->SetBinContent(12,6.096649);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->SetBinContent(13,4.588948);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->SetBinContent(14,2.594306);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->SetBinContent(15,2.566895);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->SetBinContent(16,1.849169);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->SetBinContent(17,1.548133);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->SetBinContent(18,2.209385);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->SetBinContent(19,1.260983);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->SetBinContent(20,0.02512854);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->SetBinError(1,57.53799);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->SetBinError(2,62.56148);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->SetBinError(3,60.27418);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->SetBinError(4,53.46447);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->SetBinError(5,43.16108);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->SetBinError(6,35.1544);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->SetBinError(7,28.0878);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->SetBinError(8,23.27656);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->SetBinError(9,20.57712);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->SetBinError(10,15.8514);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->SetBinError(11,14.14219);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->SetBinError(12,11.04233);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->SetBinError(13,9.580133);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->SetBinError(14,7.203202);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->SetBinError(15,7.165048);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->SetBinError(16,6.081396);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->SetBinError(17,5.56441);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->SetBinError(18,6.647383);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->SetBinError(19,5.021918);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->SetBinError(20,0.7089223);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->SetEntries(21);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->SetStats(0);

   ci = TColor::GetColor("#ff9999");
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#ff9999");
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->SetLineColor(ci);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->SetLineWidth(2);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->SetMarkerStyle(20);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->SetMarkerSize(1.2);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->GetXaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->GetXaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->GetXaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->GetXaxis()->SetTitleFont(42);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->GetYaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->GetYaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->GetYaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->GetYaxis()->SetTitleOffset(1.4);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->GetYaxis()->SetTitleFont(42);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->GetZaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5->GetZaxis()->SetTitleFont(42);
   hs->Add(combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5,"");
   hs->Draw("hist");
   
   Double_t Graph0_fx3007[20] = {
   535,
   610,
   690,
   770,
   850,
   930,
   1010,
   1090,
   1175,
   1265,
   1355,
   1445,
   1540,
   1640,
   1740,
   1845,
   1955,
   2185,
   2620,
   4440};
   Double_t Graph0_fy3007[20] = {
   241.0826,
   288.9462,
   258.5046,
   183.4945,
   125.1153,
   83.65027,
   54.56515,
   36.58562,
   29.4581,
   15.81468,
   13.11349,
   7.281448,
   7.628284,
   4.195397,
   2.949908,
   3.016412,
   1.590643,
   2.348282,
   1.371996,
   0.06831488};
   Double_t Graph0_felx3007[20] = {
   35,
   40,
   40,
   40,
   40,
   40,
   40,
   40,
   45,
   45,
   45,
   45,
   50,
   50,
   50,
   55,
   55,
   175,
   260,
   1560};
   Double_t Graph0_fely3007[20] = {
   10.89859,
   10.08405,
   9.110199,
   7.772751,
   5.697876,
   4.970619,
   4.083294,
   2.811222,
   2.647625,
   1.781029,
   1.734133,
   1.016421,
   1.331784,
   0.9012234,
   0.6637728,
   0.7283809,
   0.4286458,
   0.433399,
   0.2718475,
   0.1206884};
   Double_t Graph0_fehx3007[20] = {
   35,
   40,
   40,
   40,
   40,
   40,
   40,
   40,
   45,
   45,
   45,
   45,
   50,
   50,
   50,
   55,
   55,
   175,
   260,
   1560};
   Double_t Graph0_fehy3007[20] = {
   10.89859,
   10.08405,
   9.110168,
   7.772751,
   5.697891,
   4.970619,
   4.083302,
   2.811222,
   2.647627,
   1.781029,
   1.734134,
   1.01642,
   1.331783,
   0.9012237,
   0.6637728,
   0.7283807,
   0.4286458,
   0.433399,
   0.2718475,
   0.1206884};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,Graph0_fx3007,Graph0_fy3007,Graph0_felx3007,Graph0_fehx3007,Graph0_fely3007,Graph0_fehy3007);
   grae->SetName("Graph0");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3004);
   grae->SetMarkerStyle(0);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph03007 = new TH1F("Graph_Graph03007","Graph",100,0,6550);
   Graph_Graph03007->SetMinimum(-29.96064);
   Graph_Graph03007->SetMaximum(328.9385);
   Graph_Graph03007->SetDirectory(0);
   Graph_Graph03007->SetStats(0);
   Graph_Graph03007->SetLineWidth(2);
   Graph_Graph03007->SetMarkerStyle(20);
   Graph_Graph03007->SetMarkerSize(1.2);
   Graph_Graph03007->GetXaxis()->SetLabelFont(42);
   Graph_Graph03007->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph03007->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph03007->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph03007->GetXaxis()->SetTitleFont(42);
   Graph_Graph03007->GetYaxis()->SetLabelFont(42);
   Graph_Graph03007->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph03007->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph03007->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph03007->GetYaxis()->SetTitleFont(42);
   Graph_Graph03007->GetZaxis()->SetLabelFont(42);
   Graph_Graph03007->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph03007->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph03007->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph03007);
   
   grae->Draw("e2 ");
   Double_t xAxis43[21] = {500, 570, 650, 730, 810, 890, 970, 1050, 1130, 1220, 1310, 1400, 1490, 1590, 1690, 1790, 1900, 2010, 2360, 2880, 6000}; 
   
   TH1F *combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19 = new TH1F("combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19","Histogram of combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR",20, xAxis43);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->SetBinContent(1,236);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->SetBinContent(2,273);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->SetBinContent(3,245);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->SetBinContent(4,177);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->SetBinContent(5,122);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->SetBinContent(6,89);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->SetBinContent(7,56);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->SetBinContent(8,29);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->SetBinContent(9,31);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->SetBinContent(10,14);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->SetBinContent(11,14);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->SetBinContent(12,5);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->SetBinContent(13,9);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->SetBinContent(14,6);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->SetBinContent(15,3);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->SetBinContent(16,1);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->SetBinContent(17,1);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->SetBinContent(18,1);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->SetBinContent(19,1);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->SetBinError(1,15.36229);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->SetBinError(2,16.52271);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->SetBinError(3,15.65248);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->SetBinError(4,13.30413);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->SetBinError(5,11.04536);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->SetBinError(6,9.433981);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->SetBinError(7,7.483315);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->SetBinError(8,5.385165);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->SetBinError(9,5.567764);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->SetBinError(10,3.741657);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->SetBinError(11,3.741657);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->SetBinError(12,2.236068);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->SetBinError(13,3);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->SetBinError(14,2.44949);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->SetBinError(15,1.732051);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->SetBinError(16,1);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->SetBinError(17,1);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->SetBinError(18,1);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->SetBinError(19,1);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->SetEntries(21);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->SetStats(0);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->SetLineWidth(2);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->SetMarkerStyle(20);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->SetMarkerSize(1.2);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->GetXaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->GetXaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->GetXaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->GetXaxis()->SetTitleFont(42);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->GetYaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->GetYaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->GetYaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->GetYaxis()->SetTitleOffset(1.4);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->GetYaxis()->SetTitleFont(42);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->GetZaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->GetZaxis()->SetTitleFont(42);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__19->Draw("same");
   Double_t xAxis44[21] = {500, 570, 650, 730, 810, 890, 970, 1050, 1130, 1220, 1310, 1400, 1490, 1590, 1690, 1790, 1900, 2010, 2360, 2880, 6000}; 
   
   TH1F *combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20 = new TH1F("combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20","Histogram of combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR",20, xAxis44);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->SetBinContent(1,1.058171e-15);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->SetBinContent(2,0.02059641);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->SetBinContent(3,0.1074238);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->SetBinContent(4,0.4991095);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->SetBinContent(5,1.441634);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->SetBinContent(6,3.579605);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->SetBinContent(7,4.678341);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->SetBinContent(8,1.777981);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->SetBinContent(9,0.3086891);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->SetBinContent(10,0.01611274);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->SetBinContent(11,0.003915335);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->SetBinContent(12,1.058171e-21);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->SetBinContent(13,1.058171e-21);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->SetBinContent(14,1.058171e-21);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->SetBinContent(15,1.058171e-21);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->SetBinContent(16,1.058171e-21);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->SetBinContent(17,1.058171e-21);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->SetBinContent(18,1.058171e-21);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->SetBinContent(19,0.00401014);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->SetBinContent(20,1.058171e-21);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->SetBinError(1,1.454765e-07);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->SetBinError(2,0.6418163);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->SetBinError(3,1.465768);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->SetBinError(4,3.15946);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->SetBinError(5,5.369607);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->SetBinError(6,8.461211);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->SetBinError(7,9.672994);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->SetBinError(8,5.963189);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->SetBinError(9,2.484709);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->SetBinError(10,0.5676749);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->SetBinError(11,0.2798333);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->SetBinError(12,1.454765e-10);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->SetBinError(13,1.454765e-10);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->SetBinError(14,1.454765e-10);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->SetBinError(15,1.454765e-10);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->SetBinError(16,1.454765e-10);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->SetBinError(17,1.454765e-10);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->SetBinError(18,1.454765e-10);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->SetBinError(19,0.283201);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->SetBinError(20,1.454765e-10);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->SetEntries(21);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->SetLineColor(ci);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->SetLineWidth(2);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->SetMarkerStyle(20);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->SetMarkerSize(1.2);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->GetXaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->GetXaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->GetXaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->GetXaxis()->SetTitleFont(42);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->GetYaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->GetYaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->GetYaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->GetYaxis()->SetTitleOffset(1.4);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->GetYaxis()->SetTitleFont(42);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->GetZaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->GetZaxis()->SetTitleFont(42);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__20->Draw("hist same");
   
   TLegend *leg = new TLegend(0.72,0.62,0.91,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergLP_VBF_WZ_SR_rebinned","VBF HVT W' 1TeV","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_1","Z+jets","f");

   ci = TColor::GetColor("#99ff99");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#99ff99");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_2","Single-t","f");

   ci = TColor::GetColor("#ffff00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ffff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_3","Diboson","f");

   ci = TColor::GetColor("#cccccc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#cccccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_4","Top Pair","f");

   ci = TColor::GetColor("#6699ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#6699ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WZ_SR_rebinned_stack_5","W+jets","f");

   ci = TColor::GetColor("#ff9999");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff9999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph0","Uncertainity","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3004);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   TLatex *   tex = new TLatex(0.2,0.88,"ATLAS");
tex->SetNDC();
   tex->SetTextFont(72);
   tex->SetTextSize(0.06);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.35,0.88,"Internal");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.06);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2,0.81,"13TeV #scale[0.6]{#int} L dt=140fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2,0.72,"Merg LP VBF 1lep WZ SR");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.23,0.66,"#chi^{2} / dof = 10.0 / 20");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   pad1->Modified();
   c2->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "pad2",0,0.25,1,0.4);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-613.924,0.4795918,6348.101,1.5);
   pad2->SetFillColor(0);
   pad2->SetBorderMode(0);
   pad2->SetBorderSize(2);
   pad2->SetTickx(1);
   pad2->SetTicky(1);
   pad2->SetLeftMargin(0.16);
   pad2->SetRightMargin(0.05);
   pad2->SetTopMargin(0);
   pad2->SetBottomMargin(0.02);
   pad2->SetFrameBorderMode(0);
   pad2->SetFrameBorderMode(0);
   Double_t xAxis45[21] = {500, 570, 650, 730, 810, 890, 970, 1050, 1130, 1220, 1310, 1400, 1490, 1590, 1690, 1790, 1900, 2010, 2360, 2880, 6000}; 
   
   TH1F *combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21 = new TH1F("combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21","Histogram of combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR",20, xAxis45);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->SetBinContent(1,1);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->SetBinContent(2,1);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->SetBinContent(3,1);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->SetBinContent(4,1);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->SetBinContent(5,1);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->SetBinContent(6,1);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->SetBinContent(7,1);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->SetBinContent(8,1);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->SetBinContent(9,1);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->SetBinContent(10,1);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->SetBinContent(11,1);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->SetBinContent(12,1);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->SetBinContent(13,1);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->SetBinContent(14,1);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->SetBinContent(15,1);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->SetBinContent(16,1);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->SetBinContent(17,1);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->SetBinContent(18,1);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->SetBinContent(19,1);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->SetBinContent(20,1);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->SetBinError(1,0.02036653);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->SetBinError(2,0.01860336);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->SetBinError(3,0.01966826);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->SetBinError(4,0.02334471);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->SetBinError(5,0.02827124);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->SetBinError(6,0.03457533);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->SetBinError(7,0.04280971);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->SetBinError(8,0.05228111);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->SetBinError(9,0.05826364);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->SetBinError(10,0.07951879);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->SetBinError(11,0.08732547);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->SetBinError(12,0.1171901);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->SetBinError(13,0.114495);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->SetBinError(14,0.154388);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->SetBinError(15,0.1841178);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->SetBinError(16,0.1820768);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->SetBinError(17,0.2507342);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->SetBinError(18,0.2063597);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->SetBinError(19,0.269975);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->SetBinError(20,1.20988);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->SetMinimum(0.5);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->SetMaximum(1.5);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->SetEntries(224.03);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->SetLineColor(ci);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->SetLineWidth(2);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->SetMarkerStyle(20);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->SetMarkerSize(1.2);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->GetXaxis()->SetLabelFont(43);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->GetXaxis()->SetLabelSize(0);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->GetXaxis()->SetTitleSize(0);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->GetXaxis()->SetTitleFont(43);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->GetYaxis()->SetTitle("Data/Postfit");
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->GetYaxis()->SetNdivisions(205);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->GetYaxis()->SetLabelFont(43);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->GetYaxis()->SetLabelSize(25);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->GetYaxis()->SetTitleSize(25);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->GetYaxis()->SetTitleOffset(2);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->GetYaxis()->SetTitleFont(43);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->GetZaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->GetZaxis()->SetTitleFont(42);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__21->Draw("AXIS");
   
   Double_t Graph0_fx3008[20] = {
   535,
   610,
   690,
   770,
   850,
   930,
   1010,
   1090,
   1175,
   1265,
   1355,
   1445,
   1540,
   1640,
   1740,
   1845,
   1955,
   2185,
   2620,
   4440};
   Double_t Graph0_fy3008[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph0_felx3008[20] = {
   35,
   40,
   40,
   40,
   40,
   40,
   40,
   40,
   45,
   45,
   45,
   45,
   50,
   50,
   50,
   55,
   55,
   175,
   260,
   1560};
   Double_t Graph0_fely3008[20] = {
   0.04520686,
   0.03489938,
   0.03524193,
   0.04235958,
   0.04554101,
   0.05942144,
   0.07483337,
   0.07683953,
   0.08987765,
   0.1126187,
   0.1322404,
   0.1395905,
   0.174585,
   0.2148124,
   0.2250148,
   0.2414726,
   0.2694796,
   0.18456,
   0.1981402,
   1.766648};
   Double_t Graph0_fehx3008[20] = {
   35,
   40,
   40,
   40,
   40,
   40,
   40,
   40,
   45,
   45,
   45,
   45,
   50,
   50,
   50,
   55,
   55,
   175,
   260,
   1560};
   Double_t Graph0_fehy3008[20] = {
   0.04520686,
   0.03489938,
   0.03524181,
   0.04235958,
   0.04554113,
   0.05942144,
   0.07483351,
   0.07683953,
   0.08987772,
   0.1126187,
   0.1322405,
   0.1395904,
   0.1745849,
   0.2148125,
   0.2250148,
   0.2414726,
   0.2694796,
   0.18456,
   0.1981402,
   1.766648};
   grae = new TGraphAsymmErrors(20,Graph0_fx3008,Graph0_fy3008,Graph0_felx3008,Graph0_fehx3008,Graph0_fely3008,Graph0_fehy3008);
   grae->SetName("Graph0");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3004);
   grae->SetMarkerStyle(0);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph03008 = new TH1F("Graph_Graph03008","Graph",100,0,6550);
   Graph_Graph03008->SetMinimum(-1.119978);
   Graph_Graph03008->SetMaximum(3.119978);
   Graph_Graph03008->SetDirectory(0);
   Graph_Graph03008->SetStats(0);
   Graph_Graph03008->SetLineWidth(2);
   Graph_Graph03008->SetMarkerStyle(20);
   Graph_Graph03008->SetMarkerSize(1.2);
   Graph_Graph03008->GetXaxis()->SetLabelFont(42);
   Graph_Graph03008->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph03008->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph03008->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph03008->GetXaxis()->SetTitleFont(42);
   Graph_Graph03008->GetYaxis()->SetLabelFont(42);
   Graph_Graph03008->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph03008->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph03008->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph03008->GetYaxis()->SetTitleFont(42);
   Graph_Graph03008->GetZaxis()->SetLabelFont(42);
   Graph_Graph03008->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph03008->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph03008->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph03008);
   
   grae->Draw(" e2");
   TLine *line = new TLine(500,1,6000,1);
   line->SetLineStyle(2);
   line->Draw();
   Double_t xAxis46[21] = {500, 570, 650, 730, 810, 890, 970, 1050, 1130, 1220, 1310, 1400, 1490, 1590, 1690, 1790, 1900, 2010, 2360, 2880, 6000}; 
   
   TH1F *combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22 = new TH1F("combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22","Histogram of combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR",20, xAxis46);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->SetBinContent(1,0.9789174);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->SetBinContent(2,0.9448125);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->SetBinContent(3,0.9477589);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->SetBinContent(4,0.9646063);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->SetBinContent(5,0.9751007);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->SetBinContent(6,1.063954);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->SetBinContent(7,1.026296);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->SetBinContent(8,0.7926611);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->SetBinContent(9,1.052342);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->SetBinContent(10,0.8852533);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->SetBinContent(11,1.067603);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->SetBinContent(12,0.6866766);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->SetBinContent(13,1.17982);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->SetBinContent(14,1.430139);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->SetBinContent(15,1.016981);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->SetBinContent(16,0.3315197);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->SetBinContent(17,0.6286765);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->SetBinContent(18,0.4258432);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->SetBinContent(19,0.7288653);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->SetBinError(1,0.06526293);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->SetBinError(2,0.05851774);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->SetBinError(3,0.06196816);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->SetBinError(4,0.07423212);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->SetBinError(5,0.09040794);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->SetBinError(6,0.1157398);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->SetBinError(7,0.1406193);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->SetBinError(8,0.150082);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->SetBinError(9,0.193915);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->SetBinError(10,0.2417734);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->SetBinError(11,0.2928454);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->SetBinError(12,0.3123184);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->SetBinError(13,0.4047068);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->SetBinError(14,0.604366);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->SetBinError(15,0.6018973);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->SetBinError(16,0.3342561);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->SetBinError(17,0.6384809);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->SetBinError(18,0.4303529);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->SetBinError(19,0.7420275);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->SetEntries(117.0276);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->SetStats(0);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->SetLineWidth(2);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->SetMarkerStyle(20);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->SetMarkerSize(1.2);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->GetXaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->GetXaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->GetXaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->GetXaxis()->SetTitleFont(42);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->GetYaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->GetYaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->GetYaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->GetYaxis()->SetTitleOffset(1.4);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->GetYaxis()->SetTitleFont(42);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->GetZaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->GetZaxis()->SetTitleFont(42);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__22->Draw("sameE0");
   pad2->Modified();
   c2->cd();
  
// ------------>Primitives in pad: pad3
   TPad *pad3 = new TPad("pad3", "pad3",0,0,1,0.25);
   pad3->Draw();
   pad3->cd();
   pad3->Range(-613.924,-0.1666667,6348.101,1.5);
   pad3->SetFillColor(0);
   pad3->SetBorderMode(0);
   pad3->SetBorderSize(2);
   pad3->SetTickx(1);
   pad3->SetTicky(1);
   pad3->SetLeftMargin(0.16);
   pad3->SetRightMargin(0.05);
   pad3->SetTopMargin(0);
   pad3->SetBottomMargin(0.4);
   pad3->SetFrameBorderMode(0);
   pad3->SetFrameBorderMode(0);
   Double_t xAxis47[21] = {500, 570, 650, 730, 810, 890, 970, 1050, 1130, 1220, 1310, 1400, 1490, 1590, 1690, 1790, 1900, 2010, 2360, 2880, 6000}; 
   
   TH1F *combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23 = new TH1F("combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23","Histogram of combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR",20, xAxis47);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->SetBinContent(1,1.155494);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->SetBinContent(2,1.16351);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->SetBinContent(3,1.133032);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->SetBinContent(4,1.120307);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->SetBinContent(5,1.042623);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->SetBinContent(6,0.9648163);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->SetBinContent(7,0.9131658);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->SetBinContent(8,1.00536);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->SetBinContent(9,0.9344699);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->SetBinContent(10,1.016058);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->SetBinContent(11,0.9550716);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->SetBinContent(12,1.014065);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->SetBinContent(13,0.7894876);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->SetBinContent(14,0.737623);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->SetBinContent(15,1.05465);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->SetBinContent(16,0.9093729);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->SetBinContent(17,1.065472);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->SetBinContent(18,1.084958);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->SetBinContent(19,1.000954);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->SetBinContent(20,1.167368);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->SetBinError(1,0.0227279);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->SetBinError(2,0.02087089);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->SetBinError(3,0.02162075);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->SetBinError(4,0.02544142);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->SetBinError(5,0.02917344);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->SetBinError(6,0.03366159);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->SetBinError(7,0.04001091);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->SetBinError(8,0.05249123);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->SetBinError(9,0.0553919);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->SetBinError(10,0.08047583);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->SetBinError(11,0.08437722);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->SetBinError(12,0.1184256);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->SetBinError(13,0.09622958);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->SetBinError(14,0.1235929);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->SetBinError(15,0.1916478);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->SetBinError(16,0.1696509);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->SetBinError(17,0.2630143);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->SetBinError(18,0.2194649);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->SetBinError(19,0.2701682);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->SetBinError(20,1.36081);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->SetMinimum(0.5);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->SetMaximum(1.5);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->SetEntries(188.4448);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->SetLineColor(ci);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->SetLineWidth(2);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->SetMarkerStyle(20);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->SetMarkerSize(1.2);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->GetXaxis()->SetTitle("m(VV) [GeV]");
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->GetXaxis()->SetLabelFont(43);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->GetXaxis()->SetLabelSize(25);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->GetXaxis()->SetTitleSize(25);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->GetXaxis()->SetTitleOffset(5);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->GetXaxis()->SetTitleFont(43);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->GetYaxis()->SetTitle("Prefit/Postfit");
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->GetYaxis()->SetNdivisions(205);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->GetYaxis()->SetLabelFont(43);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->GetYaxis()->SetLabelSize(25);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->GetYaxis()->SetTitleSize(25);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->GetYaxis()->SetTitleOffset(2);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->GetYaxis()->SetTitleFont(43);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->GetZaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->GetZaxis()->SetTitleFont(42);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__23->Draw("AXIS");
   line = new TLine(500,1,6000,1);
   line->SetLineStyle(2);
   line->Draw();
   Double_t xAxis48[21] = {500, 570, 650, 730, 810, 890, 970, 1050, 1130, 1220, 1310, 1400, 1490, 1590, 1690, 1790, 1900, 2010, 2360, 2880, 6000}; 
   
   TH1F *combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24 = new TH1F("combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24","Histogram of combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR",20, xAxis48);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->SetBinContent(1,1.155494);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->SetBinContent(2,1.16351);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->SetBinContent(3,1.133032);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->SetBinContent(4,1.120307);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->SetBinContent(5,1.042623);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->SetBinContent(6,0.9648163);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->SetBinContent(7,0.9131658);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->SetBinContent(8,1.00536);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->SetBinContent(9,0.9344699);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->SetBinContent(10,1.016058);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->SetBinContent(11,0.9550716);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->SetBinContent(12,1.014065);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->SetBinContent(13,0.7894876);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->SetBinContent(14,0.737623);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->SetBinContent(15,1.05465);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->SetBinContent(16,0.9093729);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->SetBinContent(17,1.065472);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->SetBinContent(18,1.084958);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->SetBinContent(19,1.000954);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->SetBinContent(20,1.167368);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->SetBinError(1,0.0227279);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->SetBinError(2,0.02087089);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->SetBinError(3,0.02162075);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->SetBinError(4,0.02544142);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->SetBinError(5,0.02917344);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->SetBinError(6,0.03366159);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->SetBinError(7,0.04001091);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->SetBinError(8,0.05249123);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->SetBinError(9,0.0553919);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->SetBinError(10,0.08047583);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->SetBinError(11,0.08437722);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->SetBinError(12,0.1184256);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->SetBinError(13,0.09622958);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->SetBinError(14,0.1235929);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->SetBinError(15,0.1916478);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->SetBinError(16,0.1696509);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->SetBinError(17,0.2630143);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->SetBinError(18,0.2194649);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->SetBinError(19,0.2701682);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->SetBinError(20,1.36081);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->SetMinimum(0.5);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->SetMaximum(1.5);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->SetEntries(188.4448);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->SetLineColor(ci);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->SetLineWidth(2);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->SetMarkerStyle(20);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->SetMarkerSize(1.2);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->GetXaxis()->SetTitle("m(VV) [GeV]");
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->GetXaxis()->SetLabelFont(43);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->GetXaxis()->SetLabelSize(25);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->GetXaxis()->SetTitleSize(25);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->GetXaxis()->SetTitleOffset(5);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->GetXaxis()->SetTitleFont(43);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->GetYaxis()->SetTitle("Prefit/Postfit");
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->GetYaxis()->SetNdivisions(205);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->GetYaxis()->SetLabelFont(43);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->GetYaxis()->SetLabelSize(25);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->GetYaxis()->SetTitleSize(25);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->GetYaxis()->SetTitleOffset(2);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->GetYaxis()->SetTitleFont(43);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->GetZaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->GetZaxis()->SetTitleFont(42);
   combCat_L1_MergLP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WZ_SR_rebinned__24->Draw("histsame");
   pad3->Modified();
   c2->cd();
   c2->Modified();
   c2->cd();
   c2->SetSelected(c2);
}
