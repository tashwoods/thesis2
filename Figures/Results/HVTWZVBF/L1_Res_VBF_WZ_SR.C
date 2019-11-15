void L1_Res_VBF_WZ_SR()
{
//=========Macro generated from canvas: c2/c2
//=========  (Fri Nov  8 18:43:16 2019) by ROOT version 6.14/04
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
   pad1->Range(-246.8354,-1.868756,3170.886,7.480838);
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
   hs->SetMaximum(4088458);
   Double_t xAxis73[22] = {300, 340, 390, 440, 490, 540, 590, 650, 710, 780, 850, 930, 1020, 1110, 1210, 1320, 1440, 1560, 1690, 1830, 1990, 3000}; 
   
   TH1F *hs_stack_7 = new TH1F("hs_stack_7","hs",21, xAxis73);
   hs_stack_7->SetMinimum(0.02080828);
   hs_stack_7->SetMaximum(1.031237e+07);
   hs_stack_7->SetDirectory(0);
   hs_stack_7->SetStats(0);
   hs_stack_7->SetLineWidth(2);
   hs_stack_7->SetMarkerStyle(20);
   hs_stack_7->SetMarkerSize(1.2);
   hs_stack_7->GetXaxis()->SetTitle("m(VV) [GeV]");
   hs_stack_7->GetXaxis()->SetLabelFont(43);
   hs_stack_7->GetXaxis()->SetLabelSize(0);
   hs_stack_7->GetXaxis()->SetTitleSize(0);
   hs_stack_7->GetXaxis()->SetTitleOffset(1.4);
   hs_stack_7->GetXaxis()->SetTitleFont(43);
   hs_stack_7->GetYaxis()->SetTitle("Events");
   hs_stack_7->GetYaxis()->SetLabelFont(43);
   hs_stack_7->GetYaxis()->SetLabelSize(25);
   hs_stack_7->GetYaxis()->SetTitleSize(25);
   hs_stack_7->GetYaxis()->SetTitleOffset(2);
   hs_stack_7->GetYaxis()->SetTitleFont(43);
   hs_stack_7->GetZaxis()->SetLabelFont(42);
   hs_stack_7->GetZaxis()->SetLabelSize(0.05);
   hs_stack_7->GetZaxis()->SetTitleSize(0.05);
   hs_stack_7->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_7);
   
   Double_t xAxis74[22] = {300, 340, 390, 440, 490, 540, 590, 650, 710, 780, 850, 930, 1020, 1110, 1210, 1320, 1440, 1560, 1690, 1830, 1990, 3000}; 
   
   TH1F *combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1 = new TH1F("combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1","Histogram of combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR",21, xAxis74);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->SetBinContent(1,36.59377);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->SetBinContent(2,53.15867);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->SetBinContent(3,46.62248);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->SetBinContent(4,41.74484);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->SetBinContent(5,27.80715);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->SetBinContent(6,14.93609);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->SetBinContent(7,16.02318);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->SetBinContent(8,9.603642);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->SetBinContent(9,7.121864);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->SetBinContent(10,4.349133);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->SetBinContent(11,1.757967);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->SetBinContent(12,1.46876);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->SetBinContent(13,1.332578);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->SetBinContent(14,0.4194434);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->SetBinContent(15,0.5965685);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->SetBinContent(16,0.7914267);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->SetBinContent(17,5.404468e-08);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->SetBinContent(18,0.3160636);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->SetBinContent(19,0.08124299);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->SetBinContent(20,4.845492e-08);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->SetBinContent(21,0.05493701);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->SetBinError(1,27.72128);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->SetBinError(2,33.41156);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->SetBinError(3,31.29013);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->SetBinError(4,29.60814);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->SetBinError(5,24.16506);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->SetBinError(6,17.71039);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->SetBinError(7,18.34357);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->SetBinError(8,14.20128);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->SetBinError(9,12.22944);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->SetBinError(10,9.556767);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->SetBinError(11,6.075961);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->SetBinError(12,5.553734);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->SetBinError(13,5.290003);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->SetBinError(14,2.96788);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->SetBinError(15,3.539483);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->SetBinError(16,4.076759);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->SetBinError(17,0.001065335);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->SetBinError(18,2.576303);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->SetBinError(19,1.306179);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->SetBinError(20,0.001008738);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->SetBinError(21,1.074094);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->SetEntries(22);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->SetLineColor(ci);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->SetLineWidth(2);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->SetMarkerStyle(20);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->SetMarkerSize(1.2);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->GetXaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->GetXaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->GetXaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->GetXaxis()->SetTitleFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->GetYaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->GetYaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->GetYaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->GetYaxis()->SetTitleOffset(1.4);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->GetYaxis()->SetTitleFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->GetZaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1->GetZaxis()->SetTitleFont(42);
   hs->Add(combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1,"");
   Double_t xAxis75[22] = {300, 340, 390, 440, 490, 540, 590, 650, 710, 780, 850, 930, 1020, 1110, 1210, 1320, 1440, 1560, 1690, 1830, 1990, 3000}; 
   
   TH1F *combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2 = new TH1F("combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2","Histogram of combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR",21, xAxis75);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->SetBinContent(1,194.981);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->SetBinContent(2,144.4818);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->SetBinContent(3,99.83839);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->SetBinContent(4,48.49165);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->SetBinContent(5,24.62698);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->SetBinContent(6,13.62531);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->SetBinContent(7,11.96414);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->SetBinContent(8,5.187826);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->SetBinContent(9,5.866723);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->SetBinContent(10,3.674079);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->SetBinContent(11,2.199909);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->SetBinContent(12,1.460413);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->SetBinContent(13,0.745231);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->SetBinContent(14,0.900748);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->SetBinContent(15,0.1906428);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->SetBinContent(16,0.07038464);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->SetBinContent(17,0.1170242);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->SetBinContent(18,0.01987419);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->SetBinContent(19,0.01972648);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->SetBinContent(20,0.01684587);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->SetBinContent(21,1.58665e-08);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->SetBinError(1,63.98906);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->SetBinError(2,55.08284);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->SetBinError(3,45.78871);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->SetBinError(4,31.9112);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->SetBinError(5,22.7413);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->SetBinError(6,16.91542);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->SetBinError(7,15.85077);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->SetBinError(8,10.43764);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->SetBinError(9,11.0996);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->SetBinError(10,8.783829);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->SetBinError(11,6.796918);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->SetBinError(12,5.53793);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->SetBinError(13,3.955989);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->SetBinError(14,4.349219);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->SetBinError(15,2.000875);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->SetBinError(16,1.215762);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->SetBinError(17,1.567644);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->SetBinError(18,0.6460325);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->SetBinError(19,0.6436273);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->SetBinError(20,0.59478);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->SetBinError(21,0.0005772317);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->SetEntries(22);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->SetLineColor(ci);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->SetLineWidth(2);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->SetMarkerStyle(20);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->SetMarkerSize(1.2);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->GetXaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->GetXaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->GetXaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->GetXaxis()->SetTitleFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->GetYaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->GetYaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->GetYaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->GetYaxis()->SetTitleOffset(1.4);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->GetYaxis()->SetTitleFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->GetZaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2->GetZaxis()->SetTitleFont(42);
   hs->Add(combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2,"");
   Double_t xAxis76[22] = {300, 340, 390, 440, 490, 540, 590, 650, 710, 780, 850, 930, 1020, 1110, 1210, 1320, 1440, 1560, 1690, 1830, 1990, 3000}; 
   
   TH1F *combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3 = new TH1F("combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3","Histogram of combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR",21, xAxis76);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->SetBinContent(1,401.4673);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->SetBinContent(2,227.6725);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->SetBinContent(3,108.9193);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->SetBinContent(4,41.29124);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->SetBinContent(5,31.71716);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->SetBinContent(6,11.02465);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->SetBinContent(7,7.084633);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->SetBinContent(8,6.355381);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->SetBinContent(9,2.905299);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->SetBinContent(10,2.086148);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->SetBinContent(11,0.01568612);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->SetBinContent(12,0.01370344);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->SetBinContent(13,0.8087485);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->SetBinContent(14,0.1875922);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->SetBinContent(15,0.2701371);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->SetBinContent(16,9.267223e-07);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->SetBinContent(17,0.1457553);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->SetBinContent(18,8.237763e-07);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->SetBinContent(19,9.988005e-07);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->SetBinContent(20,7.085703e-07);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->SetBinContent(21,8.033597e-07);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->SetBinError(1,91.81946);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->SetBinError(2,69.14566);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->SetBinError(3,47.82578);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->SetBinError(4,29.44683);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->SetBinError(5,25.80814);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->SetBinError(6,15.21571);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->SetBinError(7,12.19743);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->SetBinError(8,11.55262);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->SetBinError(9,7.810972);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->SetBinError(10,6.618845);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->SetBinError(11,0.5739413);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->SetBinError(12,0.5364441);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->SetBinError(13,4.121131);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->SetBinError(14,1.984801);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->SetBinError(15,2.381781);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->SetBinError(16,0.004411481);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->SetBinError(17,1.749532);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->SetBinError(18,0.004159243);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->SetBinError(19,0.004579826);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->SetBinError(20,0.003857457);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->SetBinError(21,0.004107378);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->SetEntries(44);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->SetStats(0);

   ci = TColor::GetColor("#cc0000");
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->SetLineColor(ci);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->SetLineWidth(2);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->SetMarkerStyle(20);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->SetMarkerSize(1.2);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->GetXaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->GetXaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->GetXaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->GetXaxis()->SetTitleFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->GetYaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->GetYaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->GetYaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->GetYaxis()->SetTitleOffset(1.4);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->GetYaxis()->SetTitleFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->GetZaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3->GetZaxis()->SetTitleFont(42);
   hs->Add(combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3,"");
   Double_t xAxis77[22] = {300, 340, 390, 440, 490, 540, 590, 650, 710, 780, 850, 930, 1020, 1110, 1210, 1320, 1440, 1560, 1690, 1830, 1990, 3000}; 
   
   TH1F *combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4 = new TH1F("combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4","Histogram of combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR",21, xAxis77);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->SetBinContent(1,189.3944);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->SetBinContent(2,213.3156);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->SetBinContent(3,148.3282);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->SetBinContent(4,105.0882);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->SetBinContent(5,68.19982);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->SetBinContent(6,45.82931);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->SetBinContent(7,37.59216);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->SetBinContent(8,21.65168);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->SetBinContent(9,18.22109);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->SetBinContent(10,9.011262);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->SetBinContent(11,5.746115);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->SetBinContent(12,4.376451);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->SetBinContent(13,1.596732);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->SetBinContent(14,1.569349);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->SetBinContent(15,0.7403974);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->SetBinContent(16,0.7796149);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->SetBinContent(17,0.03847897);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->SetBinContent(18,0.2102058);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->SetBinContent(19,4.862999e-08);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->SetBinContent(20,0.2272868);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->SetBinContent(21,3.911429e-08);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->SetBinError(1,63.0657);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->SetBinError(2,66.93002);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->SetBinError(3,55.81122);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->SetBinError(4,46.97714);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->SetBinError(5,37.84437);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->SetBinError(6,31.02282);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->SetBinError(7,28.09689);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->SetBinError(8,21.32335);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->SetBinError(9,19.56126);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->SetBinError(10,13.75633);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->SetBinError(11,10.98492);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->SetBinError(12,9.586735);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->SetBinError(13,5.790628);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->SetBinError(14,5.740761);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->SetBinError(15,3.943139);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->SetBinError(16,4.046222);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->SetBinError(17,0.8989207);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->SetBinError(18,2.101029);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->SetBinError(19,0.001010559);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->SetBinError(20,2.184725);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->SetBinError(21,0.0009063113);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->SetEntries(22);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->SetLineColor(ci);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->SetLineWidth(2);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->SetMarkerStyle(20);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->SetMarkerSize(1.2);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->GetXaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->GetXaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->GetXaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->GetXaxis()->SetTitleFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->GetYaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->GetYaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->GetYaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->GetYaxis()->SetTitleOffset(1.4);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->GetYaxis()->SetTitleFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->GetZaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4->GetZaxis()->SetTitleFont(42);
   hs->Add(combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4,"");
   Double_t xAxis78[22] = {300, 340, 390, 440, 490, 540, 590, 650, 710, 780, 850, 930, 1020, 1110, 1210, 1320, 1440, 1560, 1690, 1830, 1990, 3000}; 
   
   TH1F *combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5 = new TH1F("combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5","Histogram of combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR",21, xAxis78);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->SetBinContent(1,865.9576);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->SetBinContent(2,1171.997);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->SetBinContent(3,907.7394);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->SetBinContent(4,695.3845);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->SetBinContent(5,475.8923);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->SetBinContent(6,323.3991);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->SetBinContent(7,259.0209);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->SetBinContent(8,159.5872);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->SetBinContent(9,111.9675);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->SetBinContent(10,62.37578);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->SetBinContent(11,46.19258);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->SetBinContent(12,25.53764);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->SetBinContent(13,11.62372);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->SetBinContent(14,8.091145);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->SetBinContent(15,5.361937);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->SetBinContent(16,2.978007);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->SetBinContent(17,0.9859731);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->SetBinContent(18,0.2493);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->SetBinContent(19,3.022677e-07);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->SetBinContent(20,2.144351e-07);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->SetBinContent(21,2.431213e-07);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->SetBinError(1,134.8522);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->SetBinError(2,156.8819);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->SetBinError(3,138.0671);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->SetBinError(4,120.8432);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->SetBinError(5,99.96869);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->SetBinError(6,82.40984);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->SetBinError(7,73.75255);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->SetBinError(8,57.89068);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->SetBinError(9,48.49038);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->SetBinError(10,36.19242);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->SetBinError(11,31.14553);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->SetBinError(12,23.15794);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->SetBinError(13,15.62364);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->SetBinError(14,13.03511);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->SetBinError(15,10.61135);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->SetBinError(16,7.908106);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->SetBinError(17,4.550323);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->SetBinError(18,2.288078);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->SetBinError(19,0.002519449);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->SetBinError(20,0.00212206);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->SetBinError(21,0.002259546);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->SetEntries(22);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->SetStats(0);

   ci = TColor::GetColor("#6699ff");
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#6699ff");
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->SetLineColor(ci);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->SetLineWidth(2);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->SetMarkerStyle(20);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->SetMarkerSize(1.2);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->GetXaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->GetXaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->GetXaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->GetXaxis()->SetTitleFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->GetYaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->GetYaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->GetYaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->GetYaxis()->SetTitleOffset(1.4);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->GetYaxis()->SetTitleFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->GetZaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5->GetZaxis()->SetTitleFont(42);
   hs->Add(combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5,"");
   Double_t xAxis79[22] = {300, 340, 390, 440, 490, 540, 590, 650, 710, 780, 850, 930, 1020, 1110, 1210, 1320, 1440, 1560, 1690, 1830, 1990, 3000}; 
   
   TH1F *combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6 = new TH1F("combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6","Histogram of combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR",21, xAxis79);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->SetBinContent(1,1728.02);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->SetBinContent(2,2277.832);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->SetBinContent(3,1912.514);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->SetBinContent(4,1413.061);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->SetBinContent(5,967.9662);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->SetBinContent(6,615.3196);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->SetBinContent(7,441.9644);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->SetBinContent(8,297.9342);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->SetBinContent(9,215.0252);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->SetBinContent(10,130.722);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->SetBinContent(11,86.84941);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->SetBinContent(12,55.85327);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->SetBinContent(13,29.11795);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->SetBinContent(14,23.9227);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->SetBinContent(15,15.24915);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->SetBinContent(16,7.523437);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->SetBinContent(17,3.28122);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->SetBinContent(18,2.36954);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->SetBinContent(19,0.968188);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->SetBinContent(20,0.7141354);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->SetBinContent(21,0.2266345);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->SetBinError(1,190.4952);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->SetBinError(2,218.7109);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->SetBinError(3,200.4066);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->SetBinError(4,172.2622);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->SetBinError(5,142.5738);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->SetBinError(6,113.6737);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->SetBinError(7,96.33926);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->SetBinError(8,79.09879);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->SetBinError(9,67.19769);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->SetBinError(10,52.39429);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->SetBinError(11,42.70641);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->SetBinError(12,34.2479);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->SetBinError(13,24.72806);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->SetBinError(14,22.41376);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->SetBinError(15,17.89503);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->SetBinError(16,12.56949);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->SetBinError(17,8.300941);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->SetBinError(18,7.054102);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->SetBinError(19,4.509096);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->SetBinError(20,3.872576);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->SetBinError(21,2.181588);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->SetEntries(22);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->SetStats(0);

   ci = TColor::GetColor("#ff9999");
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#ff9999");
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->SetLineColor(ci);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->SetLineWidth(2);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->SetMarkerStyle(20);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->SetMarkerSize(1.2);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->GetXaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->GetXaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->GetXaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->GetXaxis()->SetTitleFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->GetYaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->GetYaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->GetYaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->GetYaxis()->SetTitleOffset(1.4);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->GetYaxis()->SetTitleFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->GetZaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6->GetZaxis()->SetTitleFont(42);
   hs->Add(combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6,"");
   hs->Draw("hist");
   
   Double_t Graph0_fx3013[21] = {
   320,
   365,
   415,
   465,
   515,
   565,
   620,
   680,
   745,
   815,
   890,
   975,
   1065,
   1160,
   1265,
   1380,
   1500,
   1625,
   1760,
   1910,
   2495};
   Double_t Graph0_fy3013[21] = {
   3416.414,
   4088.458,
   3223.962,
   2345.061,
   1596.269,
   1024.238,
   773.8124,
   500.6166,
   361.7291,
   213.4812,
   146.0945,
   94.9352,
   49.19024,
   35.92223,
   22.5401,
   12.15692,
   4.572925,
   3.168828,
   1.069159,
   0.9582691,
   0.2815726};
   Double_t Graph0_felx3013[21] = {
   20,
   25,
   25,
   25,
   25,
   25,
   30,
   30,
   35,
   35,
   40,
   45,
   45,
   50,
   55,
   60,
   60,
   65,
   70,
   80,
   505};
   Double_t Graph0_fely3013[21] = {
   50.43213,
   50.98535,
   42.48999,
   37.81885,
   30.41895,
   24.4295,
   19.64136,
   15.45474,
   12.48825,
   9.489349,
   7.499207,
   6.128654,
   4.025394,
   3.088329,
   2.292126,
   1.630421,
   1.036161,
   0.684021,
   0.3744243,
   0.4268438,
   0.1515315};
   Double_t Graph0_fehx3013[21] = {
   20,
   25,
   25,
   25,
   25,
   25,
   30,
   30,
   35,
   35,
   40,
   45,
   45,
   50,
   55,
   60,
   60,
   65,
   70,
   80,
   505};
   Double_t Graph0_fehy3013[21] = {
   50.43262,
   50.98511,
   42.48975,
   37.8186,
   30.41882,
   24.42969,
   19.64142,
   15.45474,
   12.48825,
   9.489365,
   7.499222,
   6.128654,
   4.025394,
   3.088329,
   2.292126,
   1.630421,
   1.036161,
   0.6840212,
   0.3744242,
   0.4268437,
   0.1515315};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph0_fx3013,Graph0_fy3013,Graph0_felx3013,Graph0_fehx3013,Graph0_fely3013,Graph0_fehy3013);
   grae->SetName("Graph0");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3004);
   grae->SetMarkerStyle(0);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph03013 = new TH1F("Graph_Graph03013","Graph",100,30,3270);
   Graph_Graph03013->SetMinimum(0.117037);
   Graph_Graph03013->SetMaximum(4553.374);
   Graph_Graph03013->SetDirectory(0);
   Graph_Graph03013->SetStats(0);
   Graph_Graph03013->SetLineWidth(2);
   Graph_Graph03013->SetMarkerStyle(20);
   Graph_Graph03013->SetMarkerSize(1.2);
   Graph_Graph03013->GetXaxis()->SetLabelFont(42);
   Graph_Graph03013->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph03013->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph03013->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph03013->GetXaxis()->SetTitleFont(42);
   Graph_Graph03013->GetYaxis()->SetLabelFont(42);
   Graph_Graph03013->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph03013->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph03013->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph03013->GetYaxis()->SetTitleFont(42);
   Graph_Graph03013->GetZaxis()->SetLabelFont(42);
   Graph_Graph03013->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph03013->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph03013->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph03013);
   
   grae->Draw("e2 ");
   Double_t xAxis80[22] = {300, 340, 390, 440, 490, 540, 590, 650, 710, 780, 850, 930, 1020, 1110, 1210, 1320, 1440, 1560, 1690, 1830, 1990, 3000}; 
   
   TH1F *combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37 = new TH1F("combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37","Histogram of combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR",21, xAxis80);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->SetBinContent(1,3385);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->SetBinContent(2,4115);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->SetBinContent(3,3126);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->SetBinContent(4,2337);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->SetBinContent(5,1614);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->SetBinContent(6,1022);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->SetBinContent(7,777);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->SetBinContent(8,495);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->SetBinContent(9,359);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->SetBinContent(10,221);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->SetBinContent(11,155);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->SetBinContent(12,90);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->SetBinContent(13,51);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->SetBinContent(14,37);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->SetBinContent(15,20);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->SetBinContent(16,15);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->SetBinContent(17,3);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->SetBinContent(18,2);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->SetBinContent(19,2);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->SetBinError(1,58.18075);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->SetBinError(2,64.14827);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->SetBinError(3,55.91064);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->SetBinError(4,48.34253);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->SetBinError(5,40.17462);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->SetBinError(6,31.96873);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->SetBinError(7,27.87472);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->SetBinError(8,22.2486);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->SetBinError(9,18.9473);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->SetBinError(10,14.86607);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->SetBinError(11,12.4499);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->SetBinError(12,9.486833);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->SetBinError(13,7.141428);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->SetBinError(14,6.082763);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->SetBinError(15,4.472136);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->SetBinError(16,3.872983);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->SetBinError(17,1.732051);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->SetBinError(18,1.414214);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->SetBinError(19,1.414214);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->SetEntries(22);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->SetStats(0);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->SetLineWidth(2);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->SetMarkerStyle(20);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->SetMarkerSize(1.2);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->GetXaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->GetXaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->GetXaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->GetXaxis()->SetTitleFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->GetYaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->GetYaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->GetYaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->GetYaxis()->SetTitleOffset(1.4);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->GetYaxis()->SetTitleFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->GetZaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->GetZaxis()->SetTitleFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__37->Draw("same");
   Double_t xAxis81[22] = {300, 340, 390, 440, 490, 540, 590, 650, 710, 780, 850, 930, 1020, 1110, 1210, 1320, 1440, 1560, 1690, 1830, 1990, 3000}; 
   
   TH1F *combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38 = new TH1F("combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38","Histogram of combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR",21, xAxis81);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->SetBinContent(1,1.024556e-15);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->SetBinContent(2,1.024556e-21);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->SetBinContent(3,1.024556e-21);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->SetBinContent(4,1.024556e-21);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->SetBinContent(5,0.05929672);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->SetBinContent(6,0.1042817);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->SetBinContent(7,0.1630101);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->SetBinContent(8,0.2966779);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->SetBinContent(9,0.6214164);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->SetBinContent(10,1.26286);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->SetBinContent(11,3.332836);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->SetBinContent(12,6.224962);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->SetBinContent(13,3.965274);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->SetBinContent(14,0.8312443);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->SetBinContent(15,0.1312611);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->SetBinContent(16,0.0140452);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->SetBinContent(17,0.004473035);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->SetBinContent(18,0.003843574);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->SetBinContent(19,1.024556e-21);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->SetBinContent(20,1.024556e-21);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->SetBinContent(21,1.024556e-21);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->SetBinError(1,1.466822e-07);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->SetBinError(2,1.466822e-10);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->SetBinError(3,1.466822e-10);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->SetBinError(4,1.466822e-10);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->SetBinError(5,1.115899);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->SetBinError(6,1.479836);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->SetBinError(7,1.850193);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->SetBinError(8,2.496044);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->SetBinError(9,3.612443);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->SetBinError(10,5.149763);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->SetBinError(11,8.365976);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->SetBinError(12,11.43347);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->SetBinError(13,9.125281);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->SetBinError(14,4.178053);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->SetBinError(15,1.660266);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->SetBinError(16,0.5430923);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->SetBinError(17,0.3064861);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->SetBinError(18,0.2841039);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->SetBinError(19,1.466822e-10);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->SetBinError(20,1.466822e-10);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->SetBinError(21,1.466822e-10);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->SetEntries(22);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->SetLineColor(ci);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->SetLineWidth(2);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->SetMarkerStyle(20);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->SetMarkerSize(1.2);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->GetXaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->GetXaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->GetXaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->GetXaxis()->SetTitleFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->GetYaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->GetYaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->GetYaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->GetYaxis()->SetTitleOffset(1.4);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->GetYaxis()->SetTitleFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->GetZaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->GetZaxis()->SetTitleFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned__38->Draw("hist same");
   
   TLegend *leg = new TLegend(0.72,0.62,0.91,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_HVTWZVBF_0__obs_x_L1_Res_VBF_WZ_SR_rebinned","VBF HVT W' 1TeV","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_1","Diboson","f");

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
   entry=leg->AddEntry("combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_2","Z+jets","f");

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
   entry=leg->AddEntry("combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_3","Multijet","f");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#cc0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_4","Single-t","f");

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
   entry=leg->AddEntry("combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_5","Top Pair","f");

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
   entry=leg->AddEntry("combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WZ_SR_rebinned_stack_6","W+jets","f");

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
   entry=leg->AddEntry("combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned","Data","lep");
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
      tex = new TLatex(0.2,0.72,"Res VBF 1lep WZ SR");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.23,0.66,"#chi^{2} / dof = 6.2 / 21");
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
   pad2->Range(-246.8354,0.4795918,3170.886,1.5);
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
   Double_t xAxis82[22] = {300, 340, 390, 440, 490, 540, 590, 650, 710, 780, 850, 930, 1020, 1110, 1210, 1320, 1440, 1560, 1690, 1830, 1990, 3000}; 
   
   TH1F *combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39 = new TH1F("combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39","Histogram of combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR",21, xAxis82);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->SetBinContent(1,1);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->SetBinContent(2,1);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->SetBinContent(3,1);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->SetBinContent(4,1);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->SetBinContent(5,1);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->SetBinContent(6,1);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->SetBinContent(7,1);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->SetBinContent(8,1);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->SetBinContent(9,1);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->SetBinContent(10,1);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->SetBinContent(11,1);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->SetBinContent(12,1);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->SetBinContent(13,1);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->SetBinContent(14,1);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->SetBinContent(15,1);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->SetBinContent(16,1);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->SetBinContent(17,1);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->SetBinContent(18,1);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->SetBinContent(19,1);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->SetBinContent(20,1);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->SetBinContent(21,1);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->SetBinError(1,0.005279832);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->SetBinError(2,0.004826426);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->SetBinError(3,0.005435136);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->SetBinError(4,0.00637277);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->SetBinError(5,0.007724179);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->SetBinError(6,0.009642838);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->SetBinError(7,0.01109398);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->SetBinError(8,0.01379281);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->SetBinError(9,0.01622608);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->SetBinError(10,0.02112154);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->SetBinError(11,0.02553221);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->SetBinError(12,0.03167318);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->SetBinError(13,0.04400134);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->SetBinError(14,0.0514901);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->SetBinError(15,0.06500211);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->SetBinError(16,0.08851027);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->SetBinError(17,0.144314);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->SetBinError(18,0.1733628);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->SetBinError(19,0.2984587);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->SetBinError(20,0.3152547);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->SetBinError(21,0.5815809);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->SetMinimum(0.5);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->SetMaximum(1.5);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->SetEntries(738.4719);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->SetLineColor(ci);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->SetLineWidth(2);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->SetMarkerStyle(20);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->SetMarkerSize(1.2);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->GetXaxis()->SetLabelFont(43);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->GetXaxis()->SetLabelSize(0);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->GetXaxis()->SetTitleSize(0);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->GetXaxis()->SetTitleFont(43);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->GetYaxis()->SetTitle("Data/Postfit");
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->GetYaxis()->SetNdivisions(205);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->GetYaxis()->SetLabelFont(43);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->GetYaxis()->SetLabelSize(25);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->GetYaxis()->SetTitleSize(25);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->GetYaxis()->SetTitleOffset(2);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->GetYaxis()->SetTitleFont(43);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->GetZaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->GetZaxis()->SetTitleFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WZ_SR_rebinned__39->Draw("AXIS");
   
   Double_t Graph0_fx3014[21] = {
   320,
   365,
   415,
   465,
   515,
   565,
   620,
   680,
   745,
   815,
   890,
   975,
   1065,
   1160,
   1265,
   1380,
   1500,
   1625,
   1760,
   1910,
   2495};
   Double_t Graph0_fy3014[21] = {
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
   Double_t Graph0_felx3014[21] = {
   20,
   25,
   25,
   25,
   25,
   25,
   30,
   30,
   35,
   35,
   40,
   45,
   45,
   50,
   55,
   60,
   60,
   65,
   70,
   80,
   505};
   Double_t Graph0_fely3014[21] = {
   0.01476172,
   0.01247056,
   0.01317943,
   0.01612702,
   0.01905628,
   0.02385139,
   0.02538258,
   0.03087141,
   0.03452376,
   0.04445051,
   0.0513312,
   0.06455618,
   0.0818332,
   0.08597266,
   0.101691,
   0.1341147,
   0.2265861,
   0.2158593,
   0.3502046,
   0.4454321,
   0.5381613};
   Double_t Graph0_fehx3014[21] = {
   20,
   25,
   25,
   25,
   25,
   25,
   30,
   30,
   35,
   35,
   40,
   45,
   45,
   50,
   55,
   60,
   60,
   65,
   70,
   80,
   505};
   Double_t Graph0_fehy3014[21] = {
   0.01476186,
   0.0124705,
   0.01317936,
   0.01612691,
   0.0190562,
   0.02385157,
   0.02538266,
   0.03087141,
   0.03452376,
   0.04445058,
   0.05133131,
   0.06455618,
   0.0818332,
   0.08597266,
   0.101691,
   0.1341147,
   0.2265861,
   0.2158593,
   0.3502045,
   0.445432,
   0.5381613};
   grae = new TGraphAsymmErrors(21,Graph0_fx3014,Graph0_fy3014,Graph0_felx3014,Graph0_fehx3014,Graph0_fely3014,Graph0_fehy3014);
   grae->SetName("Graph0");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3004);
   grae->SetMarkerStyle(0);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph03014 = new TH1F("Graph_Graph03014","Graph",100,30,3270);
   Graph_Graph03014->SetMinimum(0.3542064);
   Graph_Graph03014->SetMaximum(1.645794);
   Graph_Graph03014->SetDirectory(0);
   Graph_Graph03014->SetStats(0);
   Graph_Graph03014->SetLineWidth(2);
   Graph_Graph03014->SetMarkerStyle(20);
   Graph_Graph03014->SetMarkerSize(1.2);
   Graph_Graph03014->GetXaxis()->SetLabelFont(42);
   Graph_Graph03014->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph03014->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph03014->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph03014->GetXaxis()->SetTitleFont(42);
   Graph_Graph03014->GetYaxis()->SetLabelFont(42);
   Graph_Graph03014->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph03014->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph03014->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph03014->GetYaxis()->SetTitleFont(42);
   Graph_Graph03014->GetZaxis()->SetLabelFont(42);
   Graph_Graph03014->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph03014->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph03014->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph03014);
   
   grae->Draw(" e2");
   TLine *line = new TLine(300,1,3000,1);
   line->SetLineStyle(2);
   line->Draw();
   Double_t xAxis83[22] = {300, 340, 390, 440, 490, 540, 590, 650, 710, 780, 850, 930, 1020, 1110, 1210, 1320, 1440, 1560, 1690, 1830, 1990, 3000}; 
   
   TH1F *combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40 = new TH1F("combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40","Histogram of combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR",21, xAxis83);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->SetBinContent(1,0.990805);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->SetBinContent(2,1.006492);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->SetBinContent(3,0.9696144);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->SetBinContent(4,0.9965624);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->SetBinContent(5,1.011108);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->SetBinContent(6,0.9978147);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->SetBinContent(7,1.004119);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->SetBinContent(8,0.9887806);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->SetBinContent(9,0.9924553);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->SetBinContent(10,1.03522);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->SetBinContent(11,1.060957);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->SetBinContent(12,0.948015);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->SetBinContent(13,1.036791);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->SetBinContent(14,1.030003);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->SetBinContent(15,0.8873076);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->SetBinContent(16,1.233865);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->SetBinContent(17,0.6560352);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->SetBinContent(18,0.6311481);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->SetBinContent(19,1.870629);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->SetBinError(1,0.01742689);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->SetBinError(2,0.01606169);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->SetBinError(3,0.01773806);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->SetBinError(4,0.02109808);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->SetBinError(5,0.02576659);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->SetBinError(6,0.03194512);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->SetBinError(7,0.03687374);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->SetBinError(8,0.04547663);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->SetBinError(9,0.05360323);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->SetBinError(10,0.07133217);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->SetBinError(11,0.08734429);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->SetBinError(12,0.1021602);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->SetBinError(13,0.1487204);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->SetBinError(14,0.1734344);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->SetBinError(15,0.2025563);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->SetBinError(16,0.3278084);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->SetBinError(17,0.3846328);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->SetBinError(18,0.452946);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->SetBinError(19,1.380391);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->SetEntries(150.2309);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->SetStats(0);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->SetLineWidth(2);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->SetMarkerStyle(20);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->SetMarkerSize(1.2);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->GetXaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->GetXaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->GetXaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->GetXaxis()->SetTitleFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->GetYaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->GetYaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->GetYaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->GetYaxis()->SetTitleOffset(1.4);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->GetYaxis()->SetTitleFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->GetZaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->GetZaxis()->SetTitleFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WZ_SR_rebinned__40->Draw("sameE0");
   pad2->Modified();
   c2->cd();
  
