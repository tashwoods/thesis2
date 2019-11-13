void L1_MergLP_VBF_WW_SR()
{
//=========Macro generated from canvas: c2/c2
//=========  (Fri Nov  8 18:35:17 2019) by ROOT version 6.14/04
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
   pad1->Range(-613.924,-1.799313,6348.101,6.410062);
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
   hs->SetMaximum(429413.6);
   Double_t xAxis37[23] = {500, 570, 650, 730, 810, 890, 970, 1050, 1130, 1220, 1310, 1400, 1490, 1590, 1690, 1790, 1900, 2010, 2350, 2470, 2600, 2860, 6000}; 
   
   TH1F *hs_stack_4 = new TH1F("hs_stack_4","hs",22, xAxis37);
   hs_stack_4->SetMinimum(0.02316725);
   hs_stack_4->SetMaximum(999063);
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
   
   Double_t xAxis38[23] = {500, 570, 650, 730, 810, 890, 970, 1050, 1130, 1220, 1310, 1400, 1490, 1590, 1690, 1790, 1900, 2010, 2350, 2470, 2600, 2860, 6000}; 
   
   TH1F *combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1 = new TH1F("combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1","Histogram of combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR",22, xAxis38);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->SetBinContent(1,6.551416);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->SetBinContent(2,5.907355);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->SetBinContent(3,5.18819);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->SetBinContent(4,4.636793);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->SetBinContent(5,2.012132);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->SetBinContent(6,1.374406);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->SetBinContent(7,1.046917);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->SetBinContent(8,0.7558993);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->SetBinContent(9,0.2397144);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->SetBinContent(10,0.2547611);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->SetBinContent(11,0.5105245);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->SetBinContent(12,0.1321262);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->SetBinContent(13,0.02042268);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->SetBinContent(14,0.05437544);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->SetBinContent(15,0.00224132);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->SetBinContent(16,1.672625e-09);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->SetBinContent(17,0.01318879);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->SetBinContent(18,0.03894521);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->SetBinContent(19,1.874455e-09);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->SetBinContent(20,0.005026625);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->SetBinContent(21,0.01388219);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->SetBinContent(22,0.01460925);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->SetBinError(1,12.00546);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->SetBinError(2,11.40008);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->SetBinError(3,10.68364);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->SetBinError(4,10.09997);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->SetBinError(5,6.653338);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->SetBinError(6,5.498811);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->SetBinError(7,4.799184);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->SetBinError(8,4.077963);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->SetBinError(9,2.296457);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->SetBinError(10,2.367434);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->SetBinError(11,3.351349);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->SetBinError(12,1.704927);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->SetBinError(13,0.6702977);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->SetBinError(14,1.093737);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->SetBinError(15,0.2220564);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->SetBinError(16,0.0001918274);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->SetBinError(17,0.5386588);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->SetBinError(18,0.925632);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->SetBinError(19,0.0002030715);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->SetBinError(20,0.3325444);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->SetBinError(21,0.5526375);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->SetBinError(22,0.5669246);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->SetEntries(23);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#99ff99");
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->SetLineColor(ci);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->SetLineWidth(2);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->SetMarkerStyle(20);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->SetMarkerSize(1.2);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->GetXaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->GetXaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->GetXaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->GetXaxis()->SetTitleFont(42);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->GetYaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->GetYaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->GetYaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->GetYaxis()->SetTitleOffset(1.4);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->GetYaxis()->SetTitleFont(42);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->GetZaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1->GetZaxis()->SetTitleFont(42);
   hs->Add(combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1,"");
   Double_t xAxis39[23] = {500, 570, 650, 730, 810, 890, 970, 1050, 1130, 1220, 1310, 1400, 1490, 1590, 1690, 1790, 1900, 2010, 2350, 2470, 2600, 2860, 6000}; 
   
   TH1F *combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2 = new TH1F("combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2","Histogram of combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR",22, xAxis39);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->SetBinContent(1,12.8307);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->SetBinContent(2,12.82837);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->SetBinContent(3,11.71439);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->SetBinContent(4,8.884478);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->SetBinContent(5,3.872091);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->SetBinContent(6,1.659063);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->SetBinContent(7,1.304128);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->SetBinContent(8,0.1447679);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->SetBinContent(9,1.187347);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->SetBinContent(10,0.6822109);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->SetBinContent(11,1.160663);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->SetBinContent(12,1.458483e-07);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->SetBinContent(13,0.2172717);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->SetBinContent(14,1.530227e-07);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->SetBinContent(15,0.341969);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->SetBinContent(16,1.410963e-07);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->SetBinContent(17,1.3951e-07);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->SetBinContent(18,1.374458e-07);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->SetBinContent(19,1.581219e-07);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->SetBinContent(20,1.383179e-07);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->SetBinContent(21,1.377641e-07);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->SetBinContent(22,2.432907e-07);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->SetBinError(1,16.80105);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->SetBinError(2,16.79953);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->SetBinError(3,16.05355);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->SetBinError(4,13.98065);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->SetBinError(5,9.229626);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->SetBinError(6,6.041473);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->SetBinError(7,5.356381);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->SetBinError(8,1.784627);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->SetBinError(9,5.110933);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->SetBinError(10,3.874099);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->SetBinError(11,5.053175);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->SetBinError(12,0.001791274);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->SetBinError(13,2.186316);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->SetBinError(14,0.001834802);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->SetBinError(15,2.742867);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->SetBinError(16,0.001761851);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->SetBinError(17,0.001751919);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->SetBinError(18,0.00173891);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->SetBinError(19,0.001865122);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->SetBinError(20,0.001744418);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->SetBinError(21,0.001740922);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->SetBinError(22,0.002313525);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->SetEntries(23);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->SetLineColor(ci);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->SetLineWidth(2);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->SetMarkerStyle(20);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->SetMarkerSize(1.2);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->GetXaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->GetXaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->GetXaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->GetXaxis()->SetTitleFont(42);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->GetYaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->GetYaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->GetYaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->GetYaxis()->SetTitleOffset(1.4);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->GetYaxis()->SetTitleFont(42);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->GetZaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2->GetZaxis()->SetTitleFont(42);
   hs->Add(combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2,"");
   Double_t xAxis40[23] = {500, 570, 650, 730, 810, 890, 970, 1050, 1130, 1220, 1310, 1400, 1490, 1590, 1690, 1790, 1900, 2010, 2350, 2470, 2600, 2860, 6000}; 
   
   TH1F *combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3 = new TH1F("combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3","Histogram of combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR",22, xAxis40);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->SetBinContent(1,35.17641);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->SetBinContent(2,42.25158);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->SetBinContent(3,35.24408);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->SetBinContent(4,14.01501);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->SetBinContent(5,13.22596);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->SetBinContent(6,10.25234);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->SetBinContent(7,8.221016);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->SetBinContent(8,5.155775);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->SetBinContent(9,5.598773);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->SetBinContent(10,3.63269);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->SetBinContent(11,1.019636);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->SetBinContent(12,0.7719696);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->SetBinContent(13,3.291565);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->SetBinContent(14,1.756076);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->SetBinContent(15,8.559368e-08);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->SetBinContent(16,1.080778);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->SetBinContent(17,0.06315766);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->SetBinContent(18,0.5565361);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->SetBinContent(19,7.158349e-08);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->SetBinContent(20,0.1016781);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->SetBinContent(21,6.236729e-08);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->SetBinContent(22,0.1334094);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->SetBinError(1,27.81872);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->SetBinError(2,30.48827);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->SetBinError(3,27.84546);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->SetBinError(4,17.55933);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->SetBinError(5,17.05787);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->SetBinError(6,15.01837);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->SetBinError(7,13.44851);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->SetBinError(8,10.65021);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->SetBinError(9,11.09833);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->SetBinError(10,8.939752);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->SetBinError(11,4.736242);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->SetBinError(12,4.121084);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->SetBinError(13,8.509668);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->SetBinError(14,6.215598);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->SetBinError(15,0.001372247);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->SetBinError(16,4.876178);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->SetBinError(17,1.178757);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->SetBinError(18,3.499113);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->SetBinError(19,0.001254925);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->SetBinError(20,1.495633);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->SetBinError(21,0.001171358);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->SetBinError(22,1.713186);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->SetEntries(23);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->SetLineColor(ci);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->SetLineWidth(2);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->SetMarkerStyle(20);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->SetMarkerSize(1.2);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->GetXaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->GetXaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->GetXaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->GetXaxis()->SetTitleFont(42);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->GetYaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->GetYaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->GetYaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->GetYaxis()->SetTitleOffset(1.4);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->GetYaxis()->SetTitleFont(42);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->GetZaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3->GetZaxis()->SetTitleFont(42);
   hs->Add(combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3,"");
   Double_t xAxis41[23] = {500, 570, 650, 730, 810, 890, 970, 1050, 1130, 1220, 1310, 1400, 1490, 1590, 1690, 1790, 1900, 2010, 2350, 2470, 2600, 2860, 6000}; 
   
   TH1F *combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4 = new TH1F("combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4","Histogram of combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR",22, xAxis41);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->SetBinContent(1,60.45166);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->SetBinContent(2,62.07497);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->SetBinContent(3,48.72513);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->SetBinContent(4,28.15857);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->SetBinContent(5,15.96698);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->SetBinContent(6,9.890234);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->SetBinContent(7,4.501523);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->SetBinContent(8,3.387923);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->SetBinContent(9,0.6457695);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->SetBinContent(10,0.853873);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->SetBinContent(11,0.697519);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->SetBinContent(12,0.128756);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->SetBinContent(13,0.4520216);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->SetBinContent(14,0.1458996);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->SetBinContent(15,0.1695954);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->SetBinContent(16,0.2194925);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->SetBinContent(17,1.231604e-07);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->SetBinContent(18,0.311437);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->SetBinContent(19,1.395912e-07);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->SetBinContent(20,1.221081e-07);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->SetBinContent(21,1.216192e-07);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->SetBinContent(22,2.147788e-07);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->SetBinError(1,36.46829);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->SetBinError(2,36.95469);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->SetBinError(3,32.74069);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->SetBinError(4,24.88953);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->SetBinError(5,18.7423);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->SetBinError(6,14.75077);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->SetBinError(7,9.951557);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->SetBinError(8,8.633325);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->SetBinError(9,3.769208);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->SetBinError(10,4.33419);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->SetBinError(11,3.917323);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->SetBinError(12,1.683042);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->SetBinError(13,3.153486);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->SetBinError(14,1.791589);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->SetBinError(15,1.931605);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->SetBinError(16,2.197461);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->SetBinError(17,0.001646065);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->SetBinError(18,2.617559);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->SetBinError(19,0.001752429);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->SetBinError(20,0.001639017);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->SetBinError(21,0.001635733);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->SetBinError(22,0.002173737);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->SetEntries(23);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->SetStats(0);

   ci = TColor::GetColor("#6699ff");
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#6699ff");
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->SetLineColor(ci);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->SetLineWidth(2);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->SetMarkerStyle(20);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->SetMarkerSize(1.2);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->GetXaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->GetXaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->GetXaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->GetXaxis()->SetTitleFont(42);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->GetYaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->GetYaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->GetYaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->GetYaxis()->SetTitleOffset(1.4);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->GetYaxis()->SetTitleFont(42);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->GetZaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4->GetZaxis()->SetTitleFont(42);
   hs->Add(combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4,"");
   Double_t xAxis42[23] = {500, 570, 650, 730, 810, 890, 970, 1050, 1130, 1220, 1310, 1400, 1490, 1590, 1690, 1790, 1900, 2010, 2350, 2470, 2600, 2860, 6000}; 
   
   TH1F *combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5 = new TH1F("combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5","Histogram of combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR",22, xAxis42);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->SetBinContent(1,269.3411);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->SetBinContent(2,306.3513);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->SetBinContent(3,240.0761);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->SetBinContent(4,185.8814);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->SetBinContent(5,118.0217);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->SetBinContent(6,72.75165);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->SetBinContent(7,52.88317);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->SetBinContent(8,31.18484);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->SetBinContent(9,20.34665);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->SetBinContent(10,14.14157);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->SetBinContent(11,12.44605);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->SetBinContent(12,5.938242);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->SetBinContent(13,4.984787);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->SetBinContent(14,3.260196);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->SetBinContent(15,2.902863);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->SetBinContent(16,1.272211);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->SetBinContent(17,1.785203);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->SetBinContent(18,2.433477);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->SetBinContent(19,0.4762946);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->SetBinContent(20,0.262677);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->SetBinContent(21,0.6667757);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->SetBinContent(22,0.2456256);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->SetBinError(1,76.97729);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->SetBinError(2,82.09585);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->SetBinError(3,72.67513);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->SetBinError(4,63.94835);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->SetBinError(5,50.95565);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->SetBinError(6,40.0067);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->SetBinError(7,34.10909);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->SetBinError(8,26.19287);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->SetBinError(9,21.15718);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->SetBinError(10,17.63844);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->SetBinError(11,16.5473);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->SetBinError(12,11.42984);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->SetBinError(13,10.47212);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->SetBinError(14,8.469021);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->SetBinError(15,7.991432);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->SetBinError(16,5.290429);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->SetBinError(17,6.266934);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->SetBinError(18,7.316864);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->SetBinError(19,3.237048);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->SetBinError(20,2.403933);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->SetBinError(21,3.830022);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->SetBinError(22,2.3246);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->SetEntries(23);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->SetStats(0);

   ci = TColor::GetColor("#ff9999");
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#ff9999");
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->SetLineColor(ci);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->SetLineWidth(2);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->SetMarkerStyle(20);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->SetMarkerSize(1.2);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->GetXaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->GetXaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->GetXaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->GetXaxis()->SetTitleFont(42);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->GetYaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->GetYaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->GetYaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->GetYaxis()->SetTitleOffset(1.4);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->GetYaxis()->SetTitleFont(42);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->GetZaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5->GetZaxis()->SetTitleFont(42);
   hs->Add(combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5,"");
   hs->Draw("hist");
   
   Double_t Graph0_fx3007[22] = {
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
   2180,
   2410,
   2535,
   2730,
   4430};
   Double_t Graph0_fy3007[22] = {
   384.3614,
   429.5131,
   341.3872,
   242.5406,
   155.3424,
   101.5889,
   74.43247,
   43.33273,
   28.54692,
   19.63384,
   15.86504,
   6.985558,
   8.986678,
   5.223784,
   3.416669,
   2.572482,
   1.861549,
   3.340396,
   0.476295,
   0.3693819,
   0.6806583,
   0.3936448};
   Double_t Graph0_felx3007[22] = {
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
   170,
   60,
   65,
   130,
   1570};
   Double_t Graph0_fely3007[22] = {
   14.54593,
   12.3989,
   10.44778,
   9.339432,
   6.985336,
   5.597107,
   5.235542,
   3.400951,
   2.668295,
   2.163605,
   2.019088,
   1.024427,
   1.421079,
   0.9104939,
   0.7661786,
   0.6421783,
   0.4410883,
   0.554837,
   0.1843374,
   0.1407579,
   0.2062261,
   0.2866468};
   Double_t Graph0_fehx3007[22] = {
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
   170,
   60,
   65,
   130,
   1570};
   Double_t Graph0_fehy3007[22] = {
   14.54593,
   12.3989,
   10.44778,
   9.339432,
   6.985336,
   5.597115,
   5.23555,
   3.400948,
   2.668295,
   2.163605,
   2.019087,
   1.024427,
   1.421079,
   0.9104939,
   0.7661784,
   0.6421781,
   0.4410883,
   0.5548365,
   0.1843374,
   0.1407579,
   0.2062261,
   0.2866468};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(22,Graph0_fx3007,Graph0_fy3007,Graph0_felx3007,Graph0_fehx3007,Graph0_fely3007,Graph0_fehy3007);
   grae->SetName("Graph0");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3004);
   grae->SetMarkerStyle(0);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph03007 = new TH1F("Graph_Graph03007","Graph",100,0,6550);
   Graph_Graph03007->SetMinimum(0.0962982);
   Graph_Graph03007->SetMaximum(486.0925);
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
   Double_t xAxis43[23] = {500, 570, 650, 730, 810, 890, 970, 1050, 1130, 1220, 1310, 1400, 1490, 1590, 1690, 1790, 1900, 2010, 2350, 2470, 2600, 2860, 6000}; 
   
   TH1F *combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19 = new TH1F("combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19","Histogram of combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR",22, xAxis43);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->SetBinContent(1,373);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->SetBinContent(2,417);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->SetBinContent(3,355);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->SetBinContent(4,226);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->SetBinContent(5,152);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->SetBinContent(6,115);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->SetBinContent(7,72);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->SetBinContent(8,42);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->SetBinContent(9,27);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->SetBinContent(10,19);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->SetBinContent(11,11);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->SetBinContent(12,7);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->SetBinContent(13,9);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->SetBinContent(14,7);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->SetBinContent(15,8);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->SetBinContent(16,2);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->SetBinContent(17,1);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->SetBinContent(18,1);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->SetBinContent(19,1);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->SetBinContent(22,1);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->SetBinError(1,19.31321);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->SetBinError(2,20.42058);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->SetBinError(3,18.84144);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->SetBinError(4,15.0333);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->SetBinError(5,12.32883);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->SetBinError(6,10.72381);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->SetBinError(7,8.485281);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->SetBinError(8,6.480741);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->SetBinError(9,5.196152);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->SetBinError(10,4.358899);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->SetBinError(11,3.316625);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->SetBinError(12,2.645751);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->SetBinError(13,3);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->SetBinError(14,2.645751);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->SetBinError(15,2.828427);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->SetBinError(16,1.414214);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->SetBinError(17,1);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->SetBinError(18,1);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->SetBinError(19,1);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->SetBinError(22,1);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->SetEntries(23);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->SetStats(0);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->SetLineWidth(2);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->SetMarkerStyle(20);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->SetMarkerSize(1.2);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->GetXaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->GetXaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->GetXaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->GetXaxis()->SetTitleFont(42);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->GetYaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->GetYaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->GetYaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->GetYaxis()->SetTitleOffset(1.4);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->GetYaxis()->SetTitleFont(42);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->GetZaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->GetZaxis()->SetTitleFont(42);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__19->Draw("same");
   Double_t xAxis44[23] = {500, 570, 650, 730, 810, 890, 970, 1050, 1130, 1220, 1310, 1400, 1490, 1590, 1690, 1790, 1900, 2010, 2350, 2470, 2600, 2860, 6000}; 
   
   TH1F *combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20 = new TH1F("combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20","Histogram of combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR",22, xAxis44);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->SetBinContent(1,0.01014852);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->SetBinContent(2,0.09944081);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->SetBinContent(3,0.4392895);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->SetBinContent(4,0.964353);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->SetBinContent(5,2.243495);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->SetBinContent(6,5.66117);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->SetBinContent(7,6.475716);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->SetBinContent(8,2.703524);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->SetBinContent(9,0.5286587);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->SetBinContent(10,0.06873105);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->SetBinContent(11,0.03064315);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->SetBinContent(12,0.01446379);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->SetBinContent(13,0.02060889);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->SetBinContent(14,0.007236928);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->SetBinContent(15,7.264203e-09);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->SetBinContent(16,7.264203e-09);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->SetBinContent(17,7.264203e-09);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->SetBinContent(18,7.264203e-09);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->SetBinContent(19,7.264203e-09);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->SetBinContent(20,7.264203e-09);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->SetBinContent(21,7.264203e-09);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->SetBinContent(22,7.264203e-09);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->SetBinError(1,0.4725118);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->SetBinError(2,1.479087);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->SetBinError(3,3.108757);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->SetBinError(4,4.606057);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->SetBinError(5,7.025446);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->SetBinError(6,11.16001);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->SetBinError(7,11.9359);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->SetBinError(8,7.712167);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->SetBinError(9,3.410351);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->SetBinError(10,1.229668);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->SetBinError(11,0.821066);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->SetBinError(12,0.5640952);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->SetBinError(13,0.6733466);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->SetBinError(14,0.3990143);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->SetBinError(15,0.0003997655);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->SetBinError(16,0.0003997655);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->SetBinError(17,0.0003997655);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->SetBinError(18,0.0003997655);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->SetBinError(19,0.0003997655);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->SetBinError(20,0.0003997655);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->SetBinError(21,0.0003997655);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->SetBinError(22,0.0003997655);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->SetEntries(23);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->SetLineColor(ci);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->SetLineWidth(2);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->SetMarkerStyle(20);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->SetMarkerSize(1.2);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->GetXaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->GetXaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->GetXaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->GetXaxis()->SetTitleFont(42);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->GetYaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->GetYaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->GetYaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->GetYaxis()->SetTitleOffset(1.4);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->GetYaxis()->SetTitleFont(42);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->GetZaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->GetZaxis()->SetTitleFont(42);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned__20->Draw("hist same");
   
   TLegend *leg = new TLegend(0.72,0.62,0.91,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergLP_VBF_WW_SR_rebinned","VBF HVT Z' 1TeV","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_1","Z+jets","f");

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
   entry=leg->AddEntry("combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_2","Single-t","f");

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
   entry=leg->AddEntry("combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_3","Diboson","f");

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
   entry=leg->AddEntry("combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_4","Top Pair","f");

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
   entry=leg->AddEntry("combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergLP_VBF_WW_SR_rebinned_stack_5","W+jets","f");

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
   entry=leg->AddEntry("combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned","Data","lep");
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
      tex = new TLatex(0.2,0.72,"Merg LP VBF 1lep WW SR");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.23,0.66,"#chi^{2} / dof = 14.4 / 22");
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
   Double_t xAxis45[23] = {500, 570, 650, 730, 810, 890, 970, 1050, 1130, 1220, 1310, 1400, 1490, 1590, 1690, 1790, 1900, 2010, 2350, 2470, 2600, 2860, 6000}; 
   
   TH1F *combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21 = new TH1F("combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21","Histogram of combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR",22, xAxis45);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->SetBinContent(1,1);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->SetBinContent(2,1);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->SetBinContent(3,1);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->SetBinContent(4,1);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->SetBinContent(5,1);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->SetBinContent(6,1);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->SetBinContent(7,1);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->SetBinContent(8,1);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->SetBinContent(9,1);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->SetBinContent(10,1);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->SetBinContent(11,1);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->SetBinContent(12,1);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->SetBinContent(13,1);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->SetBinContent(14,1);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->SetBinContent(15,1);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->SetBinContent(16,1);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->SetBinContent(17,1);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->SetBinContent(18,1);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->SetBinContent(19,1);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->SetBinContent(20,1);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->SetBinContent(21,1);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->SetBinContent(22,1);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->SetBinError(1,0.0153792);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->SetBinError(2,0.01454841);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->SetBinError(3,0.01631849);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->SetBinError(4,0.01936027);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->SetBinError(5,0.02419127);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->SetBinError(6,0.02991442);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->SetBinError(7,0.03494801);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->SetBinError(8,0.04580318);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->SetBinError(9,0.05643182);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->SetBinError(10,0.06804576);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->SetBinError(11,0.07569777);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->SetBinError(12,0.1140783);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->SetBinError(13,0.1005782);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->SetBinError(14,0.1319201);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->SetBinError(15,0.1631181);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->SetBinError(16,0.1879869);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->SetBinError(17,0.2209868);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->SetBinError(18,0.1649699);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->SetBinError(19,0.4368835);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->SetBinError(20,0.4960962);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->SetBinError(21,0.3654594);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->SetBinError(22,0.4805642);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->SetMinimum(0.5);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->SetMaximum(1.5);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->SetEntries(484.2691);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->SetLineColor(ci);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->SetLineWidth(2);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->SetMarkerStyle(20);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->SetMarkerSize(1.2);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->GetXaxis()->SetLabelFont(43);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->GetXaxis()->SetLabelSize(0);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->GetXaxis()->SetTitleSize(0);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->GetXaxis()->SetTitleFont(43);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->GetYaxis()->SetTitle("Data/Postfit");
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->GetYaxis()->SetNdivisions(205);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->GetYaxis()->SetLabelFont(43);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->GetYaxis()->SetLabelSize(25);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->GetYaxis()->SetTitleSize(25);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->GetYaxis()->SetTitleOffset(2);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->GetYaxis()->SetTitleFont(43);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->GetZaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->GetZaxis()->SetTitleFont(42);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__21->Draw("AXIS");
   
   Double_t Graph0_fx3008[22] = {
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
   2180,
   2410,
   2535,
   2730,
   4430};
   Double_t Graph0_fy3008[22] = {
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
   1,
   1,
   1};
   Double_t Graph0_felx3008[22] = {
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
   170,
   60,
   65,
   130,
   1570};
   Double_t Graph0_fely3008[22] = {
   0.0378444,
   0.02886733,
   0.03060391,
   0.03850667,
   0.04496735,
   0.05509568,
   0.07033949,
   0.07848459,
   0.09347051,
   0.1101977,
   0.1272665,
   0.1466493,
   0.1581318,
   0.1742977,
   0.2242473,
   0.2496338,
   0.2369469,
   0.1660992,
   0.3870236,
   0.3810634,
   0.3029804,
   0.7281864};
   Double_t Graph0_fehx3008[22] = {
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
   170,
   60,
   65,
   130,
   1570};
   Double_t Graph0_fehy3008[22] = {
   0.0378444,
   0.02886733,
   0.03060391,
   0.03850667,
   0.04496735,
   0.05509575,
   0.07033959,
   0.0784845,
   0.09347051,
   0.1101977,
   0.1272664,
   0.1466493,
   0.1581317,
   0.1742977,
   0.2242472,
   0.2496337,
   0.2369469,
   0.166099,
   0.3870236,
   0.3810634,
   0.3029804,
   0.7281863};
   grae = new TGraphAsymmErrors(22,Graph0_fx3008,Graph0_fy3008,Graph0_felx3008,Graph0_fehx3008,Graph0_fely3008,Graph0_fehy3008);
   grae->SetName("Graph0");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3004);
   grae->SetMarkerStyle(0);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph03008 = new TH1F("Graph_Graph03008","Graph",100,0,6550);
   Graph_Graph03008->SetMinimum(0.1261763);
   Graph_Graph03008->SetMaximum(1.873824);
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
   Double_t xAxis46[23] = {500, 570, 650, 730, 810, 890, 970, 1050, 1130, 1220, 1310, 1400, 1490, 1590, 1690, 1790, 1900, 2010, 2350, 2470, 2600, 2860, 6000}; 
   
   TH1F *combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22 = new TH1F("combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22","Histogram of combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR",22, xAxis46);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->SetBinContent(1,0.9704408);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->SetBinContent(2,0.9708669);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->SetBinContent(3,1.039875);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->SetBinContent(4,0.9318027);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->SetBinContent(5,0.9784837);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->SetBinContent(6,1.132014);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->SetBinContent(7,0.9673197);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->SetBinContent(8,0.9692443);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->SetBinContent(9,0.9458114);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->SetBinContent(10,0.9677171);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->SetBinContent(11,0.6933485);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->SetBinContent(12,1.002067);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->SetBinContent(13,1.001482);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->SetBinContent(14,1.340025);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->SetBinContent(15,2.341462);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->SetBinContent(16,0.7774594);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->SetBinContent(17,0.537187);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->SetBinContent(18,0.2993657);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->SetBinContent(19,2.099539);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->SetBinContent(22,2.540361);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->SetBinError(1,0.05134379);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->SetBinError(2,0.04858129);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->SetBinError(3,0.05648012);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->SetBinError(4,0.06328161);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->SetBinError(5,0.08111126);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->SetBinError(6,0.1082426);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->SetBinError(7,0.116479);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->SetBinError(8,0.1528166);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->SetBinError(9,0.185893);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->SetBinError(10,0.2268397);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->SetBinError(11,0.2123211);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->SetBinError(12,0.3872755);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->SetBinError(13,0.3413411);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->SetBinError(14,0.5216787);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->SetBinError(15,0.8707713);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->SetBinError(16,0.5593762);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->SetBinError(17,0.5437058);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->SetBinError(18,0.3013957);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->SetBinError(19,2.19744);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->SetBinError(22,2.683025);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->SetEntries(35.61458);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->SetStats(0);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->SetLineWidth(2);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->SetMarkerStyle(20);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->SetMarkerSize(1.2);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->GetXaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->GetXaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->GetXaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->GetXaxis()->SetTitleFont(42);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->GetYaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->GetYaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->GetYaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->GetYaxis()->SetTitleOffset(1.4);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->GetYaxis()->SetTitleFont(42);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->GetZaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->GetZaxis()->SetTitleFont(42);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergLP_VBF_WW_SR_rebinned__22->Draw("sameE0");
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
   Double_t xAxis47[23] = {500, 570, 650, 730, 810, 890, 970, 1050, 1130, 1220, 1310, 1400, 1490, 1590, 1690, 1790, 1900, 2010, 2350, 2470, 2600, 2860, 6000}; 
   
   TH1F *combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23 = new TH1F("combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23","Histogram of combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR",22, xAxis47);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->SetBinContent(1,1.15497);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->SetBinContent(2,1.120505);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->SetBinContent(3,1.039053);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->SetBinContent(4,1.087741);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->SetBinContent(5,1.02037);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->SetBinContent(6,0.9126644);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->SetBinContent(7,0.913375);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->SetBinContent(8,0.9368248);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->SetBinContent(9,0.931305);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->SetBinContent(10,0.95819);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->SetBinContent(11,1.117739);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->SetBinContent(12,1.004253);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->SetBinContent(13,0.8181003);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->SetBinContent(14,0.7982935);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->SetBinContent(15,0.8456494);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->SetBinContent(16,0.8118629);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->SetBinContent(17,1.11062);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->SetBinContent(18,1.036488);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->SetBinContent(19,1.003982);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->SetBinContent(20,0.928342);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->SetBinContent(21,1.150458);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->SetBinContent(22,0.497886);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->SetBinError(1,0.01715635);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->SetBinError(2,0.01585722);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->SetBinError(3,0.0167957);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->SetBinError(4,0.02062993);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->SetBinError(5,0.02456053);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->SetBinError(6,0.02794735);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->SetBinError(7,0.03266871);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->SetBinError(8,0.04362697);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->SetBinError(9,0.05351561);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->SetBinError(10,0.06590818);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->SetBinError(11,0.08235206);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->SetBinError(12,0.1144421);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->SetBinError(13,0.08673638);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->SetBinError(14,0.1117655);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->SetBinError(15,0.1440977);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->SetBinError(16,0.1612191);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->SetBinError(17,0.2392429);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->SetBinError(18,0.1694777);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->SetBinError(19,0.438188);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->SetBinError(20,0.4693501);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->SetBinError(21,0.4064666);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->SetBinError(22,0.2934545);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->SetMinimum(0.5);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->SetMaximum(1.5);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->SetEntries(529.2756);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->SetLineColor(ci);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->SetLineWidth(2);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->SetMarkerStyle(20);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->SetMarkerSize(1.2);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->GetXaxis()->SetTitle("m(VV) [GeV]");
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->GetXaxis()->SetLabelFont(43);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->GetXaxis()->SetLabelSize(25);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->GetXaxis()->SetTitleSize(25);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->GetXaxis()->SetTitleOffset(5);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->GetXaxis()->SetTitleFont(43);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->GetYaxis()->SetTitle("Prefit/Postfit");
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->GetYaxis()->SetNdivisions(205);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->GetYaxis()->SetLabelFont(43);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->GetYaxis()->SetLabelSize(25);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->GetYaxis()->SetTitleSize(25);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->GetYaxis()->SetTitleOffset(2);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->GetYaxis()->SetTitleFont(43);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->GetZaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->GetZaxis()->SetTitleFont(42);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__23->Draw("AXIS");
   line = new TLine(500,1,6000,1);
   line->SetLineStyle(2);
   line->Draw();
   Double_t xAxis48[23] = {500, 570, 650, 730, 810, 890, 970, 1050, 1130, 1220, 1310, 1400, 1490, 1590, 1690, 1790, 1900, 2010, 2350, 2470, 2600, 2860, 6000}; 
   
   TH1F *combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24 = new TH1F("combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24","Histogram of combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR",22, xAxis48);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->SetBinContent(1,1.15497);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->SetBinContent(2,1.120505);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->SetBinContent(3,1.039053);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->SetBinContent(4,1.087741);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->SetBinContent(5,1.02037);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->SetBinContent(6,0.9126644);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->SetBinContent(7,0.913375);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->SetBinContent(8,0.9368248);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->SetBinContent(9,0.931305);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->SetBinContent(10,0.95819);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->SetBinContent(11,1.117739);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->SetBinContent(12,1.004253);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->SetBinContent(13,0.8181003);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->SetBinContent(14,0.7982935);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->SetBinContent(15,0.8456494);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->SetBinContent(16,0.8118629);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->SetBinContent(17,1.11062);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->SetBinContent(18,1.036488);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->SetBinContent(19,1.003982);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->SetBinContent(20,0.928342);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->SetBinContent(21,1.150458);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->SetBinContent(22,0.497886);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->SetBinError(1,0.01715635);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->SetBinError(2,0.01585722);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->SetBinError(3,0.0167957);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->SetBinError(4,0.02062993);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->SetBinError(5,0.02456053);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->SetBinError(6,0.02794735);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->SetBinError(7,0.03266871);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->SetBinError(8,0.04362697);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->SetBinError(9,0.05351561);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->SetBinError(10,0.06590818);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->SetBinError(11,0.08235206);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->SetBinError(12,0.1144421);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->SetBinError(13,0.08673638);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->SetBinError(14,0.1117655);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->SetBinError(15,0.1440977);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->SetBinError(16,0.1612191);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->SetBinError(17,0.2392429);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->SetBinError(18,0.1694777);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->SetBinError(19,0.438188);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->SetBinError(20,0.4693501);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->SetBinError(21,0.4064666);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->SetBinError(22,0.2934545);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->SetMinimum(0.5);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->SetMaximum(1.5);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->SetEntries(529.2756);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->SetLineColor(ci);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->SetLineWidth(2);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->SetMarkerStyle(20);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->SetMarkerSize(1.2);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->GetXaxis()->SetTitle("m(VV) [GeV]");
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->GetXaxis()->SetLabelFont(43);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->GetXaxis()->SetLabelSize(25);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->GetXaxis()->SetTitleSize(25);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->GetXaxis()->SetTitleOffset(5);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->GetXaxis()->SetTitleFont(43);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->GetYaxis()->SetTitle("Prefit/Postfit");
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->GetYaxis()->SetNdivisions(205);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->GetYaxis()->SetLabelFont(43);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->GetYaxis()->SetLabelSize(25);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->GetYaxis()->SetTitleSize(25);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->GetYaxis()->SetTitleOffset(2);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->GetYaxis()->SetTitleFont(43);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->GetZaxis()->SetLabelFont(42);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->GetZaxis()->SetTitleFont(42);
   combCat_L1_MergLP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergLP_VBF_WW_SR_rebinned__24->Draw("histsame");
   pad3->Modified();
   c2->cd();
   c2->Modified();
   c2->cd();
   c2->SetSelected(c2);
}
