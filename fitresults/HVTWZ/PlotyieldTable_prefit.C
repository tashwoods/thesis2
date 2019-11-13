void PlotyieldTable_prefit()
{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Nov  8 18:15:12 2019) by ROOT version 6.14/04
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,800,1200);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.16);
   c1->SetRightMargin(0.05);
   c1->SetTopMargin(0.05);
   c1->SetBottomMargin(0.16);
   c1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.45,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-2.43038,-0.1715927,12.75949,9.208694);
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
   
   THStack *hs_HPL1WZGGFTagTCR = new THStack();
   hs_HPL1WZGGFTagTCR->SetName("hs_HPL1WZGGFTagTCR");
   hs_HPL1WZGGFTagTCR->SetTitle("hs_HPL1WZGGFTagTCR");
   hs_HPL1WZGGFTagTCR->SetMinimum(5);
   hs_HPL1WZGGFTagTCR->SetMaximum(2.172559e+08);
   
   TH1F *hs_HPL1WZGGFTagTCR_stack_1 = new TH1F("hs_HPL1WZGGFTagTCR_stack_1","hs_HPL1WZGGFTagTCR",12,0,12);
   hs_HPL1WZGGFTagTCR_stack_1->SetMinimum(1.037559);
   hs_HPL1WZGGFTagTCR_stack_1->SetMaximum(5.49136e+08);
   hs_HPL1WZGGFTagTCR_stack_1->SetDirectory(0);
   hs_HPL1WZGGFTagTCR_stack_1->SetStats(0);
   hs_HPL1WZGGFTagTCR_stack_1->SetLineWidth(2);
   hs_HPL1WZGGFTagTCR_stack_1->SetMarkerStyle(20);
   hs_HPL1WZGGFTagTCR_stack_1->SetMarkerSize(1.2);
   hs_HPL1WZGGFTagTCR_stack_1->GetXaxis()->SetLabelFont(43);
   hs_HPL1WZGGFTagTCR_stack_1->GetXaxis()->SetLabelSize(0);
   hs_HPL1WZGGFTagTCR_stack_1->GetXaxis()->SetTitleSize(0);
   hs_HPL1WZGGFTagTCR_stack_1->GetXaxis()->SetTitleOffset(1.4);
   hs_HPL1WZGGFTagTCR_stack_1->GetXaxis()->SetTitleFont(43);
   hs_HPL1WZGGFTagTCR_stack_1->GetYaxis()->SetTitle("Events");
   hs_HPL1WZGGFTagTCR_stack_1->GetYaxis()->SetLabelFont(43);
   hs_HPL1WZGGFTagTCR_stack_1->GetYaxis()->SetLabelSize(25);
   hs_HPL1WZGGFTagTCR_stack_1->GetYaxis()->SetTitleSize(25);
   hs_HPL1WZGGFTagTCR_stack_1->GetYaxis()->SetTitleOffset(2);
   hs_HPL1WZGGFTagTCR_stack_1->GetYaxis()->SetTitleFont(43);
   hs_HPL1WZGGFTagTCR_stack_1->GetZaxis()->SetLabelFont(42);
   hs_HPL1WZGGFTagTCR_stack_1->GetZaxis()->SetLabelSize(0.05);
   hs_HPL1WZGGFTagTCR_stack_1->GetZaxis()->SetTitleSize(0.05);
   hs_HPL1WZGGFTagTCR_stack_1->GetZaxis()->SetTitleFont(42);
   hs_HPL1WZGGFTagTCR->SetHistogram(hs_HPL1WZGGFTagTCR_stack_1);
   
   
   TH1F *h_postfit_HPL1WZGGFTagTCR_zjets_stack_1 = new TH1F("h_postfit_HPL1WZGGFTagTCR_zjets_stack_1","h_postfit_HPL1WZGGFTagTCR_zjets",12,0,12);
   h_postfit_HPL1WZGGFTagTCR_zjets_stack_1->SetBinContent(1,1.282268);
   h_postfit_HPL1WZGGFTagTCR_zjets_stack_1->SetBinError(1,0.1307476);
   h_postfit_HPL1WZGGFTagTCR_zjets_stack_1->SetEntries(1);
   h_postfit_HPL1WZGGFTagTCR_zjets_stack_1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#99ff99");
   h_postfit_HPL1WZGGFTagTCR_zjets_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   h_postfit_HPL1WZGGFTagTCR_zjets_stack_1->SetLineColor(ci);
   h_postfit_HPL1WZGGFTagTCR_zjets_stack_1->SetLineWidth(2);
   h_postfit_HPL1WZGGFTagTCR_zjets_stack_1->SetMarkerStyle(20);
   h_postfit_HPL1WZGGFTagTCR_zjets_stack_1->SetMarkerSize(1.2);
   h_postfit_HPL1WZGGFTagTCR_zjets_stack_1->GetXaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFTagTCR_zjets_stack_1->GetXaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFTagTCR_zjets_stack_1->GetXaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFTagTCR_zjets_stack_1->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WZGGFTagTCR_zjets_stack_1->GetXaxis()->SetTitleFont(42);
   h_postfit_HPL1WZGGFTagTCR_zjets_stack_1->GetYaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFTagTCR_zjets_stack_1->GetYaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFTagTCR_zjets_stack_1->GetYaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFTagTCR_zjets_stack_1->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WZGGFTagTCR_zjets_stack_1->GetYaxis()->SetTitleFont(42);
   h_postfit_HPL1WZGGFTagTCR_zjets_stack_1->GetZaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFTagTCR_zjets_stack_1->GetZaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFTagTCR_zjets_stack_1->GetZaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFTagTCR_zjets_stack_1->GetZaxis()->SetTitleFont(42);
   hs_HPL1WZGGFTagTCR->Add(h_postfit_HPL1WZGGFTagTCR_zjets_stack_1,"");
   
   TH1F *h_postfit_HPL1WZGGFTagTCR_diboson_stack_2 = new TH1F("h_postfit_HPL1WZGGFTagTCR_diboson_stack_2","h_postfit_HPL1WZGGFTagTCR_diboson",12,0,12);
   h_postfit_HPL1WZGGFTagTCR_diboson_stack_2->SetBinContent(1,10.07943);
   h_postfit_HPL1WZGGFTagTCR_diboson_stack_2->SetBinError(1,1.128614);
   h_postfit_HPL1WZGGFTagTCR_diboson_stack_2->SetEntries(1);
   h_postfit_HPL1WZGGFTagTCR_diboson_stack_2->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   h_postfit_HPL1WZGGFTagTCR_diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   h_postfit_HPL1WZGGFTagTCR_diboson_stack_2->SetLineColor(ci);
   h_postfit_HPL1WZGGFTagTCR_diboson_stack_2->SetLineWidth(2);
   h_postfit_HPL1WZGGFTagTCR_diboson_stack_2->SetMarkerStyle(20);
   h_postfit_HPL1WZGGFTagTCR_diboson_stack_2->SetMarkerSize(1.2);
   h_postfit_HPL1WZGGFTagTCR_diboson_stack_2->GetXaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFTagTCR_diboson_stack_2->GetXaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFTagTCR_diboson_stack_2->GetXaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFTagTCR_diboson_stack_2->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WZGGFTagTCR_diboson_stack_2->GetXaxis()->SetTitleFont(42);
   h_postfit_HPL1WZGGFTagTCR_diboson_stack_2->GetYaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFTagTCR_diboson_stack_2->GetYaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFTagTCR_diboson_stack_2->GetYaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFTagTCR_diboson_stack_2->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WZGGFTagTCR_diboson_stack_2->GetYaxis()->SetTitleFont(42);
   h_postfit_HPL1WZGGFTagTCR_diboson_stack_2->GetZaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFTagTCR_diboson_stack_2->GetZaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFTagTCR_diboson_stack_2->GetZaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFTagTCR_diboson_stack_2->GetZaxis()->SetTitleFont(42);
   hs_HPL1WZGGFTagTCR->Add(h_postfit_HPL1WZGGFTagTCR_diboson_stack_2,"");
   
   TH1F *h_postfit_HPL1WZGGFTagTCR_wjets_stack_3 = new TH1F("h_postfit_HPL1WZGGFTagTCR_wjets_stack_3","h_postfit_HPL1WZGGFTagTCR_wjets",12,0,12);
   h_postfit_HPL1WZGGFTagTCR_wjets_stack_3->SetBinContent(1,35.73402);
   h_postfit_HPL1WZGGFTagTCR_wjets_stack_3->SetBinError(1,4.28029);
   h_postfit_HPL1WZGGFTagTCR_wjets_stack_3->SetEntries(1);
   h_postfit_HPL1WZGGFTagTCR_wjets_stack_3->SetStats(0);

   ci = TColor::GetColor("#ff9999");
   h_postfit_HPL1WZGGFTagTCR_wjets_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff9999");
   h_postfit_HPL1WZGGFTagTCR_wjets_stack_3->SetLineColor(ci);
   h_postfit_HPL1WZGGFTagTCR_wjets_stack_3->SetLineWidth(2);
   h_postfit_HPL1WZGGFTagTCR_wjets_stack_3->SetMarkerStyle(20);
   h_postfit_HPL1WZGGFTagTCR_wjets_stack_3->SetMarkerSize(1.2);
   h_postfit_HPL1WZGGFTagTCR_wjets_stack_3->GetXaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFTagTCR_wjets_stack_3->GetXaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFTagTCR_wjets_stack_3->GetXaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFTagTCR_wjets_stack_3->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WZGGFTagTCR_wjets_stack_3->GetXaxis()->SetTitleFont(42);
   h_postfit_HPL1WZGGFTagTCR_wjets_stack_3->GetYaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFTagTCR_wjets_stack_3->GetYaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFTagTCR_wjets_stack_3->GetYaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFTagTCR_wjets_stack_3->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WZGGFTagTCR_wjets_stack_3->GetYaxis()->SetTitleFont(42);
   h_postfit_HPL1WZGGFTagTCR_wjets_stack_3->GetZaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFTagTCR_wjets_stack_3->GetZaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFTagTCR_wjets_stack_3->GetZaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFTagTCR_wjets_stack_3->GetZaxis()->SetTitleFont(42);
   hs_HPL1WZGGFTagTCR->Add(h_postfit_HPL1WZGGFTagTCR_wjets_stack_3,"");
   
   TH1F *h_postfit_HPL1WZGGFTagTCR_singlet_stack_4 = new TH1F("h_postfit_HPL1WZGGFTagTCR_singlet_stack_4","h_postfit_HPL1WZGGFTagTCR_singlet",12,0,12);
   h_postfit_HPL1WZGGFTagTCR_singlet_stack_4->SetBinContent(1,128.0538);
   h_postfit_HPL1WZGGFTagTCR_singlet_stack_4->SetBinError(1,21.73528);
   h_postfit_HPL1WZGGFTagTCR_singlet_stack_4->SetEntries(1);
   h_postfit_HPL1WZGGFTagTCR_singlet_stack_4->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   h_postfit_HPL1WZGGFTagTCR_singlet_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   h_postfit_HPL1WZGGFTagTCR_singlet_stack_4->SetLineColor(ci);
   h_postfit_HPL1WZGGFTagTCR_singlet_stack_4->SetLineWidth(2);
   h_postfit_HPL1WZGGFTagTCR_singlet_stack_4->SetMarkerStyle(20);
   h_postfit_HPL1WZGGFTagTCR_singlet_stack_4->SetMarkerSize(1.2);
   h_postfit_HPL1WZGGFTagTCR_singlet_stack_4->GetXaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFTagTCR_singlet_stack_4->GetXaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFTagTCR_singlet_stack_4->GetXaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFTagTCR_singlet_stack_4->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WZGGFTagTCR_singlet_stack_4->GetXaxis()->SetTitleFont(42);
   h_postfit_HPL1WZGGFTagTCR_singlet_stack_4->GetYaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFTagTCR_singlet_stack_4->GetYaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFTagTCR_singlet_stack_4->GetYaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFTagTCR_singlet_stack_4->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WZGGFTagTCR_singlet_stack_4->GetYaxis()->SetTitleFont(42);
   h_postfit_HPL1WZGGFTagTCR_singlet_stack_4->GetZaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFTagTCR_singlet_stack_4->GetZaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFTagTCR_singlet_stack_4->GetZaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFTagTCR_singlet_stack_4->GetZaxis()->SetTitleFont(42);
   hs_HPL1WZGGFTagTCR->Add(h_postfit_HPL1WZGGFTagTCR_singlet_stack_4,"");
   
   TH1F *h_postfit_HPL1WZGGFTagTCR_ttbar_stack_5 = new TH1F("h_postfit_HPL1WZGGFTagTCR_ttbar_stack_5","h_postfit_HPL1WZGGFTagTCR_ttbar",12,0,12);
   h_postfit_HPL1WZGGFTagTCR_ttbar_stack_5->SetBinContent(1,1997.409);
   h_postfit_HPL1WZGGFTagTCR_ttbar_stack_5->SetBinError(1,50.64758);
   h_postfit_HPL1WZGGFTagTCR_ttbar_stack_5->SetEntries(1);
   h_postfit_HPL1WZGGFTagTCR_ttbar_stack_5->SetStats(0);

   ci = TColor::GetColor("#6699ff");
   h_postfit_HPL1WZGGFTagTCR_ttbar_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#6699ff");
   h_postfit_HPL1WZGGFTagTCR_ttbar_stack_5->SetLineColor(ci);
   h_postfit_HPL1WZGGFTagTCR_ttbar_stack_5->SetLineWidth(2);
   h_postfit_HPL1WZGGFTagTCR_ttbar_stack_5->SetMarkerStyle(20);
   h_postfit_HPL1WZGGFTagTCR_ttbar_stack_5->SetMarkerSize(1.2);
   h_postfit_HPL1WZGGFTagTCR_ttbar_stack_5->GetXaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFTagTCR_ttbar_stack_5->GetXaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFTagTCR_ttbar_stack_5->GetXaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFTagTCR_ttbar_stack_5->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WZGGFTagTCR_ttbar_stack_5->GetXaxis()->SetTitleFont(42);
   h_postfit_HPL1WZGGFTagTCR_ttbar_stack_5->GetYaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFTagTCR_ttbar_stack_5->GetYaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFTagTCR_ttbar_stack_5->GetYaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFTagTCR_ttbar_stack_5->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WZGGFTagTCR_ttbar_stack_5->GetYaxis()->SetTitleFont(42);
   h_postfit_HPL1WZGGFTagTCR_ttbar_stack_5->GetZaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFTagTCR_ttbar_stack_5->GetZaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFTagTCR_ttbar_stack_5->GetZaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFTagTCR_ttbar_stack_5->GetZaxis()->SetTitleFont(42);
   hs_HPL1WZGGFTagTCR->Add(h_postfit_HPL1WZGGFTagTCR_ttbar_stack_5,"");
   hs_HPL1WZGGFTagTCR->Draw("hist");
   
   hs_HPL1WZGGFTagWCR = new THStack();
   hs_HPL1WZGGFTagWCR->SetName("hs_HPL1WZGGFTagWCR");
   hs_HPL1WZGGFTagWCR->SetTitle("hs_HPL1WZGGFTagWCR");
   
   TH1F *hs_HPL1WZGGFTagWCR_stack_2 = new TH1F("hs_HPL1WZGGFTagWCR_stack_2","hs_HPL1WZGGFTagWCR",12,0,12);
   hs_HPL1WZGGFTagWCR_stack_2->SetMinimum(1.131208);
   hs_HPL1WZGGFTagWCR_stack_2->SetMaximum(4524.832);
   hs_HPL1WZGGFTagWCR_stack_2->SetDirectory(0);
   hs_HPL1WZGGFTagWCR_stack_2->SetStats(0);
   hs_HPL1WZGGFTagWCR_stack_2->SetLineWidth(2);
   hs_HPL1WZGGFTagWCR_stack_2->SetMarkerStyle(20);
   hs_HPL1WZGGFTagWCR_stack_2->SetMarkerSize(1.2);
   hs_HPL1WZGGFTagWCR_stack_2->GetXaxis()->SetLabelFont(42);
   hs_HPL1WZGGFTagWCR_stack_2->GetXaxis()->SetLabelSize(0.05);
   hs_HPL1WZGGFTagWCR_stack_2->GetXaxis()->SetTitleSize(0.05);
   hs_HPL1WZGGFTagWCR_stack_2->GetXaxis()->SetTitleOffset(1.4);
   hs_HPL1WZGGFTagWCR_stack_2->GetXaxis()->SetTitleFont(42);
   hs_HPL1WZGGFTagWCR_stack_2->GetYaxis()->SetLabelFont(42);
   hs_HPL1WZGGFTagWCR_stack_2->GetYaxis()->SetLabelSize(0.05);
   hs_HPL1WZGGFTagWCR_stack_2->GetYaxis()->SetTitleSize(0.05);
   hs_HPL1WZGGFTagWCR_stack_2->GetYaxis()->SetTitleOffset(1.4);
   hs_HPL1WZGGFTagWCR_stack_2->GetYaxis()->SetTitleFont(42);
   hs_HPL1WZGGFTagWCR_stack_2->GetZaxis()->SetLabelFont(42);
   hs_HPL1WZGGFTagWCR_stack_2->GetZaxis()->SetLabelSize(0.05);
   hs_HPL1WZGGFTagWCR_stack_2->GetZaxis()->SetTitleSize(0.05);
   hs_HPL1WZGGFTagWCR_stack_2->GetZaxis()->SetTitleFont(42);
   hs_HPL1WZGGFTagWCR->SetHistogram(hs_HPL1WZGGFTagWCR_stack_2);
   
   
   TH1F *h_postfit_HPL1WZGGFTagWCR_zjets_stack_1 = new TH1F("h_postfit_HPL1WZGGFTagWCR_zjets_stack_1","h_postfit_HPL1WZGGFTagWCR_zjets",12,0,12);
   h_postfit_HPL1WZGGFTagWCR_zjets_stack_1->SetBinContent(2,13.26108);
   h_postfit_HPL1WZGGFTagWCR_zjets_stack_1->SetBinError(2,1.344975);
   h_postfit_HPL1WZGGFTagWCR_zjets_stack_1->SetEntries(1);
   h_postfit_HPL1WZGGFTagWCR_zjets_stack_1->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   h_postfit_HPL1WZGGFTagWCR_zjets_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   h_postfit_HPL1WZGGFTagWCR_zjets_stack_1->SetLineColor(ci);
   h_postfit_HPL1WZGGFTagWCR_zjets_stack_1->SetLineWidth(2);
   h_postfit_HPL1WZGGFTagWCR_zjets_stack_1->SetMarkerStyle(20);
   h_postfit_HPL1WZGGFTagWCR_zjets_stack_1->SetMarkerSize(1.2);
   h_postfit_HPL1WZGGFTagWCR_zjets_stack_1->GetXaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFTagWCR_zjets_stack_1->GetXaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFTagWCR_zjets_stack_1->GetXaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFTagWCR_zjets_stack_1->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WZGGFTagWCR_zjets_stack_1->GetXaxis()->SetTitleFont(42);
   h_postfit_HPL1WZGGFTagWCR_zjets_stack_1->GetYaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFTagWCR_zjets_stack_1->GetYaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFTagWCR_zjets_stack_1->GetYaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFTagWCR_zjets_stack_1->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WZGGFTagWCR_zjets_stack_1->GetYaxis()->SetTitleFont(42);
   h_postfit_HPL1WZGGFTagWCR_zjets_stack_1->GetZaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFTagWCR_zjets_stack_1->GetZaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFTagWCR_zjets_stack_1->GetZaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFTagWCR_zjets_stack_1->GetZaxis()->SetTitleFont(42);
   hs_HPL1WZGGFTagWCR->Add(h_postfit_HPL1WZGGFTagWCR_zjets_stack_1,"");
   
   TH1F *h_postfit_HPL1WZGGFTagWCR_diboson_stack_2 = new TH1F("h_postfit_HPL1WZGGFTagWCR_diboson_stack_2","h_postfit_HPL1WZGGFTagWCR_diboson",12,0,12);
   h_postfit_HPL1WZGGFTagWCR_diboson_stack_2->SetBinContent(2,32.10014);
   h_postfit_HPL1WZGGFTagWCR_diboson_stack_2->SetBinError(2,4.841451);
   h_postfit_HPL1WZGGFTagWCR_diboson_stack_2->SetEntries(1);
   h_postfit_HPL1WZGGFTagWCR_diboson_stack_2->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   h_postfit_HPL1WZGGFTagWCR_diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   h_postfit_HPL1WZGGFTagWCR_diboson_stack_2->SetLineColor(ci);
   h_postfit_HPL1WZGGFTagWCR_diboson_stack_2->SetLineWidth(2);
   h_postfit_HPL1WZGGFTagWCR_diboson_stack_2->SetMarkerStyle(20);
   h_postfit_HPL1WZGGFTagWCR_diboson_stack_2->SetMarkerSize(1.2);
   h_postfit_HPL1WZGGFTagWCR_diboson_stack_2->GetXaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFTagWCR_diboson_stack_2->GetXaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFTagWCR_diboson_stack_2->GetXaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFTagWCR_diboson_stack_2->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WZGGFTagWCR_diboson_stack_2->GetXaxis()->SetTitleFont(42);
   h_postfit_HPL1WZGGFTagWCR_diboson_stack_2->GetYaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFTagWCR_diboson_stack_2->GetYaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFTagWCR_diboson_stack_2->GetYaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFTagWCR_diboson_stack_2->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WZGGFTagWCR_diboson_stack_2->GetYaxis()->SetTitleFont(42);
   h_postfit_HPL1WZGGFTagWCR_diboson_stack_2->GetZaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFTagWCR_diboson_stack_2->GetZaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFTagWCR_diboson_stack_2->GetZaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFTagWCR_diboson_stack_2->GetZaxis()->SetTitleFont(42);
   hs_HPL1WZGGFTagWCR->Add(h_postfit_HPL1WZGGFTagWCR_diboson_stack_2,"");
   
   TH1F *h_postfit_HPL1WZGGFTagWCR_singlet_stack_3 = new TH1F("h_postfit_HPL1WZGGFTagWCR_singlet_stack_3","h_postfit_HPL1WZGGFTagWCR_singlet",12,0,12);
   h_postfit_HPL1WZGGFTagWCR_singlet_stack_3->SetBinContent(2,374.4878);
   h_postfit_HPL1WZGGFTagWCR_singlet_stack_3->SetBinError(2,57.77679);
   h_postfit_HPL1WZGGFTagWCR_singlet_stack_3->SetEntries(1);
   h_postfit_HPL1WZGGFTagWCR_singlet_stack_3->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   h_postfit_HPL1WZGGFTagWCR_singlet_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   h_postfit_HPL1WZGGFTagWCR_singlet_stack_3->SetLineColor(ci);
   h_postfit_HPL1WZGGFTagWCR_singlet_stack_3->SetLineWidth(2);
   h_postfit_HPL1WZGGFTagWCR_singlet_stack_3->SetMarkerStyle(20);
   h_postfit_HPL1WZGGFTagWCR_singlet_stack_3->SetMarkerSize(1.2);
   h_postfit_HPL1WZGGFTagWCR_singlet_stack_3->GetXaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFTagWCR_singlet_stack_3->GetXaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFTagWCR_singlet_stack_3->GetXaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFTagWCR_singlet_stack_3->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WZGGFTagWCR_singlet_stack_3->GetXaxis()->SetTitleFont(42);
   h_postfit_HPL1WZGGFTagWCR_singlet_stack_3->GetYaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFTagWCR_singlet_stack_3->GetYaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFTagWCR_singlet_stack_3->GetYaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFTagWCR_singlet_stack_3->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WZGGFTagWCR_singlet_stack_3->GetYaxis()->SetTitleFont(42);
   h_postfit_HPL1WZGGFTagWCR_singlet_stack_3->GetZaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFTagWCR_singlet_stack_3->GetZaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFTagWCR_singlet_stack_3->GetZaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFTagWCR_singlet_stack_3->GetZaxis()->SetTitleFont(42);
   hs_HPL1WZGGFTagWCR->Add(h_postfit_HPL1WZGGFTagWCR_singlet_stack_3,"");
   
   TH1F *h_postfit_HPL1WZGGFTagWCR_wjets_stack_4 = new TH1F("h_postfit_HPL1WZGGFTagWCR_wjets_stack_4","h_postfit_HPL1WZGGFTagWCR_wjets",12,0,12);
   h_postfit_HPL1WZGGFTagWCR_wjets_stack_4->SetBinContent(2,643.8297);
   h_postfit_HPL1WZGGFTagWCR_wjets_stack_4->SetBinError(2,75.37114);
   h_postfit_HPL1WZGGFTagWCR_wjets_stack_4->SetEntries(1);
   h_postfit_HPL1WZGGFTagWCR_wjets_stack_4->SetStats(0);

   ci = TColor::GetColor("#ff9999");
   h_postfit_HPL1WZGGFTagWCR_wjets_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff9999");
   h_postfit_HPL1WZGGFTagWCR_wjets_stack_4->SetLineColor(ci);
   h_postfit_HPL1WZGGFTagWCR_wjets_stack_4->SetLineWidth(2);
   h_postfit_HPL1WZGGFTagWCR_wjets_stack_4->SetMarkerStyle(20);
   h_postfit_HPL1WZGGFTagWCR_wjets_stack_4->SetMarkerSize(1.2);
   h_postfit_HPL1WZGGFTagWCR_wjets_stack_4->GetXaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFTagWCR_wjets_stack_4->GetXaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFTagWCR_wjets_stack_4->GetXaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFTagWCR_wjets_stack_4->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WZGGFTagWCR_wjets_stack_4->GetXaxis()->SetTitleFont(42);
   h_postfit_HPL1WZGGFTagWCR_wjets_stack_4->GetYaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFTagWCR_wjets_stack_4->GetYaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFTagWCR_wjets_stack_4->GetYaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFTagWCR_wjets_stack_4->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WZGGFTagWCR_wjets_stack_4->GetYaxis()->SetTitleFont(42);
   h_postfit_HPL1WZGGFTagWCR_wjets_stack_4->GetZaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFTagWCR_wjets_stack_4->GetZaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFTagWCR_wjets_stack_4->GetZaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFTagWCR_wjets_stack_4->GetZaxis()->SetTitleFont(42);
   hs_HPL1WZGGFTagWCR->Add(h_postfit_HPL1WZGGFTagWCR_wjets_stack_4,"");
   
   TH1F *h_postfit_HPL1WZGGFTagWCR_ttbar_stack_5 = new TH1F("h_postfit_HPL1WZGGFTagWCR_ttbar_stack_5","h_postfit_HPL1WZGGFTagWCR_ttbar",12,0,12);
   h_postfit_HPL1WZGGFTagWCR_ttbar_stack_5->SetBinContent(2,1764.342);
   h_postfit_HPL1WZGGFTagWCR_ttbar_stack_5->SetBinError(2,48.73075);
   h_postfit_HPL1WZGGFTagWCR_ttbar_stack_5->SetEntries(1);
   h_postfit_HPL1WZGGFTagWCR_ttbar_stack_5->SetStats(0);

   ci = TColor::GetColor("#6699ff");
   h_postfit_HPL1WZGGFTagWCR_ttbar_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#6699ff");
   h_postfit_HPL1WZGGFTagWCR_ttbar_stack_5->SetLineColor(ci);
   h_postfit_HPL1WZGGFTagWCR_ttbar_stack_5->SetLineWidth(2);
   h_postfit_HPL1WZGGFTagWCR_ttbar_stack_5->SetMarkerStyle(20);
   h_postfit_HPL1WZGGFTagWCR_ttbar_stack_5->SetMarkerSize(1.2);
   h_postfit_HPL1WZGGFTagWCR_ttbar_stack_5->GetXaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFTagWCR_ttbar_stack_5->GetXaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFTagWCR_ttbar_stack_5->GetXaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFTagWCR_ttbar_stack_5->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WZGGFTagWCR_ttbar_stack_5->GetXaxis()->SetTitleFont(42);
   h_postfit_HPL1WZGGFTagWCR_ttbar_stack_5->GetYaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFTagWCR_ttbar_stack_5->GetYaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFTagWCR_ttbar_stack_5->GetYaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFTagWCR_ttbar_stack_5->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WZGGFTagWCR_ttbar_stack_5->GetYaxis()->SetTitleFont(42);
   h_postfit_HPL1WZGGFTagWCR_ttbar_stack_5->GetZaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFTagWCR_ttbar_stack_5->GetZaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFTagWCR_ttbar_stack_5->GetZaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFTagWCR_ttbar_stack_5->GetZaxis()->SetTitleFont(42);
   hs_HPL1WZGGFTagWCR->Add(h_postfit_HPL1WZGGFTagWCR_ttbar_stack_5,"");
   hs_HPL1WZGGFTagWCR->Draw("histsame");
   
   hs_HPL1WZGGFUntagTCR = new THStack();
   hs_HPL1WZGGFUntagTCR->SetName("hs_HPL1WZGGFUntagTCR");
   hs_HPL1WZGGFUntagTCR->SetTitle("hs_HPL1WZGGFUntagTCR");
   
   TH1F *hs_HPL1WZGGFUntagTCR_stack_3 = new TH1F("hs_HPL1WZGGFUntagTCR_stack_3","hs_HPL1WZGGFUntagTCR",12,0,12);
   hs_HPL1WZGGFUntagTCR_stack_3->SetMinimum(16.42131);
   hs_HPL1WZGGFUntagTCR_stack_3->SetMaximum(65685.24);
   hs_HPL1WZGGFUntagTCR_stack_3->SetDirectory(0);
   hs_HPL1WZGGFUntagTCR_stack_3->SetStats(0);
   hs_HPL1WZGGFUntagTCR_stack_3->SetLineWidth(2);
   hs_HPL1WZGGFUntagTCR_stack_3->SetMarkerStyle(20);
   hs_HPL1WZGGFUntagTCR_stack_3->SetMarkerSize(1.2);
   hs_HPL1WZGGFUntagTCR_stack_3->GetXaxis()->SetLabelFont(42);
   hs_HPL1WZGGFUntagTCR_stack_3->GetXaxis()->SetLabelSize(0.05);
   hs_HPL1WZGGFUntagTCR_stack_3->GetXaxis()->SetTitleSize(0.05);
   hs_HPL1WZGGFUntagTCR_stack_3->GetXaxis()->SetTitleOffset(1.4);
   hs_HPL1WZGGFUntagTCR_stack_3->GetXaxis()->SetTitleFont(42);
   hs_HPL1WZGGFUntagTCR_stack_3->GetYaxis()->SetLabelFont(42);
   hs_HPL1WZGGFUntagTCR_stack_3->GetYaxis()->SetLabelSize(0.05);
   hs_HPL1WZGGFUntagTCR_stack_3->GetYaxis()->SetTitleSize(0.05);
   hs_HPL1WZGGFUntagTCR_stack_3->GetYaxis()->SetTitleOffset(1.4);
   hs_HPL1WZGGFUntagTCR_stack_3->GetYaxis()->SetTitleFont(42);
   hs_HPL1WZGGFUntagTCR_stack_3->GetZaxis()->SetLabelFont(42);
   hs_HPL1WZGGFUntagTCR_stack_3->GetZaxis()->SetLabelSize(0.05);
   hs_HPL1WZGGFUntagTCR_stack_3->GetZaxis()->SetTitleSize(0.05);
   hs_HPL1WZGGFUntagTCR_stack_3->GetZaxis()->SetTitleFont(42);
   hs_HPL1WZGGFUntagTCR->SetHistogram(hs_HPL1WZGGFUntagTCR_stack_3);
   
   
   TH1F *h_postfit_HPL1WZGGFUntagTCR_zjets_stack_1 = new TH1F("h_postfit_HPL1WZGGFUntagTCR_zjets_stack_1","h_postfit_HPL1WZGGFUntagTCR_zjets",12,0,12);
   h_postfit_HPL1WZGGFUntagTCR_zjets_stack_1->SetBinContent(3,72.00395);
   h_postfit_HPL1WZGGFUntagTCR_zjets_stack_1->SetBinError(3,7.3031);
   h_postfit_HPL1WZGGFUntagTCR_zjets_stack_1->SetEntries(1);
   h_postfit_HPL1WZGGFUntagTCR_zjets_stack_1->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   h_postfit_HPL1WZGGFUntagTCR_zjets_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   h_postfit_HPL1WZGGFUntagTCR_zjets_stack_1->SetLineColor(ci);
   h_postfit_HPL1WZGGFUntagTCR_zjets_stack_1->SetLineWidth(2);
   h_postfit_HPL1WZGGFUntagTCR_zjets_stack_1->SetMarkerStyle(20);
   h_postfit_HPL1WZGGFUntagTCR_zjets_stack_1->SetMarkerSize(1.2);
   h_postfit_HPL1WZGGFUntagTCR_zjets_stack_1->GetXaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFUntagTCR_zjets_stack_1->GetXaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFUntagTCR_zjets_stack_1->GetXaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFUntagTCR_zjets_stack_1->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WZGGFUntagTCR_zjets_stack_1->GetXaxis()->SetTitleFont(42);
   h_postfit_HPL1WZGGFUntagTCR_zjets_stack_1->GetYaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFUntagTCR_zjets_stack_1->GetYaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFUntagTCR_zjets_stack_1->GetYaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFUntagTCR_zjets_stack_1->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WZGGFUntagTCR_zjets_stack_1->GetYaxis()->SetTitleFont(42);
   h_postfit_HPL1WZGGFUntagTCR_zjets_stack_1->GetZaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFUntagTCR_zjets_stack_1->GetZaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFUntagTCR_zjets_stack_1->GetZaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFUntagTCR_zjets_stack_1->GetZaxis()->SetTitleFont(42);
   hs_HPL1WZGGFUntagTCR->Add(h_postfit_HPL1WZGGFUntagTCR_zjets_stack_1,"");
   
   TH1F *h_postfit_HPL1WZGGFUntagTCR_diboson_stack_2 = new TH1F("h_postfit_HPL1WZGGFUntagTCR_diboson_stack_2","h_postfit_HPL1WZGGFUntagTCR_diboson",12,0,12);
   h_postfit_HPL1WZGGFUntagTCR_diboson_stack_2->SetBinContent(3,288.3948);
   h_postfit_HPL1WZGGFUntagTCR_diboson_stack_2->SetBinError(3,28.23171);
   h_postfit_HPL1WZGGFUntagTCR_diboson_stack_2->SetEntries(1);
   h_postfit_HPL1WZGGFUntagTCR_diboson_stack_2->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   h_postfit_HPL1WZGGFUntagTCR_diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   h_postfit_HPL1WZGGFUntagTCR_diboson_stack_2->SetLineColor(ci);
   h_postfit_HPL1WZGGFUntagTCR_diboson_stack_2->SetLineWidth(2);
   h_postfit_HPL1WZGGFUntagTCR_diboson_stack_2->SetMarkerStyle(20);
   h_postfit_HPL1WZGGFUntagTCR_diboson_stack_2->SetMarkerSize(1.2);
   h_postfit_HPL1WZGGFUntagTCR_diboson_stack_2->GetXaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFUntagTCR_diboson_stack_2->GetXaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFUntagTCR_diboson_stack_2->GetXaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFUntagTCR_diboson_stack_2->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WZGGFUntagTCR_diboson_stack_2->GetXaxis()->SetTitleFont(42);
   h_postfit_HPL1WZGGFUntagTCR_diboson_stack_2->GetYaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFUntagTCR_diboson_stack_2->GetYaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFUntagTCR_diboson_stack_2->GetYaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFUntagTCR_diboson_stack_2->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WZGGFUntagTCR_diboson_stack_2->GetYaxis()->SetTitleFont(42);
   h_postfit_HPL1WZGGFUntagTCR_diboson_stack_2->GetZaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFUntagTCR_diboson_stack_2->GetZaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFUntagTCR_diboson_stack_2->GetZaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFUntagTCR_diboson_stack_2->GetZaxis()->SetTitleFont(42);
   hs_HPL1WZGGFUntagTCR->Add(h_postfit_HPL1WZGGFUntagTCR_diboson_stack_2,"");
   
   TH1F *h_postfit_HPL1WZGGFUntagTCR_wjets_stack_3 = new TH1F("h_postfit_HPL1WZGGFUntagTCR_wjets_stack_3","h_postfit_HPL1WZGGFUntagTCR_wjets",12,0,12);
   h_postfit_HPL1WZGGFUntagTCR_wjets_stack_3->SetBinContent(3,2358.151);
   h_postfit_HPL1WZGGFUntagTCR_wjets_stack_3->SetBinError(3,18.35319);
   h_postfit_HPL1WZGGFUntagTCR_wjets_stack_3->SetEntries(1);
   h_postfit_HPL1WZGGFUntagTCR_wjets_stack_3->SetStats(0);

   ci = TColor::GetColor("#ff9999");
   h_postfit_HPL1WZGGFUntagTCR_wjets_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff9999");
   h_postfit_HPL1WZGGFUntagTCR_wjets_stack_3->SetLineColor(ci);
   h_postfit_HPL1WZGGFUntagTCR_wjets_stack_3->SetLineWidth(2);
   h_postfit_HPL1WZGGFUntagTCR_wjets_stack_3->SetMarkerStyle(20);
   h_postfit_HPL1WZGGFUntagTCR_wjets_stack_3->SetMarkerSize(1.2);
   h_postfit_HPL1WZGGFUntagTCR_wjets_stack_3->GetXaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFUntagTCR_wjets_stack_3->GetXaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFUntagTCR_wjets_stack_3->GetXaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFUntagTCR_wjets_stack_3->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WZGGFUntagTCR_wjets_stack_3->GetXaxis()->SetTitleFont(42);
   h_postfit_HPL1WZGGFUntagTCR_wjets_stack_3->GetYaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFUntagTCR_wjets_stack_3->GetYaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFUntagTCR_wjets_stack_3->GetYaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFUntagTCR_wjets_stack_3->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WZGGFUntagTCR_wjets_stack_3->GetYaxis()->SetTitleFont(42);
   h_postfit_HPL1WZGGFUntagTCR_wjets_stack_3->GetZaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFUntagTCR_wjets_stack_3->GetZaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFUntagTCR_wjets_stack_3->GetZaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFUntagTCR_wjets_stack_3->GetZaxis()->SetTitleFont(42);
   hs_HPL1WZGGFUntagTCR->Add(h_postfit_HPL1WZGGFUntagTCR_wjets_stack_3,"");
   
   TH1F *h_postfit_HPL1WZGGFUntagTCR_singlet_stack_4 = new TH1F("h_postfit_HPL1WZGGFUntagTCR_singlet_stack_4","h_postfit_HPL1WZGGFUntagTCR_singlet",12,0,12);
   h_postfit_HPL1WZGGFUntagTCR_singlet_stack_4->SetBinContent(3,3645.477);
   h_postfit_HPL1WZGGFUntagTCR_singlet_stack_4->SetBinError(3,545.4316);
   h_postfit_HPL1WZGGFUntagTCR_singlet_stack_4->SetEntries(1);
   h_postfit_HPL1WZGGFUntagTCR_singlet_stack_4->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   h_postfit_HPL1WZGGFUntagTCR_singlet_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   h_postfit_HPL1WZGGFUntagTCR_singlet_stack_4->SetLineColor(ci);
   h_postfit_HPL1WZGGFUntagTCR_singlet_stack_4->SetLineWidth(2);
   h_postfit_HPL1WZGGFUntagTCR_singlet_stack_4->SetMarkerStyle(20);
   h_postfit_HPL1WZGGFUntagTCR_singlet_stack_4->SetMarkerSize(1.2);
   h_postfit_HPL1WZGGFUntagTCR_singlet_stack_4->GetXaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFUntagTCR_singlet_stack_4->GetXaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFUntagTCR_singlet_stack_4->GetXaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFUntagTCR_singlet_stack_4->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WZGGFUntagTCR_singlet_stack_4->GetXaxis()->SetTitleFont(42);
   h_postfit_HPL1WZGGFUntagTCR_singlet_stack_4->GetYaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFUntagTCR_singlet_stack_4->GetYaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFUntagTCR_singlet_stack_4->GetYaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFUntagTCR_singlet_stack_4->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WZGGFUntagTCR_singlet_stack_4->GetYaxis()->SetTitleFont(42);
   h_postfit_HPL1WZGGFUntagTCR_singlet_stack_4->GetZaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFUntagTCR_singlet_stack_4->GetZaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFUntagTCR_singlet_stack_4->GetZaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFUntagTCR_singlet_stack_4->GetZaxis()->SetTitleFont(42);
   hs_HPL1WZGGFUntagTCR->Add(h_postfit_HPL1WZGGFUntagTCR_singlet_stack_4,"");
   
   TH1F *h_postfit_HPL1WZGGFUntagTCR_ttbar_stack_5 = new TH1F("h_postfit_HPL1WZGGFUntagTCR_ttbar_stack_5","h_postfit_HPL1WZGGFUntagTCR_ttbar",12,0,12);
   h_postfit_HPL1WZGGFUntagTCR_ttbar_stack_5->SetBinContent(3,34689.25);
   h_postfit_HPL1WZGGFUntagTCR_ttbar_stack_5->SetBinError(3,562.329);
   h_postfit_HPL1WZGGFUntagTCR_ttbar_stack_5->SetEntries(1);
   h_postfit_HPL1WZGGFUntagTCR_ttbar_stack_5->SetStats(0);

   ci = TColor::GetColor("#6699ff");
   h_postfit_HPL1WZGGFUntagTCR_ttbar_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#6699ff");
   h_postfit_HPL1WZGGFUntagTCR_ttbar_stack_5->SetLineColor(ci);
   h_postfit_HPL1WZGGFUntagTCR_ttbar_stack_5->SetLineWidth(2);
   h_postfit_HPL1WZGGFUntagTCR_ttbar_stack_5->SetMarkerStyle(20);
   h_postfit_HPL1WZGGFUntagTCR_ttbar_stack_5->SetMarkerSize(1.2);
   h_postfit_HPL1WZGGFUntagTCR_ttbar_stack_5->GetXaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFUntagTCR_ttbar_stack_5->GetXaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFUntagTCR_ttbar_stack_5->GetXaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFUntagTCR_ttbar_stack_5->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WZGGFUntagTCR_ttbar_stack_5->GetXaxis()->SetTitleFont(42);
   h_postfit_HPL1WZGGFUntagTCR_ttbar_stack_5->GetYaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFUntagTCR_ttbar_stack_5->GetYaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFUntagTCR_ttbar_stack_5->GetYaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFUntagTCR_ttbar_stack_5->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WZGGFUntagTCR_ttbar_stack_5->GetYaxis()->SetTitleFont(42);
   h_postfit_HPL1WZGGFUntagTCR_ttbar_stack_5->GetZaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFUntagTCR_ttbar_stack_5->GetZaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFUntagTCR_ttbar_stack_5->GetZaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFUntagTCR_ttbar_stack_5->GetZaxis()->SetTitleFont(42);
   hs_HPL1WZGGFUntagTCR->Add(h_postfit_HPL1WZGGFUntagTCR_ttbar_stack_5,"");
   hs_HPL1WZGGFUntagTCR->Draw("histsame");
   
   hs_HPL1WZGGFUntagWCR = new THStack();
   hs_HPL1WZGGFUntagWCR->SetName("hs_HPL1WZGGFUntagWCR");
   hs_HPL1WZGGFUntagWCR->SetTitle("hs_HPL1WZGGFUntagWCR");
   
   TH1F *hs_HPL1WZGGFUntagWCR_stack_4 = new TH1F("hs_HPL1WZGGFUntagWCR_stack_4","hs_HPL1WZGGFUntagWCR",12,0,12);
   hs_HPL1WZGGFUntagWCR_stack_4->SetMinimum(24.83599);
   hs_HPL1WZGGFUntagWCR_stack_4->SetMaximum(99343.94);
   hs_HPL1WZGGFUntagWCR_stack_4->SetDirectory(0);
   hs_HPL1WZGGFUntagWCR_stack_4->SetStats(0);
   hs_HPL1WZGGFUntagWCR_stack_4->SetLineWidth(2);
   hs_HPL1WZGGFUntagWCR_stack_4->SetMarkerStyle(20);
   hs_HPL1WZGGFUntagWCR_stack_4->SetMarkerSize(1.2);
   hs_HPL1WZGGFUntagWCR_stack_4->GetXaxis()->SetLabelFont(42);
   hs_HPL1WZGGFUntagWCR_stack_4->GetXaxis()->SetLabelSize(0.05);
   hs_HPL1WZGGFUntagWCR_stack_4->GetXaxis()->SetTitleSize(0.05);
   hs_HPL1WZGGFUntagWCR_stack_4->GetXaxis()->SetTitleOffset(1.4);
   hs_HPL1WZGGFUntagWCR_stack_4->GetXaxis()->SetTitleFont(42);
   hs_HPL1WZGGFUntagWCR_stack_4->GetYaxis()->SetLabelFont(42);
   hs_HPL1WZGGFUntagWCR_stack_4->GetYaxis()->SetLabelSize(0.05);
   hs_HPL1WZGGFUntagWCR_stack_4->GetYaxis()->SetTitleSize(0.05);
   hs_HPL1WZGGFUntagWCR_stack_4->GetYaxis()->SetTitleOffset(1.4);
   hs_HPL1WZGGFUntagWCR_stack_4->GetYaxis()->SetTitleFont(42);
   hs_HPL1WZGGFUntagWCR_stack_4->GetZaxis()->SetLabelFont(42);
   hs_HPL1WZGGFUntagWCR_stack_4->GetZaxis()->SetLabelSize(0.05);
   hs_HPL1WZGGFUntagWCR_stack_4->GetZaxis()->SetTitleSize(0.05);
   hs_HPL1WZGGFUntagWCR_stack_4->GetZaxis()->SetTitleFont(42);
   hs_HPL1WZGGFUntagWCR->SetHistogram(hs_HPL1WZGGFUntagWCR_stack_4);
   
   
   TH1F *h_postfit_HPL1WZGGFUntagWCR_zjets_stack_1 = new TH1F("h_postfit_HPL1WZGGFUntagWCR_zjets_stack_1","h_postfit_HPL1WZGGFUntagWCR_zjets",12,0,12);
   h_postfit_HPL1WZGGFUntagWCR_zjets_stack_1->SetBinContent(4,773.7589);
   h_postfit_HPL1WZGGFUntagWCR_zjets_stack_1->SetBinError(4,78.47956);
   h_postfit_HPL1WZGGFUntagWCR_zjets_stack_1->SetEntries(1);
   h_postfit_HPL1WZGGFUntagWCR_zjets_stack_1->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   h_postfit_HPL1WZGGFUntagWCR_zjets_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   h_postfit_HPL1WZGGFUntagWCR_zjets_stack_1->SetLineColor(ci);
   h_postfit_HPL1WZGGFUntagWCR_zjets_stack_1->SetLineWidth(2);
   h_postfit_HPL1WZGGFUntagWCR_zjets_stack_1->SetMarkerStyle(20);
   h_postfit_HPL1WZGGFUntagWCR_zjets_stack_1->SetMarkerSize(1.2);
   h_postfit_HPL1WZGGFUntagWCR_zjets_stack_1->GetXaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFUntagWCR_zjets_stack_1->GetXaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFUntagWCR_zjets_stack_1->GetXaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFUntagWCR_zjets_stack_1->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WZGGFUntagWCR_zjets_stack_1->GetXaxis()->SetTitleFont(42);
   h_postfit_HPL1WZGGFUntagWCR_zjets_stack_1->GetYaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFUntagWCR_zjets_stack_1->GetYaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFUntagWCR_zjets_stack_1->GetYaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFUntagWCR_zjets_stack_1->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WZGGFUntagWCR_zjets_stack_1->GetYaxis()->SetTitleFont(42);
   h_postfit_HPL1WZGGFUntagWCR_zjets_stack_1->GetZaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFUntagWCR_zjets_stack_1->GetZaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFUntagWCR_zjets_stack_1->GetZaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFUntagWCR_zjets_stack_1->GetZaxis()->SetTitleFont(42);
   hs_HPL1WZGGFUntagWCR->Add(h_postfit_HPL1WZGGFUntagWCR_zjets_stack_1,"");
   
   TH1F *h_postfit_HPL1WZGGFUntagWCR_diboson_stack_2 = new TH1F("h_postfit_HPL1WZGGFUntagWCR_diboson_stack_2","h_postfit_HPL1WZGGFUntagWCR_diboson",12,0,12);
   h_postfit_HPL1WZGGFUntagWCR_diboson_stack_2->SetBinContent(4,1580.576);
   h_postfit_HPL1WZGGFUntagWCR_diboson_stack_2->SetBinError(4,152.9275);
   h_postfit_HPL1WZGGFUntagWCR_diboson_stack_2->SetEntries(1);
   h_postfit_HPL1WZGGFUntagWCR_diboson_stack_2->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   h_postfit_HPL1WZGGFUntagWCR_diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   h_postfit_HPL1WZGGFUntagWCR_diboson_stack_2->SetLineColor(ci);
   h_postfit_HPL1WZGGFUntagWCR_diboson_stack_2->SetLineWidth(2);
   h_postfit_HPL1WZGGFUntagWCR_diboson_stack_2->SetMarkerStyle(20);
   h_postfit_HPL1WZGGFUntagWCR_diboson_stack_2->SetMarkerSize(1.2);
   h_postfit_HPL1WZGGFUntagWCR_diboson_stack_2->GetXaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFUntagWCR_diboson_stack_2->GetXaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFUntagWCR_diboson_stack_2->GetXaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFUntagWCR_diboson_stack_2->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WZGGFUntagWCR_diboson_stack_2->GetXaxis()->SetTitleFont(42);
   h_postfit_HPL1WZGGFUntagWCR_diboson_stack_2->GetYaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFUntagWCR_diboson_stack_2->GetYaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFUntagWCR_diboson_stack_2->GetYaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFUntagWCR_diboson_stack_2->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WZGGFUntagWCR_diboson_stack_2->GetYaxis()->SetTitleFont(42);
   h_postfit_HPL1WZGGFUntagWCR_diboson_stack_2->GetZaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFUntagWCR_diboson_stack_2->GetZaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFUntagWCR_diboson_stack_2->GetZaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFUntagWCR_diboson_stack_2->GetZaxis()->SetTitleFont(42);
   hs_HPL1WZGGFUntagWCR->Add(h_postfit_HPL1WZGGFUntagWCR_diboson_stack_2,"");
   
   TH1F *h_postfit_HPL1WZGGFUntagWCR_singlet_stack_3 = new TH1F("h_postfit_HPL1WZGGFUntagWCR_singlet_stack_3","h_postfit_HPL1WZGGFUntagWCR_singlet",12,0,12);
   h_postfit_HPL1WZGGFUntagWCR_singlet_stack_3->SetBinContent(4,2164.835);
   h_postfit_HPL1WZGGFUntagWCR_singlet_stack_3->SetBinError(4,309.916);
   h_postfit_HPL1WZGGFUntagWCR_singlet_stack_3->SetEntries(1);
   h_postfit_HPL1WZGGFUntagWCR_singlet_stack_3->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   h_postfit_HPL1WZGGFUntagWCR_singlet_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   h_postfit_HPL1WZGGFUntagWCR_singlet_stack_3->SetLineColor(ci);
   h_postfit_HPL1WZGGFUntagWCR_singlet_stack_3->SetLineWidth(2);
   h_postfit_HPL1WZGGFUntagWCR_singlet_stack_3->SetMarkerStyle(20);
   h_postfit_HPL1WZGGFUntagWCR_singlet_stack_3->SetMarkerSize(1.2);
   h_postfit_HPL1WZGGFUntagWCR_singlet_stack_3->GetXaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFUntagWCR_singlet_stack_3->GetXaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFUntagWCR_singlet_stack_3->GetXaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFUntagWCR_singlet_stack_3->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WZGGFUntagWCR_singlet_stack_3->GetXaxis()->SetTitleFont(42);
   h_postfit_HPL1WZGGFUntagWCR_singlet_stack_3->GetYaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFUntagWCR_singlet_stack_3->GetYaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFUntagWCR_singlet_stack_3->GetYaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFUntagWCR_singlet_stack_3->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WZGGFUntagWCR_singlet_stack_3->GetYaxis()->SetTitleFont(42);
   h_postfit_HPL1WZGGFUntagWCR_singlet_stack_3->GetZaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFUntagWCR_singlet_stack_3->GetZaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFUntagWCR_singlet_stack_3->GetZaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFUntagWCR_singlet_stack_3->GetZaxis()->SetTitleFont(42);
   hs_HPL1WZGGFUntagWCR->Add(h_postfit_HPL1WZGGFUntagWCR_singlet_stack_3,"");
   
   TH1F *h_postfit_HPL1WZGGFUntagWCR_ttbar_stack_4 = new TH1F("h_postfit_HPL1WZGGFUntagWCR_ttbar_stack_4","h_postfit_HPL1WZGGFUntagWCR_ttbar",12,0,12);
   h_postfit_HPL1WZGGFUntagWCR_ttbar_stack_4->SetBinContent(4,14700.66);
   h_postfit_HPL1WZGGFUntagWCR_ttbar_stack_4->SetBinError(4,238.3046);
   h_postfit_HPL1WZGGFUntagWCR_ttbar_stack_4->SetEntries(1);
   h_postfit_HPL1WZGGFUntagWCR_ttbar_stack_4->SetStats(0);

   ci = TColor::GetColor("#6699ff");
   h_postfit_HPL1WZGGFUntagWCR_ttbar_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#6699ff");
   h_postfit_HPL1WZGGFUntagWCR_ttbar_stack_4->SetLineColor(ci);
   h_postfit_HPL1WZGGFUntagWCR_ttbar_stack_4->SetLineWidth(2);
   h_postfit_HPL1WZGGFUntagWCR_ttbar_stack_4->SetMarkerStyle(20);
   h_postfit_HPL1WZGGFUntagWCR_ttbar_stack_4->SetMarkerSize(1.2);
   h_postfit_HPL1WZGGFUntagWCR_ttbar_stack_4->GetXaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFUntagWCR_ttbar_stack_4->GetXaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFUntagWCR_ttbar_stack_4->GetXaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFUntagWCR_ttbar_stack_4->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WZGGFUntagWCR_ttbar_stack_4->GetXaxis()->SetTitleFont(42);
   h_postfit_HPL1WZGGFUntagWCR_ttbar_stack_4->GetYaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFUntagWCR_ttbar_stack_4->GetYaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFUntagWCR_ttbar_stack_4->GetYaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFUntagWCR_ttbar_stack_4->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WZGGFUntagWCR_ttbar_stack_4->GetYaxis()->SetTitleFont(42);
   h_postfit_HPL1WZGGFUntagWCR_ttbar_stack_4->GetZaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFUntagWCR_ttbar_stack_4->GetZaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFUntagWCR_ttbar_stack_4->GetZaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFUntagWCR_ttbar_stack_4->GetZaxis()->SetTitleFont(42);
   hs_HPL1WZGGFUntagWCR->Add(h_postfit_HPL1WZGGFUntagWCR_ttbar_stack_4,"");
   
   TH1F *h_postfit_HPL1WZGGFUntagWCR_wjets_stack_5 = new TH1F("h_postfit_HPL1WZGGFUntagWCR_wjets_stack_5","h_postfit_HPL1WZGGFUntagWCR_wjets",12,0,12);
   h_postfit_HPL1WZGGFUntagWCR_wjets_stack_5->SetBinContent(4,42870.14);
   h_postfit_HPL1WZGGFUntagWCR_wjets_stack_5->SetBinError(4,333.6529);
   h_postfit_HPL1WZGGFUntagWCR_wjets_stack_5->SetEntries(1);
   h_postfit_HPL1WZGGFUntagWCR_wjets_stack_5->SetStats(0);

   ci = TColor::GetColor("#ff9999");
   h_postfit_HPL1WZGGFUntagWCR_wjets_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#ff9999");
   h_postfit_HPL1WZGGFUntagWCR_wjets_stack_5->SetLineColor(ci);
   h_postfit_HPL1WZGGFUntagWCR_wjets_stack_5->SetLineWidth(2);
   h_postfit_HPL1WZGGFUntagWCR_wjets_stack_5->SetMarkerStyle(20);
   h_postfit_HPL1WZGGFUntagWCR_wjets_stack_5->SetMarkerSize(1.2);
   h_postfit_HPL1WZGGFUntagWCR_wjets_stack_5->GetXaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFUntagWCR_wjets_stack_5->GetXaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFUntagWCR_wjets_stack_5->GetXaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFUntagWCR_wjets_stack_5->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WZGGFUntagWCR_wjets_stack_5->GetXaxis()->SetTitleFont(42);
   h_postfit_HPL1WZGGFUntagWCR_wjets_stack_5->GetYaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFUntagWCR_wjets_stack_5->GetYaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFUntagWCR_wjets_stack_5->GetYaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFUntagWCR_wjets_stack_5->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WZGGFUntagWCR_wjets_stack_5->GetYaxis()->SetTitleFont(42);
   h_postfit_HPL1WZGGFUntagWCR_wjets_stack_5->GetZaxis()->SetLabelFont(42);
   h_postfit_HPL1WZGGFUntagWCR_wjets_stack_5->GetZaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WZGGFUntagWCR_wjets_stack_5->GetZaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WZGGFUntagWCR_wjets_stack_5->GetZaxis()->SetTitleFont(42);
   hs_HPL1WZGGFUntagWCR->Add(h_postfit_HPL1WZGGFUntagWCR_wjets_stack_5,"");
   hs_HPL1WZGGFUntagWCR->Draw("histsame");
   
   hs_LPL1WZGGFTagTCR = new THStack();
   hs_LPL1WZGGFTagTCR->SetName("hs_LPL1WZGGFTagTCR");
   hs_LPL1WZGGFTagTCR->SetTitle("hs_LPL1WZGGFTagTCR");
   
   TH1F *hs_LPL1WZGGFTagTCR_stack_5 = new TH1F("hs_LPL1WZGGFTagTCR_stack_5","hs_LPL1WZGGFTagTCR",12,0,12);
   hs_LPL1WZGGFTagTCR_stack_5->SetMinimum(0.7083684);
   hs_LPL1WZGGFTagTCR_stack_5->SetMaximum(2833.473);
   hs_LPL1WZGGFTagTCR_stack_5->SetDirectory(0);
   hs_LPL1WZGGFTagTCR_stack_5->SetStats(0);
   hs_LPL1WZGGFTagTCR_stack_5->SetLineWidth(2);
   hs_LPL1WZGGFTagTCR_stack_5->SetMarkerStyle(20);
   hs_LPL1WZGGFTagTCR_stack_5->SetMarkerSize(1.2);
   hs_LPL1WZGGFTagTCR_stack_5->GetXaxis()->SetLabelFont(42);
   hs_LPL1WZGGFTagTCR_stack_5->GetXaxis()->SetLabelSize(0.05);
   hs_LPL1WZGGFTagTCR_stack_5->GetXaxis()->SetTitleSize(0.05);
   hs_LPL1WZGGFTagTCR_stack_5->GetXaxis()->SetTitleOffset(1.4);
   hs_LPL1WZGGFTagTCR_stack_5->GetXaxis()->SetTitleFont(42);
   hs_LPL1WZGGFTagTCR_stack_5->GetYaxis()->SetLabelFont(42);
   hs_LPL1WZGGFTagTCR_stack_5->GetYaxis()->SetLabelSize(0.05);
   hs_LPL1WZGGFTagTCR_stack_5->GetYaxis()->SetTitleSize(0.05);
   hs_LPL1WZGGFTagTCR_stack_5->GetYaxis()->SetTitleOffset(1.4);
   hs_LPL1WZGGFTagTCR_stack_5->GetYaxis()->SetTitleFont(42);
   hs_LPL1WZGGFTagTCR_stack_5->GetZaxis()->SetLabelFont(42);
   hs_LPL1WZGGFTagTCR_stack_5->GetZaxis()->SetLabelSize(0.05);
   hs_LPL1WZGGFTagTCR_stack_5->GetZaxis()->SetTitleSize(0.05);
   hs_LPL1WZGGFTagTCR_stack_5->GetZaxis()->SetTitleFont(42);
   hs_LPL1WZGGFTagTCR->SetHistogram(hs_LPL1WZGGFTagTCR_stack_5);
   
   
   TH1F *h_postfit_LPL1WZGGFTagTCR_zjets_stack_1 = new TH1F("h_postfit_LPL1WZGGFTagTCR_zjets_stack_1","h_postfit_LPL1WZGGFTagTCR_zjets",12,0,12);
   h_postfit_LPL1WZGGFTagTCR_zjets_stack_1->SetBinContent(5,1.934029);
   h_postfit_LPL1WZGGFTagTCR_zjets_stack_1->SetBinError(5,0.1975039);
   h_postfit_LPL1WZGGFTagTCR_zjets_stack_1->SetEntries(1);
   h_postfit_LPL1WZGGFTagTCR_zjets_stack_1->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   h_postfit_LPL1WZGGFTagTCR_zjets_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   h_postfit_LPL1WZGGFTagTCR_zjets_stack_1->SetLineColor(ci);
   h_postfit_LPL1WZGGFTagTCR_zjets_stack_1->SetLineWidth(2);
   h_postfit_LPL1WZGGFTagTCR_zjets_stack_1->SetMarkerStyle(20);
   h_postfit_LPL1WZGGFTagTCR_zjets_stack_1->SetMarkerSize(1.2);
   h_postfit_LPL1WZGGFTagTCR_zjets_stack_1->GetXaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFTagTCR_zjets_stack_1->GetXaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFTagTCR_zjets_stack_1->GetXaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFTagTCR_zjets_stack_1->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WZGGFTagTCR_zjets_stack_1->GetXaxis()->SetTitleFont(42);
   h_postfit_LPL1WZGGFTagTCR_zjets_stack_1->GetYaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFTagTCR_zjets_stack_1->GetYaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFTagTCR_zjets_stack_1->GetYaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFTagTCR_zjets_stack_1->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WZGGFTagTCR_zjets_stack_1->GetYaxis()->SetTitleFont(42);
   h_postfit_LPL1WZGGFTagTCR_zjets_stack_1->GetZaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFTagTCR_zjets_stack_1->GetZaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFTagTCR_zjets_stack_1->GetZaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFTagTCR_zjets_stack_1->GetZaxis()->SetTitleFont(42);
   hs_LPL1WZGGFTagTCR->Add(h_postfit_LPL1WZGGFTagTCR_zjets_stack_1,"");
   
   TH1F *h_postfit_LPL1WZGGFTagTCR_diboson_stack_2 = new TH1F("h_postfit_LPL1WZGGFTagTCR_diboson_stack_2","h_postfit_LPL1WZGGFTagTCR_diboson",12,0,12);
   h_postfit_LPL1WZGGFTagTCR_diboson_stack_2->SetBinContent(5,9.031035);
   h_postfit_LPL1WZGGFTagTCR_diboson_stack_2->SetBinError(5,1.174021);
   h_postfit_LPL1WZGGFTagTCR_diboson_stack_2->SetEntries(1);
   h_postfit_LPL1WZGGFTagTCR_diboson_stack_2->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   h_postfit_LPL1WZGGFTagTCR_diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   h_postfit_LPL1WZGGFTagTCR_diboson_stack_2->SetLineColor(ci);
   h_postfit_LPL1WZGGFTagTCR_diboson_stack_2->SetLineWidth(2);
   h_postfit_LPL1WZGGFTagTCR_diboson_stack_2->SetMarkerStyle(20);
   h_postfit_LPL1WZGGFTagTCR_diboson_stack_2->SetMarkerSize(1.2);
   h_postfit_LPL1WZGGFTagTCR_diboson_stack_2->GetXaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFTagTCR_diboson_stack_2->GetXaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFTagTCR_diboson_stack_2->GetXaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFTagTCR_diboson_stack_2->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WZGGFTagTCR_diboson_stack_2->GetXaxis()->SetTitleFont(42);
   h_postfit_LPL1WZGGFTagTCR_diboson_stack_2->GetYaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFTagTCR_diboson_stack_2->GetYaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFTagTCR_diboson_stack_2->GetYaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFTagTCR_diboson_stack_2->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WZGGFTagTCR_diboson_stack_2->GetYaxis()->SetTitleFont(42);
   h_postfit_LPL1WZGGFTagTCR_diboson_stack_2->GetZaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFTagTCR_diboson_stack_2->GetZaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFTagTCR_diboson_stack_2->GetZaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFTagTCR_diboson_stack_2->GetZaxis()->SetTitleFont(42);
   hs_LPL1WZGGFTagTCR->Add(h_postfit_LPL1WZGGFTagTCR_diboson_stack_2,"");
   
   TH1F *h_postfit_LPL1WZGGFTagTCR_wjets_stack_3 = new TH1F("h_postfit_LPL1WZGGFTagTCR_wjets_stack_3","h_postfit_LPL1WZGGFTagTCR_wjets",12,0,12);
   h_postfit_LPL1WZGGFTagTCR_wjets_stack_3->SetBinContent(5,93.91937);
   h_postfit_LPL1WZGGFTagTCR_wjets_stack_3->SetBinError(5,6.950987);
   h_postfit_LPL1WZGGFTagTCR_wjets_stack_3->SetEntries(1);
   h_postfit_LPL1WZGGFTagTCR_wjets_stack_3->SetStats(0);

   ci = TColor::GetColor("#ff9999");
   h_postfit_LPL1WZGGFTagTCR_wjets_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff9999");
   h_postfit_LPL1WZGGFTagTCR_wjets_stack_3->SetLineColor(ci);
   h_postfit_LPL1WZGGFTagTCR_wjets_stack_3->SetLineWidth(2);
   h_postfit_LPL1WZGGFTagTCR_wjets_stack_3->SetMarkerStyle(20);
   h_postfit_LPL1WZGGFTagTCR_wjets_stack_3->SetMarkerSize(1.2);
   h_postfit_LPL1WZGGFTagTCR_wjets_stack_3->GetXaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFTagTCR_wjets_stack_3->GetXaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFTagTCR_wjets_stack_3->GetXaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFTagTCR_wjets_stack_3->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WZGGFTagTCR_wjets_stack_3->GetXaxis()->SetTitleFont(42);
   h_postfit_LPL1WZGGFTagTCR_wjets_stack_3->GetYaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFTagTCR_wjets_stack_3->GetYaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFTagTCR_wjets_stack_3->GetYaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFTagTCR_wjets_stack_3->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WZGGFTagTCR_wjets_stack_3->GetYaxis()->SetTitleFont(42);
   h_postfit_LPL1WZGGFTagTCR_wjets_stack_3->GetZaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFTagTCR_wjets_stack_3->GetZaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFTagTCR_wjets_stack_3->GetZaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFTagTCR_wjets_stack_3->GetZaxis()->SetTitleFont(42);
   hs_LPL1WZGGFTagTCR->Add(h_postfit_LPL1WZGGFTagTCR_wjets_stack_3,"");
   
   TH1F *h_postfit_LPL1WZGGFTagTCR_singlet_stack_4 = new TH1F("h_postfit_LPL1WZGGFTagTCR_singlet_stack_4","h_postfit_LPL1WZGGFTagTCR_singlet",12,0,12);
   h_postfit_LPL1WZGGFTagTCR_singlet_stack_4->SetBinContent(5,142.8352);
   h_postfit_LPL1WZGGFTagTCR_singlet_stack_4->SetBinError(5,23.58587);
   h_postfit_LPL1WZGGFTagTCR_singlet_stack_4->SetEntries(1);
   h_postfit_LPL1WZGGFTagTCR_singlet_stack_4->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   h_postfit_LPL1WZGGFTagTCR_singlet_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   h_postfit_LPL1WZGGFTagTCR_singlet_stack_4->SetLineColor(ci);
   h_postfit_LPL1WZGGFTagTCR_singlet_stack_4->SetLineWidth(2);
   h_postfit_LPL1WZGGFTagTCR_singlet_stack_4->SetMarkerStyle(20);
   h_postfit_LPL1WZGGFTagTCR_singlet_stack_4->SetMarkerSize(1.2);
   h_postfit_LPL1WZGGFTagTCR_singlet_stack_4->GetXaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFTagTCR_singlet_stack_4->GetXaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFTagTCR_singlet_stack_4->GetXaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFTagTCR_singlet_stack_4->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WZGGFTagTCR_singlet_stack_4->GetXaxis()->SetTitleFont(42);
   h_postfit_LPL1WZGGFTagTCR_singlet_stack_4->GetYaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFTagTCR_singlet_stack_4->GetYaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFTagTCR_singlet_stack_4->GetYaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFTagTCR_singlet_stack_4->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WZGGFTagTCR_singlet_stack_4->GetYaxis()->SetTitleFont(42);
   h_postfit_LPL1WZGGFTagTCR_singlet_stack_4->GetZaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFTagTCR_singlet_stack_4->GetZaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFTagTCR_singlet_stack_4->GetZaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFTagTCR_singlet_stack_4->GetZaxis()->SetTitleFont(42);
   hs_LPL1WZGGFTagTCR->Add(h_postfit_LPL1WZGGFTagTCR_singlet_stack_4,"");
   
   TH1F *h_postfit_LPL1WZGGFTagTCR_ttbar_stack_5 = new TH1F("h_postfit_LPL1WZGGFTagTCR_ttbar_stack_5","h_postfit_LPL1WZGGFTagTCR_ttbar",12,0,12);
   h_postfit_LPL1WZGGFTagTCR_ttbar_stack_5->SetBinContent(5,1523.201);
   h_postfit_LPL1WZGGFTagTCR_ttbar_stack_5->SetBinError(5,46.99433);
   h_postfit_LPL1WZGGFTagTCR_ttbar_stack_5->SetEntries(1);
   h_postfit_LPL1WZGGFTagTCR_ttbar_stack_5->SetStats(0);

   ci = TColor::GetColor("#6699ff");
   h_postfit_LPL1WZGGFTagTCR_ttbar_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#6699ff");
   h_postfit_LPL1WZGGFTagTCR_ttbar_stack_5->SetLineColor(ci);
   h_postfit_LPL1WZGGFTagTCR_ttbar_stack_5->SetLineWidth(2);
   h_postfit_LPL1WZGGFTagTCR_ttbar_stack_5->SetMarkerStyle(20);
   h_postfit_LPL1WZGGFTagTCR_ttbar_stack_5->SetMarkerSize(1.2);
   h_postfit_LPL1WZGGFTagTCR_ttbar_stack_5->GetXaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFTagTCR_ttbar_stack_5->GetXaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFTagTCR_ttbar_stack_5->GetXaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFTagTCR_ttbar_stack_5->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WZGGFTagTCR_ttbar_stack_5->GetXaxis()->SetTitleFont(42);
   h_postfit_LPL1WZGGFTagTCR_ttbar_stack_5->GetYaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFTagTCR_ttbar_stack_5->GetYaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFTagTCR_ttbar_stack_5->GetYaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFTagTCR_ttbar_stack_5->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WZGGFTagTCR_ttbar_stack_5->GetYaxis()->SetTitleFont(42);
   h_postfit_LPL1WZGGFTagTCR_ttbar_stack_5->GetZaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFTagTCR_ttbar_stack_5->GetZaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFTagTCR_ttbar_stack_5->GetZaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFTagTCR_ttbar_stack_5->GetZaxis()->SetTitleFont(42);
   hs_LPL1WZGGFTagTCR->Add(h_postfit_LPL1WZGGFTagTCR_ttbar_stack_5,"");
   hs_LPL1WZGGFTagTCR->Draw("histsame");
   
   hs_LPL1WZGGFTagWCR = new THStack();
   hs_LPL1WZGGFTagWCR->SetName("hs_LPL1WZGGFTagWCR");
   hs_LPL1WZGGFTagWCR->SetTitle("hs_LPL1WZGGFTagWCR");
   
   TH1F *hs_LPL1WZGGFTagWCR_stack_6 = new TH1F("hs_LPL1WZGGFTagWCR_stack_6","hs_LPL1WZGGFTagWCR",12,0,12);
   hs_LPL1WZGGFTagWCR_stack_6->SetMinimum(1.534017);
   hs_LPL1WZGGFTagWCR_stack_6->SetMaximum(6136.07);
   hs_LPL1WZGGFTagWCR_stack_6->SetDirectory(0);
   hs_LPL1WZGGFTagWCR_stack_6->SetStats(0);
   hs_LPL1WZGGFTagWCR_stack_6->SetLineWidth(2);
   hs_LPL1WZGGFTagWCR_stack_6->SetMarkerStyle(20);
   hs_LPL1WZGGFTagWCR_stack_6->SetMarkerSize(1.2);
   hs_LPL1WZGGFTagWCR_stack_6->GetXaxis()->SetLabelFont(42);
   hs_LPL1WZGGFTagWCR_stack_6->GetXaxis()->SetLabelSize(0.05);
   hs_LPL1WZGGFTagWCR_stack_6->GetXaxis()->SetTitleSize(0.05);
   hs_LPL1WZGGFTagWCR_stack_6->GetXaxis()->SetTitleOffset(1.4);
   hs_LPL1WZGGFTagWCR_stack_6->GetXaxis()->SetTitleFont(42);
   hs_LPL1WZGGFTagWCR_stack_6->GetYaxis()->SetLabelFont(42);
   hs_LPL1WZGGFTagWCR_stack_6->GetYaxis()->SetLabelSize(0.05);
   hs_LPL1WZGGFTagWCR_stack_6->GetYaxis()->SetTitleSize(0.05);
   hs_LPL1WZGGFTagWCR_stack_6->GetYaxis()->SetTitleOffset(1.4);
   hs_LPL1WZGGFTagWCR_stack_6->GetYaxis()->SetTitleFont(42);
   hs_LPL1WZGGFTagWCR_stack_6->GetZaxis()->SetLabelFont(42);
   hs_LPL1WZGGFTagWCR_stack_6->GetZaxis()->SetLabelSize(0.05);
   hs_LPL1WZGGFTagWCR_stack_6->GetZaxis()->SetTitleSize(0.05);
   hs_LPL1WZGGFTagWCR_stack_6->GetZaxis()->SetTitleFont(42);
   hs_LPL1WZGGFTagWCR->SetHistogram(hs_LPL1WZGGFTagWCR_stack_6);
   
   
   TH1F *h_postfit_LPL1WZGGFTagWCR_zjets_stack_1 = new TH1F("h_postfit_LPL1WZGGFTagWCR_zjets_stack_1","h_postfit_LPL1WZGGFTagWCR_zjets",12,0,12);
   h_postfit_LPL1WZGGFTagWCR_zjets_stack_1->SetBinContent(6,23.17955);
   h_postfit_LPL1WZGGFTagWCR_zjets_stack_1->SetBinError(6,2.350934);
   h_postfit_LPL1WZGGFTagWCR_zjets_stack_1->SetEntries(1);
   h_postfit_LPL1WZGGFTagWCR_zjets_stack_1->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   h_postfit_LPL1WZGGFTagWCR_zjets_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   h_postfit_LPL1WZGGFTagWCR_zjets_stack_1->SetLineColor(ci);
   h_postfit_LPL1WZGGFTagWCR_zjets_stack_1->SetLineWidth(2);
   h_postfit_LPL1WZGGFTagWCR_zjets_stack_1->SetMarkerStyle(20);
   h_postfit_LPL1WZGGFTagWCR_zjets_stack_1->SetMarkerSize(1.2);
   h_postfit_LPL1WZGGFTagWCR_zjets_stack_1->GetXaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFTagWCR_zjets_stack_1->GetXaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFTagWCR_zjets_stack_1->GetXaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFTagWCR_zjets_stack_1->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WZGGFTagWCR_zjets_stack_1->GetXaxis()->SetTitleFont(42);
   h_postfit_LPL1WZGGFTagWCR_zjets_stack_1->GetYaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFTagWCR_zjets_stack_1->GetYaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFTagWCR_zjets_stack_1->GetYaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFTagWCR_zjets_stack_1->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WZGGFTagWCR_zjets_stack_1->GetYaxis()->SetTitleFont(42);
   h_postfit_LPL1WZGGFTagWCR_zjets_stack_1->GetZaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFTagWCR_zjets_stack_1->GetZaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFTagWCR_zjets_stack_1->GetZaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFTagWCR_zjets_stack_1->GetZaxis()->SetTitleFont(42);
   hs_LPL1WZGGFTagWCR->Add(h_postfit_LPL1WZGGFTagWCR_zjets_stack_1,"");
   
   TH1F *h_postfit_LPL1WZGGFTagWCR_diboson_stack_2 = new TH1F("h_postfit_LPL1WZGGFTagWCR_diboson_stack_2","h_postfit_LPL1WZGGFTagWCR_diboson",12,0,12);
   h_postfit_LPL1WZGGFTagWCR_diboson_stack_2->SetBinContent(6,49.70498);
   h_postfit_LPL1WZGGFTagWCR_diboson_stack_2->SetBinError(6,7.188008);
   h_postfit_LPL1WZGGFTagWCR_diboson_stack_2->SetEntries(1);
   h_postfit_LPL1WZGGFTagWCR_diboson_stack_2->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   h_postfit_LPL1WZGGFTagWCR_diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   h_postfit_LPL1WZGGFTagWCR_diboson_stack_2->SetLineColor(ci);
   h_postfit_LPL1WZGGFTagWCR_diboson_stack_2->SetLineWidth(2);
   h_postfit_LPL1WZGGFTagWCR_diboson_stack_2->SetMarkerStyle(20);
   h_postfit_LPL1WZGGFTagWCR_diboson_stack_2->SetMarkerSize(1.2);
   h_postfit_LPL1WZGGFTagWCR_diboson_stack_2->GetXaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFTagWCR_diboson_stack_2->GetXaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFTagWCR_diboson_stack_2->GetXaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFTagWCR_diboson_stack_2->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WZGGFTagWCR_diboson_stack_2->GetXaxis()->SetTitleFont(42);
   h_postfit_LPL1WZGGFTagWCR_diboson_stack_2->GetYaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFTagWCR_diboson_stack_2->GetYaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFTagWCR_diboson_stack_2->GetYaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFTagWCR_diboson_stack_2->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WZGGFTagWCR_diboson_stack_2->GetYaxis()->SetTitleFont(42);
   h_postfit_LPL1WZGGFTagWCR_diboson_stack_2->GetZaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFTagWCR_diboson_stack_2->GetZaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFTagWCR_diboson_stack_2->GetZaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFTagWCR_diboson_stack_2->GetZaxis()->SetTitleFont(42);
   hs_LPL1WZGGFTagWCR->Add(h_postfit_LPL1WZGGFTagWCR_diboson_stack_2,"");
   
   TH1F *h_postfit_LPL1WZGGFTagWCR_singlet_stack_3 = new TH1F("h_postfit_LPL1WZGGFTagWCR_singlet_stack_3","h_postfit_LPL1WZGGFTagWCR_singlet",12,0,12);
   h_postfit_LPL1WZGGFTagWCR_singlet_stack_3->SetBinContent(6,447.3956);
   h_postfit_LPL1WZGGFTagWCR_singlet_stack_3->SetBinError(6,72.34492);
   h_postfit_LPL1WZGGFTagWCR_singlet_stack_3->SetEntries(1);
   h_postfit_LPL1WZGGFTagWCR_singlet_stack_3->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   h_postfit_LPL1WZGGFTagWCR_singlet_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   h_postfit_LPL1WZGGFTagWCR_singlet_stack_3->SetLineColor(ci);
   h_postfit_LPL1WZGGFTagWCR_singlet_stack_3->SetLineWidth(2);
   h_postfit_LPL1WZGGFTagWCR_singlet_stack_3->SetMarkerStyle(20);
   h_postfit_LPL1WZGGFTagWCR_singlet_stack_3->SetMarkerSize(1.2);
   h_postfit_LPL1WZGGFTagWCR_singlet_stack_3->GetXaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFTagWCR_singlet_stack_3->GetXaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFTagWCR_singlet_stack_3->GetXaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFTagWCR_singlet_stack_3->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WZGGFTagWCR_singlet_stack_3->GetXaxis()->SetTitleFont(42);
   h_postfit_LPL1WZGGFTagWCR_singlet_stack_3->GetYaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFTagWCR_singlet_stack_3->GetYaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFTagWCR_singlet_stack_3->GetYaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFTagWCR_singlet_stack_3->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WZGGFTagWCR_singlet_stack_3->GetYaxis()->SetTitleFont(42);
   h_postfit_LPL1WZGGFTagWCR_singlet_stack_3->GetZaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFTagWCR_singlet_stack_3->GetZaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFTagWCR_singlet_stack_3->GetZaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFTagWCR_singlet_stack_3->GetZaxis()->SetTitleFont(42);
   hs_LPL1WZGGFTagWCR->Add(h_postfit_LPL1WZGGFTagWCR_singlet_stack_3,"");
   
   TH1F *h_postfit_LPL1WZGGFTagWCR_wjets_stack_4 = new TH1F("h_postfit_LPL1WZGGFTagWCR_wjets_stack_4","h_postfit_LPL1WZGGFTagWCR_wjets",12,0,12);
   h_postfit_LPL1WZGGFTagWCR_wjets_stack_4->SetBinContent(6,1216.737);
   h_postfit_LPL1WZGGFTagWCR_wjets_stack_4->SetBinError(6,85.77798);
   h_postfit_LPL1WZGGFTagWCR_wjets_stack_4->SetEntries(1);
   h_postfit_LPL1WZGGFTagWCR_wjets_stack_4->SetStats(0);

   ci = TColor::GetColor("#ff9999");
   h_postfit_LPL1WZGGFTagWCR_wjets_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff9999");
   h_postfit_LPL1WZGGFTagWCR_wjets_stack_4->SetLineColor(ci);
   h_postfit_LPL1WZGGFTagWCR_wjets_stack_4->SetLineWidth(2);
   h_postfit_LPL1WZGGFTagWCR_wjets_stack_4->SetMarkerStyle(20);
   h_postfit_LPL1WZGGFTagWCR_wjets_stack_4->SetMarkerSize(1.2);
   h_postfit_LPL1WZGGFTagWCR_wjets_stack_4->GetXaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFTagWCR_wjets_stack_4->GetXaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFTagWCR_wjets_stack_4->GetXaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFTagWCR_wjets_stack_4->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WZGGFTagWCR_wjets_stack_4->GetXaxis()->SetTitleFont(42);
   h_postfit_LPL1WZGGFTagWCR_wjets_stack_4->GetYaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFTagWCR_wjets_stack_4->GetYaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFTagWCR_wjets_stack_4->GetYaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFTagWCR_wjets_stack_4->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WZGGFTagWCR_wjets_stack_4->GetYaxis()->SetTitleFont(42);
   h_postfit_LPL1WZGGFTagWCR_wjets_stack_4->GetZaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFTagWCR_wjets_stack_4->GetZaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFTagWCR_wjets_stack_4->GetZaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFTagWCR_wjets_stack_4->GetZaxis()->SetTitleFont(42);
   hs_LPL1WZGGFTagWCR->Add(h_postfit_LPL1WZGGFTagWCR_wjets_stack_4,"");
   
   TH1F *h_postfit_LPL1WZGGFTagWCR_ttbar_stack_5 = new TH1F("h_postfit_LPL1WZGGFTagWCR_ttbar_stack_5","h_postfit_LPL1WZGGFTagWCR_ttbar",12,0,12);
   h_postfit_LPL1WZGGFTagWCR_ttbar_stack_5->SetBinContent(6,2098.027);
   h_postfit_LPL1WZGGFTagWCR_ttbar_stack_5->SetBinError(6,70.00398);
   h_postfit_LPL1WZGGFTagWCR_ttbar_stack_5->SetEntries(1);
   h_postfit_LPL1WZGGFTagWCR_ttbar_stack_5->SetStats(0);

   ci = TColor::GetColor("#6699ff");
   h_postfit_LPL1WZGGFTagWCR_ttbar_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#6699ff");
   h_postfit_LPL1WZGGFTagWCR_ttbar_stack_5->SetLineColor(ci);
   h_postfit_LPL1WZGGFTagWCR_ttbar_stack_5->SetLineWidth(2);
   h_postfit_LPL1WZGGFTagWCR_ttbar_stack_5->SetMarkerStyle(20);
   h_postfit_LPL1WZGGFTagWCR_ttbar_stack_5->SetMarkerSize(1.2);
   h_postfit_LPL1WZGGFTagWCR_ttbar_stack_5->GetXaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFTagWCR_ttbar_stack_5->GetXaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFTagWCR_ttbar_stack_5->GetXaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFTagWCR_ttbar_stack_5->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WZGGFTagWCR_ttbar_stack_5->GetXaxis()->SetTitleFont(42);
   h_postfit_LPL1WZGGFTagWCR_ttbar_stack_5->GetYaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFTagWCR_ttbar_stack_5->GetYaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFTagWCR_ttbar_stack_5->GetYaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFTagWCR_ttbar_stack_5->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WZGGFTagWCR_ttbar_stack_5->GetYaxis()->SetTitleFont(42);
   h_postfit_LPL1WZGGFTagWCR_ttbar_stack_5->GetZaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFTagWCR_ttbar_stack_5->GetZaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFTagWCR_ttbar_stack_5->GetZaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFTagWCR_ttbar_stack_5->GetZaxis()->SetTitleFont(42);
   hs_LPL1WZGGFTagWCR->Add(h_postfit_LPL1WZGGFTagWCR_ttbar_stack_5,"");
   hs_LPL1WZGGFTagWCR->Draw("histsame");
   
   hs_LPL1WZGGFUntagTCR = new THStack();
   hs_LPL1WZGGFUntagTCR->SetName("hs_LPL1WZGGFUntagTCR");
   hs_LPL1WZGGFUntagTCR->SetTitle("hs_LPL1WZGGFUntagTCR");
   
   TH1F *hs_LPL1WZGGFUntagTCR_stack_7 = new TH1F("hs_LPL1WZGGFUntagTCR_stack_7","hs_LPL1WZGGFUntagTCR",12,0,12);
   hs_LPL1WZGGFUntagTCR_stack_7->SetMinimum(15.57501);
   hs_LPL1WZGGFUntagTCR_stack_7->SetMaximum(62300.03);
   hs_LPL1WZGGFUntagTCR_stack_7->SetDirectory(0);
   hs_LPL1WZGGFUntagTCR_stack_7->SetStats(0);
   hs_LPL1WZGGFUntagTCR_stack_7->SetLineWidth(2);
   hs_LPL1WZGGFUntagTCR_stack_7->SetMarkerStyle(20);
   hs_LPL1WZGGFUntagTCR_stack_7->SetMarkerSize(1.2);
   hs_LPL1WZGGFUntagTCR_stack_7->GetXaxis()->SetLabelFont(42);
   hs_LPL1WZGGFUntagTCR_stack_7->GetXaxis()->SetLabelSize(0.05);
   hs_LPL1WZGGFUntagTCR_stack_7->GetXaxis()->SetTitleSize(0.05);
   hs_LPL1WZGGFUntagTCR_stack_7->GetXaxis()->SetTitleOffset(1.4);
   hs_LPL1WZGGFUntagTCR_stack_7->GetXaxis()->SetTitleFont(42);
   hs_LPL1WZGGFUntagTCR_stack_7->GetYaxis()->SetLabelFont(42);
   hs_LPL1WZGGFUntagTCR_stack_7->GetYaxis()->SetLabelSize(0.05);
   hs_LPL1WZGGFUntagTCR_stack_7->GetYaxis()->SetTitleSize(0.05);
   hs_LPL1WZGGFUntagTCR_stack_7->GetYaxis()->SetTitleOffset(1.4);
   hs_LPL1WZGGFUntagTCR_stack_7->GetYaxis()->SetTitleFont(42);
   hs_LPL1WZGGFUntagTCR_stack_7->GetZaxis()->SetLabelFont(42);
   hs_LPL1WZGGFUntagTCR_stack_7->GetZaxis()->SetLabelSize(0.05);
   hs_LPL1WZGGFUntagTCR_stack_7->GetZaxis()->SetTitleSize(0.05);
   hs_LPL1WZGGFUntagTCR_stack_7->GetZaxis()->SetTitleFont(42);
   hs_LPL1WZGGFUntagTCR->SetHistogram(hs_LPL1WZGGFUntagTCR_stack_7);
   
   
   TH1F *h_postfit_LPL1WZGGFUntagTCR_zjets_stack_1 = new TH1F("h_postfit_LPL1WZGGFUntagTCR_zjets_stack_1","h_postfit_LPL1WZGGFUntagTCR_zjets",12,0,12);
   h_postfit_LPL1WZGGFUntagTCR_zjets_stack_1->SetBinContent(7,156.9647);
   h_postfit_LPL1WZGGFUntagTCR_zjets_stack_1->SetBinError(7,15.91599);
   h_postfit_LPL1WZGGFUntagTCR_zjets_stack_1->SetEntries(1);
   h_postfit_LPL1WZGGFUntagTCR_zjets_stack_1->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   h_postfit_LPL1WZGGFUntagTCR_zjets_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   h_postfit_LPL1WZGGFUntagTCR_zjets_stack_1->SetLineColor(ci);
   h_postfit_LPL1WZGGFUntagTCR_zjets_stack_1->SetLineWidth(2);
   h_postfit_LPL1WZGGFUntagTCR_zjets_stack_1->SetMarkerStyle(20);
   h_postfit_LPL1WZGGFUntagTCR_zjets_stack_1->SetMarkerSize(1.2);
   h_postfit_LPL1WZGGFUntagTCR_zjets_stack_1->GetXaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFUntagTCR_zjets_stack_1->GetXaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFUntagTCR_zjets_stack_1->GetXaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFUntagTCR_zjets_stack_1->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WZGGFUntagTCR_zjets_stack_1->GetXaxis()->SetTitleFont(42);
   h_postfit_LPL1WZGGFUntagTCR_zjets_stack_1->GetYaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFUntagTCR_zjets_stack_1->GetYaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFUntagTCR_zjets_stack_1->GetYaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFUntagTCR_zjets_stack_1->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WZGGFUntagTCR_zjets_stack_1->GetYaxis()->SetTitleFont(42);
   h_postfit_LPL1WZGGFUntagTCR_zjets_stack_1->GetZaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFUntagTCR_zjets_stack_1->GetZaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFUntagTCR_zjets_stack_1->GetZaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFUntagTCR_zjets_stack_1->GetZaxis()->SetTitleFont(42);
   hs_LPL1WZGGFUntagTCR->Add(h_postfit_LPL1WZGGFUntagTCR_zjets_stack_1,"");
   
   TH1F *h_postfit_LPL1WZGGFUntagTCR_diboson_stack_2 = new TH1F("h_postfit_LPL1WZGGFUntagTCR_diboson_stack_2","h_postfit_LPL1WZGGFUntagTCR_diboson",12,0,12);
   h_postfit_LPL1WZGGFUntagTCR_diboson_stack_2->SetBinContent(7,342.0522);
   h_postfit_LPL1WZGGFUntagTCR_diboson_stack_2->SetBinError(7,35.63875);
   h_postfit_LPL1WZGGFUntagTCR_diboson_stack_2->SetEntries(1);
   h_postfit_LPL1WZGGFUntagTCR_diboson_stack_2->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   h_postfit_LPL1WZGGFUntagTCR_diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   h_postfit_LPL1WZGGFUntagTCR_diboson_stack_2->SetLineColor(ci);
   h_postfit_LPL1WZGGFUntagTCR_diboson_stack_2->SetLineWidth(2);
   h_postfit_LPL1WZGGFUntagTCR_diboson_stack_2->SetMarkerStyle(20);
   h_postfit_LPL1WZGGFUntagTCR_diboson_stack_2->SetMarkerSize(1.2);
   h_postfit_LPL1WZGGFUntagTCR_diboson_stack_2->GetXaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFUntagTCR_diboson_stack_2->GetXaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFUntagTCR_diboson_stack_2->GetXaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFUntagTCR_diboson_stack_2->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WZGGFUntagTCR_diboson_stack_2->GetXaxis()->SetTitleFont(42);
   h_postfit_LPL1WZGGFUntagTCR_diboson_stack_2->GetYaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFUntagTCR_diboson_stack_2->GetYaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFUntagTCR_diboson_stack_2->GetYaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFUntagTCR_diboson_stack_2->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WZGGFUntagTCR_diboson_stack_2->GetYaxis()->SetTitleFont(42);
   h_postfit_LPL1WZGGFUntagTCR_diboson_stack_2->GetZaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFUntagTCR_diboson_stack_2->GetZaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFUntagTCR_diboson_stack_2->GetZaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFUntagTCR_diboson_stack_2->GetZaxis()->SetTitleFont(42);
   hs_LPL1WZGGFUntagTCR->Add(h_postfit_LPL1WZGGFUntagTCR_diboson_stack_2,"");
   
   TH1F *h_postfit_LPL1WZGGFUntagTCR_singlet_stack_3 = new TH1F("h_postfit_LPL1WZGGFUntagTCR_singlet_stack_3","h_postfit_LPL1WZGGFUntagTCR_singlet",12,0,12);
   h_postfit_LPL1WZGGFUntagTCR_singlet_stack_3->SetBinContent(7,2741.352);
   h_postfit_LPL1WZGGFUntagTCR_singlet_stack_3->SetBinError(7,388.2926);
   h_postfit_LPL1WZGGFUntagTCR_singlet_stack_3->SetEntries(1);
   h_postfit_LPL1WZGGFUntagTCR_singlet_stack_3->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   h_postfit_LPL1WZGGFUntagTCR_singlet_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   h_postfit_LPL1WZGGFUntagTCR_singlet_stack_3->SetLineColor(ci);
   h_postfit_LPL1WZGGFUntagTCR_singlet_stack_3->SetLineWidth(2);
   h_postfit_LPL1WZGGFUntagTCR_singlet_stack_3->SetMarkerStyle(20);
   h_postfit_LPL1WZGGFUntagTCR_singlet_stack_3->SetMarkerSize(1.2);
   h_postfit_LPL1WZGGFUntagTCR_singlet_stack_3->GetXaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFUntagTCR_singlet_stack_3->GetXaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFUntagTCR_singlet_stack_3->GetXaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFUntagTCR_singlet_stack_3->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WZGGFUntagTCR_singlet_stack_3->GetXaxis()->SetTitleFont(42);
   h_postfit_LPL1WZGGFUntagTCR_singlet_stack_3->GetYaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFUntagTCR_singlet_stack_3->GetYaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFUntagTCR_singlet_stack_3->GetYaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFUntagTCR_singlet_stack_3->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WZGGFUntagTCR_singlet_stack_3->GetYaxis()->SetTitleFont(42);
   h_postfit_LPL1WZGGFUntagTCR_singlet_stack_3->GetZaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFUntagTCR_singlet_stack_3->GetZaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFUntagTCR_singlet_stack_3->GetZaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFUntagTCR_singlet_stack_3->GetZaxis()->SetTitleFont(42);
   hs_LPL1WZGGFUntagTCR->Add(h_postfit_LPL1WZGGFUntagTCR_singlet_stack_3,"");
   
   TH1F *h_postfit_LPL1WZGGFUntagTCR_wjets_stack_4 = new TH1F("h_postfit_LPL1WZGGFUntagTCR_wjets_stack_4","h_postfit_LPL1WZGGFUntagTCR_wjets",12,0,12);
   h_postfit_LPL1WZGGFUntagTCR_wjets_stack_4->SetBinContent(7,5561.576);
   h_postfit_LPL1WZGGFUntagTCR_wjets_stack_4->SetBinError(7,27.91032);
   h_postfit_LPL1WZGGFUntagTCR_wjets_stack_4->SetEntries(1);
   h_postfit_LPL1WZGGFUntagTCR_wjets_stack_4->SetStats(0);

   ci = TColor::GetColor("#ff9999");
   h_postfit_LPL1WZGGFUntagTCR_wjets_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff9999");
   h_postfit_LPL1WZGGFUntagTCR_wjets_stack_4->SetLineColor(ci);
   h_postfit_LPL1WZGGFUntagTCR_wjets_stack_4->SetLineWidth(2);
   h_postfit_LPL1WZGGFUntagTCR_wjets_stack_4->SetMarkerStyle(20);
   h_postfit_LPL1WZGGFUntagTCR_wjets_stack_4->SetMarkerSize(1.2);
   h_postfit_LPL1WZGGFUntagTCR_wjets_stack_4->GetXaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFUntagTCR_wjets_stack_4->GetXaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFUntagTCR_wjets_stack_4->GetXaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFUntagTCR_wjets_stack_4->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WZGGFUntagTCR_wjets_stack_4->GetXaxis()->SetTitleFont(42);
   h_postfit_LPL1WZGGFUntagTCR_wjets_stack_4->GetYaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFUntagTCR_wjets_stack_4->GetYaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFUntagTCR_wjets_stack_4->GetYaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFUntagTCR_wjets_stack_4->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WZGGFUntagTCR_wjets_stack_4->GetYaxis()->SetTitleFont(42);
   h_postfit_LPL1WZGGFUntagTCR_wjets_stack_4->GetZaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFUntagTCR_wjets_stack_4->GetZaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFUntagTCR_wjets_stack_4->GetZaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFUntagTCR_wjets_stack_4->GetZaxis()->SetTitleFont(42);
   hs_LPL1WZGGFUntagTCR->Add(h_postfit_LPL1WZGGFUntagTCR_wjets_stack_4,"");
   
   TH1F *h_postfit_LPL1WZGGFUntagTCR_ttbar_stack_5 = new TH1F("h_postfit_LPL1WZGGFUntagTCR_ttbar_stack_5","h_postfit_LPL1WZGGFUntagTCR_ttbar",12,0,12);
   h_postfit_LPL1WZGGFUntagTCR_ttbar_stack_5->SetBinContent(7,30135.57);
   h_postfit_LPL1WZGGFUntagTCR_ttbar_stack_5->SetBinError(7,413.8907);
   h_postfit_LPL1WZGGFUntagTCR_ttbar_stack_5->SetEntries(1);
   h_postfit_LPL1WZGGFUntagTCR_ttbar_stack_5->SetStats(0);

   ci = TColor::GetColor("#6699ff");
   h_postfit_LPL1WZGGFUntagTCR_ttbar_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#6699ff");
   h_postfit_LPL1WZGGFUntagTCR_ttbar_stack_5->SetLineColor(ci);
   h_postfit_LPL1WZGGFUntagTCR_ttbar_stack_5->SetLineWidth(2);
   h_postfit_LPL1WZGGFUntagTCR_ttbar_stack_5->SetMarkerStyle(20);
   h_postfit_LPL1WZGGFUntagTCR_ttbar_stack_5->SetMarkerSize(1.2);
   h_postfit_LPL1WZGGFUntagTCR_ttbar_stack_5->GetXaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFUntagTCR_ttbar_stack_5->GetXaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFUntagTCR_ttbar_stack_5->GetXaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFUntagTCR_ttbar_stack_5->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WZGGFUntagTCR_ttbar_stack_5->GetXaxis()->SetTitleFont(42);
   h_postfit_LPL1WZGGFUntagTCR_ttbar_stack_5->GetYaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFUntagTCR_ttbar_stack_5->GetYaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFUntagTCR_ttbar_stack_5->GetYaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFUntagTCR_ttbar_stack_5->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WZGGFUntagTCR_ttbar_stack_5->GetYaxis()->SetTitleFont(42);
   h_postfit_LPL1WZGGFUntagTCR_ttbar_stack_5->GetZaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFUntagTCR_ttbar_stack_5->GetZaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFUntagTCR_ttbar_stack_5->GetZaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFUntagTCR_ttbar_stack_5->GetZaxis()->SetTitleFont(42);
   hs_LPL1WZGGFUntagTCR->Add(h_postfit_LPL1WZGGFUntagTCR_ttbar_stack_5,"");
   hs_LPL1WZGGFUntagTCR->Draw("histsame");
   
   hs_LPL1WZGGFUntagWCR = new THStack();
   hs_LPL1WZGGFUntagWCR->SetName("hs_LPL1WZGGFUntagWCR");
   hs_LPL1WZGGFUntagWCR->SetTitle("hs_LPL1WZGGFUntagWCR");
   
   TH1F *hs_LPL1WZGGFUntagWCR_stack_8 = new TH1F("hs_LPL1WZGGFUntagWCR_stack_8","hs_LPL1WZGGFUntagWCR",12,0,12);
   hs_LPL1WZGGFUntagWCR_stack_8->SetMinimum(53.05954);
   hs_LPL1WZGGFUntagWCR_stack_8->SetMaximum(212238.2);
   hs_LPL1WZGGFUntagWCR_stack_8->SetDirectory(0);
   hs_LPL1WZGGFUntagWCR_stack_8->SetStats(0);
   hs_LPL1WZGGFUntagWCR_stack_8->SetLineWidth(2);
   hs_LPL1WZGGFUntagWCR_stack_8->SetMarkerStyle(20);
   hs_LPL1WZGGFUntagWCR_stack_8->SetMarkerSize(1.2);
   hs_LPL1WZGGFUntagWCR_stack_8->GetXaxis()->SetLabelFont(42);
   hs_LPL1WZGGFUntagWCR_stack_8->GetXaxis()->SetLabelSize(0.05);
   hs_LPL1WZGGFUntagWCR_stack_8->GetXaxis()->SetTitleSize(0.05);
   hs_LPL1WZGGFUntagWCR_stack_8->GetXaxis()->SetTitleOffset(1.4);
   hs_LPL1WZGGFUntagWCR_stack_8->GetXaxis()->SetTitleFont(42);
   hs_LPL1WZGGFUntagWCR_stack_8->GetYaxis()->SetLabelFont(42);
   hs_LPL1WZGGFUntagWCR_stack_8->GetYaxis()->SetLabelSize(0.05);
   hs_LPL1WZGGFUntagWCR_stack_8->GetYaxis()->SetTitleSize(0.05);
   hs_LPL1WZGGFUntagWCR_stack_8->GetYaxis()->SetTitleOffset(1.4);
   hs_LPL1WZGGFUntagWCR_stack_8->GetYaxis()->SetTitleFont(42);
   hs_LPL1WZGGFUntagWCR_stack_8->GetZaxis()->SetLabelFont(42);
   hs_LPL1WZGGFUntagWCR_stack_8->GetZaxis()->SetLabelSize(0.05);
   hs_LPL1WZGGFUntagWCR_stack_8->GetZaxis()->SetTitleSize(0.05);
   hs_LPL1WZGGFUntagWCR_stack_8->GetZaxis()->SetTitleFont(42);
   hs_LPL1WZGGFUntagWCR->SetHistogram(hs_LPL1WZGGFUntagWCR_stack_8);
   
   
   TH1F *h_postfit_LPL1WZGGFUntagWCR_zjets_stack_1 = new TH1F("h_postfit_LPL1WZGGFUntagWCR_zjets_stack_1","h_postfit_LPL1WZGGFUntagWCR_zjets",12,0,12);
   h_postfit_LPL1WZGGFUntagWCR_zjets_stack_1->SetBinContent(8,1776.448);
   h_postfit_LPL1WZGGFUntagWCR_zjets_stack_1->SetBinError(8,180.1292);
   h_postfit_LPL1WZGGFUntagWCR_zjets_stack_1->SetEntries(1);
   h_postfit_LPL1WZGGFUntagWCR_zjets_stack_1->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   h_postfit_LPL1WZGGFUntagWCR_zjets_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   h_postfit_LPL1WZGGFUntagWCR_zjets_stack_1->SetLineColor(ci);
   h_postfit_LPL1WZGGFUntagWCR_zjets_stack_1->SetLineWidth(2);
   h_postfit_LPL1WZGGFUntagWCR_zjets_stack_1->SetMarkerStyle(20);
   h_postfit_LPL1WZGGFUntagWCR_zjets_stack_1->SetMarkerSize(1.2);
   h_postfit_LPL1WZGGFUntagWCR_zjets_stack_1->GetXaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFUntagWCR_zjets_stack_1->GetXaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFUntagWCR_zjets_stack_1->GetXaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFUntagWCR_zjets_stack_1->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WZGGFUntagWCR_zjets_stack_1->GetXaxis()->SetTitleFont(42);
   h_postfit_LPL1WZGGFUntagWCR_zjets_stack_1->GetYaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFUntagWCR_zjets_stack_1->GetYaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFUntagWCR_zjets_stack_1->GetYaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFUntagWCR_zjets_stack_1->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WZGGFUntagWCR_zjets_stack_1->GetYaxis()->SetTitleFont(42);
   h_postfit_LPL1WZGGFUntagWCR_zjets_stack_1->GetZaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFUntagWCR_zjets_stack_1->GetZaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFUntagWCR_zjets_stack_1->GetZaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFUntagWCR_zjets_stack_1->GetZaxis()->SetTitleFont(42);
   hs_LPL1WZGGFUntagWCR->Add(h_postfit_LPL1WZGGFUntagWCR_zjets_stack_1,"");
   
   TH1F *h_postfit_LPL1WZGGFUntagWCR_diboson_stack_2 = new TH1F("h_postfit_LPL1WZGGFUntagWCR_diboson_stack_2","h_postfit_LPL1WZGGFUntagWCR_diboson",12,0,12);
   h_postfit_LPL1WZGGFUntagWCR_diboson_stack_2->SetBinContent(8,2860.736);
   h_postfit_LPL1WZGGFUntagWCR_diboson_stack_2->SetBinError(8,282.4768);
   h_postfit_LPL1WZGGFUntagWCR_diboson_stack_2->SetEntries(1);
   h_postfit_LPL1WZGGFUntagWCR_diboson_stack_2->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   h_postfit_LPL1WZGGFUntagWCR_diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   h_postfit_LPL1WZGGFUntagWCR_diboson_stack_2->SetLineColor(ci);
   h_postfit_LPL1WZGGFUntagWCR_diboson_stack_2->SetLineWidth(2);
   h_postfit_LPL1WZGGFUntagWCR_diboson_stack_2->SetMarkerStyle(20);
   h_postfit_LPL1WZGGFUntagWCR_diboson_stack_2->SetMarkerSize(1.2);
   h_postfit_LPL1WZGGFUntagWCR_diboson_stack_2->GetXaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFUntagWCR_diboson_stack_2->GetXaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFUntagWCR_diboson_stack_2->GetXaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFUntagWCR_diboson_stack_2->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WZGGFUntagWCR_diboson_stack_2->GetXaxis()->SetTitleFont(42);
   h_postfit_LPL1WZGGFUntagWCR_diboson_stack_2->GetYaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFUntagWCR_diboson_stack_2->GetYaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFUntagWCR_diboson_stack_2->GetYaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFUntagWCR_diboson_stack_2->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WZGGFUntagWCR_diboson_stack_2->GetYaxis()->SetTitleFont(42);
   h_postfit_LPL1WZGGFUntagWCR_diboson_stack_2->GetZaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFUntagWCR_diboson_stack_2->GetZaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFUntagWCR_diboson_stack_2->GetZaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFUntagWCR_diboson_stack_2->GetZaxis()->SetTitleFont(42);
   hs_LPL1WZGGFUntagWCR->Add(h_postfit_LPL1WZGGFUntagWCR_diboson_stack_2,"");
   
   TH1F *h_postfit_LPL1WZGGFUntagWCR_singlet_stack_3 = new TH1F("h_postfit_LPL1WZGGFUntagWCR_singlet_stack_3","h_postfit_LPL1WZGGFUntagWCR_singlet",12,0,12);
   h_postfit_LPL1WZGGFUntagWCR_singlet_stack_3->SetBinContent(8,3598.341);
   h_postfit_LPL1WZGGFUntagWCR_singlet_stack_3->SetBinError(8,526.493);
   h_postfit_LPL1WZGGFUntagWCR_singlet_stack_3->SetEntries(1);
   h_postfit_LPL1WZGGFUntagWCR_singlet_stack_3->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   h_postfit_LPL1WZGGFUntagWCR_singlet_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   h_postfit_LPL1WZGGFUntagWCR_singlet_stack_3->SetLineColor(ci);
   h_postfit_LPL1WZGGFUntagWCR_singlet_stack_3->SetLineWidth(2);
   h_postfit_LPL1WZGGFUntagWCR_singlet_stack_3->SetMarkerStyle(20);
   h_postfit_LPL1WZGGFUntagWCR_singlet_stack_3->SetMarkerSize(1.2);
   h_postfit_LPL1WZGGFUntagWCR_singlet_stack_3->GetXaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFUntagWCR_singlet_stack_3->GetXaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFUntagWCR_singlet_stack_3->GetXaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFUntagWCR_singlet_stack_3->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WZGGFUntagWCR_singlet_stack_3->GetXaxis()->SetTitleFont(42);
   h_postfit_LPL1WZGGFUntagWCR_singlet_stack_3->GetYaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFUntagWCR_singlet_stack_3->GetYaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFUntagWCR_singlet_stack_3->GetYaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFUntagWCR_singlet_stack_3->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WZGGFUntagWCR_singlet_stack_3->GetYaxis()->SetTitleFont(42);
   h_postfit_LPL1WZGGFUntagWCR_singlet_stack_3->GetZaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFUntagWCR_singlet_stack_3->GetZaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFUntagWCR_singlet_stack_3->GetZaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFUntagWCR_singlet_stack_3->GetZaxis()->SetTitleFont(42);
   hs_LPL1WZGGFUntagWCR->Add(h_postfit_LPL1WZGGFUntagWCR_singlet_stack_3,"");
   
   TH1F *h_postfit_LPL1WZGGFUntagWCR_ttbar_stack_4 = new TH1F("h_postfit_LPL1WZGGFUntagWCR_ttbar_stack_4","h_postfit_LPL1WZGGFUntagWCR_ttbar",12,0,12);
   h_postfit_LPL1WZGGFUntagWCR_ttbar_stack_4->SetBinContent(8,24390.21);
   h_postfit_LPL1WZGGFUntagWCR_ttbar_stack_4->SetBinError(8,334.9821);
   h_postfit_LPL1WZGGFUntagWCR_ttbar_stack_4->SetEntries(1);
   h_postfit_LPL1WZGGFUntagWCR_ttbar_stack_4->SetStats(0);

   ci = TColor::GetColor("#6699ff");
   h_postfit_LPL1WZGGFUntagWCR_ttbar_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#6699ff");
   h_postfit_LPL1WZGGFUntagWCR_ttbar_stack_4->SetLineColor(ci);
   h_postfit_LPL1WZGGFUntagWCR_ttbar_stack_4->SetLineWidth(2);
   h_postfit_LPL1WZGGFUntagWCR_ttbar_stack_4->SetMarkerStyle(20);
   h_postfit_LPL1WZGGFUntagWCR_ttbar_stack_4->SetMarkerSize(1.2);
   h_postfit_LPL1WZGGFUntagWCR_ttbar_stack_4->GetXaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFUntagWCR_ttbar_stack_4->GetXaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFUntagWCR_ttbar_stack_4->GetXaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFUntagWCR_ttbar_stack_4->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WZGGFUntagWCR_ttbar_stack_4->GetXaxis()->SetTitleFont(42);
   h_postfit_LPL1WZGGFUntagWCR_ttbar_stack_4->GetYaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFUntagWCR_ttbar_stack_4->GetYaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFUntagWCR_ttbar_stack_4->GetYaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFUntagWCR_ttbar_stack_4->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WZGGFUntagWCR_ttbar_stack_4->GetYaxis()->SetTitleFont(42);
   h_postfit_LPL1WZGGFUntagWCR_ttbar_stack_4->GetZaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFUntagWCR_ttbar_stack_4->GetZaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFUntagWCR_ttbar_stack_4->GetZaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFUntagWCR_ttbar_stack_4->GetZaxis()->SetTitleFont(42);
   hs_LPL1WZGGFUntagWCR->Add(h_postfit_LPL1WZGGFUntagWCR_ttbar_stack_4,"");
   
   TH1F *h_postfit_LPL1WZGGFUntagWCR_wjets_stack_5 = new TH1F("h_postfit_LPL1WZGGFUntagWCR_wjets_stack_5","h_postfit_LPL1WZGGFUntagWCR_wjets",12,0,12);
   h_postfit_LPL1WZGGFUntagWCR_wjets_stack_5->SetBinContent(8,100023.1);
   h_postfit_LPL1WZGGFUntagWCR_wjets_stack_5->SetBinError(8,501.9579);
   h_postfit_LPL1WZGGFUntagWCR_wjets_stack_5->SetEntries(1);
   h_postfit_LPL1WZGGFUntagWCR_wjets_stack_5->SetStats(0);

   ci = TColor::GetColor("#ff9999");
   h_postfit_LPL1WZGGFUntagWCR_wjets_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#ff9999");
   h_postfit_LPL1WZGGFUntagWCR_wjets_stack_5->SetLineColor(ci);
   h_postfit_LPL1WZGGFUntagWCR_wjets_stack_5->SetLineWidth(2);
   h_postfit_LPL1WZGGFUntagWCR_wjets_stack_5->SetMarkerStyle(20);
   h_postfit_LPL1WZGGFUntagWCR_wjets_stack_5->SetMarkerSize(1.2);
   h_postfit_LPL1WZGGFUntagWCR_wjets_stack_5->GetXaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFUntagWCR_wjets_stack_5->GetXaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFUntagWCR_wjets_stack_5->GetXaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFUntagWCR_wjets_stack_5->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WZGGFUntagWCR_wjets_stack_5->GetXaxis()->SetTitleFont(42);
   h_postfit_LPL1WZGGFUntagWCR_wjets_stack_5->GetYaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFUntagWCR_wjets_stack_5->GetYaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFUntagWCR_wjets_stack_5->GetYaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFUntagWCR_wjets_stack_5->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WZGGFUntagWCR_wjets_stack_5->GetYaxis()->SetTitleFont(42);
   h_postfit_LPL1WZGGFUntagWCR_wjets_stack_5->GetZaxis()->SetLabelFont(42);
   h_postfit_LPL1WZGGFUntagWCR_wjets_stack_5->GetZaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WZGGFUntagWCR_wjets_stack_5->GetZaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WZGGFUntagWCR_wjets_stack_5->GetZaxis()->SetTitleFont(42);
   hs_LPL1WZGGFUntagWCR->Add(h_postfit_LPL1WZGGFUntagWCR_wjets_stack_5,"");
   hs_LPL1WZGGFUntagWCR->Draw("histsame");
   
   hs_L1WZGGFTagTCR = new THStack();
   hs_L1WZGGFTagTCR->SetName("hs_L1WZGGFTagTCR");
   hs_L1WZGGFTagTCR->SetTitle("hs_L1WZGGFTagTCR");
   
   TH1F *hs_L1WZGGFTagTCR_stack_9 = new TH1F("hs_L1WZGGFTagTCR_stack_9","hs_L1WZGGFTagTCR",12,0,12);
   hs_L1WZGGFTagTCR_stack_9->SetMinimum(7.706713);
   hs_L1WZGGFTagTCR_stack_9->SetMaximum(30826.85);
   hs_L1WZGGFTagTCR_stack_9->SetDirectory(0);
   hs_L1WZGGFTagTCR_stack_9->SetStats(0);
   hs_L1WZGGFTagTCR_stack_9->SetLineWidth(2);
   hs_L1WZGGFTagTCR_stack_9->SetMarkerStyle(20);
   hs_L1WZGGFTagTCR_stack_9->SetMarkerSize(1.2);
   hs_L1WZGGFTagTCR_stack_9->GetXaxis()->SetLabelFont(42);
   hs_L1WZGGFTagTCR_stack_9->GetXaxis()->SetLabelSize(0.05);
   hs_L1WZGGFTagTCR_stack_9->GetXaxis()->SetTitleSize(0.05);
   hs_L1WZGGFTagTCR_stack_9->GetXaxis()->SetTitleOffset(1.4);
   hs_L1WZGGFTagTCR_stack_9->GetXaxis()->SetTitleFont(42);
   hs_L1WZGGFTagTCR_stack_9->GetYaxis()->SetLabelFont(42);
   hs_L1WZGGFTagTCR_stack_9->GetYaxis()->SetLabelSize(0.05);
   hs_L1WZGGFTagTCR_stack_9->GetYaxis()->SetTitleSize(0.05);
   hs_L1WZGGFTagTCR_stack_9->GetYaxis()->SetTitleOffset(1.4);
   hs_L1WZGGFTagTCR_stack_9->GetYaxis()->SetTitleFont(42);
   hs_L1WZGGFTagTCR_stack_9->GetZaxis()->SetLabelFont(42);
   hs_L1WZGGFTagTCR_stack_9->GetZaxis()->SetLabelSize(0.05);
   hs_L1WZGGFTagTCR_stack_9->GetZaxis()->SetTitleSize(0.05);
   hs_L1WZGGFTagTCR_stack_9->GetZaxis()->SetTitleFont(42);
   hs_L1WZGGFTagTCR->SetHistogram(hs_L1WZGGFTagTCR_stack_9);
   
   
   TH1F *h_postfit_L1WZGGFTagTCR_zjets_stack_1 = new TH1F("h_postfit_L1WZGGFTagTCR_zjets_stack_1","h_postfit_L1WZGGFTagTCR_zjets",12,0,12);
   h_postfit_L1WZGGFTagTCR_zjets_stack_1->SetBinContent(9,19.21925);
   h_postfit_L1WZGGFTagTCR_zjets_stack_1->SetBinError(9,1.949202);
   h_postfit_L1WZGGFTagTCR_zjets_stack_1->SetEntries(1);
   h_postfit_L1WZGGFTagTCR_zjets_stack_1->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   h_postfit_L1WZGGFTagTCR_zjets_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   h_postfit_L1WZGGFTagTCR_zjets_stack_1->SetLineColor(ci);
   h_postfit_L1WZGGFTagTCR_zjets_stack_1->SetLineWidth(2);
   h_postfit_L1WZGGFTagTCR_zjets_stack_1->SetMarkerStyle(20);
   h_postfit_L1WZGGFTagTCR_zjets_stack_1->SetMarkerSize(1.2);
   h_postfit_L1WZGGFTagTCR_zjets_stack_1->GetXaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFTagTCR_zjets_stack_1->GetXaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFTagTCR_zjets_stack_1->GetXaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFTagTCR_zjets_stack_1->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_L1WZGGFTagTCR_zjets_stack_1->GetXaxis()->SetTitleFont(42);
   h_postfit_L1WZGGFTagTCR_zjets_stack_1->GetYaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFTagTCR_zjets_stack_1->GetYaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFTagTCR_zjets_stack_1->GetYaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFTagTCR_zjets_stack_1->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_L1WZGGFTagTCR_zjets_stack_1->GetYaxis()->SetTitleFont(42);
   h_postfit_L1WZGGFTagTCR_zjets_stack_1->GetZaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFTagTCR_zjets_stack_1->GetZaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFTagTCR_zjets_stack_1->GetZaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFTagTCR_zjets_stack_1->GetZaxis()->SetTitleFont(42);
   hs_L1WZGGFTagTCR->Add(h_postfit_L1WZGGFTagTCR_zjets_stack_1,"");
   
   TH1F *h_postfit_L1WZGGFTagTCR_diboson_stack_2 = new TH1F("h_postfit_L1WZGGFTagTCR_diboson_stack_2","h_postfit_L1WZGGFTagTCR_diboson",12,0,12);
   h_postfit_L1WZGGFTagTCR_diboson_stack_2->SetBinContent(9,46.09048);
   h_postfit_L1WZGGFTagTCR_diboson_stack_2->SetBinError(9,6.084347);
   h_postfit_L1WZGGFTagTCR_diboson_stack_2->SetEntries(1);
   h_postfit_L1WZGGFTagTCR_diboson_stack_2->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   h_postfit_L1WZGGFTagTCR_diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   h_postfit_L1WZGGFTagTCR_diboson_stack_2->SetLineColor(ci);
   h_postfit_L1WZGGFTagTCR_diboson_stack_2->SetLineWidth(2);
   h_postfit_L1WZGGFTagTCR_diboson_stack_2->SetMarkerStyle(20);
   h_postfit_L1WZGGFTagTCR_diboson_stack_2->SetMarkerSize(1.2);
   h_postfit_L1WZGGFTagTCR_diboson_stack_2->GetXaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFTagTCR_diboson_stack_2->GetXaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFTagTCR_diboson_stack_2->GetXaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFTagTCR_diboson_stack_2->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_L1WZGGFTagTCR_diboson_stack_2->GetXaxis()->SetTitleFont(42);
   h_postfit_L1WZGGFTagTCR_diboson_stack_2->GetYaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFTagTCR_diboson_stack_2->GetYaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFTagTCR_diboson_stack_2->GetYaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFTagTCR_diboson_stack_2->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_L1WZGGFTagTCR_diboson_stack_2->GetYaxis()->SetTitleFont(42);
   h_postfit_L1WZGGFTagTCR_diboson_stack_2->GetZaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFTagTCR_diboson_stack_2->GetZaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFTagTCR_diboson_stack_2->GetZaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFTagTCR_diboson_stack_2->GetZaxis()->SetTitleFont(42);
   hs_L1WZGGFTagTCR->Add(h_postfit_L1WZGGFTagTCR_diboson_stack_2,"");
   
   TH1F *h_postfit_L1WZGGFTagTCR_wjets_stack_3 = new TH1F("h_postfit_L1WZGGFTagTCR_wjets_stack_3","h_postfit_L1WZGGFTagTCR_wjets",12,0,12);
   h_postfit_L1WZGGFTagTCR_wjets_stack_3->SetBinContent(9,406.7741);
   h_postfit_L1WZGGFTagTCR_wjets_stack_3->SetBinError(9,37.13378);
   h_postfit_L1WZGGFTagTCR_wjets_stack_3->SetEntries(1);
   h_postfit_L1WZGGFTagTCR_wjets_stack_3->SetStats(0);

   ci = TColor::GetColor("#ff9999");
   h_postfit_L1WZGGFTagTCR_wjets_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff9999");
   h_postfit_L1WZGGFTagTCR_wjets_stack_3->SetLineColor(ci);
   h_postfit_L1WZGGFTagTCR_wjets_stack_3->SetLineWidth(2);
   h_postfit_L1WZGGFTagTCR_wjets_stack_3->SetMarkerStyle(20);
   h_postfit_L1WZGGFTagTCR_wjets_stack_3->SetMarkerSize(1.2);
   h_postfit_L1WZGGFTagTCR_wjets_stack_3->GetXaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFTagTCR_wjets_stack_3->GetXaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFTagTCR_wjets_stack_3->GetXaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFTagTCR_wjets_stack_3->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_L1WZGGFTagTCR_wjets_stack_3->GetXaxis()->SetTitleFont(42);
   h_postfit_L1WZGGFTagTCR_wjets_stack_3->GetYaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFTagTCR_wjets_stack_3->GetYaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFTagTCR_wjets_stack_3->GetYaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFTagTCR_wjets_stack_3->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_L1WZGGFTagTCR_wjets_stack_3->GetYaxis()->SetTitleFont(42);
   h_postfit_L1WZGGFTagTCR_wjets_stack_3->GetZaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFTagTCR_wjets_stack_3->GetZaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFTagTCR_wjets_stack_3->GetZaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFTagTCR_wjets_stack_3->GetZaxis()->SetTitleFont(42);
   hs_L1WZGGFTagTCR->Add(h_postfit_L1WZGGFTagTCR_wjets_stack_3,"");
   
   TH1F *h_postfit_L1WZGGFTagTCR_singlet_stack_4 = new TH1F("h_postfit_L1WZGGFTagTCR_singlet_stack_4","h_postfit_L1WZGGFTagTCR_singlet",12,0,12);
   h_postfit_L1WZGGFTagTCR_singlet_stack_4->SetBinContent(9,819.4627);
   h_postfit_L1WZGGFTagTCR_singlet_stack_4->SetBinError(9,140.7612);
   h_postfit_L1WZGGFTagTCR_singlet_stack_4->SetEntries(1);
   h_postfit_L1WZGGFTagTCR_singlet_stack_4->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   h_postfit_L1WZGGFTagTCR_singlet_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   h_postfit_L1WZGGFTagTCR_singlet_stack_4->SetLineColor(ci);
   h_postfit_L1WZGGFTagTCR_singlet_stack_4->SetLineWidth(2);
   h_postfit_L1WZGGFTagTCR_singlet_stack_4->SetMarkerStyle(20);
   h_postfit_L1WZGGFTagTCR_singlet_stack_4->SetMarkerSize(1.2);
   h_postfit_L1WZGGFTagTCR_singlet_stack_4->GetXaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFTagTCR_singlet_stack_4->GetXaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFTagTCR_singlet_stack_4->GetXaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFTagTCR_singlet_stack_4->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_L1WZGGFTagTCR_singlet_stack_4->GetXaxis()->SetTitleFont(42);
   h_postfit_L1WZGGFTagTCR_singlet_stack_4->GetYaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFTagTCR_singlet_stack_4->GetYaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFTagTCR_singlet_stack_4->GetYaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFTagTCR_singlet_stack_4->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_L1WZGGFTagTCR_singlet_stack_4->GetYaxis()->SetTitleFont(42);
   h_postfit_L1WZGGFTagTCR_singlet_stack_4->GetZaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFTagTCR_singlet_stack_4->GetZaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFTagTCR_singlet_stack_4->GetZaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFTagTCR_singlet_stack_4->GetZaxis()->SetTitleFont(42);
   hs_L1WZGGFTagTCR->Add(h_postfit_L1WZGGFTagTCR_singlet_stack_4,"");
   
   TH1F *h_postfit_L1WZGGFTagTCR_ttbar_stack_5 = new TH1F("h_postfit_L1WZGGFTagTCR_ttbar_stack_5","h_postfit_L1WZGGFTagTCR_ttbar",12,0,12);
   h_postfit_L1WZGGFTagTCR_ttbar_stack_5->SetBinContent(9,17975.23);
   h_postfit_L1WZGGFTagTCR_ttbar_stack_5->SetBinError(9,188.8735);
   h_postfit_L1WZGGFTagTCR_ttbar_stack_5->SetEntries(1);
   h_postfit_L1WZGGFTagTCR_ttbar_stack_5->SetStats(0);

   ci = TColor::GetColor("#6699ff");
   h_postfit_L1WZGGFTagTCR_ttbar_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#6699ff");
   h_postfit_L1WZGGFTagTCR_ttbar_stack_5->SetLineColor(ci);
   h_postfit_L1WZGGFTagTCR_ttbar_stack_5->SetLineWidth(2);
   h_postfit_L1WZGGFTagTCR_ttbar_stack_5->SetMarkerStyle(20);
   h_postfit_L1WZGGFTagTCR_ttbar_stack_5->SetMarkerSize(1.2);
   h_postfit_L1WZGGFTagTCR_ttbar_stack_5->GetXaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFTagTCR_ttbar_stack_5->GetXaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFTagTCR_ttbar_stack_5->GetXaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFTagTCR_ttbar_stack_5->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_L1WZGGFTagTCR_ttbar_stack_5->GetXaxis()->SetTitleFont(42);
   h_postfit_L1WZGGFTagTCR_ttbar_stack_5->GetYaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFTagTCR_ttbar_stack_5->GetYaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFTagTCR_ttbar_stack_5->GetYaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFTagTCR_ttbar_stack_5->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_L1WZGGFTagTCR_ttbar_stack_5->GetYaxis()->SetTitleFont(42);
   h_postfit_L1WZGGFTagTCR_ttbar_stack_5->GetZaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFTagTCR_ttbar_stack_5->GetZaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFTagTCR_ttbar_stack_5->GetZaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFTagTCR_ttbar_stack_5->GetZaxis()->SetTitleFont(42);
   hs_L1WZGGFTagTCR->Add(h_postfit_L1WZGGFTagTCR_ttbar_stack_5,"");
   hs_L1WZGGFTagTCR->Draw("histsame");
   
   hs_L1WZGGFTagWCR = new THStack();
   hs_L1WZGGFTagWCR->SetName("hs_L1WZGGFTagWCR");
   hs_L1WZGGFTagWCR->SetTitle("hs_L1WZGGFTagWCR");
   
   TH1F *hs_L1WZGGFTagWCR_stack_10 = new TH1F("hs_L1WZGGFTagWCR_stack_10","hs_L1WZGGFTagWCR",12,0,12);
   hs_L1WZGGFTagWCR_stack_10->SetMinimum(30.77642);
   hs_L1WZGGFTagWCR_stack_10->SetMaximum(123105.7);
   hs_L1WZGGFTagWCR_stack_10->SetDirectory(0);
   hs_L1WZGGFTagWCR_stack_10->SetStats(0);
   hs_L1WZGGFTagWCR_stack_10->SetLineWidth(2);
   hs_L1WZGGFTagWCR_stack_10->SetMarkerStyle(20);
   hs_L1WZGGFTagWCR_stack_10->SetMarkerSize(1.2);
   hs_L1WZGGFTagWCR_stack_10->GetXaxis()->SetLabelFont(42);
   hs_L1WZGGFTagWCR_stack_10->GetXaxis()->SetLabelSize(0.05);
   hs_L1WZGGFTagWCR_stack_10->GetXaxis()->SetTitleSize(0.05);
   hs_L1WZGGFTagWCR_stack_10->GetXaxis()->SetTitleOffset(1.4);
   hs_L1WZGGFTagWCR_stack_10->GetXaxis()->SetTitleFont(42);
   hs_L1WZGGFTagWCR_stack_10->GetYaxis()->SetLabelFont(42);
   hs_L1WZGGFTagWCR_stack_10->GetYaxis()->SetLabelSize(0.05);
   hs_L1WZGGFTagWCR_stack_10->GetYaxis()->SetTitleSize(0.05);
   hs_L1WZGGFTagWCR_stack_10->GetYaxis()->SetTitleOffset(1.4);
   hs_L1WZGGFTagWCR_stack_10->GetYaxis()->SetTitleFont(42);
   hs_L1WZGGFTagWCR_stack_10->GetZaxis()->SetLabelFont(42);
   hs_L1WZGGFTagWCR_stack_10->GetZaxis()->SetLabelSize(0.05);
   hs_L1WZGGFTagWCR_stack_10->GetZaxis()->SetTitleSize(0.05);
   hs_L1WZGGFTagWCR_stack_10->GetZaxis()->SetTitleFont(42);
   hs_L1WZGGFTagWCR->SetHistogram(hs_L1WZGGFTagWCR_stack_10);
   
   
   TH1F *h_postfit_L1WZGGFTagWCR_zjets_stack_1 = new TH1F("h_postfit_L1WZGGFTagWCR_zjets_stack_1","h_postfit_L1WZGGFTagWCR_zjets",12,0,12);
   h_postfit_L1WZGGFTagWCR_zjets_stack_1->SetBinContent(10,326.0329);
   h_postfit_L1WZGGFTagWCR_zjets_stack_1->SetBinError(10,33.06601);
   h_postfit_L1WZGGFTagWCR_zjets_stack_1->SetEntries(1);
   h_postfit_L1WZGGFTagWCR_zjets_stack_1->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   h_postfit_L1WZGGFTagWCR_zjets_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   h_postfit_L1WZGGFTagWCR_zjets_stack_1->SetLineColor(ci);
   h_postfit_L1WZGGFTagWCR_zjets_stack_1->SetLineWidth(2);
   h_postfit_L1WZGGFTagWCR_zjets_stack_1->SetMarkerStyle(20);
   h_postfit_L1WZGGFTagWCR_zjets_stack_1->SetMarkerSize(1.2);
   h_postfit_L1WZGGFTagWCR_zjets_stack_1->GetXaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFTagWCR_zjets_stack_1->GetXaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFTagWCR_zjets_stack_1->GetXaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFTagWCR_zjets_stack_1->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_L1WZGGFTagWCR_zjets_stack_1->GetXaxis()->SetTitleFont(42);
   h_postfit_L1WZGGFTagWCR_zjets_stack_1->GetYaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFTagWCR_zjets_stack_1->GetYaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFTagWCR_zjets_stack_1->GetYaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFTagWCR_zjets_stack_1->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_L1WZGGFTagWCR_zjets_stack_1->GetYaxis()->SetTitleFont(42);
   h_postfit_L1WZGGFTagWCR_zjets_stack_1->GetZaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFTagWCR_zjets_stack_1->GetZaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFTagWCR_zjets_stack_1->GetZaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFTagWCR_zjets_stack_1->GetZaxis()->SetTitleFont(42);
   hs_L1WZGGFTagWCR->Add(h_postfit_L1WZGGFTagWCR_zjets_stack_1,"");
   
   TH1F *h_postfit_L1WZGGFTagWCR_diboson_stack_2 = new TH1F("h_postfit_L1WZGGFTagWCR_diboson_stack_2","h_postfit_L1WZGGFTagWCR_diboson",12,0,12);
   h_postfit_L1WZGGFTagWCR_diboson_stack_2->SetBinContent(10,348.0819);
   h_postfit_L1WZGGFTagWCR_diboson_stack_2->SetBinError(10,32.85035);
   h_postfit_L1WZGGFTagWCR_diboson_stack_2->SetEntries(1);
   h_postfit_L1WZGGFTagWCR_diboson_stack_2->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   h_postfit_L1WZGGFTagWCR_diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   h_postfit_L1WZGGFTagWCR_diboson_stack_2->SetLineColor(ci);
   h_postfit_L1WZGGFTagWCR_diboson_stack_2->SetLineWidth(2);
   h_postfit_L1WZGGFTagWCR_diboson_stack_2->SetMarkerStyle(20);
   h_postfit_L1WZGGFTagWCR_diboson_stack_2->SetMarkerSize(1.2);
   h_postfit_L1WZGGFTagWCR_diboson_stack_2->GetXaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFTagWCR_diboson_stack_2->GetXaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFTagWCR_diboson_stack_2->GetXaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFTagWCR_diboson_stack_2->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_L1WZGGFTagWCR_diboson_stack_2->GetXaxis()->SetTitleFont(42);
   h_postfit_L1WZGGFTagWCR_diboson_stack_2->GetYaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFTagWCR_diboson_stack_2->GetYaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFTagWCR_diboson_stack_2->GetYaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFTagWCR_diboson_stack_2->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_L1WZGGFTagWCR_diboson_stack_2->GetYaxis()->SetTitleFont(42);
   h_postfit_L1WZGGFTagWCR_diboson_stack_2->GetZaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFTagWCR_diboson_stack_2->GetZaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFTagWCR_diboson_stack_2->GetZaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFTagWCR_diboson_stack_2->GetZaxis()->SetTitleFont(42);
   hs_L1WZGGFTagWCR->Add(h_postfit_L1WZGGFTagWCR_diboson_stack_2,"");
   
   TH1F *h_postfit_L1WZGGFTagWCR_MJ_stack_3 = new TH1F("h_postfit_L1WZGGFTagWCR_MJ_stack_3","h_postfit_L1WZGGFTagWCR_MJ",12,0,12);
   h_postfit_L1WZGGFTagWCR_MJ_stack_3->SetBinContent(10,996.9135);
   h_postfit_L1WZGGFTagWCR_MJ_stack_3->SetBinError(10,198.5084);
   h_postfit_L1WZGGFTagWCR_MJ_stack_3->SetEntries(1);
   h_postfit_L1WZGGFTagWCR_MJ_stack_3->SetStats(0);

   ci = TColor::GetColor("#cc0000");
   h_postfit_L1WZGGFTagWCR_MJ_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   h_postfit_L1WZGGFTagWCR_MJ_stack_3->SetLineColor(ci);
   h_postfit_L1WZGGFTagWCR_MJ_stack_3->SetLineWidth(2);
   h_postfit_L1WZGGFTagWCR_MJ_stack_3->SetMarkerStyle(20);
   h_postfit_L1WZGGFTagWCR_MJ_stack_3->SetMarkerSize(1.2);
   h_postfit_L1WZGGFTagWCR_MJ_stack_3->GetXaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFTagWCR_MJ_stack_3->GetXaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFTagWCR_MJ_stack_3->GetXaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFTagWCR_MJ_stack_3->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_L1WZGGFTagWCR_MJ_stack_3->GetXaxis()->SetTitleFont(42);
   h_postfit_L1WZGGFTagWCR_MJ_stack_3->GetYaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFTagWCR_MJ_stack_3->GetYaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFTagWCR_MJ_stack_3->GetYaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFTagWCR_MJ_stack_3->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_L1WZGGFTagWCR_MJ_stack_3->GetYaxis()->SetTitleFont(42);
   h_postfit_L1WZGGFTagWCR_MJ_stack_3->GetZaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFTagWCR_MJ_stack_3->GetZaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFTagWCR_MJ_stack_3->GetZaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFTagWCR_MJ_stack_3->GetZaxis()->SetTitleFont(42);
   hs_L1WZGGFTagWCR->Add(h_postfit_L1WZGGFTagWCR_MJ_stack_3,"");
   
   TH1F *h_postfit_L1WZGGFTagWCR_singlet_stack_4 = new TH1F("h_postfit_L1WZGGFTagWCR_singlet_stack_4","h_postfit_L1WZGGFTagWCR_singlet",12,0,12);
   h_postfit_L1WZGGFTagWCR_singlet_stack_4->SetBinContent(10,6914.525);
   h_postfit_L1WZGGFTagWCR_singlet_stack_4->SetBinError(10,1053.124);
   h_postfit_L1WZGGFTagWCR_singlet_stack_4->SetEntries(1);
   h_postfit_L1WZGGFTagWCR_singlet_stack_4->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   h_postfit_L1WZGGFTagWCR_singlet_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   h_postfit_L1WZGGFTagWCR_singlet_stack_4->SetLineColor(ci);
   h_postfit_L1WZGGFTagWCR_singlet_stack_4->SetLineWidth(2);
   h_postfit_L1WZGGFTagWCR_singlet_stack_4->SetMarkerStyle(20);
   h_postfit_L1WZGGFTagWCR_singlet_stack_4->SetMarkerSize(1.2);
   h_postfit_L1WZGGFTagWCR_singlet_stack_4->GetXaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFTagWCR_singlet_stack_4->GetXaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFTagWCR_singlet_stack_4->GetXaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFTagWCR_singlet_stack_4->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_L1WZGGFTagWCR_singlet_stack_4->GetXaxis()->SetTitleFont(42);
   h_postfit_L1WZGGFTagWCR_singlet_stack_4->GetYaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFTagWCR_singlet_stack_4->GetYaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFTagWCR_singlet_stack_4->GetYaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFTagWCR_singlet_stack_4->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_L1WZGGFTagWCR_singlet_stack_4->GetYaxis()->SetTitleFont(42);
   h_postfit_L1WZGGFTagWCR_singlet_stack_4->GetZaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFTagWCR_singlet_stack_4->GetZaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFTagWCR_singlet_stack_4->GetZaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFTagWCR_singlet_stack_4->GetZaxis()->SetTitleFont(42);
   hs_L1WZGGFTagWCR->Add(h_postfit_L1WZGGFTagWCR_singlet_stack_4,"");
   
   TH1F *h_postfit_L1WZGGFTagWCR_wjets_stack_5 = new TH1F("h_postfit_L1WZGGFTagWCR_wjets_stack_5","h_postfit_L1WZGGFTagWCR_wjets",12,0,12);
   h_postfit_L1WZGGFTagWCR_wjets_stack_5->SetBinContent(10,9891.79);
   h_postfit_L1WZGGFTagWCR_wjets_stack_5->SetBinError(10,903.0062);
   h_postfit_L1WZGGFTagWCR_wjets_stack_5->SetEntries(1);
   h_postfit_L1WZGGFTagWCR_wjets_stack_5->SetStats(0);

   ci = TColor::GetColor("#ff9999");
   h_postfit_L1WZGGFTagWCR_wjets_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#ff9999");
   h_postfit_L1WZGGFTagWCR_wjets_stack_5->SetLineColor(ci);
   h_postfit_L1WZGGFTagWCR_wjets_stack_5->SetLineWidth(2);
   h_postfit_L1WZGGFTagWCR_wjets_stack_5->SetMarkerStyle(20);
   h_postfit_L1WZGGFTagWCR_wjets_stack_5->SetMarkerSize(1.2);
   h_postfit_L1WZGGFTagWCR_wjets_stack_5->GetXaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFTagWCR_wjets_stack_5->GetXaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFTagWCR_wjets_stack_5->GetXaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFTagWCR_wjets_stack_5->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_L1WZGGFTagWCR_wjets_stack_5->GetXaxis()->SetTitleFont(42);
   h_postfit_L1WZGGFTagWCR_wjets_stack_5->GetYaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFTagWCR_wjets_stack_5->GetYaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFTagWCR_wjets_stack_5->GetYaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFTagWCR_wjets_stack_5->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_L1WZGGFTagWCR_wjets_stack_5->GetYaxis()->SetTitleFont(42);
   h_postfit_L1WZGGFTagWCR_wjets_stack_5->GetZaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFTagWCR_wjets_stack_5->GetZaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFTagWCR_wjets_stack_5->GetZaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFTagWCR_wjets_stack_5->GetZaxis()->SetTitleFont(42);
   hs_L1WZGGFTagWCR->Add(h_postfit_L1WZGGFTagWCR_wjets_stack_5,"");
   
   TH1F *h_postfit_L1WZGGFTagWCR_ttbar_stack_6 = new TH1F("h_postfit_L1WZGGFTagWCR_ttbar_stack_6","h_postfit_L1WZGGFTagWCR_ttbar",12,0,12);
   h_postfit_L1WZGGFTagWCR_ttbar_stack_6->SetBinContent(10,58463.7);
   h_postfit_L1WZGGFTagWCR_ttbar_stack_6->SetBinError(10,614.3032);
   h_postfit_L1WZGGFTagWCR_ttbar_stack_6->SetEntries(1);
   h_postfit_L1WZGGFTagWCR_ttbar_stack_6->SetStats(0);

   ci = TColor::GetColor("#6699ff");
   h_postfit_L1WZGGFTagWCR_ttbar_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#6699ff");
   h_postfit_L1WZGGFTagWCR_ttbar_stack_6->SetLineColor(ci);
   h_postfit_L1WZGGFTagWCR_ttbar_stack_6->SetLineWidth(2);
   h_postfit_L1WZGGFTagWCR_ttbar_stack_6->SetMarkerStyle(20);
   h_postfit_L1WZGGFTagWCR_ttbar_stack_6->SetMarkerSize(1.2);
   h_postfit_L1WZGGFTagWCR_ttbar_stack_6->GetXaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFTagWCR_ttbar_stack_6->GetXaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFTagWCR_ttbar_stack_6->GetXaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFTagWCR_ttbar_stack_6->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_L1WZGGFTagWCR_ttbar_stack_6->GetXaxis()->SetTitleFont(42);
   h_postfit_L1WZGGFTagWCR_ttbar_stack_6->GetYaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFTagWCR_ttbar_stack_6->GetYaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFTagWCR_ttbar_stack_6->GetYaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFTagWCR_ttbar_stack_6->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_L1WZGGFTagWCR_ttbar_stack_6->GetYaxis()->SetTitleFont(42);
   h_postfit_L1WZGGFTagWCR_ttbar_stack_6->GetZaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFTagWCR_ttbar_stack_6->GetZaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFTagWCR_ttbar_stack_6->GetZaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFTagWCR_ttbar_stack_6->GetZaxis()->SetTitleFont(42);
   hs_L1WZGGFTagWCR->Add(h_postfit_L1WZGGFTagWCR_ttbar_stack_6,"");
   hs_L1WZGGFTagWCR->Draw("histsame");
   
   hs_L1WZGGFUntagTCR = new THStack();
   hs_L1WZGGFUntagTCR->SetName("hs_L1WZGGFUntagTCR");
   hs_L1WZGGFUntagTCR->SetTitle("hs_L1WZGGFUntagTCR");
   
   TH1F *hs_L1WZGGFUntagTCR_stack_11 = new TH1F("hs_L1WZGGFUntagTCR_stack_11","hs_L1WZGGFUntagTCR",12,0,12);
   hs_L1WZGGFUntagTCR_stack_11->SetMinimum(49.12911);
   hs_L1WZGGFUntagTCR_stack_11->SetMaximum(196516.5);
   hs_L1WZGGFUntagTCR_stack_11->SetDirectory(0);
   hs_L1WZGGFUntagTCR_stack_11->SetStats(0);
   hs_L1WZGGFUntagTCR_stack_11->SetLineWidth(2);
   hs_L1WZGGFUntagTCR_stack_11->SetMarkerStyle(20);
   hs_L1WZGGFUntagTCR_stack_11->SetMarkerSize(1.2);
   hs_L1WZGGFUntagTCR_stack_11->GetXaxis()->SetLabelFont(42);
   hs_L1WZGGFUntagTCR_stack_11->GetXaxis()->SetLabelSize(0.05);
   hs_L1WZGGFUntagTCR_stack_11->GetXaxis()->SetTitleSize(0.05);
   hs_L1WZGGFUntagTCR_stack_11->GetXaxis()->SetTitleOffset(1.4);
   hs_L1WZGGFUntagTCR_stack_11->GetXaxis()->SetTitleFont(42);
   hs_L1WZGGFUntagTCR_stack_11->GetYaxis()->SetLabelFont(42);
   hs_L1WZGGFUntagTCR_stack_11->GetYaxis()->SetLabelSize(0.05);
   hs_L1WZGGFUntagTCR_stack_11->GetYaxis()->SetTitleSize(0.05);
   hs_L1WZGGFUntagTCR_stack_11->GetYaxis()->SetTitleOffset(1.4);
   hs_L1WZGGFUntagTCR_stack_11->GetYaxis()->SetTitleFont(42);
   hs_L1WZGGFUntagTCR_stack_11->GetZaxis()->SetLabelFont(42);
   hs_L1WZGGFUntagTCR_stack_11->GetZaxis()->SetLabelSize(0.05);
   hs_L1WZGGFUntagTCR_stack_11->GetZaxis()->SetTitleSize(0.05);
   hs_L1WZGGFUntagTCR_stack_11->GetZaxis()->SetTitleFont(42);
   hs_L1WZGGFUntagTCR->SetHistogram(hs_L1WZGGFUntagTCR_stack_11);
   
   
   TH1F *h_postfit_L1WZGGFUntagTCR_zjets_stack_1 = new TH1F("h_postfit_L1WZGGFUntagTCR_zjets_stack_1","h_postfit_L1WZGGFUntagTCR_zjets",12,0,12);
   h_postfit_L1WZGGFUntagTCR_zjets_stack_1->SetBinContent(11,583.9521);
   h_postfit_L1WZGGFUntagTCR_zjets_stack_1->SetBinError(11,58.9229);
   h_postfit_L1WZGGFUntagTCR_zjets_stack_1->SetEntries(1);
   h_postfit_L1WZGGFUntagTCR_zjets_stack_1->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   h_postfit_L1WZGGFUntagTCR_zjets_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   h_postfit_L1WZGGFUntagTCR_zjets_stack_1->SetLineColor(ci);
   h_postfit_L1WZGGFUntagTCR_zjets_stack_1->SetLineWidth(2);
   h_postfit_L1WZGGFUntagTCR_zjets_stack_1->SetMarkerStyle(20);
   h_postfit_L1WZGGFUntagTCR_zjets_stack_1->SetMarkerSize(1.2);
   h_postfit_L1WZGGFUntagTCR_zjets_stack_1->GetXaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFUntagTCR_zjets_stack_1->GetXaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFUntagTCR_zjets_stack_1->GetXaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFUntagTCR_zjets_stack_1->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_L1WZGGFUntagTCR_zjets_stack_1->GetXaxis()->SetTitleFont(42);
   h_postfit_L1WZGGFUntagTCR_zjets_stack_1->GetYaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFUntagTCR_zjets_stack_1->GetYaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFUntagTCR_zjets_stack_1->GetYaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFUntagTCR_zjets_stack_1->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_L1WZGGFUntagTCR_zjets_stack_1->GetYaxis()->SetTitleFont(42);
   h_postfit_L1WZGGFUntagTCR_zjets_stack_1->GetZaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFUntagTCR_zjets_stack_1->GetZaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFUntagTCR_zjets_stack_1->GetZaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFUntagTCR_zjets_stack_1->GetZaxis()->SetTitleFont(42);
   hs_L1WZGGFUntagTCR->Add(h_postfit_L1WZGGFUntagTCR_zjets_stack_1,"");
   
   TH1F *h_postfit_L1WZGGFUntagTCR_diboson_stack_2 = new TH1F("h_postfit_L1WZGGFUntagTCR_diboson_stack_2","h_postfit_L1WZGGFUntagTCR_diboson",12,0,12);
   h_postfit_L1WZGGFUntagTCR_diboson_stack_2->SetBinContent(11,803.5461);
   h_postfit_L1WZGGFUntagTCR_diboson_stack_2->SetBinError(11,75.46152);
   h_postfit_L1WZGGFUntagTCR_diboson_stack_2->SetEntries(1);
   h_postfit_L1WZGGFUntagTCR_diboson_stack_2->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   h_postfit_L1WZGGFUntagTCR_diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   h_postfit_L1WZGGFUntagTCR_diboson_stack_2->SetLineColor(ci);
   h_postfit_L1WZGGFUntagTCR_diboson_stack_2->SetLineWidth(2);
   h_postfit_L1WZGGFUntagTCR_diboson_stack_2->SetMarkerStyle(20);
   h_postfit_L1WZGGFUntagTCR_diboson_stack_2->SetMarkerSize(1.2);
   h_postfit_L1WZGGFUntagTCR_diboson_stack_2->GetXaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFUntagTCR_diboson_stack_2->GetXaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFUntagTCR_diboson_stack_2->GetXaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFUntagTCR_diboson_stack_2->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_L1WZGGFUntagTCR_diboson_stack_2->GetXaxis()->SetTitleFont(42);
   h_postfit_L1WZGGFUntagTCR_diboson_stack_2->GetYaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFUntagTCR_diboson_stack_2->GetYaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFUntagTCR_diboson_stack_2->GetYaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFUntagTCR_diboson_stack_2->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_L1WZGGFUntagTCR_diboson_stack_2->GetYaxis()->SetTitleFont(42);
   h_postfit_L1WZGGFUntagTCR_diboson_stack_2->GetZaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFUntagTCR_diboson_stack_2->GetZaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFUntagTCR_diboson_stack_2->GetZaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFUntagTCR_diboson_stack_2->GetZaxis()->SetTitleFont(42);
   hs_L1WZGGFUntagTCR->Add(h_postfit_L1WZGGFUntagTCR_diboson_stack_2,"");
   
   TH1F *h_postfit_L1WZGGFUntagTCR_singlet_stack_3 = new TH1F("h_postfit_L1WZGGFUntagTCR_singlet_stack_3","h_postfit_L1WZGGFUntagTCR_singlet",12,0,12);
   h_postfit_L1WZGGFUntagTCR_singlet_stack_3->SetBinContent(11,10358.98);
   h_postfit_L1WZGGFUntagTCR_singlet_stack_3->SetBinError(11,1732.679);
   h_postfit_L1WZGGFUntagTCR_singlet_stack_3->SetEntries(1);
   h_postfit_L1WZGGFUntagTCR_singlet_stack_3->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   h_postfit_L1WZGGFUntagTCR_singlet_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   h_postfit_L1WZGGFUntagTCR_singlet_stack_3->SetLineColor(ci);
   h_postfit_L1WZGGFUntagTCR_singlet_stack_3->SetLineWidth(2);
   h_postfit_L1WZGGFUntagTCR_singlet_stack_3->SetMarkerStyle(20);
   h_postfit_L1WZGGFUntagTCR_singlet_stack_3->SetMarkerSize(1.2);
   h_postfit_L1WZGGFUntagTCR_singlet_stack_3->GetXaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFUntagTCR_singlet_stack_3->GetXaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFUntagTCR_singlet_stack_3->GetXaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFUntagTCR_singlet_stack_3->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_L1WZGGFUntagTCR_singlet_stack_3->GetXaxis()->SetTitleFont(42);
   h_postfit_L1WZGGFUntagTCR_singlet_stack_3->GetYaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFUntagTCR_singlet_stack_3->GetYaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFUntagTCR_singlet_stack_3->GetYaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFUntagTCR_singlet_stack_3->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_L1WZGGFUntagTCR_singlet_stack_3->GetYaxis()->SetTitleFont(42);
   h_postfit_L1WZGGFUntagTCR_singlet_stack_3->GetZaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFUntagTCR_singlet_stack_3->GetZaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFUntagTCR_singlet_stack_3->GetZaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFUntagTCR_singlet_stack_3->GetZaxis()->SetTitleFont(42);
   hs_L1WZGGFUntagTCR->Add(h_postfit_L1WZGGFUntagTCR_singlet_stack_3,"");
   
   TH1F *h_postfit_L1WZGGFUntagTCR_wjets_stack_4 = new TH1F("h_postfit_L1WZGGFUntagTCR_wjets_stack_4","h_postfit_L1WZGGFUntagTCR_wjets",12,0,12);
   h_postfit_L1WZGGFUntagTCR_wjets_stack_4->SetBinContent(11,15891.01);
   h_postfit_L1WZGGFUntagTCR_wjets_stack_4->SetBinError(11,107.0319);
   h_postfit_L1WZGGFUntagTCR_wjets_stack_4->SetEntries(1);
   h_postfit_L1WZGGFUntagTCR_wjets_stack_4->SetStats(0);

   ci = TColor::GetColor("#ff9999");
   h_postfit_L1WZGGFUntagTCR_wjets_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff9999");
   h_postfit_L1WZGGFUntagTCR_wjets_stack_4->SetLineColor(ci);
   h_postfit_L1WZGGFUntagTCR_wjets_stack_4->SetLineWidth(2);
   h_postfit_L1WZGGFUntagTCR_wjets_stack_4->SetMarkerStyle(20);
   h_postfit_L1WZGGFUntagTCR_wjets_stack_4->SetMarkerSize(1.2);
   h_postfit_L1WZGGFUntagTCR_wjets_stack_4->GetXaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFUntagTCR_wjets_stack_4->GetXaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFUntagTCR_wjets_stack_4->GetXaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFUntagTCR_wjets_stack_4->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_L1WZGGFUntagTCR_wjets_stack_4->GetXaxis()->SetTitleFont(42);
   h_postfit_L1WZGGFUntagTCR_wjets_stack_4->GetYaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFUntagTCR_wjets_stack_4->GetYaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFUntagTCR_wjets_stack_4->GetYaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFUntagTCR_wjets_stack_4->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_L1WZGGFUntagTCR_wjets_stack_4->GetYaxis()->SetTitleFont(42);
   h_postfit_L1WZGGFUntagTCR_wjets_stack_4->GetZaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFUntagTCR_wjets_stack_4->GetZaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFUntagTCR_wjets_stack_4->GetZaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFUntagTCR_wjets_stack_4->GetZaxis()->SetTitleFont(42);
   hs_L1WZGGFUntagTCR->Add(h_postfit_L1WZGGFUntagTCR_wjets_stack_4,"");
   
   TH1F *h_postfit_L1WZGGFUntagTCR_ttbar_stack_5 = new TH1F("h_postfit_L1WZGGFUntagTCR_ttbar_stack_5","h_postfit_L1WZGGFUntagTCR_ttbar",12,0,12);
   h_postfit_L1WZGGFUntagTCR_ttbar_stack_5->SetBinContent(11,95185.29);
   h_postfit_L1WZGGFUntagTCR_ttbar_stack_5->SetBinError(11,1728.906);
   h_postfit_L1WZGGFUntagTCR_ttbar_stack_5->SetEntries(1);
   h_postfit_L1WZGGFUntagTCR_ttbar_stack_5->SetStats(0);

   ci = TColor::GetColor("#6699ff");
   h_postfit_L1WZGGFUntagTCR_ttbar_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#6699ff");
   h_postfit_L1WZGGFUntagTCR_ttbar_stack_5->SetLineColor(ci);
   h_postfit_L1WZGGFUntagTCR_ttbar_stack_5->SetLineWidth(2);
   h_postfit_L1WZGGFUntagTCR_ttbar_stack_5->SetMarkerStyle(20);
   h_postfit_L1WZGGFUntagTCR_ttbar_stack_5->SetMarkerSize(1.2);
   h_postfit_L1WZGGFUntagTCR_ttbar_stack_5->GetXaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFUntagTCR_ttbar_stack_5->GetXaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFUntagTCR_ttbar_stack_5->GetXaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFUntagTCR_ttbar_stack_5->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_L1WZGGFUntagTCR_ttbar_stack_5->GetXaxis()->SetTitleFont(42);
   h_postfit_L1WZGGFUntagTCR_ttbar_stack_5->GetYaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFUntagTCR_ttbar_stack_5->GetYaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFUntagTCR_ttbar_stack_5->GetYaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFUntagTCR_ttbar_stack_5->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_L1WZGGFUntagTCR_ttbar_stack_5->GetYaxis()->SetTitleFont(42);
   h_postfit_L1WZGGFUntagTCR_ttbar_stack_5->GetZaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFUntagTCR_ttbar_stack_5->GetZaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFUntagTCR_ttbar_stack_5->GetZaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFUntagTCR_ttbar_stack_5->GetZaxis()->SetTitleFont(42);
   hs_L1WZGGFUntagTCR->Add(h_postfit_L1WZGGFUntagTCR_ttbar_stack_5,"");
   hs_L1WZGGFUntagTCR->Draw("histsame");
   
   hs_L1WZGGFUntagWCR = new THStack();
   hs_L1WZGGFUntagWCR->SetName("hs_L1WZGGFUntagWCR");
   hs_L1WZGGFUntagWCR->SetTitle("hs_L1WZGGFUntagWCR");
   
   TH1F *hs_L1WZGGFUntagWCR_stack_12 = new TH1F("hs_L1WZGGFUntagWCR_stack_12","hs_L1WZGGFUntagWCR",12,0,12);
   hs_L1WZGGFUntagWCR_stack_12->SetMinimum(354.8696);
   hs_L1WZGGFUntagWCR_stack_12->SetMaximum(1419478);
   hs_L1WZGGFUntagWCR_stack_12->SetDirectory(0);
   hs_L1WZGGFUntagWCR_stack_12->SetStats(0);
   hs_L1WZGGFUntagWCR_stack_12->SetLineWidth(2);
   hs_L1WZGGFUntagWCR_stack_12->SetMarkerStyle(20);
   hs_L1WZGGFUntagWCR_stack_12->SetMarkerSize(1.2);
   hs_L1WZGGFUntagWCR_stack_12->GetXaxis()->SetLabelFont(42);
   hs_L1WZGGFUntagWCR_stack_12->GetXaxis()->SetLabelSize(0.05);
   hs_L1WZGGFUntagWCR_stack_12->GetXaxis()->SetTitleSize(0.05);
   hs_L1WZGGFUntagWCR_stack_12->GetXaxis()->SetTitleOffset(1.4);
   hs_L1WZGGFUntagWCR_stack_12->GetXaxis()->SetTitleFont(42);
   hs_L1WZGGFUntagWCR_stack_12->GetYaxis()->SetLabelFont(42);
   hs_L1WZGGFUntagWCR_stack_12->GetYaxis()->SetLabelSize(0.05);
   hs_L1WZGGFUntagWCR_stack_12->GetYaxis()->SetTitleSize(0.05);
   hs_L1WZGGFUntagWCR_stack_12->GetYaxis()->SetTitleOffset(1.4);
   hs_L1WZGGFUntagWCR_stack_12->GetYaxis()->SetTitleFont(42);
   hs_L1WZGGFUntagWCR_stack_12->GetZaxis()->SetLabelFont(42);
   hs_L1WZGGFUntagWCR_stack_12->GetZaxis()->SetLabelSize(0.05);
   hs_L1WZGGFUntagWCR_stack_12->GetZaxis()->SetTitleSize(0.05);
   hs_L1WZGGFUntagWCR_stack_12->GetZaxis()->SetTitleFont(42);
   hs_L1WZGGFUntagWCR->SetHistogram(hs_L1WZGGFUntagWCR_stack_12);
   
   
   TH1F *h_postfit_L1WZGGFUntagWCR_diboson_stack_1 = new TH1F("h_postfit_L1WZGGFUntagWCR_diboson_stack_1","h_postfit_L1WZGGFUntagWCR_diboson",12,0,12);
   h_postfit_L1WZGGFUntagWCR_diboson_stack_1->SetBinContent(12,10416.19);
   h_postfit_L1WZGGFUntagWCR_diboson_stack_1->SetBinError(12,808.4348);
   h_postfit_L1WZGGFUntagWCR_diboson_stack_1->SetEntries(1);
   h_postfit_L1WZGGFUntagWCR_diboson_stack_1->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   h_postfit_L1WZGGFUntagWCR_diboson_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   h_postfit_L1WZGGFUntagWCR_diboson_stack_1->SetLineColor(ci);
   h_postfit_L1WZGGFUntagWCR_diboson_stack_1->SetLineWidth(2);
   h_postfit_L1WZGGFUntagWCR_diboson_stack_1->SetMarkerStyle(20);
   h_postfit_L1WZGGFUntagWCR_diboson_stack_1->SetMarkerSize(1.2);
   h_postfit_L1WZGGFUntagWCR_diboson_stack_1->GetXaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFUntagWCR_diboson_stack_1->GetXaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFUntagWCR_diboson_stack_1->GetXaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFUntagWCR_diboson_stack_1->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_L1WZGGFUntagWCR_diboson_stack_1->GetXaxis()->SetTitleFont(42);
   h_postfit_L1WZGGFUntagWCR_diboson_stack_1->GetYaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFUntagWCR_diboson_stack_1->GetYaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFUntagWCR_diboson_stack_1->GetYaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFUntagWCR_diboson_stack_1->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_L1WZGGFUntagWCR_diboson_stack_1->GetYaxis()->SetTitleFont(42);
   h_postfit_L1WZGGFUntagWCR_diboson_stack_1->GetZaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFUntagWCR_diboson_stack_1->GetZaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFUntagWCR_diboson_stack_1->GetZaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFUntagWCR_diboson_stack_1->GetZaxis()->SetTitleFont(42);
   hs_L1WZGGFUntagWCR->Add(h_postfit_L1WZGGFUntagWCR_diboson_stack_1,"");
   
   TH1F *h_postfit_L1WZGGFUntagWCR_zjets_stack_2 = new TH1F("h_postfit_L1WZGGFUntagWCR_zjets_stack_2","h_postfit_L1WZGGFUntagWCR_zjets",12,0,12);
   h_postfit_L1WZGGFUntagWCR_zjets_stack_2->SetBinContent(12,16690.99);
   h_postfit_L1WZGGFUntagWCR_zjets_stack_2->SetBinError(12,1684.182);
   h_postfit_L1WZGGFUntagWCR_zjets_stack_2->SetEntries(1);
   h_postfit_L1WZGGFUntagWCR_zjets_stack_2->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   h_postfit_L1WZGGFUntagWCR_zjets_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   h_postfit_L1WZGGFUntagWCR_zjets_stack_2->SetLineColor(ci);
   h_postfit_L1WZGGFUntagWCR_zjets_stack_2->SetLineWidth(2);
   h_postfit_L1WZGGFUntagWCR_zjets_stack_2->SetMarkerStyle(20);
   h_postfit_L1WZGGFUntagWCR_zjets_stack_2->SetMarkerSize(1.2);
   h_postfit_L1WZGGFUntagWCR_zjets_stack_2->GetXaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFUntagWCR_zjets_stack_2->GetXaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFUntagWCR_zjets_stack_2->GetXaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFUntagWCR_zjets_stack_2->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_L1WZGGFUntagWCR_zjets_stack_2->GetXaxis()->SetTitleFont(42);
   h_postfit_L1WZGGFUntagWCR_zjets_stack_2->GetYaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFUntagWCR_zjets_stack_2->GetYaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFUntagWCR_zjets_stack_2->GetYaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFUntagWCR_zjets_stack_2->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_L1WZGGFUntagWCR_zjets_stack_2->GetYaxis()->SetTitleFont(42);
   h_postfit_L1WZGGFUntagWCR_zjets_stack_2->GetZaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFUntagWCR_zjets_stack_2->GetZaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFUntagWCR_zjets_stack_2->GetZaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFUntagWCR_zjets_stack_2->GetZaxis()->SetTitleFont(42);
   hs_L1WZGGFUntagWCR->Add(h_postfit_L1WZGGFUntagWCR_zjets_stack_2,"");
   
   TH1F *h_postfit_L1WZGGFUntagWCR_singlet_stack_3 = new TH1F("h_postfit_L1WZGGFUntagWCR_singlet_stack_3","h_postfit_L1WZGGFUntagWCR_singlet",12,0,12);
   h_postfit_L1WZGGFUntagWCR_singlet_stack_3->SetBinContent(12,24293.87);
   h_postfit_L1WZGGFUntagWCR_singlet_stack_3->SetBinError(12,3548.31);
   h_postfit_L1WZGGFUntagWCR_singlet_stack_3->SetEntries(1);
   h_postfit_L1WZGGFUntagWCR_singlet_stack_3->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   h_postfit_L1WZGGFUntagWCR_singlet_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   h_postfit_L1WZGGFUntagWCR_singlet_stack_3->SetLineColor(ci);
   h_postfit_L1WZGGFUntagWCR_singlet_stack_3->SetLineWidth(2);
   h_postfit_L1WZGGFUntagWCR_singlet_stack_3->SetMarkerStyle(20);
   h_postfit_L1WZGGFUntagWCR_singlet_stack_3->SetMarkerSize(1.2);
   h_postfit_L1WZGGFUntagWCR_singlet_stack_3->GetXaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFUntagWCR_singlet_stack_3->GetXaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFUntagWCR_singlet_stack_3->GetXaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFUntagWCR_singlet_stack_3->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_L1WZGGFUntagWCR_singlet_stack_3->GetXaxis()->SetTitleFont(42);
   h_postfit_L1WZGGFUntagWCR_singlet_stack_3->GetYaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFUntagWCR_singlet_stack_3->GetYaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFUntagWCR_singlet_stack_3->GetYaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFUntagWCR_singlet_stack_3->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_L1WZGGFUntagWCR_singlet_stack_3->GetYaxis()->SetTitleFont(42);
   h_postfit_L1WZGGFUntagWCR_singlet_stack_3->GetZaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFUntagWCR_singlet_stack_3->GetZaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFUntagWCR_singlet_stack_3->GetZaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFUntagWCR_singlet_stack_3->GetZaxis()->SetTitleFont(42);
   hs_L1WZGGFUntagWCR->Add(h_postfit_L1WZGGFUntagWCR_singlet_stack_3,"");
   
   TH1F *h_postfit_L1WZGGFUntagWCR_MJ_stack_4 = new TH1F("h_postfit_L1WZGGFUntagWCR_MJ_stack_4","h_postfit_L1WZGGFUntagWCR_MJ",12,0,12);
   h_postfit_L1WZGGFUntagWCR_MJ_stack_4->SetBinContent(12,34265.96);
   h_postfit_L1WZGGFUntagWCR_MJ_stack_4->SetBinError(12,3727.217);
   h_postfit_L1WZGGFUntagWCR_MJ_stack_4->SetEntries(1);
   h_postfit_L1WZGGFUntagWCR_MJ_stack_4->SetStats(0);

   ci = TColor::GetColor("#cc0000");
   h_postfit_L1WZGGFUntagWCR_MJ_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   h_postfit_L1WZGGFUntagWCR_MJ_stack_4->SetLineColor(ci);
   h_postfit_L1WZGGFUntagWCR_MJ_stack_4->SetLineWidth(2);
   h_postfit_L1WZGGFUntagWCR_MJ_stack_4->SetMarkerStyle(20);
   h_postfit_L1WZGGFUntagWCR_MJ_stack_4->SetMarkerSize(1.2);
   h_postfit_L1WZGGFUntagWCR_MJ_stack_4->GetXaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFUntagWCR_MJ_stack_4->GetXaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFUntagWCR_MJ_stack_4->GetXaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFUntagWCR_MJ_stack_4->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_L1WZGGFUntagWCR_MJ_stack_4->GetXaxis()->SetTitleFont(42);
   h_postfit_L1WZGGFUntagWCR_MJ_stack_4->GetYaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFUntagWCR_MJ_stack_4->GetYaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFUntagWCR_MJ_stack_4->GetYaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFUntagWCR_MJ_stack_4->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_L1WZGGFUntagWCR_MJ_stack_4->GetYaxis()->SetTitleFont(42);
   h_postfit_L1WZGGFUntagWCR_MJ_stack_4->GetZaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFUntagWCR_MJ_stack_4->GetZaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFUntagWCR_MJ_stack_4->GetZaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFUntagWCR_MJ_stack_4->GetZaxis()->SetTitleFont(42);
   hs_L1WZGGFUntagWCR->Add(h_postfit_L1WZGGFUntagWCR_MJ_stack_4,"");
   
   TH1F *h_postfit_L1WZGGFUntagWCR_ttbar_stack_5 = new TH1F("h_postfit_L1WZGGFUntagWCR_ttbar_stack_5","h_postfit_L1WZGGFUntagWCR_ttbar",12,0,12);
   h_postfit_L1WZGGFUntagWCR_ttbar_stack_5->SetBinContent(12,145178.3);
   h_postfit_L1WZGGFUntagWCR_ttbar_stack_5->SetBinError(12,2636.959);
   h_postfit_L1WZGGFUntagWCR_ttbar_stack_5->SetEntries(1);
   h_postfit_L1WZGGFUntagWCR_ttbar_stack_5->SetStats(0);

   ci = TColor::GetColor("#6699ff");
   h_postfit_L1WZGGFUntagWCR_ttbar_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#6699ff");
   h_postfit_L1WZGGFUntagWCR_ttbar_stack_5->SetLineColor(ci);
   h_postfit_L1WZGGFUntagWCR_ttbar_stack_5->SetLineWidth(2);
   h_postfit_L1WZGGFUntagWCR_ttbar_stack_5->SetMarkerStyle(20);
   h_postfit_L1WZGGFUntagWCR_ttbar_stack_5->SetMarkerSize(1.2);
   h_postfit_L1WZGGFUntagWCR_ttbar_stack_5->GetXaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFUntagWCR_ttbar_stack_5->GetXaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFUntagWCR_ttbar_stack_5->GetXaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFUntagWCR_ttbar_stack_5->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_L1WZGGFUntagWCR_ttbar_stack_5->GetXaxis()->SetTitleFont(42);
   h_postfit_L1WZGGFUntagWCR_ttbar_stack_5->GetYaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFUntagWCR_ttbar_stack_5->GetYaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFUntagWCR_ttbar_stack_5->GetYaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFUntagWCR_ttbar_stack_5->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_L1WZGGFUntagWCR_ttbar_stack_5->GetYaxis()->SetTitleFont(42);
   h_postfit_L1WZGGFUntagWCR_ttbar_stack_5->GetZaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFUntagWCR_ttbar_stack_5->GetZaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFUntagWCR_ttbar_stack_5->GetZaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFUntagWCR_ttbar_stack_5->GetZaxis()->SetTitleFont(42);
   hs_L1WZGGFUntagWCR->Add(h_postfit_L1WZGGFUntagWCR_ttbar_stack_5,"");
   
   TH1F *h_postfit_L1WZGGFUntagWCR_wjets_stack_6 = new TH1F("h_postfit_L1WZGGFUntagWCR_wjets_stack_6","h_postfit_L1WZGGFUntagWCR_wjets",12,0,12);
   h_postfit_L1WZGGFUntagWCR_wjets_stack_6->SetBinContent(12,656328.7);
   h_postfit_L1WZGGFUntagWCR_wjets_stack_6->SetBinError(12,4420.621);
   h_postfit_L1WZGGFUntagWCR_wjets_stack_6->SetEntries(1);
   h_postfit_L1WZGGFUntagWCR_wjets_stack_6->SetStats(0);

   ci = TColor::GetColor("#ff9999");
   h_postfit_L1WZGGFUntagWCR_wjets_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#ff9999");
   h_postfit_L1WZGGFUntagWCR_wjets_stack_6->SetLineColor(ci);
   h_postfit_L1WZGGFUntagWCR_wjets_stack_6->SetLineWidth(2);
   h_postfit_L1WZGGFUntagWCR_wjets_stack_6->SetMarkerStyle(20);
   h_postfit_L1WZGGFUntagWCR_wjets_stack_6->SetMarkerSize(1.2);
   h_postfit_L1WZGGFUntagWCR_wjets_stack_6->GetXaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFUntagWCR_wjets_stack_6->GetXaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFUntagWCR_wjets_stack_6->GetXaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFUntagWCR_wjets_stack_6->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_L1WZGGFUntagWCR_wjets_stack_6->GetXaxis()->SetTitleFont(42);
   h_postfit_L1WZGGFUntagWCR_wjets_stack_6->GetYaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFUntagWCR_wjets_stack_6->GetYaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFUntagWCR_wjets_stack_6->GetYaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFUntagWCR_wjets_stack_6->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_L1WZGGFUntagWCR_wjets_stack_6->GetYaxis()->SetTitleFont(42);
   h_postfit_L1WZGGFUntagWCR_wjets_stack_6->GetZaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFUntagWCR_wjets_stack_6->GetZaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFUntagWCR_wjets_stack_6->GetZaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFUntagWCR_wjets_stack_6->GetZaxis()->SetTitleFont(42);
   hs_L1WZGGFUntagWCR->Add(h_postfit_L1WZGGFUntagWCR_wjets_stack_6,"");
   hs_L1WZGGFUntagWCR->Draw("histsame");
   
   Double_t Graph0_fx3001[12] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5,
   8.5,
   9.5,
   10.5,
   11.5};
   Double_t Graph0_fy3001[12] = {
   2172.559,
   2828.02,
   41053.28,
   62089.96,
   1770.921,
   3835.043,
   38937.51,
   132648.8,
   19266.78,
   76941.05,
   122822.8,
   887174};
   Double_t Graph0_felx3001[12] = {
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
   Double_t Graph0_fely3001[12] = {
   55.29205,
   106.8593,
   784.1535,
   541.9475,
   53.0518,
   132.4742,
   569.5428,
   868.1068,
   238.5512,
   1530.829,
   2451.921,
   7514.527};
   Double_t Graph0_fehx3001[12] = {
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
   Double_t Graph0_fehy3001[12] = {
   55.29205,
   106.8593,
   784.1535,
   541.9475,
   53.0518,
   132.4742,
   569.5428,
   868.1068,
   238.5512,
   1530.829,
   2451.921,
   7514.527};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,Graph0_fx3001,Graph0_fy3001,Graph0_felx3001,Graph0_fehx3001,Graph0_fely3001,Graph0_fehy3001);
   grae->SetName("Graph0");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3004);
   grae->SetMarkerStyle(0);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph03001 = new TH1F("Graph_Graph03001","Graph",100,0,13.2);
   Graph_Graph03001->SetMinimum(1546.082);
   Graph_Graph03001->SetMaximum(983985.6);
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
   
   TH1F *h_prefitdata__1 = new TH1F("h_prefitdata__1","h_prefitdata",12,0,12);
   h_prefitdata__1->SetBinContent(1,2047);
   h_prefitdata__1->SetBinContent(2,2565);
   h_prefitdata__1->SetBinContent(3,36677);
   h_prefitdata__1->SetBinContent(4,57699);
   h_prefitdata__1->SetBinContent(5,1708);
   h_prefitdata__1->SetBinContent(6,3546);
   h_prefitdata__1->SetBinContent(7,34573);
   h_prefitdata__1->SetBinContent(8,117306);
   h_prefitdata__1->SetBinContent(9,19143);
   h_prefitdata__1->SetBinContent(10,77973);
   h_prefitdata__1->SetBinContent(11,118928);
   h_prefitdata__1->SetBinContent(12,895362);
   h_prefitdata__1->SetBinError(1,45.24379);
   h_prefitdata__1->SetBinError(2,50.64583);
   h_prefitdata__1->SetBinError(3,191.5124);
   h_prefitdata__1->SetBinError(4,240.2062);
   h_prefitdata__1->SetBinError(5,41.32796);
   h_prefitdata__1->SetBinError(6,59.5483);
   h_prefitdata__1->SetBinError(7,185.9382);
   h_prefitdata__1->SetBinError(8,342.4996);
   h_prefitdata__1->SetBinError(9,138.3582);
   h_prefitdata__1->SetBinError(10,279.2365);
   h_prefitdata__1->SetBinError(11,344.8594);
   h_prefitdata__1->SetBinError(12,946.2357);
   h_prefitdata__1->SetEntries(12);
   h_prefitdata__1->SetStats(0);
   h_prefitdata__1->SetLineWidth(2);
   h_prefitdata__1->SetMarkerStyle(20);
   h_prefitdata__1->SetMarkerSize(1.2);
   h_prefitdata__1->GetXaxis()->SetBinLabel(1,"HPL1WZGGFTagTCR");
   h_prefitdata__1->GetXaxis()->SetBinLabel(2,"HPL1WZGGFTagWCR");
   h_prefitdata__1->GetXaxis()->SetBinLabel(3,"HPL1WZGGFUntagTCR");
   h_prefitdata__1->GetXaxis()->SetBinLabel(4,"HPL1WZGGFUntagWCR");
   h_prefitdata__1->GetXaxis()->SetBinLabel(5,"LPL1WZGGFTagTCR");
   h_prefitdata__1->GetXaxis()->SetBinLabel(6,"LPL1WZGGFTagWCR");
   h_prefitdata__1->GetXaxis()->SetBinLabel(7,"LPL1WZGGFUntagTCR");
   h_prefitdata__1->GetXaxis()->SetBinLabel(8,"LPL1WZGGFUntagWCR");
   h_prefitdata__1->GetXaxis()->SetBinLabel(9,"L1WZGGFTagTCR");
   h_prefitdata__1->GetXaxis()->SetBinLabel(10,"L1WZGGFTagWCR");
   h_prefitdata__1->GetXaxis()->SetBinLabel(11,"L1WZGGFUntagTCR");
   h_prefitdata__1->GetXaxis()->SetBinLabel(12,"L1WZGGFUntagWCR");
   h_prefitdata__1->GetXaxis()->SetLabelFont(42);
   h_prefitdata__1->GetXaxis()->SetLabelSize(0.05);
   h_prefitdata__1->GetXaxis()->SetTitleSize(0.05);
   h_prefitdata__1->GetXaxis()->SetTitleOffset(1.4);
   h_prefitdata__1->GetXaxis()->SetTitleFont(42);
   h_prefitdata__1->GetYaxis()->SetLabelFont(42);
   h_prefitdata__1->GetYaxis()->SetLabelSize(0.05);
   h_prefitdata__1->GetYaxis()->SetTitleSize(0.05);
   h_prefitdata__1->GetYaxis()->SetTitleOffset(1.4);
   h_prefitdata__1->GetYaxis()->SetTitleFont(42);
   h_prefitdata__1->GetZaxis()->SetLabelFont(42);
   h_prefitdata__1->GetZaxis()->SetLabelSize(0.05);
   h_prefitdata__1->GetZaxis()->SetTitleSize(0.05);
   h_prefitdata__1->GetZaxis()->SetTitleFont(42);
   h_prefitdata__1->Draw("same");
   
   TLegend *leg = new TLegend(0.63,0.65,0.91,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("h_postfit_HPL1WZGGFTagTCR_zjets_stack_1","Z+jets","f");

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
   entry=leg->AddEntry("h_postfit_HPL1WZGGFTagTCR_diboson_stack_2","Diboson","f");

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
   entry=leg->AddEntry("h_postfit_HPL1WZGGFTagTCR_wjets_stack_3","W+jets","f");

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
   entry=leg->AddEntry("h_postfit_HPL1WZGGFTagTCR_singlet_stack_4","Single-t","f");

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
   entry=leg->AddEntry("h_postfit_HPL1WZGGFTagTCR_ttbar_stack_5","Top Pair","f");

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
   entry=leg->AddEntry("h_postfit_L1WZGGFTagWCR_MJ_stack_3","Multijet","f");

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
   entry=leg->AddEntry("h_postfit_L1WZGGFUntagWCR_MJ_stack_4","Multijet","f");

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
   entry=leg->AddEntry("h_prefitdata","Data","lep");
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
   
   TH1F *hs_HPL1WZGGFTagTCR_copy__2 = new TH1F("hs_HPL1WZGGFTagTCR_copy__2","hs_HPL1WZGGFTagTCR",12,0,12);
   hs_HPL1WZGGFTagTCR_copy__2->SetMinimum(5);
   hs_HPL1WZGGFTagTCR_copy__2->SetMaximum(2.172559e+08);
   hs_HPL1WZGGFTagTCR_copy__2->SetDirectory(0);
   hs_HPL1WZGGFTagTCR_copy__2->SetStats(0);
   hs_HPL1WZGGFTagTCR_copy__2->SetLineWidth(2);
   hs_HPL1WZGGFTagTCR_copy__2->SetMarkerStyle(20);
   hs_HPL1WZGGFTagTCR_copy__2->SetMarkerSize(1.2);
   hs_HPL1WZGGFTagTCR_copy__2->GetXaxis()->SetLabelFont(43);
   hs_HPL1WZGGFTagTCR_copy__2->GetXaxis()->SetLabelSize(0);
   hs_HPL1WZGGFTagTCR_copy__2->GetXaxis()->SetTitleSize(0);
   hs_HPL1WZGGFTagTCR_copy__2->GetXaxis()->SetTitleOffset(1.4);
   hs_HPL1WZGGFTagTCR_copy__2->GetXaxis()->SetTitleFont(43);
   hs_HPL1WZGGFTagTCR_copy__2->GetYaxis()->SetTitle("Events");
   hs_HPL1WZGGFTagTCR_copy__2->GetYaxis()->SetLabelFont(43);
   hs_HPL1WZGGFTagTCR_copy__2->GetYaxis()->SetLabelSize(25);
   hs_HPL1WZGGFTagTCR_copy__2->GetYaxis()->SetTitleSize(25);
   hs_HPL1WZGGFTagTCR_copy__2->GetYaxis()->SetTitleOffset(2);
   hs_HPL1WZGGFTagTCR_copy__2->GetYaxis()->SetTitleFont(43);
   hs_HPL1WZGGFTagTCR_copy__2->GetZaxis()->SetLabelFont(42);
   hs_HPL1WZGGFTagTCR_copy__2->GetZaxis()->SetLabelSize(0.05);
   hs_HPL1WZGGFTagTCR_copy__2->GetZaxis()->SetTitleSize(0.05);
   hs_HPL1WZGGFTagTCR_copy__2->GetZaxis()->SetTitleFont(42);
   hs_HPL1WZGGFTagTCR_copy__2->Draw("sameaxis");
   pad1->Modified();
   c1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "pad2",0,0.35,1,0.45);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-2.43038,0.7918367,12.75949,1.2);
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
   
   TH1F *h_postfiterror__3 = new TH1F("h_postfiterror__3","h_postfiterror",12,0,12);
   h_postfiterror__3->SetBinContent(1,1);
   h_postfiterror__3->SetBinContent(2,1);
   h_postfiterror__3->SetBinContent(3,1);
   h_postfiterror__3->SetBinContent(4,1);
   h_postfiterror__3->SetBinContent(5,1);
   h_postfiterror__3->SetBinContent(6,1);
   h_postfiterror__3->SetBinContent(7,1);
   h_postfiterror__3->SetBinContent(8,1);
   h_postfiterror__3->SetBinContent(9,1);
   h_postfiterror__3->SetBinContent(10,1);
   h_postfiterror__3->SetBinContent(11,1);
   h_postfiterror__3->SetBinContent(12,1);
   h_postfiterror__3->SetBinError(1,0.03599201);
   h_postfiterror__3->SetBinError(2,0.05343732);
   h_postfiterror__3->SetBinError(3,0.02701272);
   h_postfiterror__3->SetBinError(4,0.01234386);
   h_postfiterror__3->SetBinError(5,0.04236585);
   h_postfiterror__3->SetBinError(6,0.04885127);
   h_postfiterror__3->SetBinError(7,0.02068584);
   h_postfiterror__3->SetBinError(8,0.009255176);
   h_postfiterror__3->SetBinError(9,0.01751005);
   h_postfiterror__3->SetBinError(10,0.02813738);
   h_postfiterror__3->SetBinError(11,0.02823206);
   h_postfiterror__3->SetBinError(12,0.01197865);
   h_postfiterror__3->SetMinimum(0.8);
   h_postfiterror__3->SetMaximum(1.2);
   h_postfiterror__3->SetEntries(12237.87);
   h_postfiterror__3->SetStats(0);
   h_postfiterror__3->SetLineWidth(2);
   h_postfiterror__3->SetMarkerStyle(20);
   h_postfiterror__3->SetMarkerSize(1.2);
   h_postfiterror__3->GetXaxis()->SetBinLabel(1,"HPL1WZGGFTagTCR");
   h_postfiterror__3->GetXaxis()->SetBinLabel(2,"HPL1WZGGFTagWCR");
   h_postfiterror__3->GetXaxis()->SetBinLabel(3,"HPL1WZGGFUntagTCR");
   h_postfiterror__3->GetXaxis()->SetBinLabel(4,"HPL1WZGGFUntagWCR");
   h_postfiterror__3->GetXaxis()->SetBinLabel(5,"LPL1WZGGFTagTCR");
   h_postfiterror__3->GetXaxis()->SetBinLabel(6,"LPL1WZGGFTagWCR");
   h_postfiterror__3->GetXaxis()->SetBinLabel(7,"LPL1WZGGFUntagTCR");
   h_postfiterror__3->GetXaxis()->SetBinLabel(8,"LPL1WZGGFUntagWCR");
   h_postfiterror__3->GetXaxis()->SetBinLabel(9,"L1WZGGFTagTCR");
   h_postfiterror__3->GetXaxis()->SetBinLabel(10,"L1WZGGFTagWCR");
   h_postfiterror__3->GetXaxis()->SetBinLabel(11,"L1WZGGFUntagTCR");
   h_postfiterror__3->GetXaxis()->SetBinLabel(12,"L1WZGGFUntagWCR");
   h_postfiterror__3->GetXaxis()->SetLabelFont(43);
   h_postfiterror__3->GetXaxis()->SetLabelSize(0);
   h_postfiterror__3->GetXaxis()->SetTitleSize(0);
   h_postfiterror__3->GetXaxis()->SetTitleOffset(1.4);
   h_postfiterror__3->GetXaxis()->SetTitleFont(43);
   h_postfiterror__3->GetYaxis()->SetTitle("Data/Postfit");
   h_postfiterror__3->GetYaxis()->SetNdivisions(205);
   h_postfiterror__3->GetYaxis()->SetLabelFont(43);
   h_postfiterror__3->GetYaxis()->SetLabelSize(25);
   h_postfiterror__3->GetYaxis()->SetTitleSize(25);
   h_postfiterror__3->GetYaxis()->SetTitleOffset(2);
   h_postfiterror__3->GetYaxis()->SetTitleFont(43);
   h_postfiterror__3->GetZaxis()->SetLabelFont(42);
   h_postfiterror__3->GetZaxis()->SetLabelSize(0.05);
   h_postfiterror__3->GetZaxis()->SetTitleSize(0.05);
   h_postfiterror__3->GetZaxis()->SetTitleFont(42);
   h_postfiterror__3->Draw("AXIS");
   
   Double_t Graph0_fx3002[12] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5,
   8.5,
   9.5,
   10.5,
   11.5};
   Double_t Graph0_fy3002[12] = {
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
   Double_t Graph0_felx3002[12] = {
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
   Double_t Graph0_fely3002[12] = {
   0.0254502,
   0.03778589,
   0.01910087,
   0.008728424,
   0.02995718,
   0.03454307,
   0.0146271,
   0.006544397,
   0.01238148,
   0.01989613,
   0.01996308,
   0.008470184};
   Double_t Graph0_fehx3002[12] = {
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
   Double_t Graph0_fehy3002[12] = {
   0.0254502,
   0.03778589,
   0.01910087,
   0.008728424,
   0.02995718,
   0.03454307,
   0.0146271,
   0.006544397,
   0.01238148,
   0.01989613,
   0.01996308,
   0.008470184};
   grae = new TGraphAsymmErrors(12,Graph0_fx3002,Graph0_fy3002,Graph0_felx3002,Graph0_fehx3002,Graph0_fely3002,Graph0_fehy3002);
   grae->SetName("Graph0");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3004);
   grae->SetMarkerStyle(0);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph03002 = new TH1F("Graph_Graph03002","Graph",100,0,13.2);
   Graph_Graph03002->SetMinimum(0.9546569);
   Graph_Graph03002->SetMaximum(1.045343);
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
   TLine *line = new TLine(0,1,12,1);
   line->SetLineStyle(2);
   line->Draw();
   
   TH1F *h_prefitdata__4 = new TH1F("h_prefitdata__4","h_prefitdata",12,0,12);
   h_prefitdata__4->SetBinContent(1,0.9422069);
   h_prefitdata__4->SetBinContent(2,0.906995);
   h_prefitdata__4->SetBinContent(3,0.8934001);
   h_prefitdata__4->SetBinContent(4,0.9292806);
   h_prefitdata__4->SetBinContent(5,0.96447);
   h_prefitdata__4->SetBinContent(6,0.9246311);
   h_prefitdata__4->SetBinContent(7,0.8879098);
   h_prefitdata__4->SetBinContent(8,0.8843349);
   h_prefitdata__4->SetBinContent(9,0.9935755);
   h_prefitdata__4->SetBinContent(10,1.013412);
   h_prefitdata__4->SetBinContent(11,0.9682894);
   h_prefitdata__4->SetBinContent(12,1.009229);
   h_prefitdata__4->SetBinError(1,0.03175995);
   h_prefitdata__4->SetBinError(2,0.0386686);
   h_prefitdata__4->SetBinError(3,0.01769087);
   h_prefitdata__4->SetBinError(4,0.008986519);
   h_prefitdata__4->SetBinError(5,0.0371404);
   h_prefitdata__4->SetBinError(6,0.03551391);
   h_prefitdata__4->SetBinError(7,0.01383762);
   h_prefitdata__4->SetBinError(8,0.006337285);
   h_prefitdata__4->SetBinError(9,0.01424454);
   h_prefitdata__4->SetBinError(10,0.020487);
   h_prefitdata__4->SetBinError(11,0.0195329);
   h_prefitdata__4->SetBinError(12,0.008614639);
   h_prefitdata__4->SetEntries(18703.97);
   h_prefitdata__4->SetStats(0);
   h_prefitdata__4->SetLineWidth(2);
   h_prefitdata__4->SetMarkerStyle(20);
   h_prefitdata__4->SetMarkerSize(1.2);
   h_prefitdata__4->GetXaxis()->SetBinLabel(1,"HPL1WZGGFTagTCR");
   h_prefitdata__4->GetXaxis()->SetBinLabel(2,"HPL1WZGGFTagWCR");
   h_prefitdata__4->GetXaxis()->SetBinLabel(3,"HPL1WZGGFUntagTCR");
   h_prefitdata__4->GetXaxis()->SetBinLabel(4,"HPL1WZGGFUntagWCR");
   h_prefitdata__4->GetXaxis()->SetBinLabel(5,"LPL1WZGGFTagTCR");
   h_prefitdata__4->GetXaxis()->SetBinLabel(6,"LPL1WZGGFTagWCR");
   h_prefitdata__4->GetXaxis()->SetBinLabel(7,"LPL1WZGGFUntagTCR");
   h_prefitdata__4->GetXaxis()->SetBinLabel(8,"LPL1WZGGFUntagWCR");
   h_prefitdata__4->GetXaxis()->SetBinLabel(9,"L1WZGGFTagTCR");
   h_prefitdata__4->GetXaxis()->SetBinLabel(10,"L1WZGGFTagWCR");
   h_prefitdata__4->GetXaxis()->SetBinLabel(11,"L1WZGGFUntagTCR");
   h_prefitdata__4->GetXaxis()->SetBinLabel(12,"L1WZGGFUntagWCR");
   h_prefitdata__4->GetXaxis()->SetLabelFont(42);
   h_prefitdata__4->GetXaxis()->SetLabelSize(0.05);
   h_prefitdata__4->GetXaxis()->SetTitleSize(0.05);
   h_prefitdata__4->GetXaxis()->SetTitleOffset(1.4);
   h_prefitdata__4->GetXaxis()->SetTitleFont(42);
   h_prefitdata__4->GetYaxis()->SetLabelFont(42);
   h_prefitdata__4->GetYaxis()->SetLabelSize(0.05);
   h_prefitdata__4->GetYaxis()->SetTitleSize(0.05);
   h_prefitdata__4->GetYaxis()->SetTitleOffset(1.4);
   h_prefitdata__4->GetYaxis()->SetTitleFont(42);
   h_prefitdata__4->GetZaxis()->SetLabelFont(42);
   h_prefitdata__4->GetZaxis()->SetLabelSize(0.05);
   h_prefitdata__4->GetZaxis()->SetTitleSize(0.05);
   h_prefitdata__4->GetZaxis()->SetTitleFont(42);
   h_prefitdata__4->Draw("sameE0");
   
   TH1F *h_postfiterror_copy__5 = new TH1F("h_postfiterror_copy__5","h_postfiterror",12,0,12);
   h_postfiterror_copy__5->SetBinContent(1,1);
   h_postfiterror_copy__5->SetBinContent(2,1);
   h_postfiterror_copy__5->SetBinContent(3,1);
   h_postfiterror_copy__5->SetBinContent(4,1);
   h_postfiterror_copy__5->SetBinContent(5,1);
   h_postfiterror_copy__5->SetBinContent(6,1);
   h_postfiterror_copy__5->SetBinContent(7,1);
   h_postfiterror_copy__5->SetBinContent(8,1);
   h_postfiterror_copy__5->SetBinContent(9,1);
   h_postfiterror_copy__5->SetBinContent(10,1);
   h_postfiterror_copy__5->SetBinContent(11,1);
   h_postfiterror_copy__5->SetBinContent(12,1);
   h_postfiterror_copy__5->SetBinError(1,0.03599201);
   h_postfiterror_copy__5->SetBinError(2,0.05343732);
   h_postfiterror_copy__5->SetBinError(3,0.02701272);
   h_postfiterror_copy__5->SetBinError(4,0.01234386);
   h_postfiterror_copy__5->SetBinError(5,0.04236585);
   h_postfiterror_copy__5->SetBinError(6,0.04885127);
   h_postfiterror_copy__5->SetBinError(7,0.02068584);
   h_postfiterror_copy__5->SetBinError(8,0.009255176);
   h_postfiterror_copy__5->SetBinError(9,0.01751005);
   h_postfiterror_copy__5->SetBinError(10,0.02813738);
   h_postfiterror_copy__5->SetBinError(11,0.02823206);
   h_postfiterror_copy__5->SetBinError(12,0.01197865);
   h_postfiterror_copy__5->SetMinimum(0.8);
   h_postfiterror_copy__5->SetMaximum(1.2);
   h_postfiterror_copy__5->SetEntries(12237.87);
   h_postfiterror_copy__5->SetDirectory(0);
   h_postfiterror_copy__5->SetStats(0);
   h_postfiterror_copy__5->SetLineWidth(2);
   h_postfiterror_copy__5->SetMarkerStyle(20);
   h_postfiterror_copy__5->SetMarkerSize(1.2);
   h_postfiterror_copy__5->GetXaxis()->SetBinLabel(1,"HPL1WZGGFTagTCR");
   h_postfiterror_copy__5->GetXaxis()->SetBinLabel(2,"HPL1WZGGFTagWCR");
   h_postfiterror_copy__5->GetXaxis()->SetBinLabel(3,"HPL1WZGGFUntagTCR");
   h_postfiterror_copy__5->GetXaxis()->SetBinLabel(4,"HPL1WZGGFUntagWCR");
   h_postfiterror_copy__5->GetXaxis()->SetBinLabel(5,"LPL1WZGGFTagTCR");
   h_postfiterror_copy__5->GetXaxis()->SetBinLabel(6,"LPL1WZGGFTagWCR");
   h_postfiterror_copy__5->GetXaxis()->SetBinLabel(7,"LPL1WZGGFUntagTCR");
   h_postfiterror_copy__5->GetXaxis()->SetBinLabel(8,"LPL1WZGGFUntagWCR");
   h_postfiterror_copy__5->GetXaxis()->SetBinLabel(9,"L1WZGGFTagTCR");
   h_postfiterror_copy__5->GetXaxis()->SetBinLabel(10,"L1WZGGFTagWCR");
   h_postfiterror_copy__5->GetXaxis()->SetBinLabel(11,"L1WZGGFUntagTCR");
   h_postfiterror_copy__5->GetXaxis()->SetBinLabel(12,"L1WZGGFUntagWCR");
   h_postfiterror_copy__5->GetXaxis()->SetLabelFont(43);
   h_postfiterror_copy__5->GetXaxis()->SetLabelSize(0);
   h_postfiterror_copy__5->GetXaxis()->SetTitleSize(0);
   h_postfiterror_copy__5->GetXaxis()->SetTitleOffset(1.4);
   h_postfiterror_copy__5->GetXaxis()->SetTitleFont(43);
   h_postfiterror_copy__5->GetYaxis()->SetTitle("Data/Postfit");
   h_postfiterror_copy__5->GetYaxis()->SetNdivisions(205);
   h_postfiterror_copy__5->GetYaxis()->SetLabelFont(43);
   h_postfiterror_copy__5->GetYaxis()->SetLabelSize(25);
   h_postfiterror_copy__5->GetYaxis()->SetTitleSize(25);
   h_postfiterror_copy__5->GetYaxis()->SetTitleOffset(2);
   h_postfiterror_copy__5->GetYaxis()->SetTitleFont(43);
   h_postfiterror_copy__5->GetZaxis()->SetLabelFont(42);
   h_postfiterror_copy__5->GetZaxis()->SetLabelSize(0.05);
   h_postfiterror_copy__5->GetZaxis()->SetTitleSize(0.05);
   h_postfiterror_copy__5->GetZaxis()->SetTitleFont(42);
   h_postfiterror_copy__5->Draw("sameaxis");
   pad2->Modified();
   c1->cd();
  
// ------------>Primitives in pad: pad3
   TPad *pad3 = new TPad("pad3", "pad3",0,0,1,0.35);
   pad3->Draw();
   pad3->cd();
   pad3->Range(-2.43038,-1.833333,12.75949,1.5);
   pad3->SetFillColor(0);
   pad3->SetBorderMode(0);
   pad3->SetBorderSize(2);
   pad3->SetTickx(1);
   pad3->SetTicky(1);
   pad3->SetLeftMargin(0.16);
   pad3->SetRightMargin(0.05);
   pad3->SetTopMargin(0);
   pad3->SetBottomMargin(0.7);
   pad3->SetFrameBorderMode(0);
   pad3->SetFrameBorderMode(0);
   
   TH1F *h_prefiterror__6 = new TH1F("h_prefiterror__6","h_prefiterror",12,0,12);
   h_prefiterror__6->SetBinContent(1,1);
   h_prefiterror__6->SetBinContent(2,1);
   h_prefiterror__6->SetBinContent(3,1);
   h_prefiterror__6->SetBinContent(4,1);
   h_prefiterror__6->SetBinContent(5,1);
   h_prefiterror__6->SetBinContent(6,1);
   h_prefiterror__6->SetBinContent(7,1);
   h_prefiterror__6->SetBinContent(8,1);
   h_prefiterror__6->SetBinContent(9,1);
   h_prefiterror__6->SetBinContent(10,1);
   h_prefiterror__6->SetBinContent(11,1);
   h_prefiterror__6->SetBinContent(12,1);
   h_prefiterror__6->SetBinError(1,0.03599201);
   h_prefiterror__6->SetBinError(2,0.05343732);
   h_prefiterror__6->SetBinError(3,0.02701272);
   h_prefiterror__6->SetBinError(4,0.01234386);
   h_prefiterror__6->SetBinError(5,0.04236585);
   h_prefiterror__6->SetBinError(6,0.04885127);
   h_prefiterror__6->SetBinError(7,0.02068584);
   h_prefiterror__6->SetBinError(8,0.009255176);
   h_prefiterror__6->SetBinError(9,0.01751005);
   h_prefiterror__6->SetBinError(10,0.02813738);
   h_prefiterror__6->SetBinError(11,0.02823206);
   h_prefiterror__6->SetBinError(12,0.01197865);
   h_prefiterror__6->SetMinimum(0.5);
   h_prefiterror__6->SetMaximum(1.5);
   h_prefiterror__6->SetEntries(12237.87);
   h_prefiterror__6->SetStats(0);
   h_prefiterror__6->SetLineWidth(2);
   h_prefiterror__6->SetMarkerStyle(20);
   h_prefiterror__6->SetMarkerSize(1.2);
   h_prefiterror__6->GetXaxis()->SetBinLabel(1,"HPL1WZGGFTagTCR");
   h_prefiterror__6->GetXaxis()->SetBinLabel(2,"HPL1WZGGFTagWCR");
   h_prefiterror__6->GetXaxis()->SetBinLabel(3,"HPL1WZGGFUntagTCR");
   h_prefiterror__6->GetXaxis()->SetBinLabel(4,"HPL1WZGGFUntagWCR");
   h_prefiterror__6->GetXaxis()->SetBinLabel(5,"LPL1WZGGFTagTCR");
   h_prefiterror__6->GetXaxis()->SetBinLabel(6,"LPL1WZGGFTagWCR");
   h_prefiterror__6->GetXaxis()->SetBinLabel(7,"LPL1WZGGFUntagTCR");
   h_prefiterror__6->GetXaxis()->SetBinLabel(8,"LPL1WZGGFUntagWCR");
   h_prefiterror__6->GetXaxis()->SetBinLabel(9,"L1WZGGFTagTCR");
   h_prefiterror__6->GetXaxis()->SetBinLabel(10,"L1WZGGFTagWCR");
   h_prefiterror__6->GetXaxis()->SetBinLabel(11,"L1WZGGFUntagTCR");
   h_prefiterror__6->GetXaxis()->SetBinLabel(12,"L1WZGGFUntagWCR");
   h_prefiterror__6->GetXaxis()->SetBit(TAxis::kLabelsVert);
   h_prefiterror__6->GetXaxis()->SetLabelFont(43);
   h_prefiterror__6->GetXaxis()->SetLabelSize(25);
   h_prefiterror__6->GetXaxis()->SetTitleSize(25);
   h_prefiterror__6->GetXaxis()->SetTitleOffset(5);
   h_prefiterror__6->GetXaxis()->SetTitleFont(43);
   h_prefiterror__6->GetYaxis()->SetTitle("Prefit/Postfit");
   h_prefiterror__6->GetYaxis()->SetNdivisions(205);
   h_prefiterror__6->GetYaxis()->SetLabelFont(43);
   h_prefiterror__6->GetYaxis()->SetLabelSize(25);
   h_prefiterror__6->GetYaxis()->SetTitleSize(25);
   h_prefiterror__6->GetYaxis()->SetTitleOffset(2);
   h_prefiterror__6->GetYaxis()->SetTitleFont(43);
   h_prefiterror__6->GetZaxis()->SetLabelFont(42);
   h_prefiterror__6->GetZaxis()->SetLabelSize(0.05);
   h_prefiterror__6->GetZaxis()->SetTitleSize(0.05);
   h_prefiterror__6->GetZaxis()->SetTitleFont(42);
   h_prefiterror__6->Draw("AXIS");
   line = new TLine(0,1,12,1);
   line->SetLineStyle(2);
   line->Draw();
   
   TH1F *h_prefiterror__7 = new TH1F("h_prefiterror__7","h_prefiterror",12,0,12);
   h_prefiterror__7->SetBinContent(1,1);
   h_prefiterror__7->SetBinContent(2,1);
   h_prefiterror__7->SetBinContent(3,1);
   h_prefiterror__7->SetBinContent(4,1);
   h_prefiterror__7->SetBinContent(5,1);
   h_prefiterror__7->SetBinContent(6,1);
   h_prefiterror__7->SetBinContent(7,1);
   h_prefiterror__7->SetBinContent(8,1);
   h_prefiterror__7->SetBinContent(9,1);
   h_prefiterror__7->SetBinContent(10,1);
   h_prefiterror__7->SetBinContent(11,1);
   h_prefiterror__7->SetBinContent(12,1);
   h_prefiterror__7->SetBinError(1,0.03599201);
   h_prefiterror__7->SetBinError(2,0.05343732);
   h_prefiterror__7->SetBinError(3,0.02701272);
   h_prefiterror__7->SetBinError(4,0.01234386);
   h_prefiterror__7->SetBinError(5,0.04236585);
   h_prefiterror__7->SetBinError(6,0.04885127);
   h_prefiterror__7->SetBinError(7,0.02068584);
   h_prefiterror__7->SetBinError(8,0.009255176);
   h_prefiterror__7->SetBinError(9,0.01751005);
   h_prefiterror__7->SetBinError(10,0.02813738);
   h_prefiterror__7->SetBinError(11,0.02823206);
   h_prefiterror__7->SetBinError(12,0.01197865);
   h_prefiterror__7->SetMinimum(0.5);
   h_prefiterror__7->SetMaximum(1.5);
   h_prefiterror__7->SetEntries(12237.87);
   h_prefiterror__7->SetStats(0);
   h_prefiterror__7->SetLineWidth(2);
   h_prefiterror__7->SetMarkerStyle(20);
   h_prefiterror__7->SetMarkerSize(1.2);
   h_prefiterror__7->GetXaxis()->SetBinLabel(1,"HPL1WZGGFTagTCR");
   h_prefiterror__7->GetXaxis()->SetBinLabel(2,"HPL1WZGGFTagWCR");
   h_prefiterror__7->GetXaxis()->SetBinLabel(3,"HPL1WZGGFUntagTCR");
   h_prefiterror__7->GetXaxis()->SetBinLabel(4,"HPL1WZGGFUntagWCR");
   h_prefiterror__7->GetXaxis()->SetBinLabel(5,"LPL1WZGGFTagTCR");
   h_prefiterror__7->GetXaxis()->SetBinLabel(6,"LPL1WZGGFTagWCR");
   h_prefiterror__7->GetXaxis()->SetBinLabel(7,"LPL1WZGGFUntagTCR");
   h_prefiterror__7->GetXaxis()->SetBinLabel(8,"LPL1WZGGFUntagWCR");
   h_prefiterror__7->GetXaxis()->SetBinLabel(9,"L1WZGGFTagTCR");
   h_prefiterror__7->GetXaxis()->SetBinLabel(10,"L1WZGGFTagWCR");
   h_prefiterror__7->GetXaxis()->SetBinLabel(11,"L1WZGGFUntagTCR");
   h_prefiterror__7->GetXaxis()->SetBinLabel(12,"L1WZGGFUntagWCR");
   h_prefiterror__7->GetXaxis()->SetBit(TAxis::kLabelsVert);
   h_prefiterror__7->GetXaxis()->SetLabelFont(43);
   h_prefiterror__7->GetXaxis()->SetLabelSize(25);
   h_prefiterror__7->GetXaxis()->SetTitleSize(25);
   h_prefiterror__7->GetXaxis()->SetTitleOffset(5);
   h_prefiterror__7->GetXaxis()->SetTitleFont(43);
   h_prefiterror__7->GetYaxis()->SetTitle("Prefit/Postfit");
   h_prefiterror__7->GetYaxis()->SetNdivisions(205);
   h_prefiterror__7->GetYaxis()->SetLabelFont(43);
   h_prefiterror__7->GetYaxis()->SetLabelSize(25);
   h_prefiterror__7->GetYaxis()->SetTitleSize(25);
   h_prefiterror__7->GetYaxis()->SetTitleOffset(2);
   h_prefiterror__7->GetYaxis()->SetTitleFont(43);
   h_prefiterror__7->GetZaxis()->SetLabelFont(42);
   h_prefiterror__7->GetZaxis()->SetLabelSize(0.05);
   h_prefiterror__7->GetZaxis()->SetTitleSize(0.05);
   h_prefiterror__7->GetZaxis()->SetTitleFont(42);
   h_prefiterror__7->Draw("histsame");
   pad3->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
