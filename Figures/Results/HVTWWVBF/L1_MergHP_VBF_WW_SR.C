void L1_MergHP_VBF_WW_SR()
{
//=========Macro generated from canvas: c2/c2
//=========  (Fri Nov  8 18:35:10 2019) by ROOT version 6.14/04
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
   pad1->Range(-613.924,-1.785378,6348.101,6.204391);
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
   hs->SetMaximum(278771);
   Double_t xAxis1[23] = {500, 570, 650, 730, 810, 890, 970, 1050, 1130, 1220, 1310, 1400, 1490, 1590, 1690, 1790, 1900, 2010, 2350, 2470, 2600, 2860, 6000}; 
   
   TH1F *hs_stack_1 = new TH1F("hs_stack_1","hs",22, xAxis1);
   hs_stack_1->SetMinimum(0.02368196);
   hs_stack_1->SetMaximum(638120.6);
   hs_stack_1->SetDirectory(0);
   hs_stack_1->SetStats(0);
   hs_stack_1->SetLineWidth(2);
   hs_stack_1->SetMarkerStyle(20);
   hs_stack_1->SetMarkerSize(1.2);
   hs_stack_1->GetXaxis()->SetTitle("m(VV) [GeV]");
   hs_stack_1->GetXaxis()->SetLabelFont(43);
   hs_stack_1->GetXaxis()->SetLabelSize(0);
   hs_stack_1->GetXaxis()->SetTitleSize(0);
   hs_stack_1->GetXaxis()->SetTitleOffset(1.4);
   hs_stack_1->GetXaxis()->SetTitleFont(43);
   hs_stack_1->GetYaxis()->SetTitle("Events");
   hs_stack_1->GetYaxis()->SetLabelFont(43);
   hs_stack_1->GetYaxis()->SetLabelSize(25);
   hs_stack_1->GetYaxis()->SetTitleSize(25);
   hs_stack_1->GetYaxis()->SetTitleOffset(2);
   hs_stack_1->GetYaxis()->SetTitleFont(43);
   hs_stack_1->GetZaxis()->SetLabelFont(42);
   hs_stack_1->GetZaxis()->SetLabelSize(0.05);
   hs_stack_1->GetZaxis()->SetTitleSize(0.05);
   hs_stack_1->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_1);
   
   Double_t xAxis2[23] = {500, 570, 650, 730, 810, 890, 970, 1050, 1130, 1220, 1310, 1400, 1490, 1590, 1690, 1790, 1900, 2010, 2350, 2470, 2600, 2860, 6000}; 
   
   TH1F *combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1 = new TH1F("combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1","Histogram of combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR",22, xAxis2);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->SetBinContent(1,2.479911);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->SetBinContent(2,3.343159);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->SetBinContent(3,2.010682);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->SetBinContent(4,0.4522606);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->SetBinContent(5,0.2613818);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->SetBinContent(6,0.2687784);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->SetBinContent(7,4.301659e-09);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->SetBinContent(8,0.1982215);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->SetBinContent(9,0.06042233);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->SetBinContent(10,0.02492208);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->SetBinContent(11,0.0469508);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->SetBinContent(12,4.283438e-09);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->SetBinContent(13,0.009821016);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->SetBinContent(14,0.0768702);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->SetBinContent(15,2.735043e-09);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->SetBinContent(16,0.005261421);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->SetBinContent(17,5.130447e-09);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->SetBinContent(18,5.752285e-09);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->SetBinContent(19,0.007392651);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->SetBinContent(20,3.977274e-09);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->SetBinContent(21,4.085541e-09);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->SetBinContent(22,4.372456e-09);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->SetBinError(1,7.386341);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->SetBinError(2,8.5761);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->SetBinError(3,6.65094);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->SetBinError(4,3.15432);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->SetBinError(5,2.397999);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->SetBinError(6,2.431692);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->SetBinError(7,0.0003076305);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->SetBinError(8,2.08827);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->SetBinError(9,1.152949);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->SetBinError(10,0.7404633);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->SetBinError(11,1.016326);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->SetBinError(12,0.0003069783);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->SetBinError(13,0.4648251);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->SetBinError(14,1.30044);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->SetBinError(15,0.0002452977);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->SetBinError(16,0.3402224);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->SetBinError(17,0.0003359611);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->SetBinError(18,0.0003557391);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->SetBinError(19,0.4032844);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->SetBinError(20,0.000295804);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->SetBinError(21,0.0002998031);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->SetBinError(22,0.0003101516);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->SetEntries(23);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#99ff99");
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->SetLineColor(ci);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->SetLineWidth(2);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->SetMarkerStyle(20);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->SetMarkerSize(1.2);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->GetXaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->GetXaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->GetXaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->GetXaxis()->SetTitleFont(42);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->GetYaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->GetYaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->GetYaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->GetYaxis()->SetTitleOffset(1.4);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->GetYaxis()->SetTitleFont(42);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->GetZaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1->GetZaxis()->SetTitleFont(42);
   hs->Add(combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1,"");
   Double_t xAxis3[23] = {500, 570, 650, 730, 810, 890, 970, 1050, 1130, 1220, 1310, 1400, 1490, 1590, 1690, 1790, 1900, 2010, 2350, 2470, 2600, 2860, 6000}; 
   
   TH1F *combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2 = new TH1F("combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2","Histogram of combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR",22, xAxis3);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->SetBinContent(1,21.71862);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->SetBinContent(2,20.79242);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->SetBinContent(3,15.87946);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->SetBinContent(4,10.12268);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->SetBinContent(5,4.145844);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->SetBinContent(6,3.353957);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->SetBinContent(7,1.668206);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->SetBinContent(8,0.200068);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->SetBinContent(9,0.5425257);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->SetBinContent(10,0.3769006);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->SetBinContent(11,0.2396317);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->SetBinContent(12,1.847166e-07);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->SetBinContent(13,2.322026e-07);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->SetBinContent(14,0.4597472);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->SetBinContent(15,1.179444e-07);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->SetBinContent(16,1.452416e-07);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->SetBinContent(17,2.212425e-07);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->SetBinContent(18,2.480583e-07);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->SetBinContent(19,3.187965e-07);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->SetBinContent(20,1.715137e-07);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->SetBinContent(21,1.761825e-07);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->SetBinContent(22,1.885553e-07);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->SetBinError(1,21.85886);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->SetBinError(2,21.38769);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->SetBinError(3,18.69086);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->SetBinError(4,14.9231);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->SetBinError(5,9.550317);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->SetBinError(6,8.589939);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->SetBinError(7,6.058096);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->SetBinError(8,2.097974);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->SetBinError(9,3.454789);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->SetBinError(10,2.879551);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->SetBinError(11,2.296061);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->SetBinError(12,0.002015878);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->SetBinError(13,0.00226019);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->SetBinError(14,3.18032);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->SetBinError(15,0.001610831);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->SetBinError(16,0.001787545);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->SetBinError(17,0.002206204);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->SetBinError(18,0.002336083);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->SetBinError(19,0.002648306);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->SetBinError(20,0.001942499);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->SetBinError(21,0.00196876);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->SetBinError(22,0.002036717);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->SetEntries(23);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->SetLineColor(ci);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->SetLineWidth(2);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->SetMarkerStyle(20);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->SetMarkerSize(1.2);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->GetXaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->GetXaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->GetXaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->GetXaxis()->SetTitleFont(42);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->GetYaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->GetYaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->GetYaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->GetYaxis()->SetTitleOffset(1.4);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->GetYaxis()->SetTitleFont(42);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->GetZaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2->GetZaxis()->SetTitleFont(42);
   hs->Add(combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2,"");
   Double_t xAxis4[23] = {500, 570, 650, 730, 810, 890, 970, 1050, 1130, 1220, 1310, 1400, 1490, 1590, 1690, 1790, 1900, 2010, 2350, 2470, 2600, 2860, 6000}; 
   
   TH1F *combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3 = new TH1F("combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3","Histogram of combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR",22, xAxis4);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->SetBinContent(1,32.99757);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->SetBinContent(2,25.3767);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->SetBinContent(3,25.62706);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->SetBinContent(4,20.55383);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->SetBinContent(5,15.04339);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->SetBinContent(6,3.309474);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->SetBinContent(7,5.657694);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->SetBinContent(8,5.114439);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->SetBinContent(9,3.735614);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->SetBinContent(10,1.863707);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->SetBinContent(11,2.390164);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->SetBinContent(12,2.691194);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->SetBinContent(13,1.798637);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->SetBinContent(14,1.303364);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->SetBinContent(15,0.04253019);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->SetBinContent(16,0.07485966);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->SetBinContent(17,7.977894e-08);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->SetBinContent(18,0.3078186);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->SetBinContent(19,0.8424975);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->SetBinContent(20,6.1847e-08);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->SetBinContent(21,0.175449);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->SetBinContent(22,6.799212e-08);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->SetBinError(1,26.94339);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->SetBinError(2,23.62811);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->SetBinError(3,23.74437);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->SetBinError(4,21.26463);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->SetBinError(5,18.19216);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->SetBinError(6,8.532785);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->SetBinError(7,11.15658);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->SetBinError(8,10.60743);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->SetBinError(9,9.065512);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->SetBinError(10,6.403246);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->SetBinError(11,7.251455);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->SetBinError(12,7.694561);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->SetBinError(13,6.29047);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->SetBinError(14,5.354811);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->SetBinError(15,0.9672973);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->SetBinError(16,1.283321);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->SetBinError(17,0.001324816);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->SetBinError(18,2.602309);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->SetBinError(19,4.305223);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->SetBinError(20,0.001166462);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->SetBinError(21,1.964657);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->SetBinError(22,0.00122304);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->SetEntries(23);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->SetLineColor(ci);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->SetLineWidth(2);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->SetMarkerStyle(20);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->SetMarkerSize(1.2);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->GetXaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->GetXaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->GetXaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->GetXaxis()->SetTitleFont(42);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->GetYaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->GetYaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->GetYaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->GetYaxis()->SetTitleOffset(1.4);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->GetYaxis()->SetTitleFont(42);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->GetZaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3->GetZaxis()->SetTitleFont(42);
   hs->Add(combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3,"");
   Double_t xAxis5[23] = {500, 570, 650, 730, 810, 890, 970, 1050, 1130, 1220, 1310, 1400, 1490, 1590, 1690, 1790, 1900, 2010, 2350, 2470, 2600, 2860, 6000}; 
   
   TH1F *combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4 = new TH1F("combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4","Histogram of combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR",22, xAxis5);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->SetBinContent(1,83.90217);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->SetBinContent(2,97.70744);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->SetBinContent(3,59.06007);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->SetBinContent(4,40.85371);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->SetBinContent(5,23.84392);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->SetBinContent(6,15.07875);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->SetBinContent(7,7.994962);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->SetBinContent(8,4.793359);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->SetBinContent(9,2.51085);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->SetBinContent(10,0.641542);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->SetBinContent(11,0.5692432);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->SetBinContent(12,0.4826363);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->SetBinContent(13,0.8575802);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->SetBinContent(14,2.255462e-07);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->SetBinContent(15,7.584821e-08);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->SetBinContent(16,9.340259e-08);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->SetBinContent(17,1.422775e-07);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->SetBinContent(18,1.595224e-07);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->SetBinContent(19,2.05013e-07);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->SetBinContent(20,0.1102978);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->SetBinContent(21,1.133002e-07);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->SetBinContent(22,1.212569e-07);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->SetBinError(1,42.96333);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->SetBinError(2,46.36339);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->SetBinError(3,36.0461);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->SetBinError(4,29.97969);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->SetBinError(5,22.90341);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->SetBinError(6,18.21352);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->SetBinError(7,13.26232);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->SetBinError(8,10.26907);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->SetBinError(9,7.432275);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->SetBinError(10,3.75685);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->SetBinError(11,3.538835);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->SetBinError(12,3.258527);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->SetBinError(13,4.343589);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->SetBinError(14,0.002227559);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->SetBinError(15,0.001291766);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->SetBinError(16,0.001433477);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->SetBinError(17,0.00176921);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->SetBinError(18,0.001873364);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->SetBinError(19,0.002123743);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->SetBinError(20,1.557739);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->SetBinError(21,0.001578799);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->SetBinError(22,0.001633295);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->SetEntries(23);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->SetStats(0);

   ci = TColor::GetColor("#6699ff");
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#6699ff");
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->SetLineColor(ci);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->SetLineWidth(2);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->SetMarkerStyle(20);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->SetMarkerSize(1.2);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->GetXaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->GetXaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->GetXaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->GetXaxis()->SetTitleFont(42);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->GetYaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->GetYaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->GetYaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->GetYaxis()->SetTitleOffset(1.4);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->GetYaxis()->SetTitleFont(42);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->GetZaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4->GetZaxis()->SetTitleFont(42);
   hs->Add(combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4,"");
   Double_t xAxis6[23] = {500, 570, 650, 730, 810, 890, 970, 1050, 1130, 1220, 1310, 1400, 1490, 1590, 1690, 1790, 1900, 2010, 2350, 2470, 2600, 2860, 6000}; 
   
   TH1F *combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5 = new TH1F("combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5","Histogram of combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR",22, xAxis6);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->SetBinContent(1,137.6727);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->SetBinContent(2,130.9097);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->SetBinContent(3,90.86737);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->SetBinContent(4,56.63033);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->SetBinContent(5,31.71648);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->SetBinContent(6,19.66333);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->SetBinContent(7,10.14784);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->SetBinContent(8,7.056582);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->SetBinContent(9,6.193273);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->SetBinContent(10,3.408024);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->SetBinContent(11,1.642261);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->SetBinContent(12,2.254985);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->SetBinContent(13,1.046669);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->SetBinContent(14,0.1409687);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->SetBinContent(15,0.3476555);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->SetBinContent(16,0.291345);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->SetBinContent(17,0.4392636);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->SetBinContent(18,0.36835);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->SetBinContent(19,0.07285654);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->SetBinContent(20,0.1196485);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->SetBinContent(21,0.01109598);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->SetBinContent(22,0.08705986);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->SetBinError(1,55.03453);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->SetBinError(2,53.66576);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->SetBinError(3,44.7111);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->SetBinError(4,35.29684);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->SetBinError(5,26.4152);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->SetBinError(6,20.79888);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->SetBinError(7,14.94164);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->SetBinError(8,12.45973);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->SetBinError(9,11.6727);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->SetBinError(10,8.658898);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->SetBinError(11,6.010803);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->SetBinError(12,7.043413);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->SetBinError(13,4.798617);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->SetBinError(14,1.761054);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->SetBinError(15,2.765578);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->SetBinError(16,2.531717);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->SetBinError(17,3.108665);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->SetBinError(18,2.8467);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->SetBinError(19,1.266035);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->SetBinError(20,1.622426);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->SetBinError(21,0.4940765);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->SetBinError(22,1.38395);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->SetEntries(23);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->SetStats(0);

   ci = TColor::GetColor("#ff9999");
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#ff9999");
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->SetLineColor(ci);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->SetLineWidth(2);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->SetMarkerStyle(20);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->SetMarkerSize(1.2);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->GetXaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->GetXaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->GetXaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->GetXaxis()->SetTitleFont(42);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->GetYaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->GetYaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->GetYaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->GetYaxis()->SetTitleOffset(1.4);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->GetYaxis()->SetTitleFont(42);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->GetZaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5->GetZaxis()->SetTitleFont(42);
   hs->Add(combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5,"");
   hs->Draw("hist");
   
   Double_t Graph0_fx3001[22] = {
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
   Double_t Graph0_fy3001[22] = {
   278.7821,
   278.2178,
   194.0401,
   130.5758,
   79.43796,
   52.50642,
   39.08504,
   23.55036,
   13.99843,
   6.469746,
   4.921827,
   5.43874,
   3.72061,
   1.988925,
   0.3901859,
   0.3714663,
   0.4392641,
   0.676169,
   0.9227472,
   0.2299465,
   0.1865453,
   0.08706024};
   Double_t Graph0_felx3001[22] = {
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
   Double_t Graph0_fely3001[22] = {
   9.726501,
   8.859772,
   7.663528,
   6.024521,
   5.025925,
   4.296944,
   4.598473,
   2.660145,
   1.744699,
   1.154804,
   1.210421,
   1.359295,
   0.984318,
   0.8283576,
   0.3868976,
   0.2990932,
   0.2105409,
   0.4707163,
   0.5218499,
   0.15425,
   0.1304733,
   0.03533763};
   Double_t Graph0_fehx3001[22] = {
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
   Double_t Graph0_fehy3001[22] = {
   9.726501,
   8.859772,
   7.663513,
   6.024521,
   5.025917,
   4.296944,
   4.598473,
   2.660147,
   1.744698,
   1.154805,
   1.210421,
   1.359295,
   0.984318,
   0.8283577,
   0.3868975,
   0.2990932,
   0.2105409,
   0.4707164,
   0.5218499,
   0.15425,
   0.1304733,
   0.03533762};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(22,Graph0_fx3001,Graph0_fy3001,Graph0_felx3001,Graph0_fehx3001,Graph0_fely3001,Graph0_fehy3001);
   grae->SetName("Graph0");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3004);
   grae->SetMarkerStyle(0);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph03001 = new TH1F("Graph_Graph03001","Graph",100,0,6550);
   Graph_Graph03001->SetMinimum(0.002959496);
   Graph_Graph03001->SetMaximum(317.3591);
   Graph_Graph03001->SetDirectory(0);
   Graph_Graph03001->SetStats(0);
   Graph_Graph03001->SetLineWidth(2);
   Graph_Graph03001->SetMarkerStyle(20);
   Graph_Graph03001->SetMarkerSize(1.2);
   Graph_Graph03001->GetXaxis()->SetLabelFont(42);
   Graph_Graph03001->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph03001->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph03001->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph03001->GetXaxis()->SetTitleFont(42);
   Graph_Graph03001->GetYaxis()->SetLabelFont(42);
   Graph_Graph03001->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph03001->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph03001->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph03001->GetYaxis()->SetTitleFont(42);
   Graph_Graph03001->GetZaxis()->SetLabelFont(42);
   Graph_Graph03001->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph03001->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph03001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph03001);
   
   grae->Draw("e2 ");
   Double_t xAxis7[23] = {500, 570, 650, 730, 810, 890, 970, 1050, 1130, 1220, 1310, 1400, 1490, 1590, 1690, 1790, 1900, 2010, 2350, 2470, 2600, 2860, 6000}; 
   
   TH1F *combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1 = new TH1F("combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1","Histogram of combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR",22, xAxis7);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->SetBinContent(1,263);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->SetBinContent(2,282);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->SetBinContent(3,188);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->SetBinContent(4,121);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->SetBinContent(5,83);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->SetBinContent(6,53);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->SetBinContent(7,35);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->SetBinContent(8,27);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->SetBinContent(9,14);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->SetBinContent(10,6);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->SetBinContent(11,5);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->SetBinContent(12,5);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->SetBinContent(13,6);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->SetBinContent(14,4);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->SetBinContent(17,1);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->SetBinContent(18,1);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->SetBinContent(19,2);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->SetBinError(1,16.21727);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->SetBinError(2,16.79286);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->SetBinError(3,13.71131);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->SetBinError(4,11);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->SetBinError(5,9.110434);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->SetBinError(6,7.28011);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->SetBinError(7,5.91608);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->SetBinError(8,5.196152);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->SetBinError(9,3.741657);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->SetBinError(10,2.44949);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->SetBinError(11,2.236068);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->SetBinError(12,2.236068);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->SetBinError(13,2.44949);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->SetBinError(14,2);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->SetBinError(17,1);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->SetBinError(18,1);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->SetBinError(19,1.414214);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->SetEntries(23);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->SetStats(0);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->SetLineWidth(2);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->SetMarkerStyle(20);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->SetMarkerSize(1.2);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->GetXaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->GetXaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->GetXaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->GetXaxis()->SetTitleFont(42);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->GetYaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->GetYaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->GetYaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->GetYaxis()->SetTitleOffset(1.4);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->GetYaxis()->SetTitleFont(42);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->GetZaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->GetZaxis()->SetTitleFont(42);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__1->Draw("same");
   Double_t xAxis8[23] = {500, 570, 650, 730, 810, 890, 970, 1050, 1130, 1220, 1310, 1400, 1490, 1590, 1690, 1790, 1900, 2010, 2350, 2470, 2600, 2860, 6000}; 
   
   TH1F *combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2 = new TH1F("combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2","Histogram of combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR",22, xAxis8);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->SetBinContent(1,0.01109734);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->SetBinContent(2,0.08844259);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->SetBinContent(3,0.5954714);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->SetBinContent(4,1.962971);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->SetBinContent(5,4.426937);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->SetBinContent(6,10.83213);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->SetBinContent(7,13.61634);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->SetBinContent(8,6.187694);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->SetBinContent(9,0.9557422);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->SetBinContent(10,0.1546507);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->SetBinContent(11,0.03357581);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->SetBinContent(12,0.009925094);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->SetBinContent(13,0.007901836);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->SetBinContent(14,0.007974939);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->SetBinContent(15,7.937338e-09);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->SetBinContent(16,7.937338e-09);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->SetBinContent(17,7.937338e-09);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->SetBinContent(18,7.937338e-09);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->SetBinContent(19,7.937338e-09);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->SetBinContent(20,7.937338e-09);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->SetBinContent(21,7.937338e-09);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->SetBinContent(22,7.937338e-09);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->SetBinError(1,0.4941068);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->SetBinError(2,1.394897);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->SetBinError(3,3.619444);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->SetBinError(4,6.571557);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->SetBinError(5,9.868769);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->SetBinError(6,15.43719);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->SetBinError(7,17.30779);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->SetBinError(8,11.66744);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->SetBinError(9,4.585447);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->SetBinError(10,1.844537);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->SetBinError(11,0.8594578);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->SetBinError(12,0.4672816);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->SetBinError(13,0.4169417);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->SetBinError(14,0.4188659);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->SetBinError(15,0.0004178773);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->SetBinError(16,0.0004178773);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->SetBinError(17,0.0004178773);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->SetBinError(18,0.0004178773);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->SetBinError(19,0.0004178773);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->SetBinError(20,0.0004178773);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->SetBinError(21,0.0004178773);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->SetBinError(22,0.0004178773);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->SetEntries(23);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->SetLineColor(ci);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->SetLineWidth(2);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->SetMarkerStyle(20);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->SetMarkerSize(1.2);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->GetXaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->GetXaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->GetXaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->GetXaxis()->SetTitleFont(42);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->GetYaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->GetYaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->GetYaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->GetYaxis()->SetTitleOffset(1.4);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->GetYaxis()->SetTitleFont(42);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->GetZaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->GetZaxis()->SetTitleFont(42);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned__2->Draw("hist same");
   
   TLegend *leg = new TLegend(0.72,0.62,0.91,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_1","Z+jets","f");

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
   entry=leg->AddEntry("combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_HVTWWVBF_0__obs_x_L1_MergHP_VBF_WW_SR_rebinned","VBF HVT Z' 1TeV","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_2","Single-t","f");

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
   entry=leg->AddEntry("combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_3","Diboson","f");

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
   entry=leg->AddEntry("combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_4","Top Pair","f");

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
   entry=leg->AddEntry("combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WW_SR_rebinned_stack_5","W+jets","f");

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
   entry=leg->AddEntry("combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned","Data","lep");
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
      tex = new TLatex(0.2,0.72,"Merg HP VBF 1lep WW SR");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.23,0.66,"#chi^{2} / dof = 10.6 / 22");
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
   Double_t xAxis9[23] = {500, 570, 650, 730, 810, 890, 970, 1050, 1130, 1220, 1310, 1400, 1490, 1590, 1690, 1790, 1900, 2010, 2350, 2470, 2600, 2860, 6000}; 
   
   TH1F *combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3 = new TH1F("combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3","Histogram of combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR",22, xAxis9);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->SetBinContent(1,1);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->SetBinContent(2,1);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->SetBinContent(3,1);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->SetBinContent(4,1);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->SetBinContent(5,1);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->SetBinContent(6,1);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->SetBinContent(7,1);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->SetBinContent(8,1);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->SetBinContent(9,1);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->SetBinContent(10,1);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->SetBinContent(11,1);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->SetBinContent(12,1);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->SetBinContent(13,1);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->SetBinContent(14,1);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->SetBinContent(15,1);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->SetBinContent(16,1);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->SetBinContent(17,1);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->SetBinContent(18,1);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->SetBinContent(19,1);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->SetBinContent(20,1);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->SetBinContent(21,1);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->SetBinContent(22,1);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->SetBinError(1,0.01805807);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->SetBinError(2,0.01807637);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->SetBinError(3,0.02164502);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->SetBinError(4,0.02638593);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->SetBinError(5,0.03382904);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->SetBinError(6,0.04160997);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->SetBinError(7,0.0482279);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->SetBinError(8,0.0621305);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->SetBinError(9,0.08058682);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->SetBinError(10,0.1185387);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->SetBinError(11,0.1359066);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->SetBinError(12,0.1292869);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->SetBinError(13,0.1563135);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->SetBinError(14,0.2137935);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->SetBinError(15,0.4826895);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->SetBinError(16,0.4947023);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->SetBinError(17,0.454926);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->SetBinError(18,0.3666705);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->SetBinError(19,0.313879);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->SetBinError(20,0.6287678);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->SetBinError(21,0.6980901);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->SetBinError(22,1.021865);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->SetMinimum(0.5);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->SetMaximum(1.5);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->SetEntries(162.3461);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->SetLineColor(ci);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->SetLineWidth(2);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->SetMarkerStyle(20);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->SetMarkerSize(1.2);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->GetXaxis()->SetLabelFont(43);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->GetXaxis()->SetLabelSize(0);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->GetXaxis()->SetTitleSize(0);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->GetXaxis()->SetTitleFont(43);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->GetYaxis()->SetTitle("Data/Postfit");
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->GetYaxis()->SetNdivisions(205);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->GetYaxis()->SetLabelFont(43);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->GetYaxis()->SetLabelSize(25);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->GetYaxis()->SetTitleSize(25);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->GetYaxis()->SetTitleOffset(2);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->GetYaxis()->SetTitleFont(43);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->GetZaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->GetZaxis()->SetTitleFont(42);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__3->Draw("AXIS");
   
   Double_t Graph0_fx3002[22] = {
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
   Double_t Graph0_fy3002[22] = {
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
   Double_t Graph0_felx3002[22] = {
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
   Double_t Graph0_fely3002[22] = {
   0.03488926,
   0.03184473,
   0.03949456,
   0.04613812,
   0.06326855,
   0.08183654,
   0.117653,
   0.1129556,
   0.1246353,
   0.178493,
   0.2459292,
   0.2499283,
   0.2645582,
   0.4164851,
   0.9915724,
   0.8051691,
   0.4793037,
   0.6961519,
   0.5655394,
   0.6708083,
   0.6994188,
   0.4058986};
   Double_t Graph0_fehx3002[22] = {
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
   Double_t Graph0_fehy3002[22] = {
   0.03488926,
   0.03184473,
   0.03949448,
   0.04613812,
   0.06326846,
   0.08183654,
   0.117653,
   0.1129557,
   0.1246353,
   0.178493,
   0.2459292,
   0.2499283,
   0.2645582,
   0.4164852,
   0.9915723,
   0.805169,
   0.4793036,
   0.6961519,
   0.5655394,
   0.6708082,
   0.6994187,
   0.4058985};
   grae = new TGraphAsymmErrors(22,Graph0_fx3002,Graph0_fy3002,Graph0_felx3002,Graph0_fehx3002,Graph0_fely3002,Graph0_fehy3002);
   grae->SetName("Graph0");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3004);
   grae->SetMarkerStyle(0);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph03002 = new TH1F("Graph_Graph03002","Graph",100,0,6550);
   Graph_Graph03002->SetMinimum(0.007584835);
   Graph_Graph03002->SetMaximum(2.189887);
   Graph_Graph03002->SetDirectory(0);
   Graph_Graph03002->SetStats(0);
   Graph_Graph03002->SetLineWidth(2);
   Graph_Graph03002->SetMarkerStyle(20);
   Graph_Graph03002->SetMarkerSize(1.2);
   Graph_Graph03002->GetXaxis()->SetLabelFont(42);
   Graph_Graph03002->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph03002->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph03002->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph03002->GetXaxis()->SetTitleFont(42);
   Graph_Graph03002->GetYaxis()->SetLabelFont(42);
   Graph_Graph03002->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph03002->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph03002->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph03002->GetYaxis()->SetTitleFont(42);
   Graph_Graph03002->GetZaxis()->SetLabelFont(42);
   Graph_Graph03002->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph03002->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph03002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph03002);
   
   grae->Draw(" e2");
   TLine *line = new TLine(500,1,6000,1);
   line->SetLineStyle(2);
   line->Draw();
   Double_t xAxis10[23] = {500, 570, 650, 730, 810, 890, 970, 1050, 1130, 1220, 1310, 1400, 1490, 1590, 1690, 1790, 1900, 2010, 2350, 2470, 2600, 2860, 6000}; 
   
   TH1F *combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4 = new TH1F("combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4","Histogram of combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR",22, xAxis10);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->SetBinContent(1,0.9433892);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->SetBinContent(2,1.013594);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->SetBinContent(3,0.9688719);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->SetBinContent(4,0.926665);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->SetBinContent(5,1.044841);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->SetBinContent(6,1.0094);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->SetBinContent(7,0.8954833);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->SetBinContent(8,1.146479);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->SetBinContent(9,1.000112);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->SetBinContent(10,0.9273934);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->SetBinContent(11,1.015883);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->SetBinContent(12,0.9193305);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->SetBinContent(13,1.612639);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->SetBinContent(14,2.011137);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->SetBinContent(17,2.276535);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->SetBinContent(18,1.47892);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->SetBinContent(19,2.167441);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->SetBinError(1,0.05940602);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->SetBinError(2,0.06173344);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->SetBinError(3,0.07220145);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->SetBinError(4,0.08599816);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->SetBinError(5,0.1173779);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->SetBinError(6,0.1417969);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->SetBinError(7,0.1544141);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->SetBinError(8,0.2263161);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->SetBinError(9,0.2732992);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->SetBinError(10,0.3865044);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->SetBinError(11,0.4646877);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->SetBinError(12,0.4196394);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->SetBinError(13,0.6820597);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->SetBinError(14,1.050526);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->SetBinError(17,2.391422);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->SetBinError(18,1.527821);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->SetBinError(19,1.606335);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->SetEntries(35.23285);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->SetStats(0);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->SetLineWidth(2);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->SetMarkerStyle(20);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->SetMarkerSize(1.2);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->GetXaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->GetXaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->GetXaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->GetXaxis()->SetTitleFont(42);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->GetYaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->GetYaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->GetYaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->GetYaxis()->SetTitleOffset(1.4);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->GetYaxis()->SetTitleFont(42);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->GetZaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->GetZaxis()->SetTitleFont(42);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WW_SR_rebinned__4->Draw("sameE0");
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
   Double_t xAxis11[23] = {500, 570, 650, 730, 810, 890, 970, 1050, 1130, 1220, 1310, 1400, 1490, 1590, 1690, 1790, 1900, 2010, 2350, 2470, 2600, 2860, 6000}; 
   
   TH1F *combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5 = new TH1F("combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5","Histogram of combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR",22, xAxis11);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->SetBinContent(1,1.086092);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->SetBinContent(2,1.065596);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->SetBinContent(3,1.041223);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->SetBinContent(4,0.9947355);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->SetBinContent(5,0.8788583);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->SetBinContent(6,0.8197514);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->SetBinContent(7,0.626306);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->SetBinContent(8,0.6197168);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->SetBinContent(9,0.8279381);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->SetBinContent(10,0.878693);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->SetBinContent(11,0.733224);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->SetBinContent(12,0.7632769);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->SetBinContent(13,0.6107582);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->SetBinContent(14,0.3357765);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->SetBinContent(15,1.657378);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->SetBinContent(16,1.255271);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->SetBinContent(17,0.9521246);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->SetBinContent(18,0.5937501);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->SetBinContent(19,0.261621);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->SetBinContent(20,1.221635);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->SetBinContent(21,0.4525856);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->SetBinContent(22,1.11718);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->SetBinError(1,0.01922013);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->SetBinError(2,0.01896335);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->SetBinError(3,0.0223131);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->SetBinError(4,0.02628172);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->SetBinError(5,0.03073838);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->SetBinError(6,0.03593599);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->SetBinError(7,0.03441738);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->SetBinError(8,0.04401554);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->SetBinError(9,0.07010173);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->SetBinError(10,0.107694);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->SetBinError(11,0.1083356);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->SetBinError(12,0.1060574);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->SetBinError(13,0.1096305);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->SetBinError(14,0.1012445);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->SetBinError(15,0.7162922);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->SetBinError(16,0.5885685);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->SetBinError(17,0.4385574);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->SetBinError(18,0.2522162);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->SetBinError(19,0.1275111);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->SetBinError(20,0.7324572);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->SetBinError(21,0.4002375);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->SetBinError(22,1.111269);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->SetMinimum(0.5);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->SetMaximum(1.5);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->SetEntries(112.7577);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->SetLineColor(ci);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->SetLineWidth(2);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->SetMarkerStyle(20);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->SetMarkerSize(1.2);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->GetXaxis()->SetTitle("m(VV) [GeV]");
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->GetXaxis()->SetLabelFont(43);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->GetXaxis()->SetLabelSize(25);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->GetXaxis()->SetTitleSize(25);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->GetXaxis()->SetTitleOffset(5);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->GetXaxis()->SetTitleFont(43);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->GetYaxis()->SetTitle("Prefit/Postfit");
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->GetYaxis()->SetNdivisions(205);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->GetYaxis()->SetLabelFont(43);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->GetYaxis()->SetLabelSize(25);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->GetYaxis()->SetTitleSize(25);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->GetYaxis()->SetTitleOffset(2);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->GetYaxis()->SetTitleFont(43);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->GetZaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->GetZaxis()->SetTitleFont(42);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__5->Draw("AXIS");
   line = new TLine(500,1,6000,1);
   line->SetLineStyle(2);
   line->Draw();
   Double_t xAxis12[23] = {500, 570, 650, 730, 810, 890, 970, 1050, 1130, 1220, 1310, 1400, 1490, 1590, 1690, 1790, 1900, 2010, 2350, 2470, 2600, 2860, 6000}; 
   
   TH1F *combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6 = new TH1F("combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6","Histogram of combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR",22, xAxis12);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->SetBinContent(1,1.086092);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->SetBinContent(2,1.065596);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->SetBinContent(3,1.041223);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->SetBinContent(4,0.9947355);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->SetBinContent(5,0.8788583);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->SetBinContent(6,0.8197514);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->SetBinContent(7,0.626306);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->SetBinContent(8,0.6197168);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->SetBinContent(9,0.8279381);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->SetBinContent(10,0.878693);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->SetBinContent(11,0.733224);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->SetBinContent(12,0.7632769);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->SetBinContent(13,0.6107582);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->SetBinContent(14,0.3357765);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->SetBinContent(15,1.657378);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->SetBinContent(16,1.255271);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->SetBinContent(17,0.9521246);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->SetBinContent(18,0.5937501);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->SetBinContent(19,0.261621);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->SetBinContent(20,1.221635);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->SetBinContent(21,0.4525856);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->SetBinContent(22,1.11718);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->SetBinError(1,0.01922013);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->SetBinError(2,0.01896335);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->SetBinError(3,0.0223131);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->SetBinError(4,0.02628172);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->SetBinError(5,0.03073838);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->SetBinError(6,0.03593599);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->SetBinError(7,0.03441738);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->SetBinError(8,0.04401554);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->SetBinError(9,0.07010173);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->SetBinError(10,0.107694);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->SetBinError(11,0.1083356);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->SetBinError(12,0.1060574);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->SetBinError(13,0.1096305);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->SetBinError(14,0.1012445);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->SetBinError(15,0.7162922);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->SetBinError(16,0.5885685);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->SetBinError(17,0.4385574);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->SetBinError(18,0.2522162);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->SetBinError(19,0.1275111);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->SetBinError(20,0.7324572);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->SetBinError(21,0.4002375);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->SetBinError(22,1.111269);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->SetMinimum(0.5);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->SetMaximum(1.5);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->SetEntries(112.7577);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->SetLineColor(ci);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->SetLineWidth(2);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->SetMarkerStyle(20);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->SetMarkerSize(1.2);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->GetXaxis()->SetTitle("m(VV) [GeV]");
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->GetXaxis()->SetLabelFont(43);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->GetXaxis()->SetLabelSize(25);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->GetXaxis()->SetTitleSize(25);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->GetXaxis()->SetTitleOffset(5);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->GetXaxis()->SetTitleFont(43);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->GetYaxis()->SetTitle("Prefit/Postfit");
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->GetYaxis()->SetNdivisions(205);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->GetYaxis()->SetLabelFont(43);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->GetYaxis()->SetLabelSize(25);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->GetYaxis()->SetTitleSize(25);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->GetYaxis()->SetTitleOffset(2);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->GetYaxis()->SetTitleFont(43);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->GetZaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->GetZaxis()->SetTitleFont(42);
   combCat_L1_MergHP_VBF_WW_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WW_SR_rebinned__6->Draw("histsame");
   pad3->Modified();
   c2->cd();
   c2->Modified();
   c2->cd();
   c2->SetSelected(c2);
}
