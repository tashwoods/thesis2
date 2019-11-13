void PlotyieldTable_prefit()
{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Nov  8 15:58:32 2019) by ROOT version 6.14/04
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
   pad1->Range(-1.21519,-0.2601713,6.379747,10.68848);
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
   
   THStack *hs_HPL1WWGGFTCR = new THStack();
   hs_HPL1WWGGFTCR->SetName("hs_HPL1WWGGFTCR");
   hs_HPL1WWGGFTCR->SetTitle("hs_HPL1WWGGFTCR");
   hs_HPL1WWGGFTCR->SetMinimum(5);
   hs_HPL1WWGGFTCR->SetMaximum(4.943625e+09);
   
   TH1F *hs_HPL1WWGGFTCR_stack_1 = new TH1F("hs_HPL1WWGGFTCR_stack_1","hs_HPL1WWGGFTCR",6,0,6);
   hs_HPL1WWGGFTCR_stack_1->SetMinimum(0.9094981);
   hs_HPL1WWGGFTCR_stack_1->SetMaximum(1.383728e+10);
   hs_HPL1WWGGFTCR_stack_1->SetDirectory(0);
   hs_HPL1WWGGFTCR_stack_1->SetStats(0);
   hs_HPL1WWGGFTCR_stack_1->SetLineWidth(2);
   hs_HPL1WWGGFTCR_stack_1->SetMarkerStyle(20);
   hs_HPL1WWGGFTCR_stack_1->SetMarkerSize(1.2);
   hs_HPL1WWGGFTCR_stack_1->GetXaxis()->SetLabelFont(43);
   hs_HPL1WWGGFTCR_stack_1->GetXaxis()->SetLabelSize(0);
   hs_HPL1WWGGFTCR_stack_1->GetXaxis()->SetTitleSize(0);
   hs_HPL1WWGGFTCR_stack_1->GetXaxis()->SetTitleOffset(1.4);
   hs_HPL1WWGGFTCR_stack_1->GetXaxis()->SetTitleFont(43);
   hs_HPL1WWGGFTCR_stack_1->GetYaxis()->SetTitle("Events");
   hs_HPL1WWGGFTCR_stack_1->GetYaxis()->SetLabelFont(43);
   hs_HPL1WWGGFTCR_stack_1->GetYaxis()->SetLabelSize(25);
   hs_HPL1WWGGFTCR_stack_1->GetYaxis()->SetTitleSize(25);
   hs_HPL1WWGGFTCR_stack_1->GetYaxis()->SetTitleOffset(2);
   hs_HPL1WWGGFTCR_stack_1->GetYaxis()->SetTitleFont(43);
   hs_HPL1WWGGFTCR_stack_1->GetZaxis()->SetLabelFont(42);
   hs_HPL1WWGGFTCR_stack_1->GetZaxis()->SetLabelSize(0.05);
   hs_HPL1WWGGFTCR_stack_1->GetZaxis()->SetTitleSize(0.05);
   hs_HPL1WWGGFTCR_stack_1->GetZaxis()->SetTitleFont(42);
   hs_HPL1WWGGFTCR->SetHistogram(hs_HPL1WWGGFTCR_stack_1);
   
   
   TH1F *h_postfit_HPL1WWGGFTCR_zjets_stack_1 = new TH1F("h_postfit_HPL1WWGGFTCR_zjets_stack_1","h_postfit_HPL1WWGGFTCR_zjets",6,0,6);
   h_postfit_HPL1WWGGFTCR_zjets_stack_1->SetBinContent(1,66.59923);
   h_postfit_HPL1WWGGFTCR_zjets_stack_1->SetBinError(1,6.751577);
   h_postfit_HPL1WWGGFTCR_zjets_stack_1->SetEntries(1);
   h_postfit_HPL1WWGGFTCR_zjets_stack_1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#99ff99");
   h_postfit_HPL1WWGGFTCR_zjets_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   h_postfit_HPL1WWGGFTCR_zjets_stack_1->SetLineColor(ci);
   h_postfit_HPL1WWGGFTCR_zjets_stack_1->SetLineWidth(2);
   h_postfit_HPL1WWGGFTCR_zjets_stack_1->SetMarkerStyle(20);
   h_postfit_HPL1WWGGFTCR_zjets_stack_1->SetMarkerSize(1.2);
   h_postfit_HPL1WWGGFTCR_zjets_stack_1->GetXaxis()->SetLabelFont(42);
   h_postfit_HPL1WWGGFTCR_zjets_stack_1->GetXaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WWGGFTCR_zjets_stack_1->GetXaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WWGGFTCR_zjets_stack_1->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WWGGFTCR_zjets_stack_1->GetXaxis()->SetTitleFont(42);
   h_postfit_HPL1WWGGFTCR_zjets_stack_1->GetYaxis()->SetLabelFont(42);
   h_postfit_HPL1WWGGFTCR_zjets_stack_1->GetYaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WWGGFTCR_zjets_stack_1->GetYaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WWGGFTCR_zjets_stack_1->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WWGGFTCR_zjets_stack_1->GetYaxis()->SetTitleFont(42);
   h_postfit_HPL1WWGGFTCR_zjets_stack_1->GetZaxis()->SetLabelFont(42);
   h_postfit_HPL1WWGGFTCR_zjets_stack_1->GetZaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WWGGFTCR_zjets_stack_1->GetZaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WWGGFTCR_zjets_stack_1->GetZaxis()->SetTitleFont(42);
   hs_HPL1WWGGFTCR->Add(h_postfit_HPL1WWGGFTCR_zjets_stack_1,"");
   
   TH1F *h_postfit_HPL1WWGGFTCR_diboson_stack_2 = new TH1F("h_postfit_HPL1WWGGFTCR_diboson_stack_2","h_postfit_HPL1WWGGFTCR_diboson",6,0,6);
   h_postfit_HPL1WWGGFTCR_diboson_stack_2->SetBinContent(1,335.3964);
   h_postfit_HPL1WWGGFTCR_diboson_stack_2->SetBinError(1,37.30025);
   h_postfit_HPL1WWGGFTCR_diboson_stack_2->SetEntries(1);
   h_postfit_HPL1WWGGFTCR_diboson_stack_2->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   h_postfit_HPL1WWGGFTCR_diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   h_postfit_HPL1WWGGFTCR_diboson_stack_2->SetLineColor(ci);
   h_postfit_HPL1WWGGFTCR_diboson_stack_2->SetLineWidth(2);
   h_postfit_HPL1WWGGFTCR_diboson_stack_2->SetMarkerStyle(20);
   h_postfit_HPL1WWGGFTCR_diboson_stack_2->SetMarkerSize(1.2);
   h_postfit_HPL1WWGGFTCR_diboson_stack_2->GetXaxis()->SetLabelFont(42);
   h_postfit_HPL1WWGGFTCR_diboson_stack_2->GetXaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WWGGFTCR_diboson_stack_2->GetXaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WWGGFTCR_diboson_stack_2->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WWGGFTCR_diboson_stack_2->GetXaxis()->SetTitleFont(42);
   h_postfit_HPL1WWGGFTCR_diboson_stack_2->GetYaxis()->SetLabelFont(42);
   h_postfit_HPL1WWGGFTCR_diboson_stack_2->GetYaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WWGGFTCR_diboson_stack_2->GetYaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WWGGFTCR_diboson_stack_2->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WWGGFTCR_diboson_stack_2->GetYaxis()->SetTitleFont(42);
   h_postfit_HPL1WWGGFTCR_diboson_stack_2->GetZaxis()->SetLabelFont(42);
   h_postfit_HPL1WWGGFTCR_diboson_stack_2->GetZaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WWGGFTCR_diboson_stack_2->GetZaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WWGGFTCR_diboson_stack_2->GetZaxis()->SetTitleFont(42);
   hs_HPL1WWGGFTCR->Add(h_postfit_HPL1WWGGFTCR_diboson_stack_2,"");
   
   TH1F *h_postfit_HPL1WWGGFTCR_wjets_stack_3 = new TH1F("h_postfit_HPL1WWGGFTCR_wjets_stack_3","h_postfit_HPL1WWGGFTCR_wjets",6,0,6);
   h_postfit_HPL1WWGGFTCR_wjets_stack_3->SetBinContent(1,2425.309);
   h_postfit_HPL1WWGGFTCR_wjets_stack_3->SetBinError(1,20.12924);
   h_postfit_HPL1WWGGFTCR_wjets_stack_3->SetEntries(1);
   h_postfit_HPL1WWGGFTCR_wjets_stack_3->SetStats(0);

   ci = TColor::GetColor("#ff9999");
   h_postfit_HPL1WWGGFTCR_wjets_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ff9999");
   h_postfit_HPL1WWGGFTCR_wjets_stack_3->SetLineColor(ci);
   h_postfit_HPL1WWGGFTCR_wjets_stack_3->SetLineWidth(2);
   h_postfit_HPL1WWGGFTCR_wjets_stack_3->SetMarkerStyle(20);
   h_postfit_HPL1WWGGFTCR_wjets_stack_3->SetMarkerSize(1.2);
   h_postfit_HPL1WWGGFTCR_wjets_stack_3->GetXaxis()->SetLabelFont(42);
   h_postfit_HPL1WWGGFTCR_wjets_stack_3->GetXaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WWGGFTCR_wjets_stack_3->GetXaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WWGGFTCR_wjets_stack_3->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WWGGFTCR_wjets_stack_3->GetXaxis()->SetTitleFont(42);
   h_postfit_HPL1WWGGFTCR_wjets_stack_3->GetYaxis()->SetLabelFont(42);
   h_postfit_HPL1WWGGFTCR_wjets_stack_3->GetYaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WWGGFTCR_wjets_stack_3->GetYaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WWGGFTCR_wjets_stack_3->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WWGGFTCR_wjets_stack_3->GetYaxis()->SetTitleFont(42);
   h_postfit_HPL1WWGGFTCR_wjets_stack_3->GetZaxis()->SetLabelFont(42);
   h_postfit_HPL1WWGGFTCR_wjets_stack_3->GetZaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WWGGFTCR_wjets_stack_3->GetZaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WWGGFTCR_wjets_stack_3->GetZaxis()->SetTitleFont(42);
   hs_HPL1WWGGFTCR->Add(h_postfit_HPL1WWGGFTCR_wjets_stack_3,"");
   
   TH1F *h_postfit_HPL1WWGGFTCR_singlet_stack_4 = new TH1F("h_postfit_HPL1WWGGFTCR_singlet_stack_4","h_postfit_HPL1WWGGFTCR_singlet",6,0,6);
   h_postfit_HPL1WWGGFTCR_singlet_stack_4->SetBinContent(1,4985.233);
   h_postfit_HPL1WWGGFTCR_singlet_stack_4->SetBinError(1,850.9445);
   h_postfit_HPL1WWGGFTCR_singlet_stack_4->SetEntries(1);
   h_postfit_HPL1WWGGFTCR_singlet_stack_4->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   h_postfit_HPL1WWGGFTCR_singlet_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   h_postfit_HPL1WWGGFTCR_singlet_stack_4->SetLineColor(ci);
   h_postfit_HPL1WWGGFTCR_singlet_stack_4->SetLineWidth(2);
   h_postfit_HPL1WWGGFTCR_singlet_stack_4->SetMarkerStyle(20);
   h_postfit_HPL1WWGGFTCR_singlet_stack_4->SetMarkerSize(1.2);
   h_postfit_HPL1WWGGFTCR_singlet_stack_4->GetXaxis()->SetLabelFont(42);
   h_postfit_HPL1WWGGFTCR_singlet_stack_4->GetXaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WWGGFTCR_singlet_stack_4->GetXaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WWGGFTCR_singlet_stack_4->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WWGGFTCR_singlet_stack_4->GetXaxis()->SetTitleFont(42);
   h_postfit_HPL1WWGGFTCR_singlet_stack_4->GetYaxis()->SetLabelFont(42);
   h_postfit_HPL1WWGGFTCR_singlet_stack_4->GetYaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WWGGFTCR_singlet_stack_4->GetYaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WWGGFTCR_singlet_stack_4->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WWGGFTCR_singlet_stack_4->GetYaxis()->SetTitleFont(42);
   h_postfit_HPL1WWGGFTCR_singlet_stack_4->GetZaxis()->SetLabelFont(42);
   h_postfit_HPL1WWGGFTCR_singlet_stack_4->GetZaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WWGGFTCR_singlet_stack_4->GetZaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WWGGFTCR_singlet_stack_4->GetZaxis()->SetTitleFont(42);
   hs_HPL1WWGGFTCR->Add(h_postfit_HPL1WWGGFTCR_singlet_stack_4,"");
   
   TH1F *h_postfit_HPL1WWGGFTCR_ttbar_stack_5 = new TH1F("h_postfit_HPL1WWGGFTCR_ttbar_stack_5","h_postfit_HPL1WWGGFTCR_ttbar",6,0,6);
   h_postfit_HPL1WWGGFTCR_ttbar_stack_5->SetBinContent(1,41623.71);
   h_postfit_HPL1WWGGFTCR_ttbar_stack_5->SetBinError(1,848.7684);
   h_postfit_HPL1WWGGFTCR_ttbar_stack_5->SetEntries(1);
   h_postfit_HPL1WWGGFTCR_ttbar_stack_5->SetStats(0);

   ci = TColor::GetColor("#6699ff");
   h_postfit_HPL1WWGGFTCR_ttbar_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#6699ff");
   h_postfit_HPL1WWGGFTCR_ttbar_stack_5->SetLineColor(ci);
   h_postfit_HPL1WWGGFTCR_ttbar_stack_5->SetLineWidth(2);
   h_postfit_HPL1WWGGFTCR_ttbar_stack_5->SetMarkerStyle(20);
   h_postfit_HPL1WWGGFTCR_ttbar_stack_5->SetMarkerSize(1.2);
   h_postfit_HPL1WWGGFTCR_ttbar_stack_5->GetXaxis()->SetLabelFont(42);
   h_postfit_HPL1WWGGFTCR_ttbar_stack_5->GetXaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WWGGFTCR_ttbar_stack_5->GetXaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WWGGFTCR_ttbar_stack_5->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WWGGFTCR_ttbar_stack_5->GetXaxis()->SetTitleFont(42);
   h_postfit_HPL1WWGGFTCR_ttbar_stack_5->GetYaxis()->SetLabelFont(42);
   h_postfit_HPL1WWGGFTCR_ttbar_stack_5->GetYaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WWGGFTCR_ttbar_stack_5->GetYaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WWGGFTCR_ttbar_stack_5->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WWGGFTCR_ttbar_stack_5->GetYaxis()->SetTitleFont(42);
   h_postfit_HPL1WWGGFTCR_ttbar_stack_5->GetZaxis()->SetLabelFont(42);
   h_postfit_HPL1WWGGFTCR_ttbar_stack_5->GetZaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WWGGFTCR_ttbar_stack_5->GetZaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WWGGFTCR_ttbar_stack_5->GetZaxis()->SetTitleFont(42);
   hs_HPL1WWGGFTCR->Add(h_postfit_HPL1WWGGFTCR_ttbar_stack_5,"");
   hs_HPL1WWGGFTCR->Draw("hist");
   
   hs_HPL1WWGGFWCR = new THStack();
   hs_HPL1WWGGFWCR->SetName("hs_HPL1WWGGFWCR");
   hs_HPL1WWGGFWCR->SetTitle("hs_HPL1WWGGFWCR");
   
   TH1F *hs_HPL1WWGGFWCR_stack_2 = new TH1F("hs_HPL1WWGGFWCR_stack_2","hs_HPL1WWGGFWCR",6,0,6);
   hs_HPL1WWGGFWCR_stack_2->SetMinimum(25.85392);
   hs_HPL1WWGGFWCR_stack_2->SetMaximum(103415.7);
   hs_HPL1WWGGFWCR_stack_2->SetDirectory(0);
   hs_HPL1WWGGFWCR_stack_2->SetStats(0);
   hs_HPL1WWGGFWCR_stack_2->SetLineWidth(2);
   hs_HPL1WWGGFWCR_stack_2->SetMarkerStyle(20);
   hs_HPL1WWGGFWCR_stack_2->SetMarkerSize(1.2);
   hs_HPL1WWGGFWCR_stack_2->GetXaxis()->SetLabelFont(42);
   hs_HPL1WWGGFWCR_stack_2->GetXaxis()->SetLabelSize(0.05);
   hs_HPL1WWGGFWCR_stack_2->GetXaxis()->SetTitleSize(0.05);
   hs_HPL1WWGGFWCR_stack_2->GetXaxis()->SetTitleOffset(1.4);
   hs_HPL1WWGGFWCR_stack_2->GetXaxis()->SetTitleFont(42);
   hs_HPL1WWGGFWCR_stack_2->GetYaxis()->SetLabelFont(42);
   hs_HPL1WWGGFWCR_stack_2->GetYaxis()->SetLabelSize(0.05);
   hs_HPL1WWGGFWCR_stack_2->GetYaxis()->SetTitleSize(0.05);
   hs_HPL1WWGGFWCR_stack_2->GetYaxis()->SetTitleOffset(1.4);
   hs_HPL1WWGGFWCR_stack_2->GetYaxis()->SetTitleFont(42);
   hs_HPL1WWGGFWCR_stack_2->GetZaxis()->SetLabelFont(42);
   hs_HPL1WWGGFWCR_stack_2->GetZaxis()->SetLabelSize(0.05);
   hs_HPL1WWGGFWCR_stack_2->GetZaxis()->SetTitleSize(0.05);
   hs_HPL1WWGGFWCR_stack_2->GetZaxis()->SetTitleFont(42);
   hs_HPL1WWGGFWCR->SetHistogram(hs_HPL1WWGGFWCR_stack_2);
   
   
   TH1F *h_postfit_HPL1WWGGFWCR_zjets_stack_1 = new TH1F("h_postfit_HPL1WWGGFWCR_zjets_stack_1","h_postfit_HPL1WWGGFWCR_zjets",6,0,6);
   h_postfit_HPL1WWGGFWCR_zjets_stack_1->SetBinContent(2,781.7085);
   h_postfit_HPL1WWGGFWCR_zjets_stack_1->SetBinError(2,79.24664);
   h_postfit_HPL1WWGGFWCR_zjets_stack_1->SetEntries(1);
   h_postfit_HPL1WWGGFWCR_zjets_stack_1->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   h_postfit_HPL1WWGGFWCR_zjets_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   h_postfit_HPL1WWGGFWCR_zjets_stack_1->SetLineColor(ci);
   h_postfit_HPL1WWGGFWCR_zjets_stack_1->SetLineWidth(2);
   h_postfit_HPL1WWGGFWCR_zjets_stack_1->SetMarkerStyle(20);
   h_postfit_HPL1WWGGFWCR_zjets_stack_1->SetMarkerSize(1.2);
   h_postfit_HPL1WWGGFWCR_zjets_stack_1->GetXaxis()->SetLabelFont(42);
   h_postfit_HPL1WWGGFWCR_zjets_stack_1->GetXaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WWGGFWCR_zjets_stack_1->GetXaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WWGGFWCR_zjets_stack_1->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WWGGFWCR_zjets_stack_1->GetXaxis()->SetTitleFont(42);
   h_postfit_HPL1WWGGFWCR_zjets_stack_1->GetYaxis()->SetLabelFont(42);
   h_postfit_HPL1WWGGFWCR_zjets_stack_1->GetYaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WWGGFWCR_zjets_stack_1->GetYaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WWGGFWCR_zjets_stack_1->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WWGGFWCR_zjets_stack_1->GetYaxis()->SetTitleFont(42);
   h_postfit_HPL1WWGGFWCR_zjets_stack_1->GetZaxis()->SetLabelFont(42);
   h_postfit_HPL1WWGGFWCR_zjets_stack_1->GetZaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WWGGFWCR_zjets_stack_1->GetZaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WWGGFWCR_zjets_stack_1->GetZaxis()->SetTitleFont(42);
   hs_HPL1WWGGFWCR->Add(h_postfit_HPL1WWGGFWCR_zjets_stack_1,"");
   
   TH1F *h_postfit_HPL1WWGGFWCR_diboson_stack_2 = new TH1F("h_postfit_HPL1WWGGFWCR_diboson_stack_2","h_postfit_HPL1WWGGFWCR_diboson",6,0,6);
   h_postfit_HPL1WWGGFWCR_diboson_stack_2->SetBinContent(2,1578.21);
   h_postfit_HPL1WWGGFWCR_diboson_stack_2->SetBinError(2,174.589);
   h_postfit_HPL1WWGGFWCR_diboson_stack_2->SetEntries(1);
   h_postfit_HPL1WWGGFWCR_diboson_stack_2->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   h_postfit_HPL1WWGGFWCR_diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   h_postfit_HPL1WWGGFWCR_diboson_stack_2->SetLineColor(ci);
   h_postfit_HPL1WWGGFWCR_diboson_stack_2->SetLineWidth(2);
   h_postfit_HPL1WWGGFWCR_diboson_stack_2->SetMarkerStyle(20);
   h_postfit_HPL1WWGGFWCR_diboson_stack_2->SetMarkerSize(1.2);
   h_postfit_HPL1WWGGFWCR_diboson_stack_2->GetXaxis()->SetLabelFont(42);
   h_postfit_HPL1WWGGFWCR_diboson_stack_2->GetXaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WWGGFWCR_diboson_stack_2->GetXaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WWGGFWCR_diboson_stack_2->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WWGGFWCR_diboson_stack_2->GetXaxis()->SetTitleFont(42);
   h_postfit_HPL1WWGGFWCR_diboson_stack_2->GetYaxis()->SetLabelFont(42);
   h_postfit_HPL1WWGGFWCR_diboson_stack_2->GetYaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WWGGFWCR_diboson_stack_2->GetYaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WWGGFWCR_diboson_stack_2->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WWGGFWCR_diboson_stack_2->GetYaxis()->SetTitleFont(42);
   h_postfit_HPL1WWGGFWCR_diboson_stack_2->GetZaxis()->SetLabelFont(42);
   h_postfit_HPL1WWGGFWCR_diboson_stack_2->GetZaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WWGGFWCR_diboson_stack_2->GetZaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WWGGFWCR_diboson_stack_2->GetZaxis()->SetTitleFont(42);
   hs_HPL1WWGGFWCR->Add(h_postfit_HPL1WWGGFWCR_diboson_stack_2,"");
   
   TH1F *h_postfit_HPL1WWGGFWCR_singlet_stack_3 = new TH1F("h_postfit_HPL1WWGGFWCR_singlet_stack_3","h_postfit_HPL1WWGGFWCR_singlet",6,0,6);
   h_postfit_HPL1WWGGFWCR_singlet_stack_3->SetBinContent(2,2579.25);
   h_postfit_HPL1WWGGFWCR_singlet_stack_3->SetBinError(2,404.8058);
   h_postfit_HPL1WWGGFWCR_singlet_stack_3->SetEntries(1);
   h_postfit_HPL1WWGGFWCR_singlet_stack_3->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   h_postfit_HPL1WWGGFWCR_singlet_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   h_postfit_HPL1WWGGFWCR_singlet_stack_3->SetLineColor(ci);
   h_postfit_HPL1WWGGFWCR_singlet_stack_3->SetLineWidth(2);
   h_postfit_HPL1WWGGFWCR_singlet_stack_3->SetMarkerStyle(20);
   h_postfit_HPL1WWGGFWCR_singlet_stack_3->SetMarkerSize(1.2);
   h_postfit_HPL1WWGGFWCR_singlet_stack_3->GetXaxis()->SetLabelFont(42);
   h_postfit_HPL1WWGGFWCR_singlet_stack_3->GetXaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WWGGFWCR_singlet_stack_3->GetXaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WWGGFWCR_singlet_stack_3->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WWGGFWCR_singlet_stack_3->GetXaxis()->SetTitleFont(42);
   h_postfit_HPL1WWGGFWCR_singlet_stack_3->GetYaxis()->SetLabelFont(42);
   h_postfit_HPL1WWGGFWCR_singlet_stack_3->GetYaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WWGGFWCR_singlet_stack_3->GetYaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WWGGFWCR_singlet_stack_3->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WWGGFWCR_singlet_stack_3->GetYaxis()->SetTitleFont(42);
   h_postfit_HPL1WWGGFWCR_singlet_stack_3->GetZaxis()->SetLabelFont(42);
   h_postfit_HPL1WWGGFWCR_singlet_stack_3->GetZaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WWGGFWCR_singlet_stack_3->GetZaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WWGGFWCR_singlet_stack_3->GetZaxis()->SetTitleFont(42);
   hs_HPL1WWGGFWCR->Add(h_postfit_HPL1WWGGFWCR_singlet_stack_3,"");
   
   TH1F *h_postfit_HPL1WWGGFWCR_ttbar_stack_4 = new TH1F("h_postfit_HPL1WWGGFWCR_ttbar_stack_4","h_postfit_HPL1WWGGFWCR_ttbar",6,0,6);
   h_postfit_HPL1WWGGFWCR_ttbar_stack_4->SetBinContent(2,16586.2);
   h_postfit_HPL1WWGGFWCR_ttbar_stack_4->SetBinError(2,338.2168);
   h_postfit_HPL1WWGGFWCR_ttbar_stack_4->SetEntries(1);
   h_postfit_HPL1WWGGFWCR_ttbar_stack_4->SetStats(0);

   ci = TColor::GetColor("#6699ff");
   h_postfit_HPL1WWGGFWCR_ttbar_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#6699ff");
   h_postfit_HPL1WWGGFWCR_ttbar_stack_4->SetLineColor(ci);
   h_postfit_HPL1WWGGFWCR_ttbar_stack_4->SetLineWidth(2);
   h_postfit_HPL1WWGGFWCR_ttbar_stack_4->SetMarkerStyle(20);
   h_postfit_HPL1WWGGFWCR_ttbar_stack_4->SetMarkerSize(1.2);
   h_postfit_HPL1WWGGFWCR_ttbar_stack_4->GetXaxis()->SetLabelFont(42);
   h_postfit_HPL1WWGGFWCR_ttbar_stack_4->GetXaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WWGGFWCR_ttbar_stack_4->GetXaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WWGGFWCR_ttbar_stack_4->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WWGGFWCR_ttbar_stack_4->GetXaxis()->SetTitleFont(42);
   h_postfit_HPL1WWGGFWCR_ttbar_stack_4->GetYaxis()->SetLabelFont(42);
   h_postfit_HPL1WWGGFWCR_ttbar_stack_4->GetYaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WWGGFWCR_ttbar_stack_4->GetYaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WWGGFWCR_ttbar_stack_4->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WWGGFWCR_ttbar_stack_4->GetYaxis()->SetTitleFont(42);
   h_postfit_HPL1WWGGFWCR_ttbar_stack_4->GetZaxis()->SetLabelFont(42);
   h_postfit_HPL1WWGGFWCR_ttbar_stack_4->GetZaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WWGGFWCR_ttbar_stack_4->GetZaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WWGGFWCR_ttbar_stack_4->GetZaxis()->SetTitleFont(42);
   hs_HPL1WWGGFWCR->Add(h_postfit_HPL1WWGGFWCR_ttbar_stack_4,"");
   
   TH1F *h_postfit_HPL1WWGGFWCR_wjets_stack_5 = new TH1F("h_postfit_HPL1WWGGFWCR_wjets_stack_5","h_postfit_HPL1WWGGFWCR_wjets",6,0,6);
   h_postfit_HPL1WWGGFWCR_wjets_stack_5->SetBinContent(2,43109.44);
   h_postfit_HPL1WWGGFWCR_wjets_stack_5->SetBinError(2,357.7937);
   h_postfit_HPL1WWGGFWCR_wjets_stack_5->SetEntries(1);
   h_postfit_HPL1WWGGFWCR_wjets_stack_5->SetStats(0);

   ci = TColor::GetColor("#ff9999");
   h_postfit_HPL1WWGGFWCR_wjets_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#ff9999");
   h_postfit_HPL1WWGGFWCR_wjets_stack_5->SetLineColor(ci);
   h_postfit_HPL1WWGGFWCR_wjets_stack_5->SetLineWidth(2);
   h_postfit_HPL1WWGGFWCR_wjets_stack_5->SetMarkerStyle(20);
   h_postfit_HPL1WWGGFWCR_wjets_stack_5->SetMarkerSize(1.2);
   h_postfit_HPL1WWGGFWCR_wjets_stack_5->GetXaxis()->SetLabelFont(42);
   h_postfit_HPL1WWGGFWCR_wjets_stack_5->GetXaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WWGGFWCR_wjets_stack_5->GetXaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WWGGFWCR_wjets_stack_5->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WWGGFWCR_wjets_stack_5->GetXaxis()->SetTitleFont(42);
   h_postfit_HPL1WWGGFWCR_wjets_stack_5->GetYaxis()->SetLabelFont(42);
   h_postfit_HPL1WWGGFWCR_wjets_stack_5->GetYaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WWGGFWCR_wjets_stack_5->GetYaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WWGGFWCR_wjets_stack_5->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_HPL1WWGGFWCR_wjets_stack_5->GetYaxis()->SetTitleFont(42);
   h_postfit_HPL1WWGGFWCR_wjets_stack_5->GetZaxis()->SetLabelFont(42);
   h_postfit_HPL1WWGGFWCR_wjets_stack_5->GetZaxis()->SetLabelSize(0.05);
   h_postfit_HPL1WWGGFWCR_wjets_stack_5->GetZaxis()->SetTitleSize(0.05);
   h_postfit_HPL1WWGGFWCR_wjets_stack_5->GetZaxis()->SetTitleFont(42);
   hs_HPL1WWGGFWCR->Add(h_postfit_HPL1WWGGFWCR_wjets_stack_5,"");
   hs_HPL1WWGGFWCR->Draw("histsame");
   
   hs_LPL1WWGGFTCR = new THStack();
   hs_LPL1WWGGFTCR->SetName("hs_LPL1WWGGFTCR");
   hs_LPL1WWGGFTCR->SetTitle("hs_LPL1WWGGFTCR");
   
   TH1F *hs_LPL1WWGGFTCR_stack_3 = new TH1F("hs_LPL1WWGGFTCR_stack_3","hs_LPL1WWGGFTCR",6,0,6);
   hs_LPL1WWGGFTCR_stack_3->SetMinimum(19.81114);
   hs_LPL1WWGGFTCR_stack_3->SetMaximum(79244.56);
   hs_LPL1WWGGFTCR_stack_3->SetDirectory(0);
   hs_LPL1WWGGFTCR_stack_3->SetStats(0);
   hs_LPL1WWGGFTCR_stack_3->SetLineWidth(2);
   hs_LPL1WWGGFTCR_stack_3->SetMarkerStyle(20);
   hs_LPL1WWGGFTCR_stack_3->SetMarkerSize(1.2);
   hs_LPL1WWGGFTCR_stack_3->GetXaxis()->SetLabelFont(42);
   hs_LPL1WWGGFTCR_stack_3->GetXaxis()->SetLabelSize(0.05);
   hs_LPL1WWGGFTCR_stack_3->GetXaxis()->SetTitleSize(0.05);
   hs_LPL1WWGGFTCR_stack_3->GetXaxis()->SetTitleOffset(1.4);
   hs_LPL1WWGGFTCR_stack_3->GetXaxis()->SetTitleFont(42);
   hs_LPL1WWGGFTCR_stack_3->GetYaxis()->SetLabelFont(42);
   hs_LPL1WWGGFTCR_stack_3->GetYaxis()->SetLabelSize(0.05);
   hs_LPL1WWGGFTCR_stack_3->GetYaxis()->SetTitleSize(0.05);
   hs_LPL1WWGGFTCR_stack_3->GetYaxis()->SetTitleOffset(1.4);
   hs_LPL1WWGGFTCR_stack_3->GetYaxis()->SetTitleFont(42);
   hs_LPL1WWGGFTCR_stack_3->GetZaxis()->SetLabelFont(42);
   hs_LPL1WWGGFTCR_stack_3->GetZaxis()->SetLabelSize(0.05);
   hs_LPL1WWGGFTCR_stack_3->GetZaxis()->SetTitleSize(0.05);
   hs_LPL1WWGGFTCR_stack_3->GetZaxis()->SetTitleFont(42);
   hs_LPL1WWGGFTCR->SetHistogram(hs_LPL1WWGGFTCR_stack_3);
   
   
   TH1F *h_postfit_LPL1WWGGFTCR_zjets_stack_1 = new TH1F("h_postfit_LPL1WWGGFTCR_zjets_stack_1","h_postfit_LPL1WWGGFTCR_zjets",6,0,6);
   h_postfit_LPL1WWGGFTCR_zjets_stack_1->SetBinContent(3,214.3535);
   h_postfit_LPL1WWGGFTCR_zjets_stack_1->SetBinError(3,21.72173);
   h_postfit_LPL1WWGGFTCR_zjets_stack_1->SetEntries(1);
   h_postfit_LPL1WWGGFTCR_zjets_stack_1->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   h_postfit_LPL1WWGGFTCR_zjets_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   h_postfit_LPL1WWGGFTCR_zjets_stack_1->SetLineColor(ci);
   h_postfit_LPL1WWGGFTCR_zjets_stack_1->SetLineWidth(2);
   h_postfit_LPL1WWGGFTCR_zjets_stack_1->SetMarkerStyle(20);
   h_postfit_LPL1WWGGFTCR_zjets_stack_1->SetMarkerSize(1.2);
   h_postfit_LPL1WWGGFTCR_zjets_stack_1->GetXaxis()->SetLabelFont(42);
   h_postfit_LPL1WWGGFTCR_zjets_stack_1->GetXaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WWGGFTCR_zjets_stack_1->GetXaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WWGGFTCR_zjets_stack_1->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WWGGFTCR_zjets_stack_1->GetXaxis()->SetTitleFont(42);
   h_postfit_LPL1WWGGFTCR_zjets_stack_1->GetYaxis()->SetLabelFont(42);
   h_postfit_LPL1WWGGFTCR_zjets_stack_1->GetYaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WWGGFTCR_zjets_stack_1->GetYaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WWGGFTCR_zjets_stack_1->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WWGGFTCR_zjets_stack_1->GetYaxis()->SetTitleFont(42);
   h_postfit_LPL1WWGGFTCR_zjets_stack_1->GetZaxis()->SetLabelFont(42);
   h_postfit_LPL1WWGGFTCR_zjets_stack_1->GetZaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WWGGFTCR_zjets_stack_1->GetZaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WWGGFTCR_zjets_stack_1->GetZaxis()->SetTitleFont(42);
   hs_LPL1WWGGFTCR->Add(h_postfit_LPL1WWGGFTCR_zjets_stack_1,"");
   
   TH1F *h_postfit_LPL1WWGGFTCR_diboson_stack_2 = new TH1F("h_postfit_LPL1WWGGFTCR_diboson_stack_2","h_postfit_LPL1WWGGFTCR_diboson",6,0,6);
   h_postfit_LPL1WWGGFTCR_diboson_stack_2->SetBinContent(3,444.4375);
   h_postfit_LPL1WWGGFTCR_diboson_stack_2->SetBinError(3,52.10802);
   h_postfit_LPL1WWGGFTCR_diboson_stack_2->SetEntries(1);
   h_postfit_LPL1WWGGFTCR_diboson_stack_2->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   h_postfit_LPL1WWGGFTCR_diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   h_postfit_LPL1WWGGFTCR_diboson_stack_2->SetLineColor(ci);
   h_postfit_LPL1WWGGFTCR_diboson_stack_2->SetLineWidth(2);
   h_postfit_LPL1WWGGFTCR_diboson_stack_2->SetMarkerStyle(20);
   h_postfit_LPL1WWGGFTCR_diboson_stack_2->SetMarkerSize(1.2);
   h_postfit_LPL1WWGGFTCR_diboson_stack_2->GetXaxis()->SetLabelFont(42);
   h_postfit_LPL1WWGGFTCR_diboson_stack_2->GetXaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WWGGFTCR_diboson_stack_2->GetXaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WWGGFTCR_diboson_stack_2->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WWGGFTCR_diboson_stack_2->GetXaxis()->SetTitleFont(42);
   h_postfit_LPL1WWGGFTCR_diboson_stack_2->GetYaxis()->SetLabelFont(42);
   h_postfit_LPL1WWGGFTCR_diboson_stack_2->GetYaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WWGGFTCR_diboson_stack_2->GetYaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WWGGFTCR_diboson_stack_2->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WWGGFTCR_diboson_stack_2->GetYaxis()->SetTitleFont(42);
   h_postfit_LPL1WWGGFTCR_diboson_stack_2->GetZaxis()->SetLabelFont(42);
   h_postfit_LPL1WWGGFTCR_diboson_stack_2->GetZaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WWGGFTCR_diboson_stack_2->GetZaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WWGGFTCR_diboson_stack_2->GetZaxis()->SetTitleFont(42);
   hs_LPL1WWGGFTCR->Add(h_postfit_LPL1WWGGFTCR_diboson_stack_2,"");
   
   TH1F *h_postfit_LPL1WWGGFTCR_singlet_stack_3 = new TH1F("h_postfit_LPL1WWGGFTCR_singlet_stack_3","h_postfit_LPL1WWGGFTCR_singlet",6,0,6);
   h_postfit_LPL1WWGGFTCR_singlet_stack_3->SetBinContent(3,4023.03);
   h_postfit_LPL1WWGGFTCR_singlet_stack_3->SetBinError(3,632.3451);
   h_postfit_LPL1WWGGFTCR_singlet_stack_3->SetEntries(1);
   h_postfit_LPL1WWGGFTCR_singlet_stack_3->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   h_postfit_LPL1WWGGFTCR_singlet_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   h_postfit_LPL1WWGGFTCR_singlet_stack_3->SetLineColor(ci);
   h_postfit_LPL1WWGGFTCR_singlet_stack_3->SetLineWidth(2);
   h_postfit_LPL1WWGGFTCR_singlet_stack_3->SetMarkerStyle(20);
   h_postfit_LPL1WWGGFTCR_singlet_stack_3->SetMarkerSize(1.2);
   h_postfit_LPL1WWGGFTCR_singlet_stack_3->GetXaxis()->SetLabelFont(42);
   h_postfit_LPL1WWGGFTCR_singlet_stack_3->GetXaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WWGGFTCR_singlet_stack_3->GetXaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WWGGFTCR_singlet_stack_3->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WWGGFTCR_singlet_stack_3->GetXaxis()->SetTitleFont(42);
   h_postfit_LPL1WWGGFTCR_singlet_stack_3->GetYaxis()->SetLabelFont(42);
   h_postfit_LPL1WWGGFTCR_singlet_stack_3->GetYaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WWGGFTCR_singlet_stack_3->GetYaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WWGGFTCR_singlet_stack_3->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WWGGFTCR_singlet_stack_3->GetYaxis()->SetTitleFont(42);
   h_postfit_LPL1WWGGFTCR_singlet_stack_3->GetZaxis()->SetLabelFont(42);
   h_postfit_LPL1WWGGFTCR_singlet_stack_3->GetZaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WWGGFTCR_singlet_stack_3->GetZaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WWGGFTCR_singlet_stack_3->GetZaxis()->SetTitleFont(42);
   hs_LPL1WWGGFTCR->Add(h_postfit_LPL1WWGGFTCR_singlet_stack_3,"");
   
   TH1F *h_postfit_LPL1WWGGFTCR_wjets_stack_4 = new TH1F("h_postfit_LPL1WWGGFTCR_wjets_stack_4","h_postfit_LPL1WWGGFTCR_wjets",6,0,6);
   h_postfit_LPL1WWGGFTCR_wjets_stack_4->SetBinContent(3,7426.185);
   h_postfit_LPL1WWGGFTCR_wjets_stack_4->SetBinError(3,36.3483);
   h_postfit_LPL1WWGGFTCR_wjets_stack_4->SetEntries(1);
   h_postfit_LPL1WWGGFTCR_wjets_stack_4->SetStats(0);

   ci = TColor::GetColor("#ff9999");
   h_postfit_LPL1WWGGFTCR_wjets_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff9999");
   h_postfit_LPL1WWGGFTCR_wjets_stack_4->SetLineColor(ci);
   h_postfit_LPL1WWGGFTCR_wjets_stack_4->SetLineWidth(2);
   h_postfit_LPL1WWGGFTCR_wjets_stack_4->SetMarkerStyle(20);
   h_postfit_LPL1WWGGFTCR_wjets_stack_4->SetMarkerSize(1.2);
   h_postfit_LPL1WWGGFTCR_wjets_stack_4->GetXaxis()->SetLabelFont(42);
   h_postfit_LPL1WWGGFTCR_wjets_stack_4->GetXaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WWGGFTCR_wjets_stack_4->GetXaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WWGGFTCR_wjets_stack_4->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WWGGFTCR_wjets_stack_4->GetXaxis()->SetTitleFont(42);
   h_postfit_LPL1WWGGFTCR_wjets_stack_4->GetYaxis()->SetLabelFont(42);
   h_postfit_LPL1WWGGFTCR_wjets_stack_4->GetYaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WWGGFTCR_wjets_stack_4->GetYaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WWGGFTCR_wjets_stack_4->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WWGGFTCR_wjets_stack_4->GetYaxis()->SetTitleFont(42);
   h_postfit_LPL1WWGGFTCR_wjets_stack_4->GetZaxis()->SetLabelFont(42);
   h_postfit_LPL1WWGGFTCR_wjets_stack_4->GetZaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WWGGFTCR_wjets_stack_4->GetZaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WWGGFTCR_wjets_stack_4->GetZaxis()->SetTitleFont(42);
   hs_LPL1WWGGFTCR->Add(h_postfit_LPL1WWGGFTCR_wjets_stack_4,"");
   
   TH1F *h_postfit_LPL1WWGGFTCR_ttbar_stack_5 = new TH1F("h_postfit_LPL1WWGGFTCR_ttbar_stack_5","h_postfit_LPL1WWGGFTCR_ttbar",6,0,6);
   h_postfit_LPL1WWGGFTCR_ttbar_stack_5->SetBinContent(3,37419.84);
   h_postfit_LPL1WWGGFTCR_ttbar_stack_5->SetBinError(3,637.0353);
   h_postfit_LPL1WWGGFTCR_ttbar_stack_5->SetEntries(1);
   h_postfit_LPL1WWGGFTCR_ttbar_stack_5->SetStats(0);

   ci = TColor::GetColor("#6699ff");
   h_postfit_LPL1WWGGFTCR_ttbar_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#6699ff");
   h_postfit_LPL1WWGGFTCR_ttbar_stack_5->SetLineColor(ci);
   h_postfit_LPL1WWGGFTCR_ttbar_stack_5->SetLineWidth(2);
   h_postfit_LPL1WWGGFTCR_ttbar_stack_5->SetMarkerStyle(20);
   h_postfit_LPL1WWGGFTCR_ttbar_stack_5->SetMarkerSize(1.2);
   h_postfit_LPL1WWGGFTCR_ttbar_stack_5->GetXaxis()->SetLabelFont(42);
   h_postfit_LPL1WWGGFTCR_ttbar_stack_5->GetXaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WWGGFTCR_ttbar_stack_5->GetXaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WWGGFTCR_ttbar_stack_5->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WWGGFTCR_ttbar_stack_5->GetXaxis()->SetTitleFont(42);
   h_postfit_LPL1WWGGFTCR_ttbar_stack_5->GetYaxis()->SetLabelFont(42);
   h_postfit_LPL1WWGGFTCR_ttbar_stack_5->GetYaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WWGGFTCR_ttbar_stack_5->GetYaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WWGGFTCR_ttbar_stack_5->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WWGGFTCR_ttbar_stack_5->GetYaxis()->SetTitleFont(42);
   h_postfit_LPL1WWGGFTCR_ttbar_stack_5->GetZaxis()->SetLabelFont(42);
   h_postfit_LPL1WWGGFTCR_ttbar_stack_5->GetZaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WWGGFTCR_ttbar_stack_5->GetZaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WWGGFTCR_ttbar_stack_5->GetZaxis()->SetTitleFont(42);
   hs_LPL1WWGGFTCR->Add(h_postfit_LPL1WWGGFTCR_ttbar_stack_5,"");
   hs_LPL1WWGGFTCR->Draw("histsame");
   
   hs_LPL1WWGGFWCR = new THStack();
   hs_LPL1WWGGFWCR->SetName("hs_LPL1WWGGFWCR");
   hs_LPL1WWGGFWCR->SetTitle("hs_LPL1WWGGFWCR");
   
   TH1F *hs_LPL1WWGGFWCR_stack_4 = new TH1F("hs_LPL1WWGGFWCR_stack_4","hs_LPL1WWGGFWCR",6,0,6);
   hs_LPL1WWGGFWCR_stack_4->SetMinimum(53.99575);
   hs_LPL1WWGGFWCR_stack_4->SetMaximum(215983);
   hs_LPL1WWGGFWCR_stack_4->SetDirectory(0);
   hs_LPL1WWGGFWCR_stack_4->SetStats(0);
   hs_LPL1WWGGFWCR_stack_4->SetLineWidth(2);
   hs_LPL1WWGGFWCR_stack_4->SetMarkerStyle(20);
   hs_LPL1WWGGFWCR_stack_4->SetMarkerSize(1.2);
   hs_LPL1WWGGFWCR_stack_4->GetXaxis()->SetLabelFont(42);
   hs_LPL1WWGGFWCR_stack_4->GetXaxis()->SetLabelSize(0.05);
   hs_LPL1WWGGFWCR_stack_4->GetXaxis()->SetTitleSize(0.05);
   hs_LPL1WWGGFWCR_stack_4->GetXaxis()->SetTitleOffset(1.4);
   hs_LPL1WWGGFWCR_stack_4->GetXaxis()->SetTitleFont(42);
   hs_LPL1WWGGFWCR_stack_4->GetYaxis()->SetLabelFont(42);
   hs_LPL1WWGGFWCR_stack_4->GetYaxis()->SetLabelSize(0.05);
   hs_LPL1WWGGFWCR_stack_4->GetYaxis()->SetTitleSize(0.05);
   hs_LPL1WWGGFWCR_stack_4->GetYaxis()->SetTitleOffset(1.4);
   hs_LPL1WWGGFWCR_stack_4->GetYaxis()->SetTitleFont(42);
   hs_LPL1WWGGFWCR_stack_4->GetZaxis()->SetLabelFont(42);
   hs_LPL1WWGGFWCR_stack_4->GetZaxis()->SetLabelSize(0.05);
   hs_LPL1WWGGFWCR_stack_4->GetZaxis()->SetTitleSize(0.05);
   hs_LPL1WWGGFWCR_stack_4->GetZaxis()->SetTitleFont(42);
   hs_LPL1WWGGFWCR->SetHistogram(hs_LPL1WWGGFWCR_stack_4);
   
   
   TH1F *h_postfit_LPL1WWGGFWCR_zjets_stack_1 = new TH1F("h_postfit_LPL1WWGGFWCR_zjets_stack_1","h_postfit_LPL1WWGGFWCR_zjets",6,0,6);
   h_postfit_LPL1WWGGFWCR_zjets_stack_1->SetBinContent(4,1774.576);
   h_postfit_LPL1WWGGFWCR_zjets_stack_1->SetBinError(4,179.8285);
   h_postfit_LPL1WWGGFWCR_zjets_stack_1->SetEntries(1);
   h_postfit_LPL1WWGGFWCR_zjets_stack_1->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   h_postfit_LPL1WWGGFWCR_zjets_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   h_postfit_LPL1WWGGFWCR_zjets_stack_1->SetLineColor(ci);
   h_postfit_LPL1WWGGFWCR_zjets_stack_1->SetLineWidth(2);
   h_postfit_LPL1WWGGFWCR_zjets_stack_1->SetMarkerStyle(20);
   h_postfit_LPL1WWGGFWCR_zjets_stack_1->SetMarkerSize(1.2);
   h_postfit_LPL1WWGGFWCR_zjets_stack_1->GetXaxis()->SetLabelFont(42);
   h_postfit_LPL1WWGGFWCR_zjets_stack_1->GetXaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WWGGFWCR_zjets_stack_1->GetXaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WWGGFWCR_zjets_stack_1->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WWGGFWCR_zjets_stack_1->GetXaxis()->SetTitleFont(42);
   h_postfit_LPL1WWGGFWCR_zjets_stack_1->GetYaxis()->SetLabelFont(42);
   h_postfit_LPL1WWGGFWCR_zjets_stack_1->GetYaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WWGGFWCR_zjets_stack_1->GetYaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WWGGFWCR_zjets_stack_1->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WWGGFWCR_zjets_stack_1->GetYaxis()->SetTitleFont(42);
   h_postfit_LPL1WWGGFWCR_zjets_stack_1->GetZaxis()->SetLabelFont(42);
   h_postfit_LPL1WWGGFWCR_zjets_stack_1->GetZaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WWGGFWCR_zjets_stack_1->GetZaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WWGGFWCR_zjets_stack_1->GetZaxis()->SetTitleFont(42);
   hs_LPL1WWGGFWCR->Add(h_postfit_LPL1WWGGFWCR_zjets_stack_1,"");
   
   TH1F *h_postfit_LPL1WWGGFWCR_diboson_stack_2 = new TH1F("h_postfit_LPL1WWGGFWCR_diboson_stack_2","h_postfit_LPL1WWGGFWCR_diboson",6,0,6);
   h_postfit_LPL1WWGGFWCR_diboson_stack_2->SetBinContent(4,2846.825);
   h_postfit_LPL1WWGGFWCR_diboson_stack_2->SetBinError(4,314.7164);
   h_postfit_LPL1WWGGFWCR_diboson_stack_2->SetEntries(1);
   h_postfit_LPL1WWGGFWCR_diboson_stack_2->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   h_postfit_LPL1WWGGFWCR_diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   h_postfit_LPL1WWGGFWCR_diboson_stack_2->SetLineColor(ci);
   h_postfit_LPL1WWGGFWCR_diboson_stack_2->SetLineWidth(2);
   h_postfit_LPL1WWGGFWCR_diboson_stack_2->SetMarkerStyle(20);
   h_postfit_LPL1WWGGFWCR_diboson_stack_2->SetMarkerSize(1.2);
   h_postfit_LPL1WWGGFWCR_diboson_stack_2->GetXaxis()->SetLabelFont(42);
   h_postfit_LPL1WWGGFWCR_diboson_stack_2->GetXaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WWGGFWCR_diboson_stack_2->GetXaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WWGGFWCR_diboson_stack_2->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WWGGFWCR_diboson_stack_2->GetXaxis()->SetTitleFont(42);
   h_postfit_LPL1WWGGFWCR_diboson_stack_2->GetYaxis()->SetLabelFont(42);
   h_postfit_LPL1WWGGFWCR_diboson_stack_2->GetYaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WWGGFWCR_diboson_stack_2->GetYaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WWGGFWCR_diboson_stack_2->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WWGGFWCR_diboson_stack_2->GetYaxis()->SetTitleFont(42);
   h_postfit_LPL1WWGGFWCR_diboson_stack_2->GetZaxis()->SetLabelFont(42);
   h_postfit_LPL1WWGGFWCR_diboson_stack_2->GetZaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WWGGFWCR_diboson_stack_2->GetZaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WWGGFWCR_diboson_stack_2->GetZaxis()->SetTitleFont(42);
   hs_LPL1WWGGFWCR->Add(h_postfit_LPL1WWGGFWCR_diboson_stack_2,"");
   
   TH1F *h_postfit_LPL1WWGGFWCR_singlet_stack_3 = new TH1F("h_postfit_LPL1WWGGFWCR_singlet_stack_3","h_postfit_LPL1WWGGFWCR_singlet",6,0,6);
   h_postfit_LPL1WWGGFWCR_singlet_stack_3->SetBinContent(4,4074.812);
   h_postfit_LPL1WWGGFWCR_singlet_stack_3->SetBinError(4,669.3705);
   h_postfit_LPL1WWGGFWCR_singlet_stack_3->SetEntries(1);
   h_postfit_LPL1WWGGFWCR_singlet_stack_3->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   h_postfit_LPL1WWGGFWCR_singlet_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   h_postfit_LPL1WWGGFWCR_singlet_stack_3->SetLineColor(ci);
   h_postfit_LPL1WWGGFWCR_singlet_stack_3->SetLineWidth(2);
   h_postfit_LPL1WWGGFWCR_singlet_stack_3->SetMarkerStyle(20);
   h_postfit_LPL1WWGGFWCR_singlet_stack_3->SetMarkerSize(1.2);
   h_postfit_LPL1WWGGFWCR_singlet_stack_3->GetXaxis()->SetLabelFont(42);
   h_postfit_LPL1WWGGFWCR_singlet_stack_3->GetXaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WWGGFWCR_singlet_stack_3->GetXaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WWGGFWCR_singlet_stack_3->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WWGGFWCR_singlet_stack_3->GetXaxis()->SetTitleFont(42);
   h_postfit_LPL1WWGGFWCR_singlet_stack_3->GetYaxis()->SetLabelFont(42);
   h_postfit_LPL1WWGGFWCR_singlet_stack_3->GetYaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WWGGFWCR_singlet_stack_3->GetYaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WWGGFWCR_singlet_stack_3->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WWGGFWCR_singlet_stack_3->GetYaxis()->SetTitleFont(42);
   h_postfit_LPL1WWGGFWCR_singlet_stack_3->GetZaxis()->SetLabelFont(42);
   h_postfit_LPL1WWGGFWCR_singlet_stack_3->GetZaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WWGGFWCR_singlet_stack_3->GetZaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WWGGFWCR_singlet_stack_3->GetZaxis()->SetTitleFont(42);
   hs_LPL1WWGGFWCR->Add(h_postfit_LPL1WWGGFWCR_singlet_stack_3,"");
   
   TH1F *h_postfit_LPL1WWGGFWCR_ttbar_stack_4 = new TH1F("h_postfit_LPL1WWGGFWCR_ttbar_stack_4","h_postfit_LPL1WWGGFWCR_ttbar",6,0,6);
   h_postfit_LPL1WWGGFWCR_ttbar_stack_4->SetBinContent(4,26618.19);
   h_postfit_LPL1WWGGFWCR_ttbar_stack_4->SetBinError(4,453.148);
   h_postfit_LPL1WWGGFWCR_ttbar_stack_4->SetEntries(1);
   h_postfit_LPL1WWGGFWCR_ttbar_stack_4->SetStats(0);

   ci = TColor::GetColor("#6699ff");
   h_postfit_LPL1WWGGFWCR_ttbar_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#6699ff");
   h_postfit_LPL1WWGGFWCR_ttbar_stack_4->SetLineColor(ci);
   h_postfit_LPL1WWGGFWCR_ttbar_stack_4->SetLineWidth(2);
   h_postfit_LPL1WWGGFWCR_ttbar_stack_4->SetMarkerStyle(20);
   h_postfit_LPL1WWGGFWCR_ttbar_stack_4->SetMarkerSize(1.2);
   h_postfit_LPL1WWGGFWCR_ttbar_stack_4->GetXaxis()->SetLabelFont(42);
   h_postfit_LPL1WWGGFWCR_ttbar_stack_4->GetXaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WWGGFWCR_ttbar_stack_4->GetXaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WWGGFWCR_ttbar_stack_4->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WWGGFWCR_ttbar_stack_4->GetXaxis()->SetTitleFont(42);
   h_postfit_LPL1WWGGFWCR_ttbar_stack_4->GetYaxis()->SetLabelFont(42);
   h_postfit_LPL1WWGGFWCR_ttbar_stack_4->GetYaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WWGGFWCR_ttbar_stack_4->GetYaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WWGGFWCR_ttbar_stack_4->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WWGGFWCR_ttbar_stack_4->GetYaxis()->SetTitleFont(42);
   h_postfit_LPL1WWGGFWCR_ttbar_stack_4->GetZaxis()->SetLabelFont(42);
   h_postfit_LPL1WWGGFWCR_ttbar_stack_4->GetZaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WWGGFWCR_ttbar_stack_4->GetZaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WWGGFWCR_ttbar_stack_4->GetZaxis()->SetTitleFont(42);
   hs_LPL1WWGGFWCR->Add(h_postfit_LPL1WWGGFWCR_ttbar_stack_4,"");
   
   TH1F *h_postfit_LPL1WWGGFWCR_wjets_stack_5 = new TH1F("h_postfit_LPL1WWGGFWCR_wjets_stack_5","h_postfit_LPL1WWGGFWCR_wjets",6,0,6);
   h_postfit_LPL1WWGGFWCR_wjets_stack_5->SetBinContent(4,99674.97);
   h_postfit_LPL1WWGGFWCR_wjets_stack_5->SetBinError(4,487.8704);
   h_postfit_LPL1WWGGFWCR_wjets_stack_5->SetEntries(1);
   h_postfit_LPL1WWGGFWCR_wjets_stack_5->SetStats(0);

   ci = TColor::GetColor("#ff9999");
   h_postfit_LPL1WWGGFWCR_wjets_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#ff9999");
   h_postfit_LPL1WWGGFWCR_wjets_stack_5->SetLineColor(ci);
   h_postfit_LPL1WWGGFWCR_wjets_stack_5->SetLineWidth(2);
   h_postfit_LPL1WWGGFWCR_wjets_stack_5->SetMarkerStyle(20);
   h_postfit_LPL1WWGGFWCR_wjets_stack_5->SetMarkerSize(1.2);
   h_postfit_LPL1WWGGFWCR_wjets_stack_5->GetXaxis()->SetLabelFont(42);
   h_postfit_LPL1WWGGFWCR_wjets_stack_5->GetXaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WWGGFWCR_wjets_stack_5->GetXaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WWGGFWCR_wjets_stack_5->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WWGGFWCR_wjets_stack_5->GetXaxis()->SetTitleFont(42);
   h_postfit_LPL1WWGGFWCR_wjets_stack_5->GetYaxis()->SetLabelFont(42);
   h_postfit_LPL1WWGGFWCR_wjets_stack_5->GetYaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WWGGFWCR_wjets_stack_5->GetYaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WWGGFWCR_wjets_stack_5->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_LPL1WWGGFWCR_wjets_stack_5->GetYaxis()->SetTitleFont(42);
   h_postfit_LPL1WWGGFWCR_wjets_stack_5->GetZaxis()->SetLabelFont(42);
   h_postfit_LPL1WWGGFWCR_wjets_stack_5->GetZaxis()->SetLabelSize(0.05);
   h_postfit_LPL1WWGGFWCR_wjets_stack_5->GetZaxis()->SetTitleSize(0.05);
   h_postfit_LPL1WWGGFWCR_wjets_stack_5->GetZaxis()->SetTitleFont(42);
   hs_LPL1WWGGFWCR->Add(h_postfit_LPL1WWGGFWCR_wjets_stack_5,"");
   hs_LPL1WWGGFWCR->Draw("histsame");
   
   hs_L1WWGGFTCR = new THStack();
   hs_L1WWGGFTCR->SetName("hs_L1WWGGFTCR");
   hs_L1WWGGFTCR->SetTitle("hs_L1WWGGFTCR");
   
   TH1F *hs_L1WWGGFTCR_stack_5 = new TH1F("hs_L1WWGGFTCR_stack_5","hs_L1WWGGFTCR",6,0,6);
   hs_L1WWGGFTCR_stack_5->SetMinimum(111.8741);
   hs_L1WWGGFTCR_stack_5->SetMaximum(447496.3);
   hs_L1WWGGFTCR_stack_5->SetDirectory(0);
   hs_L1WWGGFTCR_stack_5->SetStats(0);
   hs_L1WWGGFTCR_stack_5->SetLineWidth(2);
   hs_L1WWGGFTCR_stack_5->SetMarkerStyle(20);
   hs_L1WWGGFTCR_stack_5->SetMarkerSize(1.2);
   hs_L1WWGGFTCR_stack_5->GetXaxis()->SetLabelFont(42);
   hs_L1WWGGFTCR_stack_5->GetXaxis()->SetLabelSize(0.05);
   hs_L1WWGGFTCR_stack_5->GetXaxis()->SetTitleSize(0.05);
   hs_L1WWGGFTCR_stack_5->GetXaxis()->SetTitleOffset(1.4);
   hs_L1WWGGFTCR_stack_5->GetXaxis()->SetTitleFont(42);
   hs_L1WWGGFTCR_stack_5->GetYaxis()->SetLabelFont(42);
   hs_L1WWGGFTCR_stack_5->GetYaxis()->SetLabelSize(0.05);
   hs_L1WWGGFTCR_stack_5->GetYaxis()->SetTitleSize(0.05);
   hs_L1WWGGFTCR_stack_5->GetYaxis()->SetTitleOffset(1.4);
   hs_L1WWGGFTCR_stack_5->GetYaxis()->SetTitleFont(42);
   hs_L1WWGGFTCR_stack_5->GetZaxis()->SetLabelFont(42);
   hs_L1WWGGFTCR_stack_5->GetZaxis()->SetLabelSize(0.05);
   hs_L1WWGGFTCR_stack_5->GetZaxis()->SetTitleSize(0.05);
   hs_L1WWGGFTCR_stack_5->GetZaxis()->SetTitleFont(42);
   hs_L1WWGGFTCR->SetHistogram(hs_L1WWGGFTCR_stack_5);
   
   
   TH1F *h_postfit_L1WWGGFTCR_zjets_stack_1 = new TH1F("h_postfit_L1WWGGFTCR_zjets_stack_1","h_postfit_L1WWGGFTCR_zjets",6,0,6);
   h_postfit_L1WWGGFTCR_zjets_stack_1->SetBinContent(5,852.815);
   h_postfit_L1WWGGFTCR_zjets_stack_1->SetBinError(5,85.81341);
   h_postfit_L1WWGGFTCR_zjets_stack_1->SetEntries(1);
   h_postfit_L1WWGGFTCR_zjets_stack_1->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   h_postfit_L1WWGGFTCR_zjets_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   h_postfit_L1WWGGFTCR_zjets_stack_1->SetLineColor(ci);
   h_postfit_L1WWGGFTCR_zjets_stack_1->SetLineWidth(2);
   h_postfit_L1WWGGFTCR_zjets_stack_1->SetMarkerStyle(20);
   h_postfit_L1WWGGFTCR_zjets_stack_1->SetMarkerSize(1.2);
   h_postfit_L1WWGGFTCR_zjets_stack_1->GetXaxis()->SetLabelFont(42);
   h_postfit_L1WWGGFTCR_zjets_stack_1->GetXaxis()->SetLabelSize(0.05);
   h_postfit_L1WWGGFTCR_zjets_stack_1->GetXaxis()->SetTitleSize(0.05);
   h_postfit_L1WWGGFTCR_zjets_stack_1->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_L1WWGGFTCR_zjets_stack_1->GetXaxis()->SetTitleFont(42);
   h_postfit_L1WWGGFTCR_zjets_stack_1->GetYaxis()->SetLabelFont(42);
   h_postfit_L1WWGGFTCR_zjets_stack_1->GetYaxis()->SetLabelSize(0.05);
   h_postfit_L1WWGGFTCR_zjets_stack_1->GetYaxis()->SetTitleSize(0.05);
   h_postfit_L1WWGGFTCR_zjets_stack_1->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_L1WWGGFTCR_zjets_stack_1->GetYaxis()->SetTitleFont(42);
   h_postfit_L1WWGGFTCR_zjets_stack_1->GetZaxis()->SetLabelFont(42);
   h_postfit_L1WWGGFTCR_zjets_stack_1->GetZaxis()->SetLabelSize(0.05);
   h_postfit_L1WWGGFTCR_zjets_stack_1->GetZaxis()->SetTitleSize(0.05);
   h_postfit_L1WWGGFTCR_zjets_stack_1->GetZaxis()->SetTitleFont(42);
   hs_L1WWGGFTCR->Add(h_postfit_L1WWGGFTCR_zjets_stack_1,"");
   
   TH1F *h_postfit_L1WWGGFTCR_diboson_stack_2 = new TH1F("h_postfit_L1WWGGFTCR_diboson_stack_2","h_postfit_L1WWGGFTCR_diboson",6,0,6);
   h_postfit_L1WWGGFTCR_diboson_stack_2->SetBinContent(5,1212.655);
   h_postfit_L1WWGGFTCR_diboson_stack_2->SetBinError(5,141.7367);
   h_postfit_L1WWGGFTCR_diboson_stack_2->SetEntries(1);
   h_postfit_L1WWGGFTCR_diboson_stack_2->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   h_postfit_L1WWGGFTCR_diboson_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   h_postfit_L1WWGGFTCR_diboson_stack_2->SetLineColor(ci);
   h_postfit_L1WWGGFTCR_diboson_stack_2->SetLineWidth(2);
   h_postfit_L1WWGGFTCR_diboson_stack_2->SetMarkerStyle(20);
   h_postfit_L1WWGGFTCR_diboson_stack_2->SetMarkerSize(1.2);
   h_postfit_L1WWGGFTCR_diboson_stack_2->GetXaxis()->SetLabelFont(42);
   h_postfit_L1WWGGFTCR_diboson_stack_2->GetXaxis()->SetLabelSize(0.05);
   h_postfit_L1WWGGFTCR_diboson_stack_2->GetXaxis()->SetTitleSize(0.05);
   h_postfit_L1WWGGFTCR_diboson_stack_2->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_L1WWGGFTCR_diboson_stack_2->GetXaxis()->SetTitleFont(42);
   h_postfit_L1WWGGFTCR_diboson_stack_2->GetYaxis()->SetLabelFont(42);
   h_postfit_L1WWGGFTCR_diboson_stack_2->GetYaxis()->SetLabelSize(0.05);
   h_postfit_L1WWGGFTCR_diboson_stack_2->GetYaxis()->SetTitleSize(0.05);
   h_postfit_L1WWGGFTCR_diboson_stack_2->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_L1WWGGFTCR_diboson_stack_2->GetYaxis()->SetTitleFont(42);
   h_postfit_L1WWGGFTCR_diboson_stack_2->GetZaxis()->SetLabelFont(42);
   h_postfit_L1WWGGFTCR_diboson_stack_2->GetZaxis()->SetLabelSize(0.05);
   h_postfit_L1WWGGFTCR_diboson_stack_2->GetZaxis()->SetTitleSize(0.05);
   h_postfit_L1WWGGFTCR_diboson_stack_2->GetZaxis()->SetTitleFont(42);
   hs_L1WWGGFTCR->Add(h_postfit_L1WWGGFTCR_diboson_stack_2,"");
   
   TH1F *h_postfit_L1WWGGFTCR_singlet_stack_3 = new TH1F("h_postfit_L1WWGGFTCR_singlet_stack_3","h_postfit_L1WWGGFTCR_singlet",6,0,6);
   h_postfit_L1WWGGFTCR_singlet_stack_3->SetBinContent(5,20323.21);
   h_postfit_L1WWGGFTCR_singlet_stack_3->SetBinError(5,3331.077);
   h_postfit_L1WWGGFTCR_singlet_stack_3->SetEntries(1);
   h_postfit_L1WWGGFTCR_singlet_stack_3->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   h_postfit_L1WWGGFTCR_singlet_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   h_postfit_L1WWGGFTCR_singlet_stack_3->SetLineColor(ci);
   h_postfit_L1WWGGFTCR_singlet_stack_3->SetLineWidth(2);
   h_postfit_L1WWGGFTCR_singlet_stack_3->SetMarkerStyle(20);
   h_postfit_L1WWGGFTCR_singlet_stack_3->SetMarkerSize(1.2);
   h_postfit_L1WWGGFTCR_singlet_stack_3->GetXaxis()->SetLabelFont(42);
   h_postfit_L1WWGGFTCR_singlet_stack_3->GetXaxis()->SetLabelSize(0.05);
   h_postfit_L1WWGGFTCR_singlet_stack_3->GetXaxis()->SetTitleSize(0.05);
   h_postfit_L1WWGGFTCR_singlet_stack_3->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_L1WWGGFTCR_singlet_stack_3->GetXaxis()->SetTitleFont(42);
   h_postfit_L1WWGGFTCR_singlet_stack_3->GetYaxis()->SetLabelFont(42);
   h_postfit_L1WWGGFTCR_singlet_stack_3->GetYaxis()->SetLabelSize(0.05);
   h_postfit_L1WWGGFTCR_singlet_stack_3->GetYaxis()->SetTitleSize(0.05);
   h_postfit_L1WWGGFTCR_singlet_stack_3->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_L1WWGGFTCR_singlet_stack_3->GetYaxis()->SetTitleFont(42);
   h_postfit_L1WWGGFTCR_singlet_stack_3->GetZaxis()->SetLabelFont(42);
   h_postfit_L1WWGGFTCR_singlet_stack_3->GetZaxis()->SetLabelSize(0.05);
   h_postfit_L1WWGGFTCR_singlet_stack_3->GetZaxis()->SetTitleSize(0.05);
   h_postfit_L1WWGGFTCR_singlet_stack_3->GetZaxis()->SetTitleFont(42);
   hs_L1WWGGFTCR->Add(h_postfit_L1WWGGFTCR_singlet_stack_3,"");
   
   TH1F *h_postfit_L1WWGGFTCR_wjets_stack_4 = new TH1F("h_postfit_L1WWGGFTCR_wjets_stack_4","h_postfit_L1WWGGFTCR_wjets",6,0,6);
   h_postfit_L1WWGGFTCR_wjets_stack_4->SetBinContent(5,22878.3);
   h_postfit_L1WWGGFTCR_wjets_stack_4->SetBinError(5,143.6335);
   h_postfit_L1WWGGFTCR_wjets_stack_4->SetEntries(1);
   h_postfit_L1WWGGFTCR_wjets_stack_4->SetStats(0);

   ci = TColor::GetColor("#ff9999");
   h_postfit_L1WWGGFTCR_wjets_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#ff9999");
   h_postfit_L1WWGGFTCR_wjets_stack_4->SetLineColor(ci);
   h_postfit_L1WWGGFTCR_wjets_stack_4->SetLineWidth(2);
   h_postfit_L1WWGGFTCR_wjets_stack_4->SetMarkerStyle(20);
   h_postfit_L1WWGGFTCR_wjets_stack_4->SetMarkerSize(1.2);
   h_postfit_L1WWGGFTCR_wjets_stack_4->GetXaxis()->SetLabelFont(42);
   h_postfit_L1WWGGFTCR_wjets_stack_4->GetXaxis()->SetLabelSize(0.05);
   h_postfit_L1WWGGFTCR_wjets_stack_4->GetXaxis()->SetTitleSize(0.05);
   h_postfit_L1WWGGFTCR_wjets_stack_4->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_L1WWGGFTCR_wjets_stack_4->GetXaxis()->SetTitleFont(42);
   h_postfit_L1WWGGFTCR_wjets_stack_4->GetYaxis()->SetLabelFont(42);
   h_postfit_L1WWGGFTCR_wjets_stack_4->GetYaxis()->SetLabelSize(0.05);
   h_postfit_L1WWGGFTCR_wjets_stack_4->GetYaxis()->SetTitleSize(0.05);
   h_postfit_L1WWGGFTCR_wjets_stack_4->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_L1WWGGFTCR_wjets_stack_4->GetYaxis()->SetTitleFont(42);
   h_postfit_L1WWGGFTCR_wjets_stack_4->GetZaxis()->SetLabelFont(42);
   h_postfit_L1WWGGFTCR_wjets_stack_4->GetZaxis()->SetLabelSize(0.05);
   h_postfit_L1WWGGFTCR_wjets_stack_4->GetZaxis()->SetTitleSize(0.05);
   h_postfit_L1WWGGFTCR_wjets_stack_4->GetZaxis()->SetTitleFont(42);
   hs_L1WWGGFTCR->Add(h_postfit_L1WWGGFTCR_wjets_stack_4,"");
   
   TH1F *h_postfit_L1WWGGFTCR_ttbar_stack_5 = new TH1F("h_postfit_L1WWGGFTCR_ttbar_stack_5","h_postfit_L1WWGGFTCR_ttbar",6,0,6);
   h_postfit_L1WWGGFTCR_ttbar_stack_5->SetBinContent(5,234418.2);
   h_postfit_L1WWGGFTCR_ttbar_stack_5->SetBinError(5,3212.76);
   h_postfit_L1WWGGFTCR_ttbar_stack_5->SetEntries(1);
   h_postfit_L1WWGGFTCR_ttbar_stack_5->SetStats(0);

   ci = TColor::GetColor("#6699ff");
   h_postfit_L1WWGGFTCR_ttbar_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#6699ff");
   h_postfit_L1WWGGFTCR_ttbar_stack_5->SetLineColor(ci);
   h_postfit_L1WWGGFTCR_ttbar_stack_5->SetLineWidth(2);
   h_postfit_L1WWGGFTCR_ttbar_stack_5->SetMarkerStyle(20);
   h_postfit_L1WWGGFTCR_ttbar_stack_5->SetMarkerSize(1.2);
   h_postfit_L1WWGGFTCR_ttbar_stack_5->GetXaxis()->SetLabelFont(42);
   h_postfit_L1WWGGFTCR_ttbar_stack_5->GetXaxis()->SetLabelSize(0.05);
   h_postfit_L1WWGGFTCR_ttbar_stack_5->GetXaxis()->SetTitleSize(0.05);
   h_postfit_L1WWGGFTCR_ttbar_stack_5->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_L1WWGGFTCR_ttbar_stack_5->GetXaxis()->SetTitleFont(42);
   h_postfit_L1WWGGFTCR_ttbar_stack_5->GetYaxis()->SetLabelFont(42);
   h_postfit_L1WWGGFTCR_ttbar_stack_5->GetYaxis()->SetLabelSize(0.05);
   h_postfit_L1WWGGFTCR_ttbar_stack_5->GetYaxis()->SetTitleSize(0.05);
   h_postfit_L1WWGGFTCR_ttbar_stack_5->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_L1WWGGFTCR_ttbar_stack_5->GetYaxis()->SetTitleFont(42);
   h_postfit_L1WWGGFTCR_ttbar_stack_5->GetZaxis()->SetLabelFont(42);
   h_postfit_L1WWGGFTCR_ttbar_stack_5->GetZaxis()->SetLabelSize(0.05);
   h_postfit_L1WWGGFTCR_ttbar_stack_5->GetZaxis()->SetTitleSize(0.05);
   h_postfit_L1WWGGFTCR_ttbar_stack_5->GetZaxis()->SetTitleFont(42);
   hs_L1WWGGFTCR->Add(h_postfit_L1WWGGFTCR_ttbar_stack_5,"");
   hs_L1WWGGFTCR->Draw("histsame");
   
   hs_L1WWGGFWCR = new THStack();
   hs_L1WWGGFWCR->SetName("hs_L1WWGGFWCR");
   hs_L1WWGGFWCR->SetTitle("hs_L1WWGGFWCR");
   
   TH1F *hs_L1WWGGFWCR_stack_6 = new TH1F("hs_L1WWGGFWCR_stack_6","hs_L1WWGGFWCR",6,0,6);
   hs_L1WWGGFWCR_stack_6->SetMinimum(354.9094);
   hs_L1WWGGFWCR_stack_6->SetMaximum(1419637);
   hs_L1WWGGFWCR_stack_6->SetDirectory(0);
   hs_L1WWGGFWCR_stack_6->SetStats(0);
   hs_L1WWGGFWCR_stack_6->SetLineWidth(2);
   hs_L1WWGGFWCR_stack_6->SetMarkerStyle(20);
   hs_L1WWGGFWCR_stack_6->SetMarkerSize(1.2);
   hs_L1WWGGFWCR_stack_6->GetXaxis()->SetLabelFont(42);
   hs_L1WWGGFWCR_stack_6->GetXaxis()->SetLabelSize(0.05);
   hs_L1WWGGFWCR_stack_6->GetXaxis()->SetTitleSize(0.05);
   hs_L1WWGGFWCR_stack_6->GetXaxis()->SetTitleOffset(1.4);
   hs_L1WWGGFWCR_stack_6->GetXaxis()->SetTitleFont(42);
   hs_L1WWGGFWCR_stack_6->GetYaxis()->SetLabelFont(42);
   hs_L1WWGGFWCR_stack_6->GetYaxis()->SetLabelSize(0.05);
   hs_L1WWGGFWCR_stack_6->GetYaxis()->SetTitleSize(0.05);
   hs_L1WWGGFWCR_stack_6->GetYaxis()->SetTitleOffset(1.4);
   hs_L1WWGGFWCR_stack_6->GetYaxis()->SetTitleFont(42);
   hs_L1WWGGFWCR_stack_6->GetZaxis()->SetLabelFont(42);
   hs_L1WWGGFWCR_stack_6->GetZaxis()->SetLabelSize(0.05);
   hs_L1WWGGFWCR_stack_6->GetZaxis()->SetTitleSize(0.05);
   hs_L1WWGGFWCR_stack_6->GetZaxis()->SetTitleFont(42);
   hs_L1WWGGFWCR->SetHistogram(hs_L1WWGGFWCR_stack_6);
   
   
   TH1F *h_postfit_L1WWGGFWCR_diboson_stack_1 = new TH1F("h_postfit_L1WWGGFWCR_diboson_stack_1","h_postfit_L1WWGGFWCR_diboson",6,0,6);
   h_postfit_L1WWGGFWCR_diboson_stack_1->SetBinContent(6,10416.19);
   h_postfit_L1WWGGFWCR_diboson_stack_1->SetBinError(6,1108.562);
   h_postfit_L1WWGGFWCR_diboson_stack_1->SetEntries(1);
   h_postfit_L1WWGGFWCR_diboson_stack_1->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   h_postfit_L1WWGGFWCR_diboson_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   h_postfit_L1WWGGFWCR_diboson_stack_1->SetLineColor(ci);
   h_postfit_L1WWGGFWCR_diboson_stack_1->SetLineWidth(2);
   h_postfit_L1WWGGFWCR_diboson_stack_1->SetMarkerStyle(20);
   h_postfit_L1WWGGFWCR_diboson_stack_1->SetMarkerSize(1.2);
   h_postfit_L1WWGGFWCR_diboson_stack_1->GetXaxis()->SetLabelFont(42);
   h_postfit_L1WWGGFWCR_diboson_stack_1->GetXaxis()->SetLabelSize(0.05);
   h_postfit_L1WWGGFWCR_diboson_stack_1->GetXaxis()->SetTitleSize(0.05);
   h_postfit_L1WWGGFWCR_diboson_stack_1->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_L1WWGGFWCR_diboson_stack_1->GetXaxis()->SetTitleFont(42);
   h_postfit_L1WWGGFWCR_diboson_stack_1->GetYaxis()->SetLabelFont(42);
   h_postfit_L1WWGGFWCR_diboson_stack_1->GetYaxis()->SetLabelSize(0.05);
   h_postfit_L1WWGGFWCR_diboson_stack_1->GetYaxis()->SetTitleSize(0.05);
   h_postfit_L1WWGGFWCR_diboson_stack_1->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_L1WWGGFWCR_diboson_stack_1->GetYaxis()->SetTitleFont(42);
   h_postfit_L1WWGGFWCR_diboson_stack_1->GetZaxis()->SetLabelFont(42);
   h_postfit_L1WWGGFWCR_diboson_stack_1->GetZaxis()->SetLabelSize(0.05);
   h_postfit_L1WWGGFWCR_diboson_stack_1->GetZaxis()->SetTitleSize(0.05);
   h_postfit_L1WWGGFWCR_diboson_stack_1->GetZaxis()->SetTitleFont(42);
   hs_L1WWGGFWCR->Add(h_postfit_L1WWGGFWCR_diboson_stack_1,"");
   
   TH1F *h_postfit_L1WWGGFWCR_zjets_stack_2 = new TH1F("h_postfit_L1WWGGFWCR_zjets_stack_2","h_postfit_L1WWGGFWCR_zjets",6,0,6);
   h_postfit_L1WWGGFWCR_zjets_stack_2->SetBinContent(6,16690.99);
   h_postfit_L1WWGGFWCR_zjets_stack_2->SetBinError(6,1679.51);
   h_postfit_L1WWGGFWCR_zjets_stack_2->SetEntries(1);
   h_postfit_L1WWGGFWCR_zjets_stack_2->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   h_postfit_L1WWGGFWCR_zjets_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   h_postfit_L1WWGGFWCR_zjets_stack_2->SetLineColor(ci);
   h_postfit_L1WWGGFWCR_zjets_stack_2->SetLineWidth(2);
   h_postfit_L1WWGGFWCR_zjets_stack_2->SetMarkerStyle(20);
   h_postfit_L1WWGGFWCR_zjets_stack_2->SetMarkerSize(1.2);
   h_postfit_L1WWGGFWCR_zjets_stack_2->GetXaxis()->SetLabelFont(42);
   h_postfit_L1WWGGFWCR_zjets_stack_2->GetXaxis()->SetLabelSize(0.05);
   h_postfit_L1WWGGFWCR_zjets_stack_2->GetXaxis()->SetTitleSize(0.05);
   h_postfit_L1WWGGFWCR_zjets_stack_2->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_L1WWGGFWCR_zjets_stack_2->GetXaxis()->SetTitleFont(42);
   h_postfit_L1WWGGFWCR_zjets_stack_2->GetYaxis()->SetLabelFont(42);
   h_postfit_L1WWGGFWCR_zjets_stack_2->GetYaxis()->SetLabelSize(0.05);
   h_postfit_L1WWGGFWCR_zjets_stack_2->GetYaxis()->SetTitleSize(0.05);
   h_postfit_L1WWGGFWCR_zjets_stack_2->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_L1WWGGFWCR_zjets_stack_2->GetYaxis()->SetTitleFont(42);
   h_postfit_L1WWGGFWCR_zjets_stack_2->GetZaxis()->SetLabelFont(42);
   h_postfit_L1WWGGFWCR_zjets_stack_2->GetZaxis()->SetLabelSize(0.05);
   h_postfit_L1WWGGFWCR_zjets_stack_2->GetZaxis()->SetTitleSize(0.05);
   h_postfit_L1WWGGFWCR_zjets_stack_2->GetZaxis()->SetTitleFont(42);
   hs_L1WWGGFWCR->Add(h_postfit_L1WWGGFWCR_zjets_stack_2,"");
   
   TH1F *h_postfit_L1WWGGFWCR_singlet_stack_3 = new TH1F("h_postfit_L1WWGGFWCR_singlet_stack_3","h_postfit_L1WWGGFWCR_singlet",6,0,6);
   h_postfit_L1WWGGFWCR_singlet_stack_3->SetBinContent(6,24293.87);
   h_postfit_L1WWGGFWCR_singlet_stack_3->SetBinError(6,3866.566);
   h_postfit_L1WWGGFWCR_singlet_stack_3->SetEntries(1);
   h_postfit_L1WWGGFWCR_singlet_stack_3->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   h_postfit_L1WWGGFWCR_singlet_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   h_postfit_L1WWGGFWCR_singlet_stack_3->SetLineColor(ci);
   h_postfit_L1WWGGFWCR_singlet_stack_3->SetLineWidth(2);
   h_postfit_L1WWGGFWCR_singlet_stack_3->SetMarkerStyle(20);
   h_postfit_L1WWGGFWCR_singlet_stack_3->SetMarkerSize(1.2);
   h_postfit_L1WWGGFWCR_singlet_stack_3->GetXaxis()->SetLabelFont(42);
   h_postfit_L1WWGGFWCR_singlet_stack_3->GetXaxis()->SetLabelSize(0.05);
   h_postfit_L1WWGGFWCR_singlet_stack_3->GetXaxis()->SetTitleSize(0.05);
   h_postfit_L1WWGGFWCR_singlet_stack_3->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_L1WWGGFWCR_singlet_stack_3->GetXaxis()->SetTitleFont(42);
   h_postfit_L1WWGGFWCR_singlet_stack_3->GetYaxis()->SetLabelFont(42);
   h_postfit_L1WWGGFWCR_singlet_stack_3->GetYaxis()->SetLabelSize(0.05);
   h_postfit_L1WWGGFWCR_singlet_stack_3->GetYaxis()->SetTitleSize(0.05);
   h_postfit_L1WWGGFWCR_singlet_stack_3->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_L1WWGGFWCR_singlet_stack_3->GetYaxis()->SetTitleFont(42);
   h_postfit_L1WWGGFWCR_singlet_stack_3->GetZaxis()->SetLabelFont(42);
   h_postfit_L1WWGGFWCR_singlet_stack_3->GetZaxis()->SetLabelSize(0.05);
   h_postfit_L1WWGGFWCR_singlet_stack_3->GetZaxis()->SetTitleSize(0.05);
   h_postfit_L1WWGGFWCR_singlet_stack_3->GetZaxis()->SetTitleFont(42);
   hs_L1WWGGFWCR->Add(h_postfit_L1WWGGFWCR_singlet_stack_3,"");
   
   TH1F *h_postfit_L1WWGGFWCR_MJ_stack_4 = new TH1F("h_postfit_L1WWGGFWCR_MJ_stack_4","h_postfit_L1WWGGFWCR_MJ",6,0,6);
   h_postfit_L1WWGGFWCR_MJ_stack_4->SetBinContent(6,34365.29);
   h_postfit_L1WWGGFWCR_MJ_stack_4->SetBinError(6,3645.386);
   h_postfit_L1WWGGFWCR_MJ_stack_4->SetEntries(1);
   h_postfit_L1WWGGFWCR_MJ_stack_4->SetStats(0);

   ci = TColor::GetColor("#cc0000");
   h_postfit_L1WWGGFWCR_MJ_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   h_postfit_L1WWGGFWCR_MJ_stack_4->SetLineColor(ci);
   h_postfit_L1WWGGFWCR_MJ_stack_4->SetLineWidth(2);
   h_postfit_L1WWGGFWCR_MJ_stack_4->SetMarkerStyle(20);
   h_postfit_L1WWGGFWCR_MJ_stack_4->SetMarkerSize(1.2);
   h_postfit_L1WWGGFWCR_MJ_stack_4->GetXaxis()->SetLabelFont(42);
   h_postfit_L1WWGGFWCR_MJ_stack_4->GetXaxis()->SetLabelSize(0.05);
   h_postfit_L1WWGGFWCR_MJ_stack_4->GetXaxis()->SetTitleSize(0.05);
   h_postfit_L1WWGGFWCR_MJ_stack_4->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_L1WWGGFWCR_MJ_stack_4->GetXaxis()->SetTitleFont(42);
   h_postfit_L1WWGGFWCR_MJ_stack_4->GetYaxis()->SetLabelFont(42);
   h_postfit_L1WWGGFWCR_MJ_stack_4->GetYaxis()->SetLabelSize(0.05);
   h_postfit_L1WWGGFWCR_MJ_stack_4->GetYaxis()->SetTitleSize(0.05);
   h_postfit_L1WWGGFWCR_MJ_stack_4->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_L1WWGGFWCR_MJ_stack_4->GetYaxis()->SetTitleFont(42);
   h_postfit_L1WWGGFWCR_MJ_stack_4->GetZaxis()->SetLabelFont(42);
   h_postfit_L1WWGGFWCR_MJ_stack_4->GetZaxis()->SetLabelSize(0.05);
   h_postfit_L1WWGGFWCR_MJ_stack_4->GetZaxis()->SetTitleSize(0.05);
   h_postfit_L1WWGGFWCR_MJ_stack_4->GetZaxis()->SetTitleFont(42);
   hs_L1WWGGFWCR->Add(h_postfit_L1WWGGFWCR_MJ_stack_4,"");
   
   TH1F *h_postfit_L1WWGGFWCR_ttbar_stack_5 = new TH1F("h_postfit_L1WWGGFWCR_ttbar_stack_5","h_postfit_L1WWGGFWCR_ttbar",6,0,6);
   h_postfit_L1WWGGFWCR_ttbar_stack_5->SetBinContent(6,145178.3);
   h_postfit_L1WWGGFWCR_ttbar_stack_5->SetBinError(6,1989.705);
   h_postfit_L1WWGGFWCR_ttbar_stack_5->SetEntries(1);
   h_postfit_L1WWGGFWCR_ttbar_stack_5->SetStats(0);

   ci = TColor::GetColor("#6699ff");
   h_postfit_L1WWGGFWCR_ttbar_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#6699ff");
   h_postfit_L1WWGGFWCR_ttbar_stack_5->SetLineColor(ci);
   h_postfit_L1WWGGFWCR_ttbar_stack_5->SetLineWidth(2);
   h_postfit_L1WWGGFWCR_ttbar_stack_5->SetMarkerStyle(20);
   h_postfit_L1WWGGFWCR_ttbar_stack_5->SetMarkerSize(1.2);
   h_postfit_L1WWGGFWCR_ttbar_stack_5->GetXaxis()->SetLabelFont(42);
   h_postfit_L1WWGGFWCR_ttbar_stack_5->GetXaxis()->SetLabelSize(0.05);
   h_postfit_L1WWGGFWCR_ttbar_stack_5->GetXaxis()->SetTitleSize(0.05);
   h_postfit_L1WWGGFWCR_ttbar_stack_5->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_L1WWGGFWCR_ttbar_stack_5->GetXaxis()->SetTitleFont(42);
   h_postfit_L1WWGGFWCR_ttbar_stack_5->GetYaxis()->SetLabelFont(42);
   h_postfit_L1WWGGFWCR_ttbar_stack_5->GetYaxis()->SetLabelSize(0.05);
   h_postfit_L1WWGGFWCR_ttbar_stack_5->GetYaxis()->SetTitleSize(0.05);
   h_postfit_L1WWGGFWCR_ttbar_stack_5->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_L1WWGGFWCR_ttbar_stack_5->GetYaxis()->SetTitleFont(42);
   h_postfit_L1WWGGFWCR_ttbar_stack_5->GetZaxis()->SetLabelFont(42);
   h_postfit_L1WWGGFWCR_ttbar_stack_5->GetZaxis()->SetLabelSize(0.05);
   h_postfit_L1WWGGFWCR_ttbar_stack_5->GetZaxis()->SetTitleSize(0.05);
   h_postfit_L1WWGGFWCR_ttbar_stack_5->GetZaxis()->SetTitleFont(42);
   hs_L1WWGGFWCR->Add(h_postfit_L1WWGGFWCR_ttbar_stack_5,"");
   
   TH1F *h_postfit_L1WWGGFWCR_wjets_stack_6 = new TH1F("h_postfit_L1WWGGFWCR_wjets_stack_6","h_postfit_L1WWGGFWCR_wjets",6,0,6);
   h_postfit_L1WWGGFWCR_wjets_stack_6->SetBinContent(6,656328.7);
   h_postfit_L1WWGGFWCR_wjets_stack_6->SetBinError(6,4120.532);
   h_postfit_L1WWGGFWCR_wjets_stack_6->SetEntries(1);
   h_postfit_L1WWGGFWCR_wjets_stack_6->SetStats(0);

   ci = TColor::GetColor("#ff9999");
   h_postfit_L1WWGGFWCR_wjets_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#ff9999");
   h_postfit_L1WWGGFWCR_wjets_stack_6->SetLineColor(ci);
   h_postfit_L1WWGGFWCR_wjets_stack_6->SetLineWidth(2);
   h_postfit_L1WWGGFWCR_wjets_stack_6->SetMarkerStyle(20);
   h_postfit_L1WWGGFWCR_wjets_stack_6->SetMarkerSize(1.2);
   h_postfit_L1WWGGFWCR_wjets_stack_6->GetXaxis()->SetLabelFont(42);
   h_postfit_L1WWGGFWCR_wjets_stack_6->GetXaxis()->SetLabelSize(0.05);
   h_postfit_L1WWGGFWCR_wjets_stack_6->GetXaxis()->SetTitleSize(0.05);
   h_postfit_L1WWGGFWCR_wjets_stack_6->GetXaxis()->SetTitleOffset(1.4);
   h_postfit_L1WWGGFWCR_wjets_stack_6->GetXaxis()->SetTitleFont(42);
   h_postfit_L1WWGGFWCR_wjets_stack_6->GetYaxis()->SetLabelFont(42);
   h_postfit_L1WWGGFWCR_wjets_stack_6->GetYaxis()->SetLabelSize(0.05);
   h_postfit_L1WWGGFWCR_wjets_stack_6->GetYaxis()->SetTitleSize(0.05);
   h_postfit_L1WWGGFWCR_wjets_stack_6->GetYaxis()->SetTitleOffset(1.4);
   h_postfit_L1WWGGFWCR_wjets_stack_6->GetYaxis()->SetTitleFont(42);
   h_postfit_L1WWGGFWCR_wjets_stack_6->GetZaxis()->SetLabelFont(42);
   h_postfit_L1WWGGFWCR_wjets_stack_6->GetZaxis()->SetLabelSize(0.05);
   h_postfit_L1WWGGFWCR_wjets_stack_6->GetZaxis()->SetTitleSize(0.05);
   h_postfit_L1WWGGFWCR_wjets_stack_6->GetZaxis()->SetTitleFont(42);
   hs_L1WWGGFWCR->Add(h_postfit_L1WWGGFWCR_wjets_stack_6,"");
   hs_L1WWGGFWCR->Draw("histsame");
   
   Double_t Graph0_fx3001[6] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5};
   Double_t Graph0_fy3001[6] = {
   49436.25,
   64634.8,
   49527.85,
   134989.4,
   279685.2,
   887273.4};
   Double_t Graph0_felx3001[6] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph0_fely3001[6] = {
   1202.646,
   665.6095,
   900.1014,
   1011.337,
   4633.14,
   7295.652};
   Double_t Graph0_fehx3001[6] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph0_fehy3001[6] = {
   1202.646,
   665.6095,
   900.1014,
   1011.337,
   4633.14,
   7295.652};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(6,Graph0_fx3001,Graph0_fy3001,Graph0_felx3001,Graph0_fehx3001,Graph0_fely3001,Graph0_fehy3001);
   grae->SetName("Graph0");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3004);
   grae->SetMarkerStyle(0);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph03001 = new TH1F("Graph_Graph03001","Graph",100,0,6.6);
   Graph_Graph03001->SetMinimum(43410.24);
   Graph_Graph03001->SetMaximum(979202.6);
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
   
   TH1F *h_prefitdata__1 = new TH1F("h_prefitdata__1","h_prefitdata",6,0,6);
   h_prefitdata__1->SetBinContent(1,46354);
   h_prefitdata__1->SetBinContent(2,60264);
   h_prefitdata__1->SetBinContent(3,44629);
   h_prefitdata__1->SetBinContent(4,120852);
   h_prefitdata__1->SetBinContent(5,266443);
   h_prefitdata__1->SetBinContent(6,895362);
   h_prefitdata__1->SetBinError(1,215.2998);
   h_prefitdata__1->SetBinError(2,245.4873);
   h_prefitdata__1->SetBinError(3,211.2558);
   h_prefitdata__1->SetBinError(4,347.6378);
   h_prefitdata__1->SetBinError(5,516.1812);
   h_prefitdata__1->SetBinError(6,946.2357);
   h_prefitdata__1->SetEntries(6);
   h_prefitdata__1->SetStats(0);
   h_prefitdata__1->SetLineWidth(2);
   h_prefitdata__1->SetMarkerStyle(20);
   h_prefitdata__1->SetMarkerSize(1.2);
   h_prefitdata__1->GetXaxis()->SetBinLabel(1,"HPL1WWGGFTCR");
   h_prefitdata__1->GetXaxis()->SetBinLabel(2,"HPL1WWGGFWCR");
   h_prefitdata__1->GetXaxis()->SetBinLabel(3,"LPL1WWGGFTCR");
   h_prefitdata__1->GetXaxis()->SetBinLabel(4,"LPL1WWGGFWCR");
   h_prefitdata__1->GetXaxis()->SetBinLabel(5,"L1WWGGFTCR");
   h_prefitdata__1->GetXaxis()->SetBinLabel(6,"L1WWGGFWCR");
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
   TLegendEntry *entry=leg->AddEntry("h_postfit_HPL1WWGGFTCR_zjets_stack_1","Z+jets","f");

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
   entry=leg->AddEntry("h_postfit_HPL1WWGGFTCR_diboson_stack_2","Diboson","f");

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
   entry=leg->AddEntry("h_postfit_HPL1WWGGFTCR_wjets_stack_3","W+jets","f");

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
   entry=leg->AddEntry("h_postfit_HPL1WWGGFTCR_singlet_stack_4","Single-t","f");

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
   entry=leg->AddEntry("h_postfit_HPL1WWGGFTCR_ttbar_stack_5","Top Pair","f");

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
   entry=leg->AddEntry("h_postfit_L1WWGGFWCR_MJ_stack_4","Multijet","f");

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
   
   TH1F *hs_HPL1WWGGFTCR_copy__2 = new TH1F("hs_HPL1WWGGFTCR_copy__2","hs_HPL1WWGGFTCR",6,0,6);
   hs_HPL1WWGGFTCR_copy__2->SetMinimum(5);
   hs_HPL1WWGGFTCR_copy__2->SetMaximum(4.943625e+09);
   hs_HPL1WWGGFTCR_copy__2->SetDirectory(0);
   hs_HPL1WWGGFTCR_copy__2->SetStats(0);
   hs_HPL1WWGGFTCR_copy__2->SetLineWidth(2);
   hs_HPL1WWGGFTCR_copy__2->SetMarkerStyle(20);
   hs_HPL1WWGGFTCR_copy__2->SetMarkerSize(1.2);
   hs_HPL1WWGGFTCR_copy__2->GetXaxis()->SetLabelFont(43);
   hs_HPL1WWGGFTCR_copy__2->GetXaxis()->SetLabelSize(0);
   hs_HPL1WWGGFTCR_copy__2->GetXaxis()->SetTitleSize(0);
   hs_HPL1WWGGFTCR_copy__2->GetXaxis()->SetTitleOffset(1.4);
   hs_HPL1WWGGFTCR_copy__2->GetXaxis()->SetTitleFont(43);
   hs_HPL1WWGGFTCR_copy__2->GetYaxis()->SetTitle("Events");
   hs_HPL1WWGGFTCR_copy__2->GetYaxis()->SetLabelFont(43);
   hs_HPL1WWGGFTCR_copy__2->GetYaxis()->SetLabelSize(25);
   hs_HPL1WWGGFTCR_copy__2->GetYaxis()->SetTitleSize(25);
   hs_HPL1WWGGFTCR_copy__2->GetYaxis()->SetTitleOffset(2);
   hs_HPL1WWGGFTCR_copy__2->GetYaxis()->SetTitleFont(43);
   hs_HPL1WWGGFTCR_copy__2->GetZaxis()->SetLabelFont(42);
   hs_HPL1WWGGFTCR_copy__2->GetZaxis()->SetLabelSize(0.05);
   hs_HPL1WWGGFTCR_copy__2->GetZaxis()->SetTitleSize(0.05);
   hs_HPL1WWGGFTCR_copy__2->GetZaxis()->SetTitleFont(42);
   hs_HPL1WWGGFTCR_copy__2->Draw("sameaxis");
   pad1->Modified();
   c1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "pad2",0,0.35,1,0.45);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-1.21519,0.7918367,6.379747,1.2);
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
   
   TH1F *h_postfiterror__3 = new TH1F("h_postfiterror__3","h_postfiterror",6,0,6);
   h_postfiterror__3->SetBinContent(1,1);
   h_postfiterror__3->SetBinContent(2,1);
   h_postfiterror__3->SetBinContent(3,1);
   h_postfiterror__3->SetBinContent(4,1);
   h_postfiterror__3->SetBinContent(5,1);
   h_postfiterror__3->SetBinContent(6,1);
   h_postfiterror__3->SetBinError(1,0.03440386);
   h_postfiterror__3->SetBinError(2,0.01456358);
   h_postfiterror__3->SetBinError(3,0.02570141);
   h_postfiterror__3->SetBinError(4,0.01059525);
   h_postfiterror__3->SetBinError(5,0.02342723);
   h_postfiterror__3->SetBinError(6,0.01162845);
   h_postfiterror__3->SetMinimum(0.8);
   h_postfiterror__3->SetMaximum(1.2);
   h_postfiterror__3->SetEntries(12620.06);
   h_postfiterror__3->SetStats(0);
   h_postfiterror__3->SetLineWidth(2);
   h_postfiterror__3->SetMarkerStyle(20);
   h_postfiterror__3->SetMarkerSize(1.2);
   h_postfiterror__3->GetXaxis()->SetBinLabel(1,"HPL1WWGGFTCR");
   h_postfiterror__3->GetXaxis()->SetBinLabel(2,"HPL1WWGGFWCR");
   h_postfiterror__3->GetXaxis()->SetBinLabel(3,"LPL1WWGGFTCR");
   h_postfiterror__3->GetXaxis()->SetBinLabel(4,"LPL1WWGGFWCR");
   h_postfiterror__3->GetXaxis()->SetBinLabel(5,"L1WWGGFTCR");
   h_postfiterror__3->GetXaxis()->SetBinLabel(6,"L1WWGGFWCR");
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
   
   Double_t Graph0_fx3002[6] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5};
   Double_t Graph0_fy3002[6] = {
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph0_felx3002[6] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph0_fely3002[6] = {
   0.0243272,
   0.010298,
   0.01817364,
   0.007491974,
   0.01656555,
   0.008222553};
   Double_t Graph0_fehx3002[6] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph0_fehy3002[6] = {
   0.0243272,
   0.010298,
   0.01817364,
   0.007491974,
   0.01656555,
   0.008222553};
   grae = new TGraphAsymmErrors(6,Graph0_fx3002,Graph0_fy3002,Graph0_felx3002,Graph0_fehx3002,Graph0_fely3002,Graph0_fehy3002);
   grae->SetName("Graph0");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3004);
   grae->SetMarkerStyle(0);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph03002 = new TH1F("Graph_Graph03002","Graph",100,0,6.6);
   Graph_Graph03002->SetMinimum(0.9708074);
   Graph_Graph03002->SetMaximum(1.029193);
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
   TLine *line = new TLine(0,1,6,1);
   line->SetLineStyle(2);
   line->Draw();
   
   TH1F *h_prefitdata__4 = new TH1F("h_prefitdata__4","h_prefitdata",6,0,6);
   h_prefitdata__4->SetBinContent(1,0.9376521);
   h_prefitdata__4->SetBinContent(2,0.9323769);
   h_prefitdata__4->SetBinContent(3,0.901089);
   h_prefitdata__4->SetBinContent(4,0.8952705);
   h_prefitdata__4->SetBinContent(5,0.9526532);
   h_prefitdata__4->SetBinContent(6,1.009116);
   h_prefitdata__4->SetBinError(1,0.02322248);
   h_prefitdata__4->SetBinError(2,0.01032552);
   h_prefitdata__4->SetBinError(3,0.01692245);
   h_prefitdata__4->SetBinError(4,0.007184748);
   h_prefitdata__4->SetBinError(5,0.01588878);
   h_prefitdata__4->SetBinError(6,0.008365765);
   h_prefitdata__4->SetEntries(24248.22);
   h_prefitdata__4->SetStats(0);
   h_prefitdata__4->SetLineWidth(2);
   h_prefitdata__4->SetMarkerStyle(20);
   h_prefitdata__4->SetMarkerSize(1.2);
   h_prefitdata__4->GetXaxis()->SetBinLabel(1,"HPL1WWGGFTCR");
   h_prefitdata__4->GetXaxis()->SetBinLabel(2,"HPL1WWGGFWCR");
   h_prefitdata__4->GetXaxis()->SetBinLabel(3,"LPL1WWGGFTCR");
   h_prefitdata__4->GetXaxis()->SetBinLabel(4,"LPL1WWGGFWCR");
   h_prefitdata__4->GetXaxis()->SetBinLabel(5,"L1WWGGFTCR");
   h_prefitdata__4->GetXaxis()->SetBinLabel(6,"L1WWGGFWCR");
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
   
   TH1F *h_postfiterror_copy__5 = new TH1F("h_postfiterror_copy__5","h_postfiterror",6,0,6);
   h_postfiterror_copy__5->SetBinContent(1,1);
   h_postfiterror_copy__5->SetBinContent(2,1);
   h_postfiterror_copy__5->SetBinContent(3,1);
   h_postfiterror_copy__5->SetBinContent(4,1);
   h_postfiterror_copy__5->SetBinContent(5,1);
   h_postfiterror_copy__5->SetBinContent(6,1);
   h_postfiterror_copy__5->SetBinError(1,0.03440386);
   h_postfiterror_copy__5->SetBinError(2,0.01456358);
   h_postfiterror_copy__5->SetBinError(3,0.02570141);
   h_postfiterror_copy__5->SetBinError(4,0.01059525);
   h_postfiterror_copy__5->SetBinError(5,0.02342723);
   h_postfiterror_copy__5->SetBinError(6,0.01162845);
   h_postfiterror_copy__5->SetMinimum(0.8);
   h_postfiterror_copy__5->SetMaximum(1.2);
   h_postfiterror_copy__5->SetEntries(12620.06);
   h_postfiterror_copy__5->SetDirectory(0);
   h_postfiterror_copy__5->SetStats(0);
   h_postfiterror_copy__5->SetLineWidth(2);
   h_postfiterror_copy__5->SetMarkerStyle(20);
   h_postfiterror_copy__5->SetMarkerSize(1.2);
   h_postfiterror_copy__5->GetXaxis()->SetBinLabel(1,"HPL1WWGGFTCR");
   h_postfiterror_copy__5->GetXaxis()->SetBinLabel(2,"HPL1WWGGFWCR");
   h_postfiterror_copy__5->GetXaxis()->SetBinLabel(3,"LPL1WWGGFTCR");
   h_postfiterror_copy__5->GetXaxis()->SetBinLabel(4,"LPL1WWGGFWCR");
   h_postfiterror_copy__5->GetXaxis()->SetBinLabel(5,"L1WWGGFTCR");
   h_postfiterror_copy__5->GetXaxis()->SetBinLabel(6,"L1WWGGFWCR");
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
   pad3->Range(-1.21519,-1.833333,6.379747,1.5);
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
   
   TH1F *h_prefiterror__6 = new TH1F("h_prefiterror__6","h_prefiterror",6,0,6);
   h_prefiterror__6->SetBinContent(1,1);
   h_prefiterror__6->SetBinContent(2,1);
   h_prefiterror__6->SetBinContent(3,1);
   h_prefiterror__6->SetBinContent(4,1);
   h_prefiterror__6->SetBinContent(5,1);
   h_prefiterror__6->SetBinContent(6,1);
   h_prefiterror__6->SetBinError(1,0.03440386);
   h_prefiterror__6->SetBinError(2,0.01456358);
   h_prefiterror__6->SetBinError(3,0.02570141);
   h_prefiterror__6->SetBinError(4,0.01059525);
   h_prefiterror__6->SetBinError(5,0.02342723);
   h_prefiterror__6->SetBinError(6,0.01162845);
   h_prefiterror__6->SetMinimum(0.5);
   h_prefiterror__6->SetMaximum(1.5);
   h_prefiterror__6->SetEntries(12620.06);
   h_prefiterror__6->SetStats(0);
   h_prefiterror__6->SetLineWidth(2);
   h_prefiterror__6->SetMarkerStyle(20);
   h_prefiterror__6->SetMarkerSize(1.2);
   h_prefiterror__6->GetXaxis()->SetBinLabel(1,"HPL1WWGGFTCR");
   h_prefiterror__6->GetXaxis()->SetBinLabel(2,"HPL1WWGGFWCR");
   h_prefiterror__6->GetXaxis()->SetBinLabel(3,"LPL1WWGGFTCR");
   h_prefiterror__6->GetXaxis()->SetBinLabel(4,"LPL1WWGGFWCR");
   h_prefiterror__6->GetXaxis()->SetBinLabel(5,"L1WWGGFTCR");
   h_prefiterror__6->GetXaxis()->SetBinLabel(6,"L1WWGGFWCR");
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
   line = new TLine(0,1,6,1);
   line->SetLineStyle(2);
   line->Draw();
   
   TH1F *h_prefiterror__7 = new TH1F("h_prefiterror__7","h_prefiterror",6,0,6);
   h_prefiterror__7->SetBinContent(1,1);
   h_prefiterror__7->SetBinContent(2,1);
   h_prefiterror__7->SetBinContent(3,1);
   h_prefiterror__7->SetBinContent(4,1);
   h_prefiterror__7->SetBinContent(5,1);
   h_prefiterror__7->SetBinContent(6,1);
   h_prefiterror__7->SetBinError(1,0.03440386);
   h_prefiterror__7->SetBinError(2,0.01456358);
   h_prefiterror__7->SetBinError(3,0.02570141);
   h_prefiterror__7->SetBinError(4,0.01059525);
   h_prefiterror__7->SetBinError(5,0.02342723);
   h_prefiterror__7->SetBinError(6,0.01162845);
   h_prefiterror__7->SetMinimum(0.5);
   h_prefiterror__7->SetMaximum(1.5);
   h_prefiterror__7->SetEntries(12620.06);
   h_prefiterror__7->SetStats(0);
   h_prefiterror__7->SetLineWidth(2);
   h_prefiterror__7->SetMarkerStyle(20);
   h_prefiterror__7->SetMarkerSize(1.2);
   h_prefiterror__7->GetXaxis()->SetBinLabel(1,"HPL1WWGGFTCR");
   h_prefiterror__7->GetXaxis()->SetBinLabel(2,"HPL1WWGGFWCR");
   h_prefiterror__7->GetXaxis()->SetBinLabel(3,"LPL1WWGGFTCR");
   h_prefiterror__7->GetXaxis()->SetBinLabel(4,"LPL1WWGGFWCR");
   h_prefiterror__7->GetXaxis()->SetBinLabel(5,"L1WWGGFTCR");
   h_prefiterror__7->GetXaxis()->SetBinLabel(6,"L1WWGGFWCR");
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
