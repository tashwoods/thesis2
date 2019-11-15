void L1_MergHP_VBF_WZ_SR()
{
//=========Macro generated from canvas: c2/c2
//=========  (Fri Nov  8 18:43:03 2019) by ROOT version 6.14/04
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
   pad1->Range(-613.924,-1.781486,6348.101,6.147497);
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
   hs->SetMaximum(247380.9);
   Double_t xAxis1[21] = {500, 570, 650, 730, 810, 890, 970, 1050, 1130, 1220, 1310, 1400, 1490, 1590, 1690, 1790, 1900, 2010, 2360, 2880, 6000}; 
   
   TH1F *hs_stack_1 = new TH1F("hs_stack_1","hs",20, xAxis1);
   hs_stack_1->SetMinimum(0.02382834);
   hs_stack_1->SetMaximum(563700.3);
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
   
   Double_t xAxis2[21] = {500, 570, 650, 730, 810, 890, 970, 1050, 1130, 1220, 1310, 1400, 1490, 1590, 1690, 1790, 1900, 2010, 2360, 2880, 6000}; 
   
   TH1F *combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1 = new TH1F("combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1","Histogram of combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR",20, xAxis2);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->SetBinContent(1,2.254256);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->SetBinContent(2,2.545876);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->SetBinContent(3,1.349515);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->SetBinContent(4,0.440482);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->SetBinContent(5,0.5913067);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->SetBinContent(6,0.5131144);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->SetBinContent(7,0.1174409);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->SetBinContent(8,0.07737564);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->SetBinContent(9,0.112288);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->SetBinContent(10,3.984629e-09);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->SetBinContent(11,0.05531432);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->SetBinContent(12,5.876944e-09);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->SetBinContent(13,5.689542e-09);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->SetBinContent(14,0.07769725);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->SetBinContent(15,2.967915e-09);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->SetBinContent(16,0.009165259);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->SetBinContent(17,4.683752e-09);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->SetBinContent(18,3.10316e-09);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->SetBinContent(19,0.004432714);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->SetBinContent(20,3.514705e-09);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->SetBinError(1,6.714546);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->SetBinError(2,7.135652);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->SetBinError(3,5.195219);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->SetBinError(4,2.968104);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->SetBinError(5,3.438915);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->SetBinError(6,3.203481);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->SetBinError(7,1.532585);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->SetBinError(8,1.243991);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->SetBinError(9,1.498586);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->SetBinError(10,0.0002822987);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->SetBinError(11,1.051802);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->SetBinError(12,0.0003428395);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->SetBinError(13,0.000337329);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->SetBinError(14,1.246573);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->SetBinError(15,0.0002436356);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->SetBinError(16,0.4281416);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->SetBinError(17,0.0003060638);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->SetBinError(18,0.0002491248);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->SetBinError(19,0.2977487);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->SetBinError(20,0.0002651304);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->SetEntries(21);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#99ff99");
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->SetLineColor(ci);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->SetLineWidth(2);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->SetMarkerStyle(20);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->SetMarkerSize(1.2);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->GetXaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->GetXaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->GetXaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->GetXaxis()->SetTitleFont(42);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->GetYaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->GetYaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->GetYaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->GetYaxis()->SetTitleOffset(1.4);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->GetYaxis()->SetTitleFont(42);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->GetZaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1->GetZaxis()->SetTitleFont(42);
   hs->Add(combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1,"");
   Double_t xAxis3[21] = {500, 570, 650, 730, 810, 890, 970, 1050, 1130, 1220, 1310, 1400, 1490, 1590, 1690, 1790, 1900, 2010, 2360, 2880, 6000}; 
   
   TH1F *combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2 = new TH1F("combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2","Histogram of combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR",20, xAxis3);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->SetBinContent(1,15.20254);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->SetBinContent(2,14.98856);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->SetBinContent(3,13.51593);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->SetBinContent(4,8.982533);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->SetBinContent(5,3.271002);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->SetBinContent(6,3.10139);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->SetBinContent(7,1.76514);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->SetBinContent(8,0.2194991);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->SetBinContent(9,1.128424);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->SetBinContent(10,0.4007562);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->SetBinContent(11,2.180458e-07);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->SetBinContent(12,2.712713e-07);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->SetBinContent(13,2.626211e-07);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->SetBinContent(14,0.4200502);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->SetBinContent(15,0.1511589);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->SetBinContent(16,2.683047e-07);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->SetBinContent(17,2.161953e-07);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->SetBinContent(18,1.432374e-07);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->SetBinContent(19,2.046077e-07);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->SetBinContent(20,1.622338e-07);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->SetBinError(1,17.43705);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->SetBinError(2,17.3139);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->SetBinError(3,16.44137);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->SetBinError(4,13.40338);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->SetBinError(5,8.088266);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->SetBinError(6,7.875773);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->SetBinError(7,5.941617);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->SetBinError(8,2.095229);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->SetBinError(9,4.75063);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->SetBinError(10,2.831099);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->SetBinError(11,0.002088281);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->SetBinError(12,0.002329255);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->SetBinError(13,0.002291816);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->SetBinError(14,2.898448);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->SetBinError(15,1.738729);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->SetBinError(16,0.002316483);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->SetBinError(17,0.0020794);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->SetBinError(18,0.001692557);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->SetBinError(19,0.002022908);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->SetBinError(20,0.001801298);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->SetEntries(21);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->SetLineColor(ci);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->SetLineWidth(2);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->SetMarkerStyle(20);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->SetMarkerSize(1.2);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->GetXaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->GetXaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->GetXaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->GetXaxis()->SetTitleFont(42);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->GetYaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->GetYaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->GetYaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->GetYaxis()->SetTitleOffset(1.4);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->GetYaxis()->SetTitleFont(42);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->GetZaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2->GetZaxis()->SetTitleFont(42);
   hs->Add(combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2,"");
   Double_t xAxis4[21] = {500, 570, 650, 730, 810, 890, 970, 1050, 1130, 1220, 1310, 1400, 1490, 1590, 1690, 1790, 1900, 2010, 2360, 2880, 6000}; 
   
   TH1F *combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3 = new TH1F("combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3","Histogram of combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR",20, xAxis4);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->SetBinContent(1,23.48667);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->SetBinContent(2,16.71784);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->SetBinContent(3,19.70519);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->SetBinContent(4,12.09382);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->SetBinContent(5,10.83752);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->SetBinContent(6,4.364553);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->SetBinContent(7,5.567736);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->SetBinContent(8,3.813589);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->SetBinContent(9,4.601995);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->SetBinContent(10,1.565968);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->SetBinContent(11,0.5911782);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->SetBinContent(12,3.054537);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->SetBinContent(13,1.4969);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->SetBinContent(14,0.06643513);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->SetBinContent(15,0.2558071);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->SetBinContent(16,0.2653716);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->SetBinContent(17,3.853824e-08);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->SetBinContent(18,0.2051224);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->SetBinContent(19,0.6334025);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->SetBinContent(20,0.3470507);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->SetBinError(1,21.67333);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->SetBinError(2,18.28543);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->SetBinError(3,19.85205);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->SetBinError(4,15.55238);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->SetBinError(5,14.72244);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->SetBinError(6,9.342969);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->SetBinError(7,10.55247);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->SetBinError(8,8.733372);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->SetBinError(9,9.593743);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->SetBinError(10,5.59637);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->SetBinError(11,3.438541);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->SetBinError(12,7.816056);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->SetBinError(13,5.471563);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->SetBinError(14,1.152694);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->SetBinError(15,2.261889);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->SetBinError(16,2.303786);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->SetBinError(17,0.0008779321);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->SetBinError(18,2.02545);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->SetBinError(19,3.559221);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->SetBinError(20,2.63458);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->SetEntries(21);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->SetLineColor(ci);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->SetLineWidth(2);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->SetMarkerStyle(20);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->SetMarkerSize(1.2);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->GetXaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->GetXaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->GetXaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->GetXaxis()->SetTitleFont(42);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->GetYaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->GetYaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->GetYaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->GetYaxis()->SetTitleOffset(1.4);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->GetYaxis()->SetTitleFont(42);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->GetZaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3->GetZaxis()->SetTitleFont(42);
   hs->Add(combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3,"");
   Double_t xAxis5[21] = {500, 570, 650, 730, 810, 890, 970, 1050, 1130, 1220, 1310, 1400, 1490, 1590, 1690, 1790, 1900, 2010, 2360, 2880, 6000}; 
   
   TH1F *combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4 = new TH1F("combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4","Histogram of combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR",20, xAxis5);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->SetBinContent(1,71.60074);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->SetBinContent(2,94.58821);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->SetBinContent(3,65.70642);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->SetBinContent(4,50.23871);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->SetBinContent(5,30.32682);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->SetBinContent(6,15.9052);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->SetBinContent(7,8.834601);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->SetBinContent(8,5.719662);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->SetBinContent(9,2.891543);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->SetBinContent(10,0.2001736);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->SetBinContent(11,0.6044155);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->SetBinContent(12,0.8060473);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->SetBinContent(13,0.5671806);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->SetBinContent(14,0.5385099);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->SetBinContent(15,3.59159e-08);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->SetBinContent(16,7.034145e-08);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->SetBinContent(17,0.2827384);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->SetBinContent(18,0.03755255);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->SetBinContent(19,0.1296101);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->SetBinContent(20,4.253283e-08);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->SetBinError(1,37.84197);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->SetBinError(2,43.49442);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->SetBinError(3,36.25091);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->SetBinError(4,31.69817);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->SetBinError(5,24.62796);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->SetBinError(6,17.83547);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->SetBinError(7,13.29256);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->SetBinError(8,10.69548);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->SetBinError(9,7.604661);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->SetBinError(10,2.000868);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->SetBinError(11,3.476825);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->SetBinError(12,4.01509);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->SetBinError(13,3.368028);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->SetBinError(14,3.281798);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->SetBinError(15,0.0008475364);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->SetBinError(16,0.001186098);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->SetBinError(17,2.377976);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->SetBinError(18,0.8666319);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->SetBinError(19,1.610032);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->SetBinError(20,0.0009223104);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->SetEntries(21);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->SetStats(0);

   ci = TColor::GetColor("#6699ff");
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#6699ff");
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->SetLineColor(ci);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->SetLineWidth(2);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->SetMarkerStyle(20);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->SetMarkerSize(1.2);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->GetXaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->GetXaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->GetXaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->GetXaxis()->SetTitleFont(42);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->GetYaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->GetYaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->GetYaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->GetYaxis()->SetTitleOffset(1.4);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->GetYaxis()->SetTitleFont(42);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->GetZaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4->GetZaxis()->SetTitleFont(42);
   hs->Add(combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4,"");
   Double_t xAxis6[21] = {500, 570, 650, 730, 810, 890, 970, 1050, 1130, 1220, 1310, 1400, 1490, 1590, 1690, 1790, 1900, 2010, 2360, 2880, 6000}; 
   
   TH1F *combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5 = new TH1F("combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5","Histogram of combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR",20, xAxis6);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->SetBinContent(1,108.7621);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->SetBinContent(2,118.5405);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->SetBinContent(3,88.73671);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->SetBinContent(4,56.74654);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->SetBinContent(5,34.28833);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->SetBinContent(6,23.61488);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->SetBinContent(7,12.35352);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->SetBinContent(8,6.526895);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->SetBinContent(9,6.568488);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->SetBinContent(10,3.333132);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->SetBinContent(11,2.710106);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->SetBinContent(12,1.409443);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->SetBinContent(13,1.228354);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->SetBinContent(14,0.7181252);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->SetBinContent(15,0.3357275);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->SetBinContent(16,0.3778956);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->SetBinContent(17,0.4485008);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->SetBinContent(18,0.2565173);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->SetBinContent(19,0.2042835);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->SetBinContent(20,0.05666064);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->SetBinError(1,46.63948);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->SetBinError(2,48.69095);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->SetBinError(3,42.12759);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->SetBinError(4,33.68873);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->SetBinError(5,26.18714);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->SetBinError(6,21.73241);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->SetBinError(7,15.71847);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->SetBinError(8,11.42532);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->SetBinError(9,11.46166);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->SetBinError(10,8.164719);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->SetBinError(11,7.362209);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->SetBinError(12,5.309319);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->SetBinError(13,4.95652);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->SetBinError(14,3.789789);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->SetBinError(15,2.591245);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->SetBinError(16,2.749166);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->SetBinError(17,2.994998);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->SetBinError(18,2.265026);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->SetBinError(19,2.021304);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->SetBinError(20,1.064525);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->SetEntries(21);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->SetStats(0);

   ci = TColor::GetColor("#ff9999");
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#ff9999");
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->SetLineColor(ci);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->SetLineWidth(2);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->SetMarkerStyle(20);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->SetMarkerSize(1.2);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->GetXaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->GetXaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->GetXaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->GetXaxis()->SetTitleFont(42);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->GetYaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->GetYaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->GetYaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->GetYaxis()->SetTitleOffset(1.4);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->GetYaxis()->SetTitleFont(42);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->GetZaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5->GetZaxis()->SetTitleFont(42);
   hs->Add(combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5,"");
   hs->Draw("hist");
   
   Double_t Graph0_fx3001[20] = {
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
   Double_t Graph0_fy3001[20] = {
   221.3123,
   247.3915,
   189.2992,
   129.7227,
   82.52009,
   55.20171,
   38.94128,
   20.53916,
   16.06998,
   5.593915,
   3.961014,
   5.270028,
   3.292435,
   1.820818,
   0.7426936,
   0.6524327,
   0.7312394,
   0.4991923,
   0.971729,
   0.4037115};
   Double_t Graph0_felx3001[20] = {
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
   Double_t Graph0_fely3001[20] = {
   9.123276,
   8.639999,
   7.512421,
   6.023415,
   5.012489,
   4.395142,
   4.603588,
   2.384666,
   1.959656,
   1.076346,
   0.9093142,
   1.496974,
   0.926887,
   0.6190829,
   0.4959468,
   0.4544358,
   0.3197407,
   0.3872935,
   0.424604,
   0.3050393};
   Double_t Graph0_fehx3001[20] = {
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
   Double_t Graph0_fehy3001[20] = {
   9.12326,
   8.64003,
   7.512436,
   6.023407,
   5.012482,
   4.395142,
   4.603584,
   2.384666,
   1.959654,
   1.076346,
   0.9093142,
   1.496974,
   0.9268873,
   0.6190829,
   0.4959468,
   0.4544358,
   0.3197408,
   0.3872935,
   0.4246041,
   0.3050393};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,Graph0_fx3001,Graph0_fy3001,Graph0_felx3001,Graph0_fehx3001,Graph0_fely3001,Graph0_fehy3001);
   grae->SetName("Graph0");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3004);
   grae->SetMarkerStyle(0);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph03001 = new TH1F("Graph_Graph03001","Graph",100,0,6550);
   Graph_Graph03001->SetMinimum(0.08880494);
   Graph_Graph03001->SetMaximum(281.6248);
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
   Double_t xAxis7[21] = {500, 570, 650, 730, 810, 890, 970, 1050, 1130, 1220, 1310, 1400, 1490, 1590, 1690, 1790, 1900, 2010, 2360, 2880, 6000}; 
   
   TH1F *combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1 = new TH1F("combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1","Histogram of combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR",20, xAxis7);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->SetBinContent(1,219);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->SetBinContent(2,240);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->SetBinContent(3,185);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->SetBinContent(4,128);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->SetBinContent(5,89);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->SetBinContent(6,49);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->SetBinContent(7,37);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->SetBinContent(8,26);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->SetBinContent(9,15);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->SetBinContent(10,3);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->SetBinContent(11,5);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->SetBinContent(12,8);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->SetBinContent(13,6);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->SetBinContent(14,5);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->SetBinContent(16,1);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->SetBinContent(17,1);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->SetBinContent(19,1);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->SetBinError(1,14.79865);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->SetBinError(2,15.49193);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->SetBinError(3,13.60147);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->SetBinError(4,11.31371);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->SetBinError(5,9.433981);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->SetBinError(6,7);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->SetBinError(7,6.082763);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->SetBinError(8,5.09902);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->SetBinError(9,3.872983);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->SetBinError(10,1.732051);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->SetBinError(11,2.236068);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->SetBinError(12,2.828427);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->SetBinError(13,2.44949);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->SetBinError(14,2.236068);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->SetBinError(16,1);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->SetBinError(17,1);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->SetBinError(19,1);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->SetEntries(21);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->SetStats(0);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->SetLineWidth(2);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->SetMarkerStyle(20);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->SetMarkerSize(1.2);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->GetXaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->GetXaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->GetXaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->GetXaxis()->SetTitleFont(42);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->GetYaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->GetYaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->GetYaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->GetYaxis()->SetTitleOffset(1.4);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->GetYaxis()->SetTitleFont(42);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->GetZaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->GetZaxis()->SetTitleFont(42);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__1->Draw("same");
   Double_t xAxis8[21] = {500, 570, 650, 730, 810, 890, 970, 1050, 1130, 1220, 1310, 1400, 1490, 1590, 1690, 1790, 1900, 2010, 2360, 2880, 6000}; 
   
   TH1F *combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2 = new TH1F("combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2","Histogram of combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR",20, xAxis8);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->SetBinContent(1,0.006062417);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->SetBinContent(2,0.01060581);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->SetBinContent(3,0.2854164);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->SetBinContent(4,1.220597);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->SetBinContent(5,3.205111);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->SetBinContent(6,7.702574);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->SetBinContent(7,10.30283);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->SetBinContent(8,4.182141);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->SetBinContent(9,0.7672408);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->SetBinContent(10,0.09388535);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->SetBinContent(11,6.062418e-09);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->SetBinContent(12,6.062418e-09);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->SetBinContent(13,6.062418e-09);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->SetBinContent(14,6.062418e-09);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->SetBinContent(15,6.062418e-09);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->SetBinContent(16,6.062418e-09);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->SetBinContent(17,6.062418e-09);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->SetBinContent(18,6.062418e-09);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->SetBinContent(19,6.062418e-09);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->SetBinContent(20,6.062418e-09);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->SetBinError(1,0.3482073);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->SetBinError(2,0.4605607);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->SetBinError(3,2.389211);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->SetBinError(4,4.940844);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->SetBinError(5,8.006385);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->SetBinError(6,12.41175);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->SetBinError(7,14.35467);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->SetBinError(8,9.145645);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->SetBinError(9,3.917246);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->SetBinError(10,1.370294);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->SetBinError(11,0.0003482073);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->SetBinError(12,0.0003482073);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->SetBinError(13,0.0003482073);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->SetBinError(14,0.0003482073);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->SetBinError(15,0.0003482073);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->SetBinError(16,0.0003482073);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->SetBinError(17,0.0003482073);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->SetBinError(18,0.0003482073);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->SetBinError(19,0.0003482073);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->SetBinError(20,0.0003482073);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->SetEntries(21);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->SetLineColor(ci);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->SetLineWidth(2);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->SetMarkerStyle(20);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->SetMarkerSize(1.2);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->GetXaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->GetXaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->GetXaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->GetXaxis()->SetTitleFont(42);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->GetYaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->GetYaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->GetYaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->GetYaxis()->SetTitleOffset(1.4);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->GetYaxis()->SetTitleFont(42);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->GetZaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->GetZaxis()->SetTitleFont(42);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__2->Draw("hist same");
   
   TLegend *leg = new TLegend(0.72,0.62,0.91,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_zjets5__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_1","Z+jets","f");

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
   entry=leg->AddEntry("combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_HVTWZVBF_0__obs_x_L1_MergHP_VBF_WZ_SR_rebinned","VBF HVT W' 1TeV","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_singlet2__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_2","Single-t","f");

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
   entry=leg->AddEntry("combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_diboson1__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_3","Diboson","f");

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
   entry=leg->AddEntry("combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_ttbar3__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_4","Top Pair","f");

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
   entry=leg->AddEntry("combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_wjets4__obs_x_L1_MergHP_VBF_WZ_SR_rebinned_stack_5","W+jets","f");

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
   entry=leg->AddEntry("combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned","Data","lep");
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
      tex = new TLatex(0.2,0.72,"Merg HP VBF 1lep WZ SR");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.23,0.66,"#chi^{2} / dof = 10.8 / 20");
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
   Double_t xAxis9[21] = {500, 570, 650, 730, 810, 890, 970, 1050, 1130, 1220, 1310, 1400, 1490, 1590, 1690, 1790, 1900, 2010, 2360, 2880, 6000}; 
   
   TH1F *combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3 = new TH1F("combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3","Histogram of combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR",20, xAxis9);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->SetBinContent(1,1);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->SetBinContent(2,1);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->SetBinContent(3,1);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->SetBinContent(4,1);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->SetBinContent(5,1);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->SetBinContent(6,1);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->SetBinContent(7,1);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->SetBinContent(8,1);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->SetBinContent(9,1);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->SetBinContent(10,1);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->SetBinContent(11,1);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->SetBinContent(12,1);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->SetBinContent(13,1);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->SetBinContent(14,1);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->SetBinContent(15,1);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->SetBinContent(16,1);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->SetBinContent(17,1);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->SetBinContent(18,1);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->SetBinContent(19,1);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->SetBinContent(20,1);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->SetBinError(1,0.02125677);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->SetBinError(2,0.02010516);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->SetBinError(3,0.022984);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->SetBinError(4,0.02776464);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->SetBinError(5,0.03481129);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->SetBinError(6,0.04256217);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->SetBinError(7,0.05067513);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->SetBinError(8,0.06977641);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->SetBinError(9,0.07888462);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->SetBinError(10,0.1337033);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->SetBinError(11,0.1588901);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->SetBinError(12,0.1377506);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->SetBinError(13,0.1742775);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->SetBinError(14,0.234351);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->SetBinError(15,0.3669401);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->SetBinError(16,0.3915003);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->SetBinError(17,0.3698028);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->SetBinError(18,0.4475752);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->SetBinError(19,0.3207949);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->SetBinError(20,0.4976963);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->SetMinimum(0.5);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->SetMaximum(1.5);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->SetEntries(350.3132);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->SetLineColor(ci);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->SetLineWidth(2);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->SetMarkerStyle(20);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->SetMarkerSize(1.2);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->GetXaxis()->SetLabelFont(43);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->GetXaxis()->SetLabelSize(0);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->GetXaxis()->SetTitleSize(0);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->GetXaxis()->SetTitleFont(43);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->GetYaxis()->SetTitle("Data/Postfit");
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->GetYaxis()->SetNdivisions(205);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->GetYaxis()->SetLabelFont(43);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->GetYaxis()->SetLabelSize(25);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->GetYaxis()->SetTitleSize(25);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->GetYaxis()->SetTitleOffset(2);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->GetYaxis()->SetTitleFont(43);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->GetZaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->GetZaxis()->SetTitleFont(42);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_postfit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__3->Draw("AXIS");
   
   Double_t Graph0_fx3002[20] = {
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
   Double_t Graph0_fy3002[20] = {
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
   Double_t Graph0_felx3002[20] = {
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
   Double_t Graph0_fely3002[20] = {
   0.04122353,
   0.0349244,
   0.03968544,
   0.04643301,
   0.06074266,
   0.07961966,
   0.1182187,
   0.1161034,
   0.1219451,
   0.1924138,
   0.229566,
   0.2840542,
   0.2815202,
   0.3400027,
   0.6677677,
   0.6965251,
   0.4372586,
   0.7758403,
   0.4369572,
   0.7555875};
   Double_t Graph0_fehx3002[20] = {
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
   Double_t Graph0_fehy3002[20] = {
   0.04122346,
   0.03492452,
   0.03968552,
   0.04643295,
   0.06074256,
   0.07961966,
   0.1182186,
   0.1161034,
   0.121945,
   0.1924138,
   0.229566,
   0.2840542,
   0.2815203,
   0.3400027,
   0.6677677,
   0.6965251,
   0.4372587,
   0.7758403,
   0.4369573,
   0.7555875};
   grae = new TGraphAsymmErrors(20,Graph0_fx3002,Graph0_fy3002,Graph0_felx3002,Graph0_fehx3002,Graph0_fely3002,Graph0_fehy3002);
   grae->SetName("Graph0");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3004);
   grae->SetMarkerStyle(0);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph03002 = new TH1F("Graph_Graph03002","Graph",100,0,6550);
   Graph_Graph03002->SetMinimum(0.06899165);
   Graph_Graph03002->SetMaximum(1.931008);
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
   Double_t xAxis10[21] = {500, 570, 650, 730, 810, 890, 970, 1050, 1130, 1220, 1310, 1400, 1490, 1590, 1690, 1790, 1900, 2010, 2360, 2880, 6000}; 
   
   TH1F *combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4 = new TH1F("combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4","Histogram of combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR",20, xAxis10);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->SetBinContent(1,0.9895517);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->SetBinContent(2,0.9701222);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->SetBinContent(3,0.977289);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->SetBinContent(4,0.9867203);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->SetBinContent(5,1.078525);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->SetBinContent(6,0.8876536);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->SetBinContent(7,0.9501486);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->SetBinContent(8,1.265875);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->SetBinContent(9,0.9334174);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->SetBinContent(10,0.536297);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->SetBinContent(11,1.262303);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->SetBinContent(12,1.518018);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->SetBinContent(13,1.822359);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->SetBinContent(14,2.746019);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->SetBinContent(16,1.532725);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->SetBinContent(17,1.367541);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->SetBinContent(19,1.029094);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->SetBinError(1,0.06850196);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->SetBinError(2,0.06412189);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->SetBinError(3,0.07358628);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->SetBinError(4,0.08934008);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->SetBinError(5,0.1173655);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->SetBinError(6,0.1295911);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->SetBinError(7,0.1598708);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->SetBinError(8,0.2559945);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->SetBinError(9,0.2465672);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->SetBinError(10,0.3137551);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->SetBinError(11,0.5820613);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->SetBinError(12,0.5566961);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->SetBinError(13,0.777131);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->SetBinError(14,1.309653);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->SetBinError(16,1.590372);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->SetBinError(17,1.413522);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->SetBinError(19,1.055237);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->SetEntries(48.79777);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->SetStats(0);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->SetLineWidth(2);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->SetMarkerStyle(20);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->SetMarkerSize(1.2);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->GetXaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->GetXaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->GetXaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->GetXaxis()->SetTitleFont(42);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->GetYaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->GetYaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->GetYaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->GetYaxis()->SetTitleOffset(1.4);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->GetYaxis()->SetTitleFont(42);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->GetZaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->GetZaxis()->SetTitleFont(42);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_data__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__4->Draw("sameE0");
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
   Double_t xAxis11[21] = {500, 570, 650, 730, 810, 890, 970, 1050, 1130, 1220, 1310, 1400, 1490, 1590, 1690, 1790, 1900, 2010, 2360, 2880, 6000}; 
   
   TH1F *combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5 = new TH1F("combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5","Histogram of combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR",20, xAxis11);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->SetBinContent(1,1.062232);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->SetBinContent(2,1.080599);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->SetBinContent(3,1.038193);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->SetBinContent(4,0.9977707);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->SetBinContent(5,0.8965621);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->SetBinContent(6,0.8890623);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->SetBinContent(7,0.6952025);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->SetBinContent(8,0.6620095);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->SetBinContent(9,0.8420781);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->SetBinContent(10,0.9782014);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->SetBinContent(11,0.9080842);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->SetBinContent(12,0.5115615);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->SetBinContent(13,0.5925797);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->SetBinContent(14,0.571115);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->SetBinContent(15,1.293287);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->SetBinContent(16,0.6176906);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->SetBinContent(17,0.988943);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->SetBinContent(18,1.143418);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->SetBinContent(19,0.6329219);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->SetBinContent(20,0.6372865);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->SetBinError(1,0.02224645);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->SetBinError(2,0.02131666);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->SetBinError(3,0.02364135);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->SetBinError(4,0.02771821);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->SetBinError(5,0.03209807);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->SetBinError(6,0.039003);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->SetBinError(7,0.03889971);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->SetBinError(8,0.05175383);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->SetBinError(9,0.06947164);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->SetBinError(10,0.1315154);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->SetBinError(11,0.1478916);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->SetBinError(12,0.08565257);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->SetBinError(13,0.1197155);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->SetBinError(14,0.1569703);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->SetBinError(15,0.446845);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->SetBinError(16,0.2767262);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->SetBinError(17,0.3667347);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->SetBinError(18,0.4954583);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->SetBinError(19,0.2306058);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->SetBinError(20,0.3594836);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->SetMinimum(0.5);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->SetMaximum(1.5);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->SetEntries(309.5266);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->SetLineColor(ci);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->SetLineWidth(2);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->SetMarkerStyle(20);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->SetMarkerSize(1.2);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->GetXaxis()->SetTitle("m(VV) [GeV]");
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->GetXaxis()->SetLabelFont(43);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->GetXaxis()->SetLabelSize(25);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->GetXaxis()->SetTitleSize(25);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->GetXaxis()->SetTitleOffset(5);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->GetXaxis()->SetTitleFont(43);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->GetYaxis()->SetTitle("Prefit/Postfit");
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->GetYaxis()->SetNdivisions(205);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->GetYaxis()->SetLabelFont(43);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->GetYaxis()->SetLabelSize(25);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->GetYaxis()->SetTitleSize(25);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->GetYaxis()->SetTitleOffset(2);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->GetYaxis()->SetTitleFont(43);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->GetZaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->GetZaxis()->SetTitleFont(42);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__5->Draw("AXIS");
   line = new TLine(500,1,6000,1);
   line->SetLineStyle(2);
   line->Draw();
   Double_t xAxis12[21] = {500, 570, 650, 730, 810, 890, 970, 1050, 1130, 1220, 1310, 1400, 1490, 1590, 1690, 1790, 1900, 2010, 2360, 2880, 6000}; 
   
   TH1F *combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6 = new TH1F("combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6","Histogram of combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR",20, xAxis12);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->SetBinContent(1,1.062232);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->SetBinContent(2,1.080599);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->SetBinContent(3,1.038193);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->SetBinContent(4,0.9977707);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->SetBinContent(5,0.8965621);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->SetBinContent(6,0.8890623);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->SetBinContent(7,0.6952025);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->SetBinContent(8,0.6620095);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->SetBinContent(9,0.8420781);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->SetBinContent(10,0.9782014);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->SetBinContent(11,0.9080842);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->SetBinContent(12,0.5115615);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->SetBinContent(13,0.5925797);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->SetBinContent(14,0.571115);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->SetBinContent(15,1.293287);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->SetBinContent(16,0.6176906);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->SetBinContent(17,0.988943);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->SetBinContent(18,1.143418);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->SetBinContent(19,0.6329219);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->SetBinContent(20,0.6372865);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->SetBinError(1,0.02224645);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->SetBinError(2,0.02131666);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->SetBinError(3,0.02364135);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->SetBinError(4,0.02771821);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->SetBinError(5,0.03209807);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->SetBinError(6,0.039003);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->SetBinError(7,0.03889971);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->SetBinError(8,0.05175383);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->SetBinError(9,0.06947164);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->SetBinError(10,0.1315154);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->SetBinError(11,0.1478916);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->SetBinError(12,0.08565257);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->SetBinError(13,0.1197155);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->SetBinError(14,0.1569703);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->SetBinError(15,0.446845);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->SetBinError(16,0.2767262);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->SetBinError(17,0.3667347);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->SetBinError(18,0.4954583);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->SetBinError(19,0.2306058);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->SetBinError(20,0.3594836);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->SetMinimum(0.5);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->SetMaximum(1.5);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->SetEntries(309.5266);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->SetLineColor(ci);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->SetLineWidth(2);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->SetMarkerStyle(20);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->SetMarkerSize(1.2);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->GetXaxis()->SetTitle("m(VV) [GeV]");
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->GetXaxis()->SetLabelFont(43);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->GetXaxis()->SetLabelSize(25);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->GetXaxis()->SetTitleSize(25);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->GetXaxis()->SetTitleOffset(5);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->GetXaxis()->SetTitleFont(43);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->GetYaxis()->SetTitle("Prefit/Postfit");
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->GetYaxis()->SetNdivisions(205);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->GetYaxis()->SetLabelFont(43);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->GetYaxis()->SetLabelSize(25);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->GetYaxis()->SetTitleSize(25);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->GetYaxis()->SetTitleOffset(2);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->GetYaxis()->SetTitleFont(43);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->GetZaxis()->SetLabelFont(42);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->GetZaxis()->SetTitleFont(42);
   combCat_L1_MergHP_VBF_WZ_SR_lvqq_Merg_binned_prefit__obs_x_L1_MergHP_VBF_WZ_SR_rebinned__6->Draw("histsame");
   pad3->Modified();
   c2->cd();
   c2->Modified();
   c2->cd();
   c2->SetSelected(c2);
}
