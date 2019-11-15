void PlotyieldTable_postfit()
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
   pad1->Range(-2.43038,-0.1699271,12.75949,9.182066);
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
   hs_HPL1WZGGFTagTCR->SetMaximum(2.05398e+08);
   
   TH1F *hs_HPL1WZGGFTagTCR_stack_13 = new TH1F("hs_HPL1WZGGFTagTCR_stack_13","hs_HPL1WZGGFTagTCR",12,0,12);
   hs_HPL1WZGGFTagTCR_stack_13->SetMinimum(1.04019);
   hs_HPL1WZGGFTagTCR_stack_13->SetMaximum(5.181628e+08);
   hs_HPL1WZGGFTagTCR_stack_13->SetDirectory(0);
   hs_HPL1WZGGFTagTCR_stack_13->SetStats(0);
   hs_HPL1WZGGFTagTCR_stack_13->SetLineWidth(2);
   hs_HPL1WZGGFTagTCR_stack_13->SetMarkerStyle(20);
   hs_HPL1WZGGFTagTCR_stack_13->SetMarkerSize(1.2);
   hs_HPL1WZGGFTagTCR_stack_13->GetXaxis()->SetLabelFont(43);
   hs_HPL1WZGGFTagTCR_stack_13->GetXaxis()->SetLabelSize(0);
   hs_HPL1WZGGFTagTCR_stack_13->GetXaxis()->SetTitleSize(0);
   hs_HPL1WZGGFTagTCR_stack_13->GetXaxis()->SetTitleOffset(1.4);
   hs_HPL1WZGGFTagTCR_stack_13->GetXaxis()->SetTitleFont(43);
   hs_HPL1WZGGFTagTCR_stack_13->GetYaxis()->SetTitle("Events");
   hs_HPL1WZGGFTagTCR_stack_13->GetYaxis()->SetLabelFont(43);
   hs_HPL1WZGGFTagTCR_stack_13->GetYaxis()->SetLabelSize(25);
   hs_HPL1WZGGFTagTCR_stack_13->GetYaxis()->SetTitleSize(25);
   hs_HPL1WZGGFTagTCR_stack_13->GetYaxis()->SetTitleOffset(2);
   hs_HPL1WZGGFTagTCR_stack_13->GetYaxis()->SetTitleFont(43);
   hs_HPL1WZGGFTagTCR_stack_13->GetZaxis()->SetLabelFont(42);
   hs_HPL1WZGGFTagTCR_stack_13->GetZaxis()->SetLabelSize(0.05);
   hs_HPL1WZGGFTagTCR_stack_13->GetZaxis()->SetTitleSize(0.05);
   hs_HPL1WZGGFTagTCR_stack_13->GetZaxis()->SetTitleFont(42);
   hs_HPL1WZGGFTagTCR->SetHistogram(hs_HPL1WZGGFTagTCR_stack_13);
   
   
   TH1F *h_postfit_HPL1WZGGFTagTCR_zjets_stack_1 = new TH1F("h_postfit_HPL1WZGGFTagTCR_zjets_stack_1","h_postfit_HPL1WZGGFTagTCR_zjets",12,0,12);
   h_postfit_HPL1WZGGFTagTCR_zjets_stack_1->SetBinContent(1,1.274503);
   h_postfit_HPL1WZGGFTagTCR_zjets_stack_1->SetBinError(1,0.1298);
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
   h_postfit_HPL1WZGGFTagTCR_diboson_stack_2->SetBinContent(1,9.722182);
   h_postfit_HPL1WZGGFTagTCR_diboson_stack_2->SetBinError(1,1.127858);
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
   h_postfit_HPL1WZGGFTagTCR_wjets_stack_3->SetBinContent(1,32.3628);
   h_postfit_HPL1WZGGFTagTCR_wjets_stack_3->SetBinError(1,4.277015);
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
   h_postfit_HPL1WZGGFTagTCR_singlet_stack_4->SetBinContent(1,105.8698);
   h_postfit_HPL1WZGGFTagTCR_singlet_stack_4->SetBinError(1,20.6543);
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
   h_postfit_HPL1WZGGFTagTCR_ttbar_stack_5->SetBinContent(1,1904.751);
   h_postfit_HPL1WZGGFTagTCR_ttbar_stack_5->SetBinError(1,50.6072);
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
   
   TH1F *hs_HPL1WZGGFTagWCR_stack_14 = new TH1F("hs_HPL1WZGGFTagWCR_stack_14","hs_HPL1WZGGFTagWCR",12,0,12);
   hs_HPL1WZGGFTagWCR_stack_14->SetMinimum(1.047687);
   hs_HPL1WZGGFTagWCR_stack_14->SetMaximum(4190.748);
   hs_HPL1WZGGFTagWCR_stack_14->SetDirectory(0);
   hs_HPL1WZGGFTagWCR_stack_14->SetStats(0);
   hs_HPL1WZGGFTagWCR_stack_14->SetLineWidth(2);
   hs_HPL1WZGGFTagWCR_stack_14->SetMarkerStyle(20);
   hs_HPL1WZGGFTagWCR_stack_14->SetMarkerSize(1.2);
   hs_HPL1WZGGFTagWCR_stack_14->GetXaxis()->SetLabelFont(42);
   hs_HPL1WZGGFTagWCR_stack_14->GetXaxis()->SetLabelSize(0.05);
   hs_HPL1WZGGFTagWCR_stack_14->GetXaxis()->SetTitleSize(0.05);
   hs_HPL1WZGGFTagWCR_stack_14->GetXaxis()->SetTitleOffset(1.4);
   hs_HPL1WZGGFTagWCR_stack_14->GetXaxis()->SetTitleFont(42);
   hs_HPL1WZGGFTagWCR_stack_14->GetYaxis()->SetLabelFont(42);
   hs_HPL1WZGGFTagWCR_stack_14->GetYaxis()->SetLabelSize(0.05);
   hs_HPL1WZGGFTagWCR_stack_14->GetYaxis()->SetTitleSize(0.05);
   hs_HPL1WZGGFTagWCR_stack_14->GetYaxis()->SetTitleOffset(1.4);
   hs_HPL1WZGGFTagWCR_stack_14->GetYaxis()->SetTitleFont(42);
   hs_HPL1WZGGFTagWCR_stack_14->GetZaxis()->SetLabelFont(42);
   hs_HPL1WZGGFTagWCR_stack_14->GetZaxis()->SetLabelSize(0.05);
   hs_HPL1WZGGFTagWCR_stack_14->GetZaxis()->SetTitleSize(0.05);
   hs_HPL1WZGGFTagWCR_stack_14->GetZaxis()->SetTitleFont(42);
   hs_HPL1WZGGFTagWCR->SetHistogram(hs_HPL1WZGGFTagWCR_stack_14);
   
   
   TH1F *h_postfit_HPL1WZGGFTagWCR_zjets_stack_1 = new TH1F("h_postfit_HPL1WZGGFTagWCR_zjets_stack_1","h_postfit_HPL1WZGGFTagWCR_zjets",12,0,12);
   h_postfit_HPL1WZGGFTagWCR_zjets_stack_1->SetBinContent(2,13.19113);
   h_postfit_HPL1WZGGFTagWCR_zjets_stack_1->SetBinError(2,1.336239);
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
   h_postfit_HPL1WZGGFTagWCR_diboson_stack_2->SetBinContent(2,30.22248);
   h_postfit_HPL1WZGGFTagWCR_diboson_stack_2->SetBinError(2,4.68919);
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
   h_postfit_HPL1WZGGFTagWCR_singlet_stack_3->SetBinContent(2,308.4392);
   h_postfit_HPL1WZGGFTagWCR_singlet_stack_3->SetBinError(2,56.19077);
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
   h_postfit_HPL1WZGGFTagWCR_wjets_stack_4->SetBinContent(2,583.5476);
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
   h_postfit_HPL1WZGGFTagWCR_ttbar_stack_5->SetBinContent(2,1683.817);
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
   
   TH1F *hs_HPL1WZGGFUntagTCR_stack_15 = new TH1F("hs_HPL1WZGGFUntagTCR_stack_15","hs_HPL1WZGGFUntagTCR",12,0,12);
   hs_HPL1WZGGFUntagTCR_stack_15->SetMinimum(14.67907);
   hs_HPL1WZGGFUntagTCR_stack_15->SetMaximum(58716.26);
   hs_HPL1WZGGFUntagTCR_stack_15->SetDirectory(0);
   hs_HPL1WZGGFUntagTCR_stack_15->SetStats(0);
   hs_HPL1WZGGFUntagTCR_stack_15->SetLineWidth(2);
   hs_HPL1WZGGFUntagTCR_stack_15->SetMarkerStyle(20);
   hs_HPL1WZGGFUntagTCR_stack_15->SetMarkerSize(1.2);
   hs_HPL1WZGGFUntagTCR_stack_15->GetXaxis()->SetLabelFont(42);
   hs_HPL1WZGGFUntagTCR_stack_15->GetXaxis()->SetLabelSize(0.05);
   hs_HPL1WZGGFUntagTCR_stack_15->GetXaxis()->SetTitleSize(0.05);
   hs_HPL1WZGGFUntagTCR_stack_15->GetXaxis()->SetTitleOffset(1.4);
   hs_HPL1WZGGFUntagTCR_stack_15->GetXaxis()->SetTitleFont(42);
   hs_HPL1WZGGFUntagTCR_stack_15->GetYaxis()->SetLabelFont(42);
   hs_HPL1WZGGFUntagTCR_stack_15->GetYaxis()->SetLabelSize(0.05);
   hs_HPL1WZGGFUntagTCR_stack_15->GetYaxis()->SetTitleSize(0.05);
   hs_HPL1WZGGFUntagTCR_stack_15->GetYaxis()->SetTitleOffset(1.4);
   hs_HPL1WZGGFUntagTCR_stack_15->GetYaxis()->SetTitleFont(42);
   hs_HPL1WZGGFUntagTCR_stack_15->GetZaxis()->SetLabelFont(42);
   hs_HPL1WZGGFUntagTCR_stack_15->GetZaxis()->SetLabelSize(0.05);
   hs_HPL1WZGGFUntagTCR_stack_15->GetZaxis()->SetTitleSize(0.05);
   hs_HPL1WZGGFUntagTCR_stack_15->GetZaxis()->SetTitleFont(42);
   hs_HPL1WZGGFUntagTCR->SetHistogram(hs_HPL1WZGGFUntagTCR_stack_15);
   
   
   TH1F *h_postfit_HPL1WZGGFUntagTCR_zjets_stack_1 = new TH1F("h_postfit_HPL1WZGGFUntagTCR_zjets_stack_1","h_postfit_HPL1WZGGFUntagTCR_zjets",12,0,12);
   h_postfit_HPL1WZGGFUntagTCR_zjets_stack_1->SetBinContent(3,71.5352);
   h_postfit_HPL1WZGGFUntagTCR_zjets_stack_1->SetBinError(3,7.255657);
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
   h_postfit_HPL1WZGGFUntagTCR_diboson_stack_2->SetBinContent(3,289.4493);
   h_postfit_HPL1WZGGFUntagTCR_diboson_stack_2->SetBinError(3,28.45489);
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
   h_postfit_HPL1WZGGFUntagTCR_wjets_stack_3->SetBinContent(3,2236.294);
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
   h_postfit_HPL1WZGGFUntagTCR_singlet_stack_4->SetBinContent(3,3107.988);
   h_postfit_HPL1WZGGFUntagTCR_singlet_stack_4->SetBinError(3,538.0298);
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
   h_postfit_HPL1WZGGFUntagTCR_ttbar_stack_5->SetBinContent(3,30992.4);
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
   
   TH1F *hs_HPL1WZGGFUntagWCR_stack_16 = new TH1F("hs_HPL1WZGGFUntagWCR_stack_16","hs_HPL1WZGGFUntagWCR",12,0,12);
   hs_HPL1WZGGFUntagWCR_stack_16->SetMinimum(23.12905);
   hs_HPL1WZGGFUntagWCR_stack_16->SetMaximum(92516.21);
   hs_HPL1WZGGFUntagWCR_stack_16->SetDirectory(0);
   hs_HPL1WZGGFUntagWCR_stack_16->SetStats(0);
   hs_HPL1WZGGFUntagWCR_stack_16->SetLineWidth(2);
   hs_HPL1WZGGFUntagWCR_stack_16->SetMarkerStyle(20);
   hs_HPL1WZGGFUntagWCR_stack_16->SetMarkerSize(1.2);
   hs_HPL1WZGGFUntagWCR_stack_16->GetXaxis()->SetLabelFont(42);
   hs_HPL1WZGGFUntagWCR_stack_16->GetXaxis()->SetLabelSize(0.05);
   hs_HPL1WZGGFUntagWCR_stack_16->GetXaxis()->SetTitleSize(0.05);
   hs_HPL1WZGGFUntagWCR_stack_16->GetXaxis()->SetTitleOffset(1.4);
   hs_HPL1WZGGFUntagWCR_stack_16->GetXaxis()->SetTitleFont(42);
   hs_HPL1WZGGFUntagWCR_stack_16->GetYaxis()->SetLabelFont(42);
   hs_HPL1WZGGFUntagWCR_stack_16->GetYaxis()->SetLabelSize(0.05);
   hs_HPL1WZGGFUntagWCR_stack_16->GetYaxis()->SetTitleSize(0.05);
   hs_HPL1WZGGFUntagWCR_stack_16->GetYaxis()->SetTitleOffset(1.4);
   hs_HPL1WZGGFUntagWCR_stack_16->GetYaxis()->SetTitleFont(42);
   hs_HPL1WZGGFUntagWCR_stack_16->GetZaxis()->SetLabelFont(42);
   hs_HPL1WZGGFUntagWCR_stack_16->GetZaxis()->SetLabelSize(0.05);
   hs_HPL1WZGGFUntagWCR_stack_16->GetZaxis()->SetTitleSize(0.05);
   hs_HPL1WZGGFUntagWCR_stack_16->GetZaxis()->SetTitleFont(42);
   hs_HPL1WZGGFUntagWCR->SetHistogram(hs_HPL1WZGGFUntagWCR_stack_16);
   
   
   TH1F *h_postfit_HPL1WZGGFUntagWCR_zjets_stack_1 = new TH1F("h_postfit_HPL1WZGGFUntagWCR_zjets_stack_1","h_postfit_HPL1WZGGFUntagWCR_zjets",12,0,12);
   h_postfit_HPL1WZGGFUntagWCR_zjets_stack_1->SetBinContent(4,768.7216);
   h_postfit_HPL1WZGGFUntagWCR_zjets_stack_1->SetBinError(4,77.96973);
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
   h_postfit_HPL1WZGGFUntagWCR_diboson_stack_2->SetBinContent(4,1508.477);
   h_postfit_HPL1WZGGFUntagWCR_diboson_stack_2->SetBinError(4,154.201);
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
   h_postfit_HPL1WZGGFUntagWCR_singlet_stack_3->SetBinContent(4,1756.593);
   h_postfit_HPL1WZGGFUntagWCR_singlet_stack_3->SetBinError(4,306.6864);
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
   h_postfit_HPL1WZGGFUntagWCR_ttbar_stack_4->SetBinContent(4,13134);
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
   h_postfit_HPL1WZGGFUntagWCR_wjets_stack_5->SetBinContent(4,40654.84);
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
   
   TH1F *hs_LPL1WZGGFTagTCR_stack_17 = new TH1F("hs_LPL1WZGGFTagTCR_stack_17","hs_LPL1WZGGFTagTCR",12,0,12);
   hs_LPL1WZGGFTagTCR_stack_17->SetMinimum(0.6799709);
   hs_LPL1WZGGFTagTCR_stack_17->SetMaximum(2719.884);
   hs_LPL1WZGGFTagTCR_stack_17->SetDirectory(0);
   hs_LPL1WZGGFTagTCR_stack_17->SetStats(0);
   hs_LPL1WZGGFTagTCR_stack_17->SetLineWidth(2);
   hs_LPL1WZGGFTagTCR_stack_17->SetMarkerStyle(20);
   hs_LPL1WZGGFTagTCR_stack_17->SetMarkerSize(1.2);
   hs_LPL1WZGGFTagTCR_stack_17->GetXaxis()->SetLabelFont(42);
   hs_LPL1WZGGFTagTCR_stack_17->GetXaxis()->SetLabelSize(0.05);
   hs_LPL1WZGGFTagTCR_stack_17->GetXaxis()->SetTitleSize(0.05);
   hs_LPL1WZGGFTagTCR_stack_17->GetXaxis()->SetTitleOffset(1.4);
   hs_LPL1WZGGFTagTCR_stack_17->GetXaxis()->SetTitleFont(42);
   hs_LPL1WZGGFTagTCR_stack_17->GetYaxis()->SetLabelFont(42);
   hs_LPL1WZGGFTagTCR_stack_17->GetYaxis()->SetLabelSize(0.05);
   hs_LPL1WZGGFTagTCR_stack_17->GetYaxis()->SetTitleSize(0.05);
   hs_LPL1WZGGFTagTCR_stack_17->GetYaxis()->SetTitleOffset(1.4);
   hs_LPL1WZGGFTagTCR_stack_17->GetYaxis()->SetTitleFont(42);
   hs_LPL1WZGGFTagTCR_stack_17->GetZaxis()->SetLabelFont(42);
   hs_LPL1WZGGFTagTCR_stack_17->GetZaxis()->SetLabelSize(0.05);
   hs_LPL1WZGGFTagTCR_stack_17->GetZaxis()->SetTitleSize(0.05);
   hs_LPL1WZGGFTagTCR_stack_17->GetZaxis()->SetTitleFont(42);
   hs_LPL1WZGGFTagTCR->SetHistogram(hs_LPL1WZGGFTagTCR_stack_17);
   
   
   TH1F *h_postfit_LPL1WZGGFTagTCR_zjets_stack_1 = new TH1F("h_postfit_LPL1WZGGFTagTCR_zjets_stack_1","h_postfit_LPL1WZGGFTagTCR_zjets",12,0,12);
   h_postfit_LPL1WZGGFTagTCR_zjets_stack_1->SetBinContent(5,1.926054);
   h_postfit_LPL1WZGGFTagTCR_zjets_stack_1->SetBinError(5,0.1964383);
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
   h_postfit_LPL1WZGGFTagTCR_diboson_stack_2->SetBinContent(5,8.746279);
   h_postfit_LPL1WZGGFTagTCR_diboson_stack_2->SetBinError(5,1.16106);
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
   h_postfit_LPL1WZGGFTagTCR_wjets_stack_3->SetBinContent(5,85.73712);
   h_postfit_LPL1WZGGFTagTCR_wjets_stack_3->SetBinError(5,6.958574);
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
   h_postfit_LPL1WZGGFTagTCR_singlet_stack_4->SetBinContent(5,119.6565);
   h_postfit_LPL1WZGGFTagTCR_singlet_stack_4->SetBinError(5,22.6773);
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
   h_postfit_LPL1WZGGFTagTCR_ttbar_stack_5->SetBinContent(5,1483.861);
   h_postfit_LPL1WZGGFTagTCR_ttbar_stack_5->SetBinError(5,47.04955);
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
   
   TH1F *hs_LPL1WZGGFTagWCR_stack_18 = new TH1F("hs_LPL1WZGGFTagWCR_stack_18","hs_LPL1WZGGFTagWCR",12,0,12);
   hs_LPL1WZGGFTagWCR_stack_18->SetMinimum(1.437812);
   hs_LPL1WZGGFTagWCR_stack_18->SetMaximum(5751.248);
   hs_LPL1WZGGFTagWCR_stack_18->SetDirectory(0);
   hs_LPL1WZGGFTagWCR_stack_18->SetStats(0);
   hs_LPL1WZGGFTagWCR_stack_18->SetLineWidth(2);
   hs_LPL1WZGGFTagWCR_stack_18->SetMarkerStyle(20);
   hs_LPL1WZGGFTagWCR_stack_18->SetMarkerSize(1.2);
   hs_LPL1WZGGFTagWCR_stack_18->GetXaxis()->SetLabelFont(42);
   hs_LPL1WZGGFTagWCR_stack_18->GetXaxis()->SetLabelSize(0.05);
   hs_LPL1WZGGFTagWCR_stack_18->GetXaxis()->SetTitleSize(0.05);
   hs_LPL1WZGGFTagWCR_stack_18->GetXaxis()->SetTitleOffset(1.4);
   hs_LPL1WZGGFTagWCR_stack_18->GetXaxis()->SetTitleFont(42);
   hs_LPL1WZGGFTagWCR_stack_18->GetYaxis()->SetLabelFont(42);
   hs_LPL1WZGGFTagWCR_stack_18->GetYaxis()->SetLabelSize(0.05);
   hs_LPL1WZGGFTagWCR_stack_18->GetYaxis()->SetTitleSize(0.05);
   hs_LPL1WZGGFTagWCR_stack_18->GetYaxis()->SetTitleOffset(1.4);
   hs_LPL1WZGGFTagWCR_stack_18->GetYaxis()->SetTitleFont(42);
   hs_LPL1WZGGFTagWCR_stack_18->GetZaxis()->SetLabelFont(42);
   hs_LPL1WZGGFTagWCR_stack_18->GetZaxis()->SetLabelSize(0.05);
   hs_LPL1WZGGFTagWCR_stack_18->GetZaxis()->SetTitleSize(0.05);
   hs_LPL1WZGGFTagWCR_stack_18->GetZaxis()->SetTitleFont(42);
   hs_LPL1WZGGFTagWCR->SetHistogram(hs_LPL1WZGGFTagWCR_stack_18);
   
   
   TH1F *h_postfit_LPL1WZGGFTagWCR_zjets_stack_1 = new TH1F("h_postfit_LPL1WZGGFTagWCR_zjets_stack_1","h_postfit_LPL1WZGGFTagWCR_zjets",12,0,12);
   h_postfit_LPL1WZGGFTagWCR_zjets_stack_1->SetBinContent(6,23.05728);
   h_postfit_LPL1WZGGFTagWCR_zjets_stack_1->SetBinError(6,2.335663);
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
   h_postfit_LPL1WZGGFTagWCR_diboson_stack_2->SetBinContent(6,48.95018);
   h_postfit_LPL1WZGGFTagWCR_diboson_stack_2->SetBinError(6,7.157439);
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
   h_postfit_LPL1WZGGFTagWCR_singlet_stack_3->SetBinContent(6,371.5941);
   h_postfit_LPL1WZGGFTagWCR_singlet_stack_3->SetBinError(6,69.42883);
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
   h_postfit_LPL1WZGGFTagWCR_wjets_stack_4->SetBinContent(6,1109.451);
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
   h_postfit_LPL1WZGGFTagWCR_ttbar_stack_5->SetBinContent(6,2041.478);
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
   
   TH1F *hs_LPL1WZGGFUntagTCR_stack_19 = new TH1F("hs_LPL1WZGGFUntagTCR_stack_19","hs_LPL1WZGGFUntagTCR",12,0,12);
   hs_LPL1WZGGFUntagTCR_stack_19->SetMinimum(13.83246);
   hs_LPL1WZGGFUntagTCR_stack_19->SetMaximum(55329.86);
   hs_LPL1WZGGFUntagTCR_stack_19->SetDirectory(0);
   hs_LPL1WZGGFUntagTCR_stack_19->SetStats(0);
   hs_LPL1WZGGFUntagTCR_stack_19->SetLineWidth(2);
   hs_LPL1WZGGFUntagTCR_stack_19->SetMarkerStyle(20);
   hs_LPL1WZGGFUntagTCR_stack_19->SetMarkerSize(1.2);
   hs_LPL1WZGGFUntagTCR_stack_19->GetXaxis()->SetLabelFont(42);
   hs_LPL1WZGGFUntagTCR_stack_19->GetXaxis()->SetLabelSize(0.05);
   hs_LPL1WZGGFUntagTCR_stack_19->GetXaxis()->SetTitleSize(0.05);
   hs_LPL1WZGGFUntagTCR_stack_19->GetXaxis()->SetTitleOffset(1.4);
   hs_LPL1WZGGFUntagTCR_stack_19->GetXaxis()->SetTitleFont(42);
   hs_LPL1WZGGFUntagTCR_stack_19->GetYaxis()->SetLabelFont(42);
   hs_LPL1WZGGFUntagTCR_stack_19->GetYaxis()->SetLabelSize(0.05);
   hs_LPL1WZGGFUntagTCR_stack_19->GetYaxis()->SetTitleSize(0.05);
   hs_LPL1WZGGFUntagTCR_stack_19->GetYaxis()->SetTitleOffset(1.4);
   hs_LPL1WZGGFUntagTCR_stack_19->GetYaxis()->SetTitleFont(42);
   hs_LPL1WZGGFUntagTCR_stack_19->GetZaxis()->SetLabelFont(42);
   hs_LPL1WZGGFUntagTCR_stack_19->GetZaxis()->SetLabelSize(0.05);
   hs_LPL1WZGGFUntagTCR_stack_19->GetZaxis()->SetTitleSize(0.05);
   hs_LPL1WZGGFUntagTCR_stack_19->GetZaxis()->SetTitleFont(42);
   hs_LPL1WZGGFUntagTCR->SetHistogram(hs_LPL1WZGGFUntagTCR_stack_19);
   
   
   TH1F *h_postfit_LPL1WZGGFUntagTCR_zjets_stack_1 = new TH1F("h_postfit_LPL1WZGGFUntagTCR_zjets_stack_1","h_postfit_LPL1WZGGFUntagTCR_zjets",12,0,12);
   h_postfit_LPL1WZGGFUntagTCR_zjets_stack_1->SetBinContent(7,155.5002);
   h_postfit_LPL1WZGGFUntagTCR_zjets_stack_1->SetBinError(7,15.81257);
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
   h_postfit_LPL1WZGGFUntagTCR_diboson_stack_2->SetBinContent(7,346.7798);
   h_postfit_LPL1WZGGFUntagTCR_diboson_stack_2->SetBinError(7,35.85219);
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
   h_postfit_LPL1WZGGFUntagTCR_singlet_stack_3->SetBinContent(7,2250.644);
   h_postfit_LPL1WZGGFUntagTCR_singlet_stack_3->SetBinError(7,385.413);
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
   h_postfit_LPL1WZGGFUntagTCR_wjets_stack_4->SetBinContent(7,4874.027);
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
   h_postfit_LPL1WZGGFUntagTCR_ttbar_stack_5->SetBinContent(7,26954.21);
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
   
   TH1F *hs_LPL1WZGGFUntagWCR_stack_20 = new TH1F("hs_LPL1WZGGFUntagWCR_stack_20","hs_LPL1WZGGFUntagWCR",12,0,12);
   hs_LPL1WZGGFUntagWCR_stack_20->SetMinimum(46.76177);
   hs_LPL1WZGGFUntagWCR_stack_20->SetMaximum(187047.1);
   hs_LPL1WZGGFUntagWCR_stack_20->SetDirectory(0);
   hs_LPL1WZGGFUntagWCR_stack_20->SetStats(0);
   hs_LPL1WZGGFUntagWCR_stack_20->SetLineWidth(2);
   hs_LPL1WZGGFUntagWCR_stack_20->SetMarkerStyle(20);
   hs_LPL1WZGGFUntagWCR_stack_20->SetMarkerSize(1.2);
   hs_LPL1WZGGFUntagWCR_stack_20->GetXaxis()->SetLabelFont(42);
   hs_LPL1WZGGFUntagWCR_stack_20->GetXaxis()->SetLabelSize(0.05);
   hs_LPL1WZGGFUntagWCR_stack_20->GetXaxis()->SetTitleSize(0.05);
   hs_LPL1WZGGFUntagWCR_stack_20->GetXaxis()->SetTitleOffset(1.4);
   hs_LPL1WZGGFUntagWCR_stack_20->GetXaxis()->SetTitleFont(42);
   hs_LPL1WZGGFUntagWCR_stack_20->GetYaxis()->SetLabelFont(42);
   hs_LPL1WZGGFUntagWCR_stack_20->GetYaxis()->SetLabelSize(0.05);
   hs_LPL1WZGGFUntagWCR_stack_20->GetYaxis()->SetTitleSize(0.05);
   hs_LPL1WZGGFUntagWCR_stack_20->GetYaxis()->SetTitleOffset(1.4);
   hs_LPL1WZGGFUntagWCR_stack_20->GetYaxis()->SetTitleFont(42);
   hs_LPL1WZGGFUntagWCR_stack_20->GetZaxis()->SetLabelFont(42);
   hs_LPL1WZGGFUntagWCR_stack_20->GetZaxis()->SetLabelSize(0.05);
   hs_LPL1WZGGFUntagWCR_stack_20->GetZaxis()->SetTitleSize(0.05);
   hs_LPL1WZGGFUntagWCR_stack_20->GetZaxis()->SetTitleFont(42);
   hs_LPL1WZGGFUntagWCR->SetHistogram(hs_LPL1WZGGFUntagWCR_stack_20);
   
   
   TH1F *h_postfit_LPL1WZGGFUntagWCR_zjets_stack_1 = new TH1F("h_postfit_LPL1WZGGFUntagWCR_zjets_stack_1","h_postfit_LPL1WZGGFUntagWCR_zjets",12,0,12);
   h_postfit_LPL1WZGGFUntagWCR_zjets_stack_1->SetBinContent(8,1759.874);
   h_postfit_LPL1WZGGFUntagWCR_zjets_stack_1->SetBinError(8,178.9588);
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
   h_postfit_LPL1WZGGFUntagWCR_diboson_stack_2->SetBinContent(8,2758.236);
   h_postfit_LPL1WZGGFUntagWCR_diboson_stack_2->SetBinError(8,284.4964);
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
   h_postfit_LPL1WZGGFUntagWCR_singlet_stack_3->SetBinContent(8,2913.183);
   h_postfit_LPL1WZGGFUntagWCR_singlet_stack_3->SetBinError(8,515.9315);
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
   h_postfit_LPL1WZGGFUntagWCR_ttbar_stack_4->SetBinContent(8,21815.37);
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
   h_postfit_LPL1WZGGFUntagWCR_wjets_stack_5->SetBinContent(8,87657.76);
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
   
   TH1F *hs_L1WZGGFTagTCR_stack_21 = new TH1F("hs_L1WZGGFTagTCR_stack_21","hs_L1WZGGFTagTCR",12,0,12);
   hs_L1WZGGFTagTCR_stack_21->SetMinimum(7.665773);
   hs_L1WZGGFTagTCR_stack_21->SetMaximum(30663.09);
   hs_L1WZGGFTagTCR_stack_21->SetDirectory(0);
   hs_L1WZGGFTagTCR_stack_21->SetStats(0);
   hs_L1WZGGFTagTCR_stack_21->SetLineWidth(2);
   hs_L1WZGGFTagTCR_stack_21->SetMarkerStyle(20);
   hs_L1WZGGFTagTCR_stack_21->SetMarkerSize(1.2);
   hs_L1WZGGFTagTCR_stack_21->GetXaxis()->SetLabelFont(42);
   hs_L1WZGGFTagTCR_stack_21->GetXaxis()->SetLabelSize(0.05);
   hs_L1WZGGFTagTCR_stack_21->GetXaxis()->SetTitleSize(0.05);
   hs_L1WZGGFTagTCR_stack_21->GetXaxis()->SetTitleOffset(1.4);
   hs_L1WZGGFTagTCR_stack_21->GetXaxis()->SetTitleFont(42);
   hs_L1WZGGFTagTCR_stack_21->GetYaxis()->SetLabelFont(42);
   hs_L1WZGGFTagTCR_stack_21->GetYaxis()->SetLabelSize(0.05);
   hs_L1WZGGFTagTCR_stack_21->GetYaxis()->SetTitleSize(0.05);
   hs_L1WZGGFTagTCR_stack_21->GetYaxis()->SetTitleOffset(1.4);
   hs_L1WZGGFTagTCR_stack_21->GetYaxis()->SetTitleFont(42);
   hs_L1WZGGFTagTCR_stack_21->GetZaxis()->SetLabelFont(42);
   hs_L1WZGGFTagTCR_stack_21->GetZaxis()->SetLabelSize(0.05);
   hs_L1WZGGFTagTCR_stack_21->GetZaxis()->SetTitleSize(0.05);
   hs_L1WZGGFTagTCR_stack_21->GetZaxis()->SetTitleFont(42);
   hs_L1WZGGFTagTCR->SetHistogram(hs_L1WZGGFTagTCR_stack_21);
   
   
   TH1F *h_postfit_L1WZGGFTagTCR_zjets_stack_1 = new TH1F("h_postfit_L1WZGGFTagTCR_zjets_stack_1","h_postfit_L1WZGGFTagTCR_zjets",12,0,12);
   h_postfit_L1WZGGFTagTCR_zjets_stack_1->SetBinContent(9,19.14281);
   h_postfit_L1WZGGFTagTCR_zjets_stack_1->SetBinError(9,1.936542);
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
   h_postfit_L1WZGGFTagTCR_diboson_stack_2->SetBinContent(9,34.05592);
   h_postfit_L1WZGGFTagTCR_diboson_stack_2->SetBinError(9,4.978624);
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
   h_postfit_L1WZGGFTagTCR_wjets_stack_3->SetBinContent(9,489.0142);
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
   h_postfit_L1WZGGFTagTCR_singlet_stack_4->SetBinContent(9,656.8881);
   h_postfit_L1WZGGFTagTCR_singlet_stack_4->SetBinError(9,132.9622);
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
   h_postfit_L1WZGGFTagTCR_ttbar_stack_5->SetBinContent(9,17965.33);
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
   
   TH1F *hs_L1WZGGFTagWCR_stack_22 = new TH1F("hs_L1WZGGFTagWCR_stack_22","hs_L1WZGGFTagWCR",12,0,12);
   hs_L1WZGGFTagWCR_stack_22->SetMinimum(31.06098);
   hs_L1WZGGFTagWCR_stack_22->SetMaximum(124243.9);
   hs_L1WZGGFTagWCR_stack_22->SetDirectory(0);
   hs_L1WZGGFTagWCR_stack_22->SetStats(0);
   hs_L1WZGGFTagWCR_stack_22->SetLineWidth(2);
   hs_L1WZGGFTagWCR_stack_22->SetMarkerStyle(20);
   hs_L1WZGGFTagWCR_stack_22->SetMarkerSize(1.2);
   hs_L1WZGGFTagWCR_stack_22->GetXaxis()->SetLabelFont(42);
   hs_L1WZGGFTagWCR_stack_22->GetXaxis()->SetLabelSize(0.05);
   hs_L1WZGGFTagWCR_stack_22->GetXaxis()->SetTitleSize(0.05);
   hs_L1WZGGFTagWCR_stack_22->GetXaxis()->SetTitleOffset(1.4);
   hs_L1WZGGFTagWCR_stack_22->GetXaxis()->SetTitleFont(42);
   hs_L1WZGGFTagWCR_stack_22->GetYaxis()->SetLabelFont(42);
   hs_L1WZGGFTagWCR_stack_22->GetYaxis()->SetLabelSize(0.05);
   hs_L1WZGGFTagWCR_stack_22->GetYaxis()->SetTitleSize(0.05);
   hs_L1WZGGFTagWCR_stack_22->GetYaxis()->SetTitleOffset(1.4);
   hs_L1WZGGFTagWCR_stack_22->GetYaxis()->SetTitleFont(42);
   hs_L1WZGGFTagWCR_stack_22->GetZaxis()->SetLabelFont(42);
   hs_L1WZGGFTagWCR_stack_22->GetZaxis()->SetLabelSize(0.05);
   hs_L1WZGGFTagWCR_stack_22->GetZaxis()->SetTitleSize(0.05);
   hs_L1WZGGFTagWCR_stack_22->GetZaxis()->SetTitleFont(42);
   hs_L1WZGGFTagWCR->SetHistogram(hs_L1WZGGFTagWCR_stack_22);
   
   
   TH1F *h_postfit_L1WZGGFTagWCR_diboson_stack_1 = new TH1F("h_postfit_L1WZGGFTagWCR_diboson_stack_1","h_postfit_L1WZGGFTagWCR_diboson",12,0,12);
   h_postfit_L1WZGGFTagWCR_diboson_stack_1->SetBinContent(10,264.6439);
   h_postfit_L1WZGGFTagWCR_diboson_stack_1->SetBinError(10,28.23902);
   h_postfit_L1WZGGFTagWCR_diboson_stack_1->SetEntries(1);
   h_postfit_L1WZGGFTagWCR_diboson_stack_1->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   h_postfit_L1WZGGFTagWCR_diboson_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   h_postfit_L1WZGGFTagWCR_diboson_stack_1->SetLineColor(ci);
   h_postfit_L1WZGGFTagWCR_diboson_stack_1->SetLineWidth(2);
   h_postfit_L1WZGGFTagWCR_diboson_stack_1->SetMarkerStyle(20);
   h_postfit_L1WZGGFTagWCR_diboson_stack_1->SetMarkerSize(1.2);
   h_postfit_L1WZGGFTagWCR_diboson_stack_1->GetXaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFTagWCR_diboson_stack_1->GetXaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFTagWCR_diboson_stack_1->GetXaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFTagWCR_diboson_stack_1->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_L1WZGGFTagWCR_diboson_stack_1->GetXaxis()->SetTitleFont(42);
   h_postfit_L1WZGGFTagWCR_diboson_stack_1->GetYaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFTagWCR_diboson_stack_1->GetYaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFTagWCR_diboson_stack_1->GetYaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFTagWCR_diboson_stack_1->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_L1WZGGFTagWCR_diboson_stack_1->GetYaxis()->SetTitleFont(42);
   h_postfit_L1WZGGFTagWCR_diboson_stack_1->GetZaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFTagWCR_diboson_stack_1->GetZaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFTagWCR_diboson_stack_1->GetZaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFTagWCR_diboson_stack_1->GetZaxis()->SetTitleFont(42);
   hs_L1WZGGFTagWCR->Add(h_postfit_L1WZGGFTagWCR_diboson_stack_1,"");
   
   TH1F *h_postfit_L1WZGGFTagWCR_zjets_stack_2 = new TH1F("h_postfit_L1WZGGFTagWCR_zjets_stack_2","h_postfit_L1WZGGFTagWCR_zjets",12,0,12);
   h_postfit_L1WZGGFTagWCR_zjets_stack_2->SetBinContent(10,324.736);
   h_postfit_L1WZGGFTagWCR_zjets_stack_2->SetBinError(10,32.85125);
   h_postfit_L1WZGGFTagWCR_zjets_stack_2->SetEntries(1);
   h_postfit_L1WZGGFTagWCR_zjets_stack_2->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   h_postfit_L1WZGGFTagWCR_zjets_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   h_postfit_L1WZGGFTagWCR_zjets_stack_2->SetLineColor(ci);
   h_postfit_L1WZGGFTagWCR_zjets_stack_2->SetLineWidth(2);
   h_postfit_L1WZGGFTagWCR_zjets_stack_2->SetMarkerStyle(20);
   h_postfit_L1WZGGFTagWCR_zjets_stack_2->SetMarkerSize(1.2);
   h_postfit_L1WZGGFTagWCR_zjets_stack_2->GetXaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFTagWCR_zjets_stack_2->GetXaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFTagWCR_zjets_stack_2->GetXaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFTagWCR_zjets_stack_2->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_L1WZGGFTagWCR_zjets_stack_2->GetXaxis()->SetTitleFont(42);
   h_postfit_L1WZGGFTagWCR_zjets_stack_2->GetYaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFTagWCR_zjets_stack_2->GetYaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFTagWCR_zjets_stack_2->GetYaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFTagWCR_zjets_stack_2->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_L1WZGGFTagWCR_zjets_stack_2->GetYaxis()->SetTitleFont(42);
   h_postfit_L1WZGGFTagWCR_zjets_stack_2->GetZaxis()->SetLabelFont(42);
   h_postfit_L1WZGGFTagWCR_zjets_stack_2->GetZaxis()->SetLabelSize(0.05);
   h_postfit_L1WZGGFTagWCR_zjets_stack_2->GetZaxis()->SetTitleSize(0.05);
   h_postfit_L1WZGGFTagWCR_zjets_stack_2->GetZaxis()->SetTitleFont(42);
   hs_L1WZGGFTagWCR->Add(h_postfit_L1WZGGFTagWCR_zjets_stack_2,"");
   
   TH1F *h_postfit_L1WZGGFTagWCR_MJ_stack_3 = new TH1F("h_postfit_L1WZGGFTagWCR_MJ_stack_3","h_postfit_L1WZGGFTagWCR_MJ",12,0,12);
   h_postfit_L1WZGGFTagWCR_MJ_stack_3->SetBinContent(10,987.5106);
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
   h_postfit_L1WZGGFTagWCR_singlet_stack_4->SetBinContent(10,5752.391);
   h_postfit_L1WZGGFTagWCR_singlet_stack_4->SetBinError(10,1029.967);
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
   h_postfit_L1WZGGFTagWCR_wjets_stack_5->SetBinContent(10,11891.68);
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
   h_postfit_L1WZGGFTagWCR_ttbar_stack_6->SetBinContent(10,58431.49);
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
   
   TH1F *hs_L1WZGGFUntagTCR_stack_23 = new TH1F("hs_L1WZGGFUntagTCR_stack_23","hs_L1WZGGFUntagTCR",12,0,12);
   hs_L1WZGGFUntagTCR_stack_23->SetMinimum(47.54079);
   hs_L1WZGGFUntagTCR_stack_23->SetMaximum(190163.2);
   hs_L1WZGGFUntagTCR_stack_23->SetDirectory(0);
   hs_L1WZGGFUntagTCR_stack_23->SetStats(0);
   hs_L1WZGGFUntagTCR_stack_23->SetLineWidth(2);
   hs_L1WZGGFUntagTCR_stack_23->SetMarkerStyle(20);
   hs_L1WZGGFUntagTCR_stack_23->SetMarkerSize(1.2);
   hs_L1WZGGFUntagTCR_stack_23->GetXaxis()->SetLabelFont(42);
   hs_L1WZGGFUntagTCR_stack_23->GetXaxis()->SetLabelSize(0.05);
   hs_L1WZGGFUntagTCR_stack_23->GetXaxis()->SetTitleSize(0.05);
   hs_L1WZGGFUntagTCR_stack_23->GetXaxis()->SetTitleOffset(1.4);
   hs_L1WZGGFUntagTCR_stack_23->GetXaxis()->SetTitleFont(42);
   hs_L1WZGGFUntagTCR_stack_23->GetYaxis()->SetLabelFont(42);
   hs_L1WZGGFUntagTCR_stack_23->GetYaxis()->SetLabelSize(0.05);
   hs_L1WZGGFUntagTCR_stack_23->GetYaxis()->SetTitleSize(0.05);
   hs_L1WZGGFUntagTCR_stack_23->GetYaxis()->SetTitleOffset(1.4);
   hs_L1WZGGFUntagTCR_stack_23->GetYaxis()->SetTitleFont(42);
   hs_L1WZGGFUntagTCR_stack_23->GetZaxis()->SetLabelFont(42);
   hs_L1WZGGFUntagTCR_stack_23->GetZaxis()->SetLabelSize(0.05);
   hs_L1WZGGFUntagTCR_stack_23->GetZaxis()->SetTitleSize(0.05);
   hs_L1WZGGFUntagTCR_stack_23->GetZaxis()->SetTitleFont(42);
   hs_L1WZGGFUntagTCR->SetHistogram(hs_L1WZGGFUntagTCR_stack_23);
   
   
   TH1F *h_postfit_L1WZGGFUntagTCR_zjets_stack_1 = new TH1F("h_postfit_L1WZGGFUntagTCR_zjets_stack_1","h_postfit_L1WZGGFUntagTCR_zjets",12,0,12);
   h_postfit_L1WZGGFUntagTCR_zjets_stack_1->SetBinContent(11,577.7061);
   h_postfit_L1WZGGFUntagTCR_zjets_stack_1->SetBinError(11,58.53981);
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
   h_postfit_L1WZGGFUntagTCR_diboson_stack_2->SetBinContent(11,650.847);
   h_postfit_L1WZGGFUntagTCR_diboson_stack_2->SetBinError(11,65.56014);
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
   h_postfit_L1WZGGFUntagTCR_singlet_stack_3->SetBinContent(11,9606.873);
   h_postfit_L1WZGGFUntagTCR_singlet_stack_3->SetBinError(11,1698.224);
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
   h_postfit_L1WZGGFUntagTCR_wjets_stack_4->SetBinContent(11,16122.97);
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
   h_postfit_L1WZGGFUntagTCR_ttbar_stack_5->SetBinContent(11,91893.59);
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
   
   TH1F *hs_L1WZGGFUntagWCR_stack_24 = new TH1F("hs_L1WZGGFUntagWCR_stack_24","hs_L1WZGGFUntagWCR",12,0,12);
   hs_L1WZGGFUntagWCR_stack_24->SetMinimum(357.8227);
   hs_L1WZGGFUntagWCR_stack_24->SetMaximum(1431291);
   hs_L1WZGGFUntagWCR_stack_24->SetDirectory(0);
   hs_L1WZGGFUntagWCR_stack_24->SetStats(0);
   hs_L1WZGGFUntagWCR_stack_24->SetLineWidth(2);
   hs_L1WZGGFUntagWCR_stack_24->SetMarkerStyle(20);
   hs_L1WZGGFUntagWCR_stack_24->SetMarkerSize(1.2);
   hs_L1WZGGFUntagWCR_stack_24->GetXaxis()->SetLabelFont(42);
   hs_L1WZGGFUntagWCR_stack_24->GetXaxis()->SetLabelSize(0.05);
   hs_L1WZGGFUntagWCR_stack_24->GetXaxis()->SetTitleSize(0.05);
   hs_L1WZGGFUntagWCR_stack_24->GetXaxis()->SetTitleOffset(1.4);
   hs_L1WZGGFUntagWCR_stack_24->GetXaxis()->SetTitleFont(42);
   hs_L1WZGGFUntagWCR_stack_24->GetYaxis()->SetLabelFont(42);
   hs_L1WZGGFUntagWCR_stack_24->GetYaxis()->SetLabelSize(0.05);
   hs_L1WZGGFUntagWCR_stack_24->GetYaxis()->SetTitleSize(0.05);
   hs_L1WZGGFUntagWCR_stack_24->GetYaxis()->SetTitleOffset(1.4);
   hs_L1WZGGFUntagWCR_stack_24->GetYaxis()->SetTitleFont(42);
   hs_L1WZGGFUntagWCR_stack_24->GetZaxis()->SetLabelFont(42);
   hs_L1WZGGFUntagWCR_stack_24->GetZaxis()->SetLabelSize(0.05);
   hs_L1WZGGFUntagWCR_stack_24->GetZaxis()->SetTitleSize(0.05);
   hs_L1WZGGFUntagWCR_stack_24->GetZaxis()->SetTitleFont(42);
   hs_L1WZGGFUntagWCR->SetHistogram(hs_L1WZGGFUntagWCR_stack_24);
   
   
   TH1F *h_postfit_L1WZGGFUntagWCR_diboson_stack_1 = new TH1F("h_postfit_L1WZGGFUntagWCR_diboson_stack_1","h_postfit_L1WZGGFUntagWCR_diboson",12,0,12);
   h_postfit_L1WZGGFUntagWCR_diboson_stack_1->SetBinContent(12,9038.548);
   h_postfit_L1WZGGFUntagWCR_diboson_stack_1->SetBinError(12,728.6866);
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
   h_postfit_L1WZGGFUntagWCR_zjets_stack_2->SetBinContent(12,16512.46);
   h_postfit_L1WZGGFUntagWCR_zjets_stack_2->SetBinError(12,1673.232);
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
   h_postfit_L1WZGGFUntagWCR_singlet_stack_3->SetBinContent(12,20511.74);
   h_postfit_L1WZGGFUntagWCR_singlet_stack_3->SetBinError(12,3523.471);
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
   h_postfit_L1WZGGFUntagWCR_MJ_stack_4->SetBinContent(12,42427.12);
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
   h_postfit_L1WZGGFUntagWCR_ttbar_stack_5->SetBinContent(12,140157.8);
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
   h_postfit_L1WZGGFUntagWCR_wjets_stack_6->SetBinContent(12,665909.1);
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
   
   Double_t Graph0_fx3003[12] = {
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
   Double_t Graph0_fy3003[12] = {
   2053.98,
   2619.218,
   36697.66,
   57822.63,
   1699.927,
   3594.531,
   34581.16,
   116904.4,
   19164.43,
   77652.45,
   118852,
   894556.8};
   Double_t Graph0_felx3003[12] = {
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
   Double_t Graph0_fely3003[12] = {
   54.83859,
   106.0032,
   779.0309,
   540.3953,
   52.70415,
   130.9025,
   567.5941,
   862.1627,
   234.0077,
   1514.894,
   2427.398,
   7492.204};
   Double_t Graph0_fehx3003[12] = {
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
   Double_t Graph0_fehy3003[12] = {
   54.83859,
   106.0032,
   779.0309,
   540.3953,
   52.70415,
   130.9025,
   567.5941,
   862.1627,
   234.0077,
   1514.894,
   2427.398,
   7492.204};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,Graph0_fx3003,Graph0_fy3003,Graph0_felx3003,Graph0_fehx3003,Graph0_fely3003,Graph0_fehy3003);
   grae->SetName("Graph0");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3004);
   grae->SetMarkerStyle(0);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph03003 = new TH1F("Graph_Graph03003","Graph",100,0,13.2);
   Graph_Graph03003->SetMinimum(1482.501);
   Graph_Graph03003->SetMaximum(992089.1);
   Graph_Graph03003->SetDirectory(0);
   Graph_Graph03003->SetStats(0);
   Graph_Graph03003->SetLineWidth(2);
   Graph_Graph03003->SetMarkerStyle(20);
   Graph_Graph03003->SetMarkerSize(1.2);
   Graph_Graph03003->GetXaxis()->SetLabelFont(42);
   Graph_Graph03003->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph03003->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph03003->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph03003->GetXaxis()->SetTitleFont(42);
   Graph_Graph03003->GetYaxis()->SetLabelFont(42);
   Graph_Graph03003->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph03003->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph03003->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph03003->GetYaxis()->SetTitleFont(42);
   Graph_Graph03003->GetZaxis()->SetLabelFont(42);
   Graph_Graph03003->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph03003->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph03003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph03003);
   
   grae->Draw("e2 ");
   
   TH1F *h_prefitdata__8 = new TH1F("h_prefitdata__8","h_prefitdata",12,0,12);
   h_prefitdata__8->SetBinContent(1,2047);
   h_prefitdata__8->SetBinContent(2,2565);
   h_prefitdata__8->SetBinContent(3,36677);
   h_prefitdata__8->SetBinContent(4,57699);
   h_prefitdata__8->SetBinContent(5,1708);
   h_prefitdata__8->SetBinContent(6,3546);
   h_prefitdata__8->SetBinContent(7,34573);
   h_prefitdata__8->SetBinContent(8,117306);
   h_prefitdata__8->SetBinContent(9,19143);
   h_prefitdata__8->SetBinContent(10,77973);
   h_prefitdata__8->SetBinContent(11,118928);
   h_prefitdata__8->SetBinContent(12,895362);
   h_prefitdata__8->SetBinError(1,45.24379);
   h_prefitdata__8->SetBinError(2,50.64583);
   h_prefitdata__8->SetBinError(3,191.5124);
   h_prefitdata__8->SetBinError(4,240.2062);
   h_prefitdata__8->SetBinError(5,41.32796);
   h_prefitdata__8->SetBinError(6,59.5483);
   h_prefitdata__8->SetBinError(7,185.9382);
   h_prefitdata__8->SetBinError(8,342.4996);
   h_prefitdata__8->SetBinError(9,138.3582);
   h_prefitdata__8->SetBinError(10,279.2365);
   h_prefitdata__8->SetBinError(11,344.8594);
   h_prefitdata__8->SetBinError(12,946.2357);
   h_prefitdata__8->SetEntries(12);
   h_prefitdata__8->SetStats(0);
   h_prefitdata__8->SetLineWidth(2);
   h_prefitdata__8->SetMarkerStyle(20);
   h_prefitdata__8->SetMarkerSize(1.2);
   h_prefitdata__8->GetXaxis()->SetBinLabel(1,"HPL1WZGGFTagTCR");
   h_prefitdata__8->GetXaxis()->SetBinLabel(2,"HPL1WZGGFTagWCR");
   h_prefitdata__8->GetXaxis()->SetBinLabel(3,"HPL1WZGGFUntagTCR");
   h_prefitdata__8->GetXaxis()->SetBinLabel(4,"HPL1WZGGFUntagWCR");
   h_prefitdata__8->GetXaxis()->SetBinLabel(5,"LPL1WZGGFTagTCR");
   h_prefitdata__8->GetXaxis()->SetBinLabel(6,"LPL1WZGGFTagWCR");
   h_prefitdata__8->GetXaxis()->SetBinLabel(7,"LPL1WZGGFUntagTCR");
   h_prefitdata__8->GetXaxis()->SetBinLabel(8,"LPL1WZGGFUntagWCR");
   h_prefitdata__8->GetXaxis()->SetBinLabel(9,"L1WZGGFTagTCR");
   h_prefitdata__8->GetXaxis()->SetBinLabel(10,"L1WZGGFTagWCR");
   h_prefitdata__8->GetXaxis()->SetBinLabel(11,"L1WZGGFUntagTCR");
   h_prefitdata__8->GetXaxis()->SetBinLabel(12,"L1WZGGFUntagWCR");
   h_prefitdata__8->GetXaxis()->SetLabelFont(42);
   h_prefitdata__8->GetXaxis()->SetLabelSize(0.05);
   h_prefitdata__8->GetXaxis()->SetTitleSize(0.05);
   h_prefitdata__8->GetXaxis()->SetTitleOffset(1.4);
   h_prefitdata__8->GetXaxis()->SetTitleFont(42);
   h_prefitdata__8->GetYaxis()->SetLabelFont(42);
   h_prefitdata__8->GetYaxis()->SetLabelSize(0.05);
   h_prefitdata__8->GetYaxis()->SetTitleSize(0.05);
   h_prefitdata__8->GetYaxis()->SetTitleOffset(1.4);
   h_prefitdata__8->GetYaxis()->SetTitleFont(42);
   h_prefitdata__8->GetZaxis()->SetLabelFont(42);
   h_prefitdata__8->GetZaxis()->SetLabelSize(0.05);
   h_prefitdata__8->GetZaxis()->SetTitleSize(0.05);
   h_prefitdata__8->GetZaxis()->SetTitleFont(42);
   h_prefitdata__8->Draw("same");
   
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
   
   TH1F *hs_HPL1WZGGFTagTCR_copy__9 = new TH1F("hs_HPL1WZGGFTagTCR_copy__9","hs_HPL1WZGGFTagTCR",12,0,12);
   hs_HPL1WZGGFTagTCR_copy__9->SetMinimum(5);
   hs_HPL1WZGGFTagTCR_copy__9->SetMaximum(2.05398e+08);
   hs_HPL1WZGGFTagTCR_copy__9->SetDirectory(0);
   hs_HPL1WZGGFTagTCR_copy__9->SetStats(0);
   hs_HPL1WZGGFTagTCR_copy__9->SetLineWidth(2);
   hs_HPL1WZGGFTagTCR_copy__9->SetMarkerStyle(20);
   hs_HPL1WZGGFTagTCR_copy__9->SetMarkerSize(1.2);
   hs_HPL1WZGGFTagTCR_copy__9->GetXaxis()->SetLabelFont(43);
   hs_HPL1WZGGFTagTCR_copy__9->GetXaxis()->SetLabelSize(0);
   hs_HPL1WZGGFTagTCR_copy__9->GetXaxis()->SetTitleSize(0);
   hs_HPL1WZGGFTagTCR_copy__9->GetXaxis()->SetTitleOffset(1.4);
   hs_HPL1WZGGFTagTCR_copy__9->GetXaxis()->SetTitleFont(43);
   hs_HPL1WZGGFTagTCR_copy__9->GetYaxis()->SetTitle("Events");
   hs_HPL1WZGGFTagTCR_copy__9->GetYaxis()->SetLabelFont(43);
   hs_HPL1WZGGFTagTCR_copy__9->GetYaxis()->SetLabelSize(25);
   hs_HPL1WZGGFTagTCR_copy__9->GetYaxis()->SetTitleSize(25);
   hs_HPL1WZGGFTagTCR_copy__9->GetYaxis()->SetTitleOffset(2);
   hs_HPL1WZGGFTagTCR_copy__9->GetYaxis()->SetTitleFont(43);
   hs_HPL1WZGGFTagTCR_copy__9->GetZaxis()->SetLabelFont(42);
   hs_HPL1WZGGFTagTCR_copy__9->GetZaxis()->SetLabelSize(0.05);
   hs_HPL1WZGGFTagTCR_copy__9->GetZaxis()->SetTitleSize(0.05);
   hs_HPL1WZGGFTagTCR_copy__9->GetZaxis()->SetTitleFont(42);
   hs_HPL1WZGGFTagTCR_copy__9->Draw("sameaxis");
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
   
   TH1F *h_postfiterror__10 = new TH1F("h_postfiterror__10","h_postfiterror",12,0,12);
   h_postfiterror__10->SetBinContent(1,1);
   h_postfiterror__10->SetBinContent(2,1);
   h_postfiterror__10->SetBinContent(3,1);
   h_postfiterror__10->SetBinContent(4,1);
   h_postfiterror__10->SetBinContent(5,1);
   h_postfiterror__10->SetBinContent(6,1);
   h_postfiterror__10->SetBinContent(7,1);
   h_postfiterror__10->SetBinContent(8,1);
   h_postfiterror__10->SetBinContent(9,1);
   h_postfiterror__10->SetBinContent(10,1);
   h_postfiterror__10->SetBinContent(11,1);
   h_postfiterror__10->SetBinContent(12,1);
   h_postfiterror__10->SetBinError(1,0.03775765);
   h_postfiterror__10->SetBinError(2,0.05723508);
   h_postfiterror__10->SetBinError(3,0.03002142);
   h_postfiterror__10->SetBinError(4,0.01321687);
   h_postfiterror__10->SetBinError(5,0.04384595);
   h_postfiterror__10->SetBinError(6,0.05150161);
   h_postfiterror__10->SetBinError(7,0.02321204);
   h_postfiterror__10->SetBinError(8,0.01042973);
   h_postfiterror__10->SetBinError(9,0.01726828);
   h_postfiterror__10->SetBinError(10,0.02758939);
   h_postfiterror__10->SetBinError(11,0.02888348);
   h_postfiterror__10->SetBinError(12,0.0118445);
   h_postfiterror__10->SetMinimum(0.8);
   h_postfiterror__10->SetMaximum(1.2);
   h_postfiterror__10->SetEntries(11048.16);
   h_postfiterror__10->SetStats(0);
   h_postfiterror__10->SetLineWidth(2);
   h_postfiterror__10->SetMarkerStyle(20);
   h_postfiterror__10->SetMarkerSize(1.2);
   h_postfiterror__10->GetXaxis()->SetBinLabel(1,"HPL1WZGGFTagTCR");
   h_postfiterror__10->GetXaxis()->SetBinLabel(2,"HPL1WZGGFTagWCR");
   h_postfiterror__10->GetXaxis()->SetBinLabel(3,"HPL1WZGGFUntagTCR");
   h_postfiterror__10->GetXaxis()->SetBinLabel(4,"HPL1WZGGFUntagWCR");
   h_postfiterror__10->GetXaxis()->SetBinLabel(5,"LPL1WZGGFTagTCR");
   h_postfiterror__10->GetXaxis()->SetBinLabel(6,"LPL1WZGGFTagWCR");
   h_postfiterror__10->GetXaxis()->SetBinLabel(7,"LPL1WZGGFUntagTCR");
   h_postfiterror__10->GetXaxis()->SetBinLabel(8,"LPL1WZGGFUntagWCR");
   h_postfiterror__10->GetXaxis()->SetBinLabel(9,"L1WZGGFTagTCR");
   h_postfiterror__10->GetXaxis()->SetBinLabel(10,"L1WZGGFTagWCR");
   h_postfiterror__10->GetXaxis()->SetBinLabel(11,"L1WZGGFUntagTCR");
   h_postfiterror__10->GetXaxis()->SetBinLabel(12,"L1WZGGFUntagWCR");
   h_postfiterror__10->GetXaxis()->SetLabelFont(43);
   h_postfiterror__10->GetXaxis()->SetLabelSize(0);
   h_postfiterror__10->GetXaxis()->SetTitleSize(0);
   h_postfiterror__10->GetXaxis()->SetTitleOffset(1.4);
   h_postfiterror__10->GetXaxis()->SetTitleFont(43);
   h_postfiterror__10->GetYaxis()->SetTitle("Data/Postfit");
   h_postfiterror__10->GetYaxis()->SetNdivisions(205);
   h_postfiterror__10->GetYaxis()->SetLabelFont(43);
   h_postfiterror__10->GetYaxis()->SetLabelSize(25);
   h_postfiterror__10->GetYaxis()->SetTitleSize(25);
   h_postfiterror__10->GetYaxis()->SetTitleOffset(2);
   h_postfiterror__10->GetYaxis()->SetTitleFont(43);
   h_postfiterror__10->GetZaxis()->SetLabelFont(42);
   h_postfiterror__10->GetZaxis()->SetLabelSize(0.05);
   h_postfiterror__10->GetZaxis()->SetTitleSize(0.05);
   h_postfiterror__10->GetZaxis()->SetTitleFont(42);
   h_postfiterror__10->Draw("AXIS");
   
   Double_t Graph0_fx3004[12] = {
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
   Double_t Graph0_fy3004[12] = {
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
   Double_t Graph0_felx3004[12] = {
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
   Double_t Graph0_fely3004[12] = {
   0.02669869,
   0.04047131,
   0.02122835,
   0.009345741,
   0.03100377,
   0.03641714,
   0.01641339,
   0.007374936,
   0.01221052,
   0.01950864,
   0.0204237,
   0.008375325};
   Double_t Graph0_fehx3004[12] = {
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
   Double_t Graph0_fehy3004[12] = {
   0.02669869,
   0.04047131,
   0.02122835,
   0.009345741,
   0.03100377,
   0.03641714,
   0.01641339,
   0.007374936,
   0.01221052,
   0.01950864,
   0.0204237,
   0.008375325};
   grae = new TGraphAsymmErrors(12,Graph0_fx3004,Graph0_fy3004,Graph0_felx3004,Graph0_fehx3004,Graph0_fely3004,Graph0_fehy3004);
   grae->SetName("Graph0");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3004);
   grae->SetMarkerStyle(0);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph03004 = new TH1F("Graph_Graph03004","Graph",100,0,13.2);
   Graph_Graph03004->SetMinimum(0.9514344);
   Graph_Graph03004->SetMaximum(1.048566);
   Graph_Graph03004->SetDirectory(0);
   Graph_Graph03004->SetStats(0);
   Graph_Graph03004->SetLineWidth(2);
   Graph_Graph03004->SetMarkerStyle(20);
   Graph_Graph03004->SetMarkerSize(1.2);
   Graph_Graph03004->GetXaxis()->SetLabelFont(42);
   Graph_Graph03004->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph03004->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph03004->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph03004->GetXaxis()->SetTitleFont(42);
   Graph_Graph03004->GetYaxis()->SetLabelFont(42);
   Graph_Graph03004->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph03004->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph03004->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph03004->GetYaxis()->SetTitleFont(42);
   Graph_Graph03004->GetZaxis()->SetLabelFont(42);
   Graph_Graph03004->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph03004->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph03004->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph03004);
   
   grae->Draw(" e2");
   TLine *line = new TLine(0,1,12,1);
   line->SetLineStyle(2);
   line->Draw();
   
   TH1F *h_prefitdata__11 = new TH1F("h_prefitdata__11","h_prefitdata",12,0,12);
   h_prefitdata__11->SetBinContent(1,0.9966016);
   h_prefitdata__11->SetBinContent(2,0.9793001);
   h_prefitdata__11->SetBinContent(3,0.9994369);
   h_prefitdata__11->SetBinContent(4,0.9978619);
   h_prefitdata__11->SetBinContent(5,1.004749);
   h_prefitdata__11->SetBinContent(6,0.9864988);
   h_prefitdata__11->SetBinContent(7,0.999764);
   h_prefitdata__11->SetBinContent(8,1.003435);
   h_prefitdata__11->SetBinContent(9,0.9988818);
   h_prefitdata__11->SetBinContent(10,1.004128);
   h_prefitdata__11->SetBinContent(11,1.00064);
   h_prefitdata__11->SetBinContent(12,1.0009);
   h_prefitdata__11->SetBinError(1,0.03454256);
   h_prefitdata__11->SetBinError(2,0.04409886);
   h_prefitdata__11->SetBinError(3,0.0218488);
   h_prefitdata__11->SetBinError(4,0.01020917);
   h_prefitdata__11->SetBinError(5,0.03951505);
   h_prefitdata__11->SetBinError(6,0.03956113);
   h_prefitdata__11->SetBinError(7,0.01726797);
   h_prefitdata__11->SetBinError(8,0.007959106);
   h_prefitdata__11->SetBinError(9,0.0141734);
   h_prefitdata__11->SetBinError(10,0.0199165);
   h_prefitdata__11->SetBinError(11,0.02064172);
   h_prefitdata__11->SetBinError(12,0.008449337);
   h_prefitdata__11->SetEntries(17263.75);
   h_prefitdata__11->SetStats(0);
   h_prefitdata__11->SetLineWidth(2);
   h_prefitdata__11->SetMarkerStyle(20);
   h_prefitdata__11->SetMarkerSize(1.2);
   h_prefitdata__11->GetXaxis()->SetBinLabel(1,"HPL1WZGGFTagTCR");
   h_prefitdata__11->GetXaxis()->SetBinLabel(2,"HPL1WZGGFTagWCR");
   h_prefitdata__11->GetXaxis()->SetBinLabel(3,"HPL1WZGGFUntagTCR");
   h_prefitdata__11->GetXaxis()->SetBinLabel(4,"HPL1WZGGFUntagWCR");
   h_prefitdata__11->GetXaxis()->SetBinLabel(5,"LPL1WZGGFTagTCR");
   h_prefitdata__11->GetXaxis()->SetBinLabel(6,"LPL1WZGGFTagWCR");
   h_prefitdata__11->GetXaxis()->SetBinLabel(7,"LPL1WZGGFUntagTCR");
   h_prefitdata__11->GetXaxis()->SetBinLabel(8,"LPL1WZGGFUntagWCR");
   h_prefitdata__11->GetXaxis()->SetBinLabel(9,"L1WZGGFTagTCR");
   h_prefitdata__11->GetXaxis()->SetBinLabel(10,"L1WZGGFTagWCR");
   h_prefitdata__11->GetXaxis()->SetBinLabel(11,"L1WZGGFUntagTCR");
   h_prefitdata__11->GetXaxis()->SetBinLabel(12,"L1WZGGFUntagWCR");
   h_prefitdata__11->GetXaxis()->SetLabelFont(42);
   h_prefitdata__11->GetXaxis()->SetLabelSize(0.05);
   h_prefitdata__11->GetXaxis()->SetTitleSize(0.05);
   h_prefitdata__11->GetXaxis()->SetTitleOffset(1.4);
   h_prefitdata__11->GetXaxis()->SetTitleFont(42);
   h_prefitdata__11->GetYaxis()->SetLabelFont(42);
   h_prefitdata__11->GetYaxis()->SetLabelSize(0.05);
   h_prefitdata__11->GetYaxis()->SetTitleSize(0.05);
   h_prefitdata__11->GetYaxis()->SetTitleOffset(1.4);
   h_prefitdata__11->GetYaxis()->SetTitleFont(42);
   h_prefitdata__11->GetZaxis()->SetLabelFont(42);
   h_prefitdata__11->GetZaxis()->SetLabelSize(0.05);
   h_prefitdata__11->GetZaxis()->SetTitleSize(0.05);
   h_prefitdata__11->GetZaxis()->SetTitleFont(42);
   h_prefitdata__11->Draw("sameE0");
   
   TH1F *h_postfiterror_copy__12 = new TH1F("h_postfiterror_copy__12","h_postfiterror",12,0,12);
   h_postfiterror_copy__12->SetBinContent(1,1);
   h_postfiterror_copy__12->SetBinContent(2,1);
   h_postfiterror_copy__12->SetBinContent(3,1);
   h_postfiterror_copy__12->SetBinContent(4,1);
   h_postfiterror_copy__12->SetBinContent(5,1);
   h_postfiterror_copy__12->SetBinContent(6,1);
   h_postfiterror_copy__12->SetBinContent(7,1);
   h_postfiterror_copy__12->SetBinContent(8,1);
   h_postfiterror_copy__12->SetBinContent(9,1);
   h_postfiterror_copy__12->SetBinContent(10,1);
   h_postfiterror_copy__12->SetBinContent(11,1);
   h_postfiterror_copy__12->SetBinContent(12,1);
   h_postfiterror_copy__12->SetBinError(1,0.03775765);
   h_postfiterror_copy__12->SetBinError(2,0.05723508);
   h_postfiterror_copy__12->SetBinError(3,0.03002142);
   h_postfiterror_copy__12->SetBinError(4,0.01321687);
   h_postfiterror_copy__12->SetBinError(5,0.04384595);
   h_postfiterror_copy__12->SetBinError(6,0.05150161);
   h_postfiterror_copy__12->SetBinError(7,0.02321204);
   h_postfiterror_copy__12->SetBinError(8,0.01042973);
   h_postfiterror_copy__12->SetBinError(9,0.01726828);
   h_postfiterror_copy__12->SetBinError(10,0.02758939);
   h_postfiterror_copy__12->SetBinError(11,0.02888348);
   h_postfiterror_copy__12->SetBinError(12,0.0118445);
   h_postfiterror_copy__12->SetMinimum(0.8);
   h_postfiterror_copy__12->SetMaximum(1.2);
   h_postfiterror_copy__12->SetEntries(11048.16);
   h_postfiterror_copy__12->SetDirectory(0);
   h_postfiterror_copy__12->SetStats(0);
   h_postfiterror_copy__12->SetLineWidth(2);
   h_postfiterror_copy__12->SetMarkerStyle(20);
   h_postfiterror_copy__12->SetMarkerSize(1.2);
   h_postfiterror_copy__12->GetXaxis()->SetBinLabel(1,"HPL1WZGGFTagTCR");
   h_postfiterror_copy__12->GetXaxis()->SetBinLabel(2,"HPL1WZGGFTagWCR");
   h_postfiterror_copy__12->GetXaxis()->SetBinLabel(3,"HPL1WZGGFUntagTCR");
   h_postfiterror_copy__12->GetXaxis()->SetBinLabel(4,"HPL1WZGGFUntagWCR");
   h_postfiterror_copy__12->GetXaxis()->SetBinLabel(5,"LPL1WZGGFTagTCR");
   h_postfiterror_copy__12->GetXaxis()->SetBinLabel(6,"LPL1WZGGFTagWCR");
   h_postfiterror_copy__12->GetXaxis()->SetBinLabel(7,"LPL1WZGGFUntagTCR");
   h_postfiterror_copy__12->GetXaxis()->SetBinLabel(8,"LPL1WZGGFUntagWCR");
   h_postfiterror_copy__12->GetXaxis()->SetBinLabel(9,"L1WZGGFTagTCR");
   h_postfiterror_copy__12->GetXaxis()->SetBinLabel(10,"L1WZGGFTagWCR");
   h_postfiterror_copy__12->GetXaxis()->SetBinLabel(11,"L1WZGGFUntagTCR");
   h_postfiterror_copy__12->GetXaxis()->SetBinLabel(12,"L1WZGGFUntagWCR");
   h_postfiterror_copy__12->GetXaxis()->SetLabelFont(43);
   h_postfiterror_copy__12->GetXaxis()->SetLabelSize(0);
   h_postfiterror_copy__12->GetXaxis()->SetTitleSize(0);
   h_postfiterror_copy__12->GetXaxis()->SetTitleOffset(1.4);
   h_postfiterror_copy__12->GetXaxis()->SetTitleFont(43);
   h_postfiterror_copy__12->GetYaxis()->SetTitle("Data/Postfit");
   h_postfiterror_copy__12->GetYaxis()->SetNdivisions(205);
   h_postfiterror_copy__12->GetYaxis()->SetLabelFont(43);
   h_postfiterror_copy__12->GetYaxis()->SetLabelSize(25);
   h_postfiterror_copy__12->GetYaxis()->SetTitleSize(25);
   h_postfiterror_copy__12->GetYaxis()->SetTitleOffset(2);
   h_postfiterror_copy__12->GetYaxis()->SetTitleFont(43);
   h_postfiterror_copy__12->GetZaxis()->SetLabelFont(42);
   h_postfiterror_copy__12->GetZaxis()->SetLabelSize(0.05);
   h_postfiterror_copy__12->GetZaxis()->SetTitleSize(0.05);
   h_postfiterror_copy__12->GetZaxis()->SetTitleFont(42);
   h_postfiterror_copy__12->Draw("sameaxis");
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
   
   TH1F *h_prefiterror__13 = new TH1F("h_prefiterror__13","h_prefiterror",12,0,12);
   h_prefiterror__13->SetBinContent(1,1.057731);
   h_prefiterror__13->SetBinContent(2,1.079719);
   h_prefiterror__13->SetBinContent(3,1.118689);
   h_prefiterror__13->SetBinContent(4,1.0738);
   h_prefiterror__13->SetBinContent(5,1.041763);
   h_prefiterror__13->SetBinContent(6,1.066911);
   h_prefiterror__13->SetBinContent(7,1.125975);
   h_prefiterror__13->SetBinContent(8,1.134678);
   h_prefiterror__13->SetBinContent(9,1.005341);
   h_prefiterror__13->SetBinContent(10,0.9908387);
   h_prefiterror__13->SetBinContent(11,1.03341);
   h_prefiterror__13->SetBinContent(12,0.991747);
   h_prefiterror__13->SetBinError(1,0.03901484);
   h_prefiterror__13->SetBinError(2,0.05978273);
   h_prefiterror__13->SetBinError(3,0.03194609);
   h_prefiterror__13->SetBinError(4,0.01373156);
   h_prefiterror__13->SetBinError(5,0.04491274);
   h_prefiterror__13->SetBinError(6,0.05355245);
   h_prefiterror__13->SetBinError(7,0.02475484);
   h_prefiterror__13->SetBinError(8,0.01118788);
   h_prefiterror__13->SetBinError(9,0.01748246);
   h_prefiterror__13->SetBinError(10,0.02760945);
   h_prefiterror__13->SetBinError(11,0.02951379);
   h_prefiterror__13->SetBinError(12,0.01181346);
   h_prefiterror__13->SetMinimum(0.5);
   h_prefiterror__13->SetMaximum(1.5);
   h_prefiterror__13->SetEntries(11552.53);
   h_prefiterror__13->SetStats(0);
   h_prefiterror__13->SetLineWidth(2);
   h_prefiterror__13->SetMarkerStyle(20);
   h_prefiterror__13->SetMarkerSize(1.2);
   h_prefiterror__13->GetXaxis()->SetBinLabel(1,"HPL1WZGGFTagTCR");
   h_prefiterror__13->GetXaxis()->SetBinLabel(2,"HPL1WZGGFTagWCR");
   h_prefiterror__13->GetXaxis()->SetBinLabel(3,"HPL1WZGGFUntagTCR");
   h_prefiterror__13->GetXaxis()->SetBinLabel(4,"HPL1WZGGFUntagWCR");
   h_prefiterror__13->GetXaxis()->SetBinLabel(5,"LPL1WZGGFTagTCR");
   h_prefiterror__13->GetXaxis()->SetBinLabel(6,"LPL1WZGGFTagWCR");
   h_prefiterror__13->GetXaxis()->SetBinLabel(7,"LPL1WZGGFUntagTCR");
   h_prefiterror__13->GetXaxis()->SetBinLabel(8,"LPL1WZGGFUntagWCR");
   h_prefiterror__13->GetXaxis()->SetBinLabel(9,"L1WZGGFTagTCR");
   h_prefiterror__13->GetXaxis()->SetBinLabel(10,"L1WZGGFTagWCR");
   h_prefiterror__13->GetXaxis()->SetBinLabel(11,"L1WZGGFUntagTCR");
   h_prefiterror__13->GetXaxis()->SetBinLabel(12,"L1WZGGFUntagWCR");
   h_prefiterror__13->GetXaxis()->SetBit(TAxis::kLabelsVert);
   h_prefiterror__13->GetXaxis()->SetLabelFont(43);
   h_prefiterror__13->GetXaxis()->SetLabelSize(25);
   h_prefiterror__13->GetXaxis()->SetTitleSize(25);
   h_prefiterror__13->GetXaxis()->SetTitleOffset(5);
   h_prefiterror__13->GetXaxis()->SetTitleFont(43);
   h_prefiterror__13->GetYaxis()->SetTitle("Prefit/Postfit");
   h_prefiterror__13->GetYaxis()->SetNdivisions(205);
   h_prefiterror__13->GetYaxis()->SetLabelFont(43);
   h_prefiterror__13->GetYaxis()->SetLabelSize(25);
   h_prefiterror__13->GetYaxis()->SetTitleSize(25);
   h_prefiterror__13->GetYaxis()->SetTitleOffset(2);
   h_prefiterror__13->GetYaxis()->SetTitleFont(43);
   h_prefiterror__13->GetZaxis()->SetLabelFont(42);
   h_prefiterror__13->GetZaxis()->SetLabelSize(0.05);
   h_prefiterror__13->GetZaxis()->SetTitleSize(0.05);
   h_prefiterror__13->GetZaxis()->SetTitleFont(42);
   h_prefiterror__13->Draw("AXIS");
   line = new TLine(0,1,12,1);
   line->SetLineStyle(2);
   line->Draw();
   
   TH1F *h_prefiterror__14 = new TH1F("h_prefiterror__14","h_prefiterror",12,0,12);
   h_prefiterror__14->SetBinContent(1,1.057731);
   h_prefiterror__14->SetBinContent(2,1.079719);
   h_prefiterror__14->SetBinContent(3,1.118689);
   h_prefiterror__14->SetBinContent(4,1.0738);
   h_prefiterror__14->SetBinContent(5,1.041763);
   h_prefiterror__14->SetBinContent(6,1.066911);
   h_prefiterror__14->SetBinContent(7,1.125975);
   h_prefiterror__14->SetBinContent(8,1.134678);
   h_prefiterror__14->SetBinContent(9,1.005341);
   h_prefiterror__14->SetBinContent(10,0.9908387);
   h_prefiterror__14->SetBinContent(11,1.03341);
   h_prefiterror__14->SetBinContent(12,0.991747);
   h_prefiterror__14->SetBinError(1,0.03901484);
   h_prefiterror__14->SetBinError(2,0.05978273);
   h_prefiterror__14->SetBinError(3,0.03194609);
   h_prefiterror__14->SetBinError(4,0.01373156);
   h_prefiterror__14->SetBinError(5,0.04491274);
   h_prefiterror__14->SetBinError(6,0.05355245);
   h_prefiterror__14->SetBinError(7,0.02475484);
   h_prefiterror__14->SetBinError(8,0.01118788);
   h_prefiterror__14->SetBinError(9,0.01748246);
   h_prefiterror__14->SetBinError(10,0.02760945);
   h_prefiterror__14->SetBinError(11,0.02951379);
   h_prefiterror__14->SetBinError(12,0.01181346);
   h_prefiterror__14->SetMinimum(0.5);
   h_prefiterror__14->SetMaximum(1.5);
   h_prefiterror__14->SetEntries(11552.53);
   h_prefiterror__14->SetStats(0);
   h_prefiterror__14->SetLineWidth(2);
   h_prefiterror__14->SetMarkerStyle(20);
   h_prefiterror__14->SetMarkerSize(1.2);
   h_prefiterror__14->GetXaxis()->SetBinLabel(1,"HPL1WZGGFTagTCR");
   h_prefiterror__14->GetXaxis()->SetBinLabel(2,"HPL1WZGGFTagWCR");
   h_prefiterror__14->GetXaxis()->SetBinLabel(3,"HPL1WZGGFUntagTCR");
   h_prefiterror__14->GetXaxis()->SetBinLabel(4,"HPL1WZGGFUntagWCR");
   h_prefiterror__14->GetXaxis()->SetBinLabel(5,"LPL1WZGGFTagTCR");
   h_prefiterror__14->GetXaxis()->SetBinLabel(6,"LPL1WZGGFTagWCR");
   h_prefiterror__14->GetXaxis()->SetBinLabel(7,"LPL1WZGGFUntagTCR");
   h_prefiterror__14->GetXaxis()->SetBinLabel(8,"LPL1WZGGFUntagWCR");
   h_prefiterror__14->GetXaxis()->SetBinLabel(9,"L1WZGGFTagTCR");
   h_prefiterror__14->GetXaxis()->SetBinLabel(10,"L1WZGGFTagWCR");
   h_prefiterror__14->GetXaxis()->SetBinLabel(11,"L1WZGGFUntagTCR");
   h_prefiterror__14->GetXaxis()->SetBinLabel(12,"L1WZGGFUntagWCR");
   h_prefiterror__14->GetXaxis()->SetBit(TAxis::kLabelsVert);
   h_prefiterror__14->GetXaxis()->SetLabelFont(43);
   h_prefiterror__14->GetXaxis()->SetLabelSize(25);
   h_prefiterror__14->GetXaxis()->SetTitleSize(25);
   h_prefiterror__14->GetXaxis()->SetTitleOffset(5);
   h_prefiterror__14->GetXaxis()->SetTitleFont(43);
   h_prefiterror__14->GetYaxis()->SetTitle("Prefit/Postfit");
   h_prefiterror__14->GetYaxis()->SetNdivisions(205);
   h_prefiterror__14->GetYaxis()->SetLabelFont(43);
   h_prefiterror__14->GetYaxis()->SetLabelSize(25);
   h_prefiterror__14->GetYaxis()->SetTitleSize(25);
   h_prefiterror__14->GetYaxis()->SetTitleOffset(2);
   h_prefiterror__14->GetYaxis()->SetTitleFont(43);
   h_prefiterror__14->GetZaxis()->SetLabelFont(42);
   h_prefiterror__14->GetZaxis()->SetLabelSize(0.05);
   h_prefiterror__14->GetZaxis()->SetTitleSize(0.05);
   h_prefiterror__14->GetZaxis()->SetTitleFont(42);
   h_prefiterror__14->Draw("histsame");
   pad3->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