// ------------>Primitives in pad: pad3
   TPad *pad3 = new TPad("pad3", "pad3",0,0,1,0.25);
   pad3->Draw();
   pad3->cd();
   pad3->Range(-246.8354,-0.1666667,3170.886,1.5);
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
   Double_t xAxis84[22] = {300, 340, 390, 440, 490, 540, 590, 650, 710, 780, 850, 930, 1020, 1110, 1210, 1320, 1440, 1560, 1690, 1830, 1990, 3000}; 
   
   TH1F *combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41 = new TH1F("combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41","Histogram of combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR",21, xAxis84);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->SetBinContent(1,1.133866);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->SetBinContent(2,1.049197);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->SetBinContent(3,1.097308);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->SetBinContent(4,1.031552);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->SetBinContent(5,0.9882525);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->SetBinContent(6,0.9789135);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->SetBinContent(7,0.9778593);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->SetBinContent(8,0.9924697);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->SetBinContent(9,0.9800192);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->SetBinContent(10,0.9406753);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->SetBinContent(11,0.9035668);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->SetBinContent(12,0.9143853);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->SetBinContent(13,0.8674061);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->SetBinContent(14,0.9216356);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->SetBinContent(15,0.978148);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->SetBinContent(16,0.9159998);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->SetBinContent(17,1.038295);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->SetBinContent(18,1.044793);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->SetBinContent(19,0.8393123);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->SetBinContent(20,1.22248);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->SetBinContent(21,1.088511);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->SetBinError(1,0.005807239);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->SetBinError(2,0.005004158);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->SetBinError(3,0.005830297);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->SetBinError(4,0.006523381);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->SetBinError(5,0.00765609);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->SetBinError(6,0.009490202);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->SetBinError(7,0.01090959);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->SetBinError(8,0.01371489);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->SetBinError(9,0.01598272);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->SetBinError(10,0.02017933);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->SetBinError(11,0.0236776);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->SetBinError(12,0.02963166);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->SetBinError(13,0.03959875);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->SetBinError(14,0.04845336);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->SetBinError(15,0.06393581);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->SetBinError(16,0.08291328);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->SetBinError(17,0.1484524);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->SetBinError(18,0.1791764);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->SetBinError(19,0.2622157);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->SetBinError(20,0.36744);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->SetBinError(21,0.6200546);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->SetMinimum(0.5);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->SetMaximum(1.5);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->SetEntries(662.1778);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->SetLineColor(ci);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->SetLineWidth(2);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->SetMarkerStyle(20);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->SetMarkerSize(1.2);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->GetXaxis()->SetTitle("m(VV) [GeV]");
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->GetXaxis()->SetLabelFont(43);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->GetXaxis()->SetLabelSize(25);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->GetXaxis()->SetTitleSize(25);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->GetXaxis()->SetTitleOffset(5);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->GetXaxis()->SetTitleFont(43);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->GetYaxis()->SetTitle("Prefit/Postfit");
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->GetYaxis()->SetNdivisions(205);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->GetYaxis()->SetLabelFont(43);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->GetYaxis()->SetLabelSize(25);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->GetYaxis()->SetTitleSize(25);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->GetYaxis()->SetTitleOffset(2);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->GetYaxis()->SetTitleFont(43);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->GetZaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->GetZaxis()->SetTitleFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__41->Draw("AXIS");
   line = new TLine(300,1,3000,1);
   line->SetLineStyle(2);
   line->Draw();
   Double_t xAxis85[22] = {300, 340, 390, 440, 490, 540, 590, 650, 710, 780, 850, 930, 1020, 1110, 1210, 1320, 1440, 1560, 1690, 1830, 1990, 3000}; 
   
   TH1F *combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42 = new TH1F("combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42","Histogram of combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR",21, xAxis85);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->SetBinContent(1,1.133866);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->SetBinContent(2,1.049197);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->SetBinContent(3,1.097308);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->SetBinContent(4,1.031552);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->SetBinContent(5,0.9882525);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->SetBinContent(6,0.9789135);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->SetBinContent(7,0.9778593);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->SetBinContent(8,0.9924697);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->SetBinContent(9,0.9800192);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->SetBinContent(10,0.9406753);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->SetBinContent(11,0.9035668);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->SetBinContent(12,0.9143853);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->SetBinContent(13,0.8674061);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->SetBinContent(14,0.9216356);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->SetBinContent(15,0.978148);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->SetBinContent(16,0.9159998);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->SetBinContent(17,1.038295);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->SetBinContent(18,1.044793);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->SetBinContent(19,0.8393123);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->SetBinContent(20,1.22248);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->SetBinContent(21,1.088511);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->SetBinError(1,0.005807239);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->SetBinError(2,0.005004158);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->SetBinError(3,0.005830297);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->SetBinError(4,0.006523381);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->SetBinError(5,0.00765609);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->SetBinError(6,0.009490202);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->SetBinError(7,0.01090959);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->SetBinError(8,0.01371489);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->SetBinError(9,0.01598272);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->SetBinError(10,0.02017933);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->SetBinError(11,0.0236776);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->SetBinError(12,0.02963166);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->SetBinError(13,0.03959875);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->SetBinError(14,0.04845336);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->SetBinError(15,0.06393581);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->SetBinError(16,0.08291328);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->SetBinError(17,0.1484524);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->SetBinError(18,0.1791764);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->SetBinError(19,0.2622157);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->SetBinError(20,0.36744);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->SetBinError(21,0.6200546);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->SetMinimum(0.5);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->SetMaximum(1.5);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->SetEntries(662.1778);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->SetLineColor(ci);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->SetLineWidth(2);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->SetMarkerStyle(20);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->SetMarkerSize(1.2);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->GetXaxis()->SetTitle("m(VV) [GeV]");
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->GetXaxis()->SetLabelFont(43);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->GetXaxis()->SetLabelSize(25);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->GetXaxis()->SetTitleSize(25);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->GetXaxis()->SetTitleOffset(5);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->GetXaxis()->SetTitleFont(43);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->GetYaxis()->SetTitle("Prefit/Postfit");
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->GetYaxis()->SetNdivisions(205);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->GetYaxis()->SetLabelFont(43);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->GetYaxis()->SetLabelSize(25);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->GetYaxis()->SetTitleSize(25);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->GetYaxis()->SetTitleOffset(2);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->GetYaxis()->SetTitleFont(43);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->GetZaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->GetZaxis()->SetTitleFont(42);
   combCat_L1_Res_VBF_WZ_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WZ_SR_rebinned__42->Draw("histsame");
   pad3->Modified();
   c2->cd();
   c2->Modified();
   c2->cd();
   c2->SetSelected(c2);
}
