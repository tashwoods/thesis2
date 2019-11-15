void L1_Res_VBF_WW_SR()
{
//=========Macro generated from canvas: c2/c2
//=========  (Fri Nov  8 18:35:24 2019) by ROOT version 6.14/04
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
   pad1->Range(-246.8354,-1.86944,3170.886,7.491771);
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
   hs->SetMaximum(4183762);
   Double_t xAxis73[22] = {300, 340, 390, 440, 490, 540, 590, 650, 720, 780, 850, 920, 1000, 1080, 1170, 1270, 1370, 1480, 1600, 1730, 1860, 3000}; 
   
   TH1F *hs_stack_7 = new TH1F("hs_stack_7","hs",21, xAxis73);
   hs_stack_7->SetMinimum(0.02078663);
   hs_stack_7->SetMaximum(1.056113e+07);
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
   
   Double_t xAxis74[22] = {300, 340, 390, 440, 490, 540, 590, 650, 720, 780, 850, 920, 1000, 1080, 1170, 1270, 1370, 1480, 1600, 1730, 1860, 3000}; 
   
   TH1F *combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1 = new TH1F("combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1","Histogram of combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR",21, xAxis74);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->SetBinContent(1,68.99369);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->SetBinContent(2,85.80452);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->SetBinContent(3,66.47591);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->SetBinContent(4,56.35888);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->SetBinContent(5,37.76734);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->SetBinContent(6,23.21457);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->SetBinContent(7,23.73807);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->SetBinContent(8,15.1833);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->SetBinContent(9,9.116243);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->SetBinContent(10,4.860528);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->SetBinContent(11,2.718384);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->SetBinContent(12,2.035637);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->SetBinContent(13,1.196983);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->SetBinContent(14,1.627902);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->SetBinContent(15,0.1875681);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->SetBinContent(16,0.5372975);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->SetBinContent(17,1.186894);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->SetBinContent(18,8.858694e-08);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->SetBinContent(19,0.4000707);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->SetBinContent(20,0.1091831);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->SetBinContent(21,7.587743e-08);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->SetBinError(1,38.06399);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->SetBinError(2,42.44873);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->SetBinError(3,37.36301);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->SetBinError(4,34.40256);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->SetBinError(5,28.16228);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->SetBinError(6,22.07954);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->SetBinError(7,22.3271);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->SetBinError(8,17.85635);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->SetBinError(9,13.83622);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->SetBinError(10,10.10302);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->SetBinError(11,7.555532);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->SetBinError(12,6.538224);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->SetBinError(13,5.013646);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->SetBinError(14,5.846875);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->SetBinError(15,1.984674);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->SetBinError(16,3.359054);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->SetBinError(17,4.992471);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->SetBinError(18,0.001363938);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->SetBinError(19,2.898531);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->SetBinError(20,1.514214);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->SetBinError(21,0.00126231);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->SetEntries(22);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->SetLineColor(ci);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->SetLineWidth(2);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->SetMarkerStyle(20);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->SetMarkerSize(1.2);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->GetXaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->GetXaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->GetXaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->GetXaxis()->SetTitleFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->GetYaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->GetYaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->GetYaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->GetYaxis()->SetTitleOffset(1.4);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->GetYaxis()->SetTitleFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->GetZaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1->GetZaxis()->SetTitleFont(42);
   hs->Add(combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1,"");
   Double_t xAxis75[22] = {300, 340, 390, 440, 490, 540, 590, 650, 720, 780, 850, 920, 1000, 1080, 1170, 1270, 1370, 1480, 1600, 1730, 1860, 3000}; 
   
   TH1F *combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2 = new TH1F("combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2","Histogram of combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR",21, xAxis75);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->SetBinContent(1,185.1798);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->SetBinContent(2,156.1545);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->SetBinContent(3,92.87841);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->SetBinContent(4,52.21532);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->SetBinContent(5,32.06306);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->SetBinContent(6,16.74912);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->SetBinContent(7,12.21797);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->SetBinContent(8,6.019624);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->SetBinContent(9,5.323295);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->SetBinContent(10,3.264653);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->SetBinContent(11,1.962434);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->SetBinContent(12,1.484263);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->SetBinContent(13,0.8694502);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->SetBinContent(14,0.9524139);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->SetBinContent(15,0.1248968);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->SetBinContent(16,0.08682257);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->SetBinContent(17,0.02325287);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->SetBinContent(18,0.0414857);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->SetBinContent(19,0.01532622);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->SetBinContent(20,1.920283e-08);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->SetBinContent(21,1.334512e-08);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->SetBinError(1,62.36005);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->SetBinError(2,57.2647);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->SetBinError(3,44.16386);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->SetBinError(4,33.11377);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->SetBinError(5,25.94849);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->SetBinError(6,18.75451);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->SetBinError(7,16.01803);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->SetBinError(8,11.24331);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->SetBinError(9,10.57304);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->SetBinError(10,8.279959);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->SetBinError(11,6.419589);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->SetBinError(12,5.582967);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->SetBinError(13,4.272991);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->SetBinError(14,4.472213);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->SetBinError(15,1.619516);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->SetBinError(16,1.350287);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->SetBinError(17,0.698792);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->SetBinError(18,0.9333807);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->SetBinError(19,0.5673189);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->SetBinError(20,0.0006350271);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->SetBinError(21,0.0005293841);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->SetEntries(22);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->SetLineColor(ci);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->SetLineWidth(2);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->SetMarkerStyle(20);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->SetMarkerSize(1.2);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->GetXaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->GetXaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->GetXaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->GetXaxis()->SetTitleFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->GetYaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->GetYaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->GetYaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->GetYaxis()->SetTitleOffset(1.4);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->GetYaxis()->SetTitleFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->GetZaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2->GetZaxis()->SetTitleFont(42);
   hs->Add(combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2,"");
   Double_t xAxis76[22] = {300, 340, 390, 440, 490, 540, 590, 650, 720, 780, 850, 920, 1000, 1080, 1170, 1270, 1370, 1480, 1600, 1730, 1860, 3000}; 
   
   TH1F *combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3 = new TH1F("combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3","Histogram of combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR",21, xAxis76);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->SetBinContent(1,161.6397);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->SetBinContent(2,171.3366);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->SetBinContent(3,133.2169);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->SetBinContent(4,102.7236);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->SetBinContent(5,71.73347);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->SetBinContent(6,42.08402);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->SetBinContent(7,38.82805);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->SetBinContent(8,23.01311);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->SetBinContent(9,15.55414);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->SetBinContent(10,8.216114);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->SetBinContent(11,4.86009);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->SetBinContent(12,3.961089);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->SetBinContent(13,2.130137);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->SetBinContent(14,1.19526);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->SetBinContent(15,0.7348458);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->SetBinContent(16,0.6983135);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->SetBinContent(17,0.04967075);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->SetBinContent(18,4.196294e-08);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->SetBinContent(19,4.127827e-08);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->SetBinContent(20,5.171916e-08);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->SetBinContent(21,0.2323821);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->SetBinError(1,58.26177);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->SetBinError(2,59.9839);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->SetBinError(3,52.89191);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->SetBinError(4,46.44561);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->SetBinError(5,38.81241);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->SetBinError(6,29.72818);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->SetBinError(7,28.55502);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->SetBinError(8,21.98353);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->SetBinError(9,18.0731);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->SetBinError(10,13.13539);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->SetBinError(11,10.10257);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->SetBinError(12,9.120464);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->SetBinError(13,6.688264);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->SetBinError(14,5.010036);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->SetBinError(15,3.928328);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->SetBinError(16,3.829437);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->SetBinError(17,1.021316);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->SetBinError(18,0.0009387341);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->SetBinError(19,0.0009310444);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->SetBinError(20,0.001042162);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->SetBinError(21,2.209078);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->SetEntries(22);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->SetLineColor(ci);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->SetLineWidth(2);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->SetMarkerStyle(20);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->SetMarkerSize(1.2);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->GetXaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->GetXaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->GetXaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->GetXaxis()->SetTitleFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->GetYaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->GetYaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->GetYaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->GetYaxis()->SetTitleOffset(1.4);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->GetYaxis()->SetTitleFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->GetZaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3->GetZaxis()->SetTitleFont(42);
   hs->Add(combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3,"");
   Double_t xAxis77[22] = {300, 340, 390, 440, 490, 540, 590, 650, 720, 780, 850, 920, 1000, 1080, 1170, 1270, 1370, 1480, 1600, 1730, 1860, 3000}; 
   
   TH1F *combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4 = new TH1F("combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4","Histogram of combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR",21, xAxis77);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->SetBinContent(1,516.4683);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->SetBinContent(2,279.1151);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->SetBinContent(3,143.2465);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->SetBinContent(4,49.4491);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->SetBinContent(5,37.05042);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->SetBinContent(6,24.29829);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->SetBinContent(7,13.80548);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->SetBinContent(8,4.152506);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->SetBinContent(9,4.310807);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->SetBinContent(10,1.334413);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->SetBinContent(11,1.547635);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->SetBinContent(12,0.577669);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->SetBinContent(13,0.9468299);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->SetBinContent(14,0.1464295);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->SetBinContent(15,0.3590934);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->SetBinContent(16,0.1276557);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->SetBinContent(17,4.535445e-07);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->SetBinContent(18,0.1271662);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->SetBinContent(19,3.769125e-07);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->SetBinContent(20,4.722485e-07);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->SetBinContent(21,3.28192e-07);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->SetBinError(1,104.1433);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->SetBinError(2,76.55989);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->SetBinError(3,54.84684);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->SetBinError(4,32.2247);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->SetBinError(5,27.89371);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->SetBinError(6,22.58902);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->SetBinError(7,17.02689);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->SetBinError(8,9.338235);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->SetBinError(9,9.514565);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->SetBinError(10,5.293645);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->SetBinError(11,5.700906);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->SetBinError(12,3.482965);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->SetBinError(13,4.459084);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->SetBinError(14,1.753574);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->SetBinError(15,2.746081);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->SetBinError(16,1.637305);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->SetBinError(17,0.003086168);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->SetBinError(18,1.634163);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->SetBinError(19,0.00281339);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->SetBinError(20,0.003149161);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->SetBinError(21,0.002625268);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->SetEntries(44);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->SetStats(0);

   ci = TColor::GetColor("#cc0000");
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->SetLineColor(ci);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->SetLineWidth(2);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->SetMarkerStyle(20);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->SetMarkerSize(1.2);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->GetXaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->GetXaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->GetXaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->GetXaxis()->SetTitleFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->GetYaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->GetYaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->GetYaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->GetYaxis()->SetTitleOffset(1.4);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->GetYaxis()->SetTitleFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->GetZaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4->GetZaxis()->SetTitleFont(42);
   hs->Add(combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4,"");
   Double_t xAxis78[22] = {300, 340, 390, 440, 490, 540, 590, 650, 720, 780, 850, 920, 1000, 1080, 1170, 1270, 1370, 1480, 1600, 1730, 1860, 3000}; 
   
   TH1F *combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5 = new TH1F("combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5","Histogram of combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR",21, xAxis78);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->SetBinContent(1,685.1301);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->SetBinContent(2,951.4797);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->SetBinContent(3,754.9572);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->SetBinContent(4,597.4573);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->SetBinContent(5,413.9003);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->SetBinContent(6,284.6268);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->SetBinContent(7,226.4303);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->SetBinContent(8,149.7523);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->SetBinContent(9,74.82423);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->SetBinContent(10,49.92714);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->SetBinContent(11,31.55405);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->SetBinContent(12,19.98933);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->SetBinContent(13,7.262429);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->SetBinContent(14,6.455507);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->SetBinContent(15,3.928451);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->SetBinContent(16,2.563593);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->SetBinContent(17,0.9062244);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->SetBinContent(18,9.465959e-08);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->SetBinContent(19,0.09311512);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->SetBinContent(20,1.166676e-07);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->SetBinContent(21,8.107884e-08);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->SetBinError(1,119.9489);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->SetBinError(2,141.3544);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->SetBinError(3,125.9131);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->SetBinError(4,112.0116);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->SetBinError(5,93.23039);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->SetBinError(6,77.31211);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->SetBinError(7,68.95677);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->SetBinError(8,56.0785);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->SetBinError(9,39.63974);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->SetBinError(10,32.38008);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->SetBinError(11,25.7417);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->SetBinError(12,20.48844);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->SetBinError(13,12.34953);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->SetBinError(14,11.64327);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->SetBinError(15,9.082811);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->SetBinError(16,7.337265);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->SetBinError(17,4.36242);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->SetBinError(18,0.001409912);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->SetBinError(19,1.398362);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->SetBinError(20,0.001565254);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->SetBinError(21,0.001304858);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->SetEntries(22);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->SetStats(0);

   ci = TColor::GetColor("#6699ff");
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#6699ff");
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->SetLineColor(ci);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->SetLineWidth(2);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->SetMarkerStyle(20);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->SetMarkerSize(1.2);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->GetXaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->GetXaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->GetXaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->GetXaxis()->SetTitleFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->GetYaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->GetYaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->GetYaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->GetYaxis()->SetTitleOffset(1.4);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->GetYaxis()->SetTitleFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->GetZaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5->GetZaxis()->SetTitleFont(42);
   hs->Add(combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5,"");
   Double_t xAxis79[22] = {300, 340, 390, 440, 490, 540, 590, 650, 720, 780, 850, 920, 1000, 1080, 1170, 1270, 1370, 1480, 1600, 1730, 1860, 3000}; 
   
   TH1F *combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6 = new TH1F("combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6","Histogram of combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR",21, xAxis79);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->SetBinContent(1,2031.083);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->SetBinContent(2,2539.872);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->SetBinContent(3,2128.049);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->SetBinContent(4,1574.38);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->SetBinContent(5,1062.394);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->SetBinContent(6,676.2912);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->SetBinContent(7,505.5014);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->SetBinContent(8,373.7607);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->SetBinContent(9,199.0143);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->SetBinContent(10,139.4369);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->SetBinContent(11,86.97894);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->SetBinContent(12,50.63441);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->SetBinContent(13,29.86244);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->SetBinContent(14,16.39843);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->SetBinContent(15,15.6803);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->SetBinContent(16,6.785617);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->SetBinContent(17,3.790988);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->SetBinContent(18,1.804747);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->SetBinContent(19,1.661268);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->SetBinContent(20,0.4944317);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->SetBinContent(21,0.08052424);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->SetBinError(1,206.5254);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->SetBinError(2,230.9487);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->SetBinError(3,211.3978);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->SetBinError(4,181.8295);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->SetBinError(5,149.3663);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->SetBinError(6,119.1726);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->SetBinError(7,103.0317);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->SetBinError(8,88.59444);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->SetBinError(9,64.64751);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->SetBinError(10,54.11262);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->SetBinError(11,42.73825);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->SetBinError(12,32.60863);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->SetBinError(13,25.04219);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->SetBinError(14,18.55713);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->SetBinError(15,18.14625);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->SetBinError(16,11.93725);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->SetBinError(17,8.922486);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->SetBinError(18,6.156273);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->SetBinError(19,5.906491);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->SetBinError(20,3.222277);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->SetBinError(21,1.300388);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->SetEntries(22);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->SetStats(0);

   ci = TColor::GetColor("#ff9999");
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#ff9999");
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->SetLineColor(ci);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->SetLineWidth(2);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->SetMarkerStyle(20);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->SetMarkerSize(1.2);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->GetXaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->GetXaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->GetXaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->GetXaxis()->SetTitleFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->GetYaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->GetYaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->GetYaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->GetYaxis()->SetTitleOffset(1.4);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->GetYaxis()->SetTitleFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->GetZaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6->GetZaxis()->SetTitleFont(42);
   hs->Add(combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6,"");
   hs->Draw("hist");
   
   Double_t Graph0_fx3013[21] = {
   320,
   365,
   415,
   465,
   515,
   565,
   620,
   685,
   750,
   815,
   885,
   960,
   1040,
   1125,
   1220,
   1320,
   1425,
   1540,
   1665,
   1795,
   2430};
   Double_t Graph0_fy3013[21] = {
   3648.494,
   4183.767,
   3318.824,
   2432.584,
   1654.927,
   1067.328,
   820.7073,
   572.5638,
   308.9406,
   208.6754,
   132.8099,
   84.84036,
   47.5267,
   28.71111,
   21.32257,
   10.8599,
   5.979217,
   1.9734,
   2.16978,
   0.6036154,
   0.3129068};
   Double_t Graph0_felx3013[21] = {
   20,
   25,
   25,
   25,
   25,
   25,
   30,
   35,
   30,
   35,
   35,
   40,
   40,
   45,
   50,
   50,
   55,
   60,
   65,
   65,
   570};
   Double_t Graph0_fely3013[21] = {
   50.77075,
   50.92285,
   43.01587,
   37.86816,
   30.35681,
   23.73511,
   20.89069,
   16.63513,
   11.41086,
   9.194016,
   7.022278,
   5.63269,
   4.19342,
   2.765305,
   2.330908,
   1.571177,
   1.340411,
   0.6222253,
   0.5597129,
   0.2803334,
   0.2739801};
   Double_t Graph0_fehx3013[21] = {
   20,
   25,
   25,
   25,
   25,
   25,
   30,
   35,
   30,
   35,
   35,
   40,
   40,
   45,
   50,
   50,
   55,
   60,
   65,
   65,
   570};
   Double_t Graph0_fehy3013[21] = {
   50.77075,
   50.92334,
   43.01587,
   37.86792,
   30.35657,
   23.73511,
   20.89069,
   16.63513,
   11.41086,
   9.194031,
   7.022263,
   5.632698,
   4.193417,
   2.765303,
   2.33091,
   1.571177,
   1.340411,
   0.6222252,
   0.5597129,
   0.2803334,
   0.2739801};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph0_fx3013,Graph0_fy3013,Graph0_felx3013,Graph0_fehx3013,Graph0_fely3013,Graph0_fehy3013);
   grae->SetName("Graph0");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3004);
   grae->SetMarkerStyle(0);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph03013 = new TH1F("Graph_Graph03013","Graph",100,30,3270);
   Graph_Graph03013->SetMinimum(0.03503402);
   Graph_Graph03013->SetMaximum(4658.156);
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
   Double_t xAxis80[22] = {300, 340, 390, 440, 490, 540, 590, 650, 720, 780, 850, 920, 1000, 1080, 1170, 1270, 1370, 1480, 1600, 1730, 1860, 3000}; 
   
   TH1F *combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37 = new TH1F("combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37","Histogram of combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR",21, xAxis80);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->SetBinContent(1,3633);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->SetBinContent(2,4216);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->SetBinContent(3,3231);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->SetBinContent(4,2419);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->SetBinContent(5,1699);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->SetBinContent(6,1045);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->SetBinContent(7,850);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->SetBinContent(8,583);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->SetBinContent(9,294);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->SetBinContent(10,223);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->SetBinContent(11,143);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->SetBinContent(12,81);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->SetBinContent(13,43);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->SetBinContent(14,34);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->SetBinContent(15,18);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->SetBinContent(16,9);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->SetBinContent(17,7);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->SetBinContent(18,1);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->SetBinContent(20,1);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->SetBinError(1,60.27437);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->SetBinError(2,64.93073);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->SetBinError(3,56.84189);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->SetBinError(4,49.18333);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->SetBinError(5,41.21893);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->SetBinError(6,32.32646);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->SetBinError(7,29.15476);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->SetBinError(8,24.14539);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->SetBinError(9,17.14643);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->SetBinError(10,14.93318);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->SetBinError(11,11.95826);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->SetBinError(12,9);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->SetBinError(13,6.557439);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->SetBinError(14,5.830952);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->SetBinError(15,4.242641);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->SetBinError(16,3);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->SetBinError(17,2.645751);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->SetBinError(18,1);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->SetBinError(20,1);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->SetEntries(22);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->SetStats(0);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->SetLineWidth(2);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->SetMarkerStyle(20);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->SetMarkerSize(1.2);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->GetXaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->GetXaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->GetXaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->GetXaxis()->SetTitleFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->GetYaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->GetYaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->GetYaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->GetYaxis()->SetTitleOffset(1.4);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->GetYaxis()->SetTitleFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->GetZaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->GetZaxis()->SetTitleFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__37->Draw("same");
   Double_t xAxis81[22] = {300, 340, 390, 440, 490, 540, 590, 650, 720, 780, 850, 920, 1000, 1080, 1170, 1270, 1370, 1480, 1600, 1730, 1860, 3000}; 
   
   TH1F *combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38 = new TH1F("combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38","Histogram of combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR",21, xAxis81);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->SetBinContent(1,1.04994e-15);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->SetBinContent(2,0.005422816);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->SetBinContent(3,1.04994e-21);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->SetBinContent(4,1.04994e-21);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->SetBinContent(5,0.01769436);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->SetBinContent(6,0.0635959);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->SetBinContent(7,0.1860278);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->SetBinContent(8,0.6822643);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->SetBinContent(9,0.7975572);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->SetBinContent(10,1.635592);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->SetBinContent(11,3.188369);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->SetBinContent(12,6.157968);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->SetBinContent(13,5.258423);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->SetBinContent(14,1.935172);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->SetBinContent(15,0.3074208);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->SetBinContent(16,0.06060221);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->SetBinContent(17,0.02218584);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->SetBinContent(18,1.04994e-21);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->SetBinContent(19,1.04994e-21);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->SetBinContent(20,1.04994e-21);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->SetBinContent(21,1.04994e-21);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->SetBinError(1,1.484882e-07);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->SetBinError(2,0.3374598);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->SetBinError(3,1.484882e-10);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->SetBinError(4,1.484882e-10);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->SetBinError(5,0.6095749);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->SetBinError(6,1.155644);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->SetBinError(7,1.976508);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->SetBinError(8,3.785175);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->SetBinError(9,4.092518);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->SetBinError(10,5.860669);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->SetBinError(11,8.182649);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->SetBinError(12,11.37178);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->SetBinError(13,10.50842);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->SetBinError(14,6.374842);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->SetBinError(15,2.540834);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->SetBinError(16,1.128116);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->SetBinError(17,0.6825705);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->SetBinError(18,1.484882e-10);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->SetBinError(19,1.484882e-10);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->SetBinError(20,1.484882e-10);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->SetBinError(21,1.484882e-10);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->SetEntries(22);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->SetLineColor(ci);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->SetLineWidth(2);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->SetMarkerStyle(20);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->SetMarkerSize(1.2);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->GetXaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->GetXaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->GetXaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->GetXaxis()->SetTitleFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->GetYaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->GetYaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->GetYaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->GetYaxis()->SetTitleOffset(1.4);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->GetYaxis()->SetTitleFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->GetZaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->GetZaxis()->SetTitleFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned__38->Draw("hist same");
   
   TLegend *leg = new TLegend(0.72,0.62,0.91,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_HVTWWVBF_0__obs_x_L1_Res_VBF_WW_SR_rebinned","VBF HVT Z' 1TeV","l");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_diboson3__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_1","Diboson","f");

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
   entry=leg->AddEntry("combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_zjets7__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_2","Z+jets","f");

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
   entry=leg->AddEntry("combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_singlet4__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_3","Single-t","f");

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
   entry=leg->AddEntry("combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_MJ1__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_4","Multijet","f");

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
   entry=leg->AddEntry("combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_ttbar5__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_5","Top Pair","f");

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
   entry=leg->AddEntry("combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_wjets6__obs_x_L1_Res_VBF_WW_SR_rebinned_stack_6","W+jets","f");

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
   entry=leg->AddEntry("combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned","Data","lep");
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
      tex = new TLatex(0.2,0.72,"Res VBF 1lep WW SR");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.23,0.66,"#chi^{2} / dof = 8.8 / 21");
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
   Double_t xAxis82[22] = {300, 340, 390, 440, 490, 540, 590, 650, 720, 780, 850, 920, 1000, 1080, 1170, 1270, 1370, 1480, 1600, 1730, 1860, 3000}; 
   
   TH1F *combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39 = new TH1F("combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39","Histogram of combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR",21, xAxis82);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->SetBinContent(1,1);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->SetBinContent(2,1);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->SetBinContent(3,1);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->SetBinContent(4,1);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->SetBinContent(5,1);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->SetBinContent(6,1);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->SetBinContent(7,1);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->SetBinContent(8,1);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->SetBinContent(9,1);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->SetBinContent(10,1);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->SetBinContent(11,1);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->SetBinContent(12,1);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->SetBinContent(13,1);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->SetBinContent(14,1);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->SetBinContent(15,1);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->SetBinContent(16,1);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->SetBinContent(17,1);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->SetBinContent(18,1);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->SetBinContent(19,1);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->SetBinContent(20,1);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->SetBinContent(21,1);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->SetBinError(1,0.005109148);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->SetBinError(2,0.004771134);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->SetBinError(3,0.005356896);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->SetBinError(4,0.006257076);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->SetBinError(5,0.007586055);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->SetBinError(6,0.009446186);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->SetBinError(7,0.01077237);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->SetBinError(8,0.01289714);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->SetBinError(9,0.01755771);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->SetBinError(10,0.02136337);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->SetBinError(11,0.02677874);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->SetBinError(12,0.03350457);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->SetBinError(13,0.04476479);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->SetBinError(14,0.05759441);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->SetBinError(15,0.06683217);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->SetBinError(16,0.09364668);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->SetBinError(17,0.1262069);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->SetBinError(18,0.2196837);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->SetBinError(19,0.2095065);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->SetBinError(20,0.3972146);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->SetBinError(21,0.5516934);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->SetMinimum(0.5);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->SetMaximum(1.5);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->SetEntries(745.0148);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->SetLineColor(ci);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->SetLineWidth(2);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->SetMarkerStyle(20);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->SetMarkerSize(1.2);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->GetXaxis()->SetLabelFont(43);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->GetXaxis()->SetLabelSize(0);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->GetXaxis()->SetTitleSize(0);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->GetXaxis()->SetTitleFont(43);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->GetYaxis()->SetTitle("Data/Postfit");
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->GetYaxis()->SetNdivisions(205);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->GetYaxis()->SetLabelFont(43);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->GetYaxis()->SetLabelSize(25);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->GetYaxis()->SetTitleSize(25);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->GetYaxis()->SetTitleOffset(2);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->GetYaxis()->SetTitleFont(43);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->GetZaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->GetZaxis()->SetTitleFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_postfit__obs_x_L1_Res_VBF_WW_SR_rebinned__39->Draw("AXIS");
   
   Double_t Graph0_fx3014[21] = {
   320,
   365,
   415,
   465,
   515,
   565,
   620,
   685,
   750,
   815,
   885,
   960,
   1040,
   1125,
   1220,
   1320,
   1425,
   1540,
   1665,
   1795,
   2430};
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
   35,
   30,
   35,
   35,
   40,
   40,
   45,
   50,
   50,
   55,
   60,
   65,
   65,
   570};
   Double_t Graph0_fely3014[21] = {
   0.01391554,
   0.01217153,
   0.01296118,
   0.01556705,
   0.0183433,
   0.02223789,
   0.02545449,
   0.02905376,
   0.03693545,
   0.04405894,
   0.05287465,
   0.06639164,
   0.08823295,
   0.09631478,
   0.1093165,
   0.144677,
   0.2241784,
   0.3153063,
   0.2579583,
   0.4644239,
   0.8755965};
   Double_t Graph0_fehx3014[21] = {
   20,
   25,
   25,
   25,
   25,
   25,
   30,
   35,
   30,
   35,
   35,
   40,
   40,
   45,
   50,
   50,
   55,
   60,
   65,
   65,
   570};
   Double_t Graph0_fehy3014[21] = {
   0.01391554,
   0.01217165,
   0.01296118,
   0.01556695,
   0.01834315,
   0.02223789,
   0.02545449,
   0.02905376,
   0.03693545,
   0.04405902,
   0.05287454,
   0.06639173,
   0.08823287,
   0.09631471,
   0.1093165,
   0.144677,
   0.2241784,
   0.3153062,
   0.2579583,
   0.4644239,
   0.8755965};
   grae = new TGraphAsymmErrors(21,Graph0_fx3014,Graph0_fy3014,Graph0_felx3014,Graph0_fehx3014,Graph0_fely3014,Graph0_fehy3014);
   grae->SetName("Graph0");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3004);
   grae->SetMarkerStyle(0);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph03014 = new TH1F("Graph_Graph03014","Graph",100,30,3270);
   Graph_Graph03014->SetMinimum(0.1119631);
   Graph_Graph03014->SetMaximum(2.050716);
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
   Double_t xAxis83[22] = {300, 340, 390, 440, 490, 540, 590, 650, 720, 780, 850, 920, 1000, 1080, 1170, 1270, 1370, 1480, 1600, 1730, 1860, 3000}; 
   
   TH1F *combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40 = new TH1F("combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40","Histogram of combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR",21, xAxis83);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->SetBinContent(1,0.9957532);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->SetBinContent(2,1.007704);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->SetBinContent(3,0.9735376);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->SetBinContent(4,0.9944158);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->SetBinContent(5,1.026632);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->SetBinContent(6,0.9790809);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->SetBinContent(7,1.035692);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->SetBinContent(8,1.018227);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->SetBinContent(9,0.9516394);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->SetBinContent(10,1.068646);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->SetBinContent(11,1.076727);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->SetBinContent(12,0.9547343);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->SetBinContent(13,0.9047547);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->SetBinContent(14,1.18421);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->SetBinContent(15,0.8441759);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->SetBinContent(16,0.8287368);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->SetBinContent(17,1.170722);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->SetBinContent(18,0.5067397);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->SetBinContent(20,1.656684);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->SetBinError(1,0.01690748);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->SetBinError(2,0.01588768);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->SetBinError(3,0.01751962);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->SetBinError(4,0.02069172);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->SetBinError(5,0.02550835);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->SetBinError(6,0.03098529);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->SetBinError(7,0.0363894);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->SetBinError(8,0.04318092);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->SetBinError(9,0.05674434);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->SetBinError(10,0.07336002);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->SetBinError(11,0.09231988);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->SetBinError(12,0.1084662);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->SetBinError(13,0.1409147);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->SetBinError(14,0.2087381);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->SetBinError(15,0.202934);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->SetBinError(16,0.2816437);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->SetBinError(17,0.4546582);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->SetBinError(18,0.5128172);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->SetBinError(20,1.720791);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->SetEntries(100.7824);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->SetStats(0);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->SetLineWidth(2);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->SetMarkerStyle(20);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->SetMarkerSize(1.2);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->GetXaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->GetXaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->GetXaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->GetXaxis()->SetTitleOffset(1.4);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->GetXaxis()->SetTitleFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->GetYaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->GetYaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->GetYaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->GetYaxis()->SetTitleOffset(1.4);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->GetYaxis()->SetTitleFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->GetZaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->GetZaxis()->SetTitleFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_data__obs_x_L1_Res_VBF_WW_SR_rebinned__40->Draw("sameE0");
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
   Double_t xAxis84[22] = {300, 340, 390, 440, 490, 540, 590, 650, 720, 780, 850, 920, 1000, 1080, 1170, 1270, 1370, 1480, 1600, 1730, 1860, 3000}; 
   
   TH1F *combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41 = new TH1F("combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41","Histogram of combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR",21, xAxis84);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->SetBinContent(1,1.105774);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->SetBinContent(2,1.067356);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->SetBinContent(3,1.100248);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->SetBinContent(4,1.029752);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->SetBinContent(5,0.9755324);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->SetBinContent(6,1.001733);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->SetBinContent(7,0.9512029);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->SetBinContent(8,0.9560289);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->SetBinContent(9,0.9810421);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->SetBinContent(10,0.9060939);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->SetBinContent(11,0.8800962);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->SetBinContent(12,0.8835711);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->SetBinContent(13,0.8694991);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->SetBinContent(14,0.8173395);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->SetBinContent(15,0.9600054);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->SetBinContent(16,0.9747617);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->SetBinContent(17,0.8718542);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->SetBinContent(18,1.037384);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->SetBinContent(19,1.049289);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->SetBinContent(20,0.8313141);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->SetBinContent(21,1.364872);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->SetBinError(1,0.005512804);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->SetBinError(2,0.005011512);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->SetBinError(3,0.005758094);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->SetBinError(4,0.006396525);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->SetBinError(5,0.0074467);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->SetBinError(6,0.009458464);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->SetBinError(7,0.01037729);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->SetBinError(8,0.01247101);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->SetBinError(9,0.01730787);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->SetBinError(10,0.01985242);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->SetBinError(11,0.02435736);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->SetBinError(12,0.03056334);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->SetBinError(13,0.04035699);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->SetBinError(14,0.04963461);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->SetBinError(15,0.06482403);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->SetBinError(16,0.09187217);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->SetBinError(17,0.1140056);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->SetBinError(18,0.2258338);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->SetBinError(19,0.2172359);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->SetBinError(20,0.3465566);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->SetBinError(21,0.7008623);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->SetMinimum(0.5);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->SetMaximum(1.5);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->SetEntries(572.7386);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->SetLineColor(ci);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->SetLineWidth(2);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->SetMarkerStyle(20);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->SetMarkerSize(1.2);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->GetXaxis()->SetTitle("m(VV) [GeV]");
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->GetXaxis()->SetLabelFont(43);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->GetXaxis()->SetLabelSize(25);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->GetXaxis()->SetTitleSize(25);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->GetXaxis()->SetTitleOffset(5);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->GetXaxis()->SetTitleFont(43);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->GetYaxis()->SetTitle("Prefit/Postfit");
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->GetYaxis()->SetNdivisions(205);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->GetYaxis()->SetLabelFont(43);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->GetYaxis()->SetLabelSize(25);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->GetYaxis()->SetTitleSize(25);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->GetYaxis()->SetTitleOffset(2);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->GetYaxis()->SetTitleFont(43);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->GetZaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->GetZaxis()->SetTitleFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__41->Draw("AXIS");
   line = new TLine(300,1,3000,1);
   line->SetLineStyle(2);
   line->Draw();
   Double_t xAxis85[22] = {300, 340, 390, 440, 490, 540, 590, 650, 720, 780, 850, 920, 1000, 1080, 1170, 1270, 1370, 1480, 1600, 1730, 1860, 3000}; 
   
   TH1F *combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42 = new TH1F("combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42","Histogram of combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR",21, xAxis85);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->SetBinContent(1,1.105774);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->SetBinContent(2,1.067356);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->SetBinContent(3,1.100248);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->SetBinContent(4,1.029752);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->SetBinContent(5,0.9755324);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->SetBinContent(6,1.001733);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->SetBinContent(7,0.9512029);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->SetBinContent(8,0.9560289);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->SetBinContent(9,0.9810421);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->SetBinContent(10,0.9060939);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->SetBinContent(11,0.8800962);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->SetBinContent(12,0.8835711);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->SetBinContent(13,0.8694991);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->SetBinContent(14,0.8173395);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->SetBinContent(15,0.9600054);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->SetBinContent(16,0.9747617);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->SetBinContent(17,0.8718542);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->SetBinContent(18,1.037384);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->SetBinContent(19,1.049289);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->SetBinContent(20,0.8313141);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->SetBinContent(21,1.364872);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->SetBinError(1,0.005512804);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->SetBinError(2,0.005011512);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->SetBinError(3,0.005758094);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->SetBinError(4,0.006396525);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->SetBinError(5,0.0074467);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->SetBinError(6,0.009458464);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->SetBinError(7,0.01037729);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->SetBinError(8,0.01247101);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->SetBinError(9,0.01730787);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->SetBinError(10,0.01985242);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->SetBinError(11,0.02435736);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->SetBinError(12,0.03056334);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->SetBinError(13,0.04035699);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->SetBinError(14,0.04963461);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->SetBinError(15,0.06482403);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->SetBinError(16,0.09187217);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->SetBinError(17,0.1140056);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->SetBinError(18,0.2258338);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->SetBinError(19,0.2172359);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->SetBinError(20,0.3465566);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->SetBinError(21,0.7008623);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->SetMinimum(0.5);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->SetMaximum(1.5);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->SetEntries(572.7386);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->SetLineColor(ci);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->SetLineWidth(2);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->SetMarkerStyle(20);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->SetMarkerSize(1.2);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->GetXaxis()->SetTitle("m(VV) [GeV]");
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->GetXaxis()->SetLabelFont(43);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->GetXaxis()->SetLabelSize(25);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->GetXaxis()->SetTitleSize(25);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->GetXaxis()->SetTitleOffset(5);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->GetXaxis()->SetTitleFont(43);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->GetYaxis()->SetTitle("Prefit/Postfit");
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->GetYaxis()->SetNdivisions(205);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->GetYaxis()->SetLabelFont(43);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->GetYaxis()->SetLabelSize(25);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->GetYaxis()->SetTitleSize(25);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->GetYaxis()->SetTitleOffset(2);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->GetYaxis()->SetTitleFont(43);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->GetZaxis()->SetLabelFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->GetZaxis()->SetLabelSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->GetZaxis()->SetTitleSize(0.05);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->GetZaxis()->SetTitleFont(42);
   combCat_L1_Res_VBF_WW_SR_lvqq_Res_binned_prefit__obs_x_L1_Res_VBF_WW_SR_rebinned__42->Draw("histsame");
   pad3->Modified();
   c2->cd();
   c2->Modified();
   c2->cd();
   c2->SetSelected(c2);
}
