void PlotyieldTable_postfit()
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
   pad1->Range(-1.21519,-0.2584385,6.379747,10.65834);
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
   hs_HPL1WWGGFTCR->SetMaximum(4.638242e+09);
   
   TH1F *hs_HPL1WWGGFTCR_stack_7 = new TH1F("hs_HPL1WWGGFTCR_stack_7","hs_HPL1WWGGFTCR",6,0,6);
   hs_HPL1WWGGFTCR_stack_7->SetMinimum(0.9117945);
   hs_HPL1WWGGFTCR_stack_7->SetMaximum(1.295682e+10);
   hs_HPL1WWGGFTCR_stack_7->SetDirectory(0);
   hs_HPL1WWGGFTCR_stack_7->SetStats(0);
   hs_HPL1WWGGFTCR_stack_7->SetLineWidth(2);
   hs_HPL1WWGGFTCR_stack_7->SetMarkerStyle(20);
   hs_HPL1WWGGFTCR_stack_7->SetMarkerSize(1.2);
   hs_HPL1WWGGFTCR_stack_7->GetXaxis()->SetLabelFont(43);
   hs_HPL1WWGGFTCR_stack_7->GetXaxis()->SetLabelSize(0);
   hs_HPL1WWGGFTCR_stack_7->GetXaxis()->SetTitleSize(0);
   hs_HPL1WWGGFTCR_stack_7->GetXaxis()->SetTitleOffset(1.4);
   hs_HPL1WWGGFTCR_stack_7->GetXaxis()->SetTitleFont(43);
   hs_HPL1WWGGFTCR_stack_7->GetYaxis()->SetTitle("Events");
   hs_HPL1WWGGFTCR_stack_7->GetYaxis()->SetLabelFont(43);
   hs_HPL1WWGGFTCR_stack_7->GetYaxis()->SetLabelSize(25);
   hs_HPL1WWGGFTCR_stack_7->GetYaxis()->SetTitleSize(25);
   hs_HPL1WWGGFTCR_stack_7->GetYaxis()->SetTitleOffset(2);
   hs_HPL1WWGGFTCR_stack_7->GetYaxis()->SetTitleFont(43);
   hs_HPL1WWGGFTCR_stack_7->GetZaxis()->SetLabelFont(42);
   hs_HPL1WWGGFTCR_stack_7->GetZaxis()->SetLabelSize(0.05);
   hs_HPL1WWGGFTCR_stack_7->GetZaxis()->SetTitleSize(0.05);
   hs_HPL1WWGGFTCR_stack_7->GetZaxis()->SetTitleFont(42);
   hs_HPL1WWGGFTCR->SetHistogram(hs_HPL1WWGGFTCR_stack_7);
   
   
   TH1F *h_postfit_HPL1WWGGFTCR_zjets_stack_1 = new TH1F("h_postfit_HPL1WWGGFTCR_zjets_stack_1","h_postfit_HPL1WWGGFTCR_zjets",6,0,6);
   h_postfit_HPL1WWGGFTCR_zjets_stack_1->SetBinContent(1,66.35382);
   h_postfit_HPL1WWGGFTCR_zjets_stack_1->SetBinError(1,6.724259);
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
   h_postfit_HPL1WWGGFTCR_diboson_stack_2->SetBinContent(1,421.1087);
   h_postfit_HPL1WWGGFTCR_diboson_stack_2->SetBinError(1,37.98393);
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
   h_postfit_HPL1WWGGFTCR_wjets_stack_3->SetBinContent(1,2258.339);
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
   h_postfit_HPL1WWGGFTCR_singlet_stack_4->SetBinContent(1,4691.437);
   h_postfit_HPL1WWGGFTCR_singlet_stack_4->SetBinError(1,846.1108);
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
   h_postfit_HPL1WWGGFTCR_ttbar_stack_5->SetBinContent(1,38945.18);
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
   
   TH1F *hs_HPL1WWGGFWCR_stack_8 = new TH1F("hs_HPL1WWGGFWCR_stack_8","hs_HPL1WWGGFWCR",6,0,6);
   hs_HPL1WWGGFWCR_stack_8->SetMinimum(24.17331);
   hs_HPL1WWGGFWCR_stack_8->SetMaximum(96693.26);
   hs_HPL1WWGGFWCR_stack_8->SetDirectory(0);
   hs_HPL1WWGGFWCR_stack_8->SetStats(0);
   hs_HPL1WWGGFWCR_stack_8->SetLineWidth(2);
   hs_HPL1WWGGFWCR_stack_8->SetMarkerStyle(20);
   hs_HPL1WWGGFWCR_stack_8->SetMarkerSize(1.2);
   hs_HPL1WWGGFWCR_stack_8->GetXaxis()->SetLabelFont(42);
   hs_HPL1WWGGFWCR_stack_8->GetXaxis()->SetLabelSize(0.05);
   hs_HPL1WWGGFWCR_stack_8->GetXaxis()->SetTitleSize(0.05);
   hs_HPL1WWGGFWCR_stack_8->GetXaxis()->SetTitleOffset(1.4);
   hs_HPL1WWGGFWCR_stack_8->GetXaxis()->SetTitleFont(42);
   hs_HPL1WWGGFWCR_stack_8->GetYaxis()->SetLabelFont(42);
   hs_HPL1WWGGFWCR_stack_8->GetYaxis()->SetLabelSize(0.05);
   hs_HPL1WWGGFWCR_stack_8->GetYaxis()->SetTitleSize(0.05);
   hs_HPL1WWGGFWCR_stack_8->GetYaxis()->SetTitleOffset(1.4);
   hs_HPL1WWGGFWCR_stack_8->GetYaxis()->SetTitleFont(42);
   hs_HPL1WWGGFWCR_stack_8->GetZaxis()->SetLabelFont(42);
   hs_HPL1WWGGFWCR_stack_8->GetZaxis()->SetLabelSize(0.05);
   hs_HPL1WWGGFWCR_stack_8->GetZaxis()->SetTitleSize(0.05);
   hs_HPL1WWGGFWCR_stack_8->GetZaxis()->SetTitleFont(42);
   hs_HPL1WWGGFWCR->SetHistogram(hs_HPL1WWGGFWCR_stack_8);
   
   
   TH1F *h_postfit_HPL1WWGGFWCR_zjets_stack_1 = new TH1F("h_postfit_HPL1WWGGFWCR_zjets_stack_1","h_postfit_HPL1WWGGFWCR_zjets",6,0,6);
   h_postfit_HPL1WWGGFWCR_zjets_stack_1->SetBinContent(2,778.8281);
   h_postfit_HPL1WWGGFWCR_zjets_stack_1->SetBinError(2,78.926);
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
   h_postfit_HPL1WWGGFWCR_diboson_stack_2->SetBinContent(2,1833.413);
   h_postfit_HPL1WWGGFWCR_diboson_stack_2->SetBinError(2,177.7768);
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
   h_postfit_HPL1WWGGFWCR_singlet_stack_3->SetBinContent(2,2160.622);
   h_postfit_HPL1WWGGFWCR_singlet_stack_3->SetBinError(2,402.3372);
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
   h_postfit_HPL1WWGGFWCR_ttbar_stack_4->SetBinContent(2,15518.86);
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
   h_postfit_HPL1WWGGFWCR_wjets_stack_5->SetBinContent(2,40141.57);
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
   
   TH1F *hs_LPL1WWGGFTCR_stack_9 = new TH1F("hs_LPL1WWGGFTCR_stack_9","hs_LPL1WWGGFTCR",6,0,6);
   hs_LPL1WWGGFTCR_stack_9->SetMinimum(17.85268);
   hs_LPL1WWGGFTCR_stack_9->SetMaximum(71410.71);
   hs_LPL1WWGGFTCR_stack_9->SetDirectory(0);
   hs_LPL1WWGGFTCR_stack_9->SetStats(0);
   hs_LPL1WWGGFTCR_stack_9->SetLineWidth(2);
   hs_LPL1WWGGFTCR_stack_9->SetMarkerStyle(20);
   hs_LPL1WWGGFTCR_stack_9->SetMarkerSize(1.2);
   hs_LPL1WWGGFTCR_stack_9->GetXaxis()->SetLabelFont(42);
   hs_LPL1WWGGFTCR_stack_9->GetXaxis()->SetLabelSize(0.05);
   hs_LPL1WWGGFTCR_stack_9->GetXaxis()->SetTitleSize(0.05);
   hs_LPL1WWGGFTCR_stack_9->GetXaxis()->SetTitleOffset(1.4);
   hs_LPL1WWGGFTCR_stack_9->GetXaxis()->SetTitleFont(42);
   hs_LPL1WWGGFTCR_stack_9->GetYaxis()->SetLabelFont(42);
   hs_LPL1WWGGFTCR_stack_9->GetYaxis()->SetLabelSize(0.05);
   hs_LPL1WWGGFTCR_stack_9->GetYaxis()->SetTitleSize(0.05);
   hs_LPL1WWGGFTCR_stack_9->GetYaxis()->SetTitleOffset(1.4);
   hs_LPL1WWGGFTCR_stack_9->GetYaxis()->SetTitleFont(42);
   hs_LPL1WWGGFTCR_stack_9->GetZaxis()->SetLabelFont(42);
   hs_LPL1WWGGFTCR_stack_9->GetZaxis()->SetLabelSize(0.05);
   hs_LPL1WWGGFTCR_stack_9->GetZaxis()->SetTitleSize(0.05);
   hs_LPL1WWGGFTCR_stack_9->GetZaxis()->SetTitleFont(42);
   hs_LPL1WWGGFTCR->SetHistogram(hs_LPL1WWGGFTCR_stack_9);
   
   
   TH1F *h_postfit_LPL1WWGGFTCR_zjets_stack_1 = new TH1F("h_postfit_LPL1WWGGFTCR_zjets_stack_1","h_postfit_LPL1WWGGFTCR_zjets",6,0,6);
   h_postfit_LPL1WWGGFTCR_zjets_stack_1->SetBinContent(3,213.2614);
   h_postfit_LPL1WWGGFTCR_zjets_stack_1->SetBinError(3,21.63382);
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
   h_postfit_LPL1WWGGFTCR_diboson_stack_2->SetBinContent(3,550.4438);
   h_postfit_LPL1WWGGFTCR_diboson_stack_2->SetBinError(3,53.09954);
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
   h_postfit_LPL1WWGGFTCR_singlet_stack_3->SetBinContent(3,3466.264);
   h_postfit_LPL1WWGGFTCR_singlet_stack_3->SetBinError(3,631.0278);
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
   h_postfit_LPL1WWGGFTCR_wjets_stack_4->SetBinContent(3,6564.776);
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
   h_postfit_LPL1WWGGFTCR_ttbar_stack_5->SetBinContent(3,33836.95);
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
   
   TH1F *hs_LPL1WWGGFWCR_stack_10 = new TH1F("hs_LPL1WWGGFWCR_stack_10","hs_LPL1WWGGFWCR",6,0,6);
   hs_LPL1WWGGFWCR_stack_10->SetMinimum(48.32926);
   hs_LPL1WWGGFWCR_stack_10->SetMaximum(193317);
   hs_LPL1WWGGFWCR_stack_10->SetDirectory(0);
   hs_LPL1WWGGFWCR_stack_10->SetStats(0);
   hs_LPL1WWGGFWCR_stack_10->SetLineWidth(2);
   hs_LPL1WWGGFWCR_stack_10->SetMarkerStyle(20);
   hs_LPL1WWGGFWCR_stack_10->SetMarkerSize(1.2);
   hs_LPL1WWGGFWCR_stack_10->GetXaxis()->SetLabelFont(42);
   hs_LPL1WWGGFWCR_stack_10->GetXaxis()->SetLabelSize(0.05);
   hs_LPL1WWGGFWCR_stack_10->GetXaxis()->SetTitleSize(0.05);
   hs_LPL1WWGGFWCR_stack_10->GetXaxis()->SetTitleOffset(1.4);
   hs_LPL1WWGGFWCR_stack_10->GetXaxis()->SetTitleFont(42);
   hs_LPL1WWGGFWCR_stack_10->GetYaxis()->SetLabelFont(42);
   hs_LPL1WWGGFWCR_stack_10->GetYaxis()->SetLabelSize(0.05);
   hs_LPL1WWGGFWCR_stack_10->GetYaxis()->SetTitleSize(0.05);
   hs_LPL1WWGGFWCR_stack_10->GetYaxis()->SetTitleOffset(1.4);
   hs_LPL1WWGGFWCR_stack_10->GetYaxis()->SetTitleFont(42);
   hs_LPL1WWGGFWCR_stack_10->GetZaxis()->SetLabelFont(42);
   hs_LPL1WWGGFWCR_stack_10->GetZaxis()->SetLabelSize(0.05);
   hs_LPL1WWGGFWCR_stack_10->GetZaxis()->SetTitleSize(0.05);
   hs_LPL1WWGGFWCR_stack_10->GetZaxis()->SetTitleFont(42);
   hs_LPL1WWGGFWCR->SetHistogram(hs_LPL1WWGGFWCR_stack_10);
   
   
   TH1F *h_postfit_LPL1WWGGFWCR_zjets_stack_1 = new TH1F("h_postfit_LPL1WWGGFWCR_zjets_stack_1","h_postfit_LPL1WWGGFWCR_zjets",6,0,6);
   h_postfit_LPL1WWGGFWCR_zjets_stack_1->SetBinContent(4,1765.535);
   h_postfit_LPL1WWGGFWCR_zjets_stack_1->SetBinError(4,179.1007);
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
   h_postfit_LPL1WWGGFWCR_diboson_stack_2->SetBinContent(4,3323.926);
   h_postfit_LPL1WWGGFWCR_diboson_stack_2->SetBinError(4,320.9232);
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
   h_postfit_LPL1WWGGFWCR_singlet_stack_3->SetBinContent(4,3551.089);
   h_postfit_LPL1WWGGFWCR_singlet_stack_3->SetBinError(4,660.0048);
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
   h_postfit_LPL1WWGGFWCR_ttbar_stack_4->SetBinContent(4,24069.54);
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
   h_postfit_LPL1WWGGFWCR_wjets_stack_5->SetBinContent(4,88113.06);
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
   
   TH1F *hs_L1WWGGFTCR_stack_11 = new TH1F("hs_L1WWGGFTCR_stack_11","hs_L1WWGGFTCR",6,0,6);
   hs_L1WWGGFTCR_stack_11->SetMinimum(106.5539);
   hs_L1WWGGFTCR_stack_11->SetMaximum(426215.7);
   hs_L1WWGGFTCR_stack_11->SetDirectory(0);
   hs_L1WWGGFTCR_stack_11->SetStats(0);
   hs_L1WWGGFTCR_stack_11->SetLineWidth(2);
   hs_L1WWGGFTCR_stack_11->SetMarkerStyle(20);
   hs_L1WWGGFTCR_stack_11->SetMarkerSize(1.2);
   hs_L1WWGGFTCR_stack_11->GetXaxis()->SetLabelFont(42);
   hs_L1WWGGFTCR_stack_11->GetXaxis()->SetLabelSize(0.05);
   hs_L1WWGGFTCR_stack_11->GetXaxis()->SetTitleSize(0.05);
   hs_L1WWGGFTCR_stack_11->GetXaxis()->SetTitleOffset(1.4);
   hs_L1WWGGFTCR_stack_11->GetXaxis()->SetTitleFont(42);
   hs_L1WWGGFTCR_stack_11->GetYaxis()->SetLabelFont(42);
   hs_L1WWGGFTCR_stack_11->GetYaxis()->SetLabelSize(0.05);
   hs_L1WWGGFTCR_stack_11->GetYaxis()->SetTitleSize(0.05);
   hs_L1WWGGFTCR_stack_11->GetYaxis()->SetTitleOffset(1.4);
   hs_L1WWGGFTCR_stack_11->GetYaxis()->SetTitleFont(42);
   hs_L1WWGGFTCR_stack_11->GetZaxis()->SetLabelFont(42);
   hs_L1WWGGFTCR_stack_11->GetZaxis()->SetLabelSize(0.05);
   hs_L1WWGGFTCR_stack_11->GetZaxis()->SetTitleSize(0.05);
   hs_L1WWGGFTCR_stack_11->GetZaxis()->SetTitleFont(42);
   hs_L1WWGGFTCR->SetHistogram(hs_L1WWGGFTCR_stack_11);
   
   
   TH1F *h_postfit_L1WWGGFTCR_zjets_stack_1 = new TH1F("h_postfit_L1WWGGFTCR_zjets_stack_1","h_postfit_L1WWGGFTCR_zjets",6,0,6);
   h_postfit_L1WWGGFTCR_zjets_stack_1->SetBinContent(5,846.6583);
   h_postfit_L1WWGGFTCR_zjets_stack_1->SetBinError(5,85.46599);
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
   h_postfit_L1WWGGFTCR_diboson_stack_2->SetBinContent(5,996.8705);
   h_postfit_L1WWGGFTCR_diboson_stack_2->SetBinError(5,119.6345);
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
   h_postfit_L1WWGGFTCR_singlet_stack_3->SetBinContent(5,16848.71);
   h_postfit_L1WWGGFTCR_singlet_stack_3->SetBinError(5,3258.26);
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
   h_postfit_L1WWGGFTCR_wjets_stack_4->SetBinContent(5,23466.41);
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
   h_postfit_L1WWGGFTCR_ttbar_stack_5->SetBinContent(5,224226.1);
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
   
   TH1F *hs_L1WWGGFWCR_stack_12 = new TH1F("hs_L1WWGGFWCR_stack_12","hs_L1WWGGFWCR",6,0,6);
   hs_L1WWGGFWCR_stack_12->SetMinimum(357.7312);
   hs_L1WWGGFWCR_stack_12->SetMaximum(1430925);
   hs_L1WWGGFWCR_stack_12->SetDirectory(0);
   hs_L1WWGGFWCR_stack_12->SetStats(0);
   hs_L1WWGGFWCR_stack_12->SetLineWidth(2);
   hs_L1WWGGFWCR_stack_12->SetMarkerStyle(20);
   hs_L1WWGGFWCR_stack_12->SetMarkerSize(1.2);
   hs_L1WWGGFWCR_stack_12->GetXaxis()->SetLabelFont(42);
   hs_L1WWGGFWCR_stack_12->GetXaxis()->SetLabelSize(0.05);
   hs_L1WWGGFWCR_stack_12->GetXaxis()->SetTitleSize(0.05);
   hs_L1WWGGFWCR_stack_12->GetXaxis()->SetTitleOffset(1.4);
   hs_L1WWGGFWCR_stack_12->GetXaxis()->SetTitleFont(42);
   hs_L1WWGGFWCR_stack_12->GetYaxis()->SetLabelFont(42);
   hs_L1WWGGFWCR_stack_12->GetYaxis()->SetLabelSize(0.05);
   hs_L1WWGGFWCR_stack_12->GetYaxis()->SetTitleSize(0.05);
   hs_L1WWGGFWCR_stack_12->GetYaxis()->SetTitleOffset(1.4);
   hs_L1WWGGFWCR_stack_12->GetYaxis()->SetTitleFont(42);
   hs_L1WWGGFWCR_stack_12->GetZaxis()->SetLabelFont(42);
   hs_L1WWGGFWCR_stack_12->GetZaxis()->SetLabelSize(0.05);
   hs_L1WWGGFWCR_stack_12->GetZaxis()->SetTitleSize(0.05);
   hs_L1WWGGFWCR_stack_12->GetZaxis()->SetTitleFont(42);
   hs_L1WWGGFWCR->SetHistogram(hs_L1WWGGFWCR_stack_12);
   
   
   TH1F *h_postfit_L1WWGGFWCR_diboson_stack_1 = new TH1F("h_postfit_L1WWGGFWCR_diboson_stack_1","h_postfit_L1WWGGFWCR_diboson",6,0,6);
   h_postfit_L1WWGGFWCR_diboson_stack_1->SetBinContent(6,9147.672);
   h_postfit_L1WWGGFWCR_diboson_stack_1->SetBinError(6,961.6289);
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
   h_postfit_L1WWGGFWCR_zjets_stack_2->SetBinContent(6,16570.5);
   h_postfit_L1WWGGFWCR_zjets_stack_2->SetBinError(6,1672.71);
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
   h_postfit_L1WWGGFWCR_singlet_stack_3->SetBinContent(6,20058.36);
   h_postfit_L1WWGGFWCR_singlet_stack_3->SetBinError(6,3817.256);
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
   h_postfit_L1WWGGFWCR_MJ_stack_4->SetBinContent(6,36484.95);
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
   h_postfit_L1WWGGFWCR_ttbar_stack_5->SetBinContent(6,138866.2);
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
   h_postfit_L1WWGGFWCR_wjets_stack_6->SetBinContent(6,673200.4);
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
   
   Double_t Graph0_fx3003[6] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5};
   Double_t Graph0_fy3003[6] = {
   46382.43,
   60433.29,
   44631.7,
   120823.2,
   266384.8,
   894328.1};
   Double_t Graph0_felx3003[6] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph0_fely3003[6] = {
   1199.252,
   664.918,
   899.2324,
   1006.993,
   4580.43,
   7247.115};
   Double_t Graph0_fehx3003[6] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph0_fehy3003[6] = {
   1199.252,
   664.918,
   899.2324,
   1006.993,
   4580.43,
   7247.115};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(6,Graph0_fx3003,Graph0_fy3003,Graph0_felx3003,Graph0_fehx3003,Graph0_fely3003,Graph0_fehy3003);
   grae->SetName("Graph0");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3004);
   grae->SetMarkerStyle(0);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph03003 = new TH1F("Graph_Graph03003","Graph",100,0,6.6);
   Graph_Graph03003->SetMinimum(39359.22);
   Graph_Graph03003->SetMaximum(987359.5);
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
   
   TH1F *h_prefitdata__8 = new TH1F("h_prefitdata__8","h_prefitdata",6,0,6);
   h_prefitdata__8->SetBinContent(1,46354);
   h_prefitdata__8->SetBinContent(2,60264);
   h_prefitdata__8->SetBinContent(3,44629);
   h_prefitdata__8->SetBinContent(4,120852);
   h_prefitdata__8->SetBinContent(5,266443);
   h_prefitdata__8->SetBinContent(6,895362);
   h_prefitdata__8->SetBinError(1,215.2998);
   h_prefitdata__8->SetBinError(2,245.4873);
   h_prefitdata__8->SetBinError(3,211.2558);
   h_prefitdata__8->SetBinError(4,347.6378);
   h_prefitdata__8->SetBinError(5,516.1812);
   h_prefitdata__8->SetBinError(6,946.2357);
   h_prefitdata__8->SetEntries(6);
   h_prefitdata__8->SetStats(0);
   h_prefitdata__8->SetLineWidth(2);
   h_prefitdata__8->SetMarkerStyle(20);
   h_prefitdata__8->SetMarkerSize(1.2);
   h_prefitdata__8->GetXaxis()->SetBinLabel(1,"HPL1WWGGFTCR");
   h_prefitdata__8->GetXaxis()->SetBinLabel(2,"HPL1WWGGFWCR");
   h_prefitdata__8->GetXaxis()->SetBinLabel(3,"LPL1WWGGFTCR");
   h_prefitdata__8->GetXaxis()->SetBinLabel(4,"LPL1WWGGFWCR");
   h_prefitdata__8->GetXaxis()->SetBinLabel(5,"L1WWGGFTCR");
   h_prefitdata__8->GetXaxis()->SetBinLabel(6,"L1WWGGFWCR");
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
   
   TH1F *hs_HPL1WWGGFTCR_copy__9 = new TH1F("hs_HPL1WWGGFTCR_copy__9","hs_HPL1WWGGFTCR",6,0,6);
   hs_HPL1WWGGFTCR_copy__9->SetMinimum(5);
   hs_HPL1WWGGFTCR_copy__9->SetMaximum(4.638242e+09);
   hs_HPL1WWGGFTCR_copy__9->SetDirectory(0);
   hs_HPL1WWGGFTCR_copy__9->SetStats(0);
   hs_HPL1WWGGFTCR_copy__9->SetLineWidth(2);
   hs_HPL1WWGGFTCR_copy__9->SetMarkerStyle(20);
   hs_HPL1WWGGFTCR_copy__9->SetMarkerSize(1.2);
   hs_HPL1WWGGFTCR_copy__9->GetXaxis()->SetLabelFont(43);
   hs_HPL1WWGGFTCR_copy__9->GetXaxis()->SetLabelSize(0);
   hs_HPL1WWGGFTCR_copy__9->GetXaxis()->SetTitleSize(0);
   hs_HPL1WWGGFTCR_copy__9->GetXaxis()->SetTitleOffset(1.4);
   hs_HPL1WWGGFTCR_copy__9->GetXaxis()->SetTitleFont(43);
   hs_HPL1WWGGFTCR_copy__9->GetYaxis()->SetTitle("Events");
   hs_HPL1WWGGFTCR_copy__9->GetYaxis()->SetLabelFont(43);
   hs_HPL1WWGGFTCR_copy__9->GetYaxis()->SetLabelSize(25);
   hs_HPL1WWGGFTCR_copy__9->GetYaxis()->SetTitleSize(25);
   hs_HPL1WWGGFTCR_copy__9->GetYaxis()->SetTitleOffset(2);
   hs_HPL1WWGGFTCR_copy__9->GetYaxis()->SetTitleFont(43);
   hs_HPL1WWGGFTCR_copy__9->GetZaxis()->SetLabelFont(42);
   hs_HPL1WWGGFTCR_copy__9->GetZaxis()->SetLabelSize(0.05);
   hs_HPL1WWGGFTCR_copy__9->GetZaxis()->SetTitleSize(0.05);
   hs_HPL1WWGGFTCR_copy__9->GetZaxis()->SetTitleFont(42);
   hs_HPL1WWGGFTCR_copy__9->Draw("sameaxis");
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
   
   TH1F *h_postfiterror__10 = new TH1F("h_postfiterror__10","h_postfiterror",6,0,6);
   h_postfiterror__10->SetBinContent(1,1);
   h_postfiterror__10->SetBinContent(2,1);
   h_postfiterror__10->SetBinContent(3,1);
   h_postfiterror__10->SetBinContent(4,1);
   h_postfiterror__10->SetBinContent(5,1);
   h_postfiterror__10->SetBinContent(6,1);
   h_postfiterror__10->SetBinError(1,0.03656553);
   h_postfiterror__10->SetBinError(2,0.0155599);
   h_postfiterror__10->SetBinError(3,0.02849335);
   h_postfiterror__10->SetBinError(4,0.01178668);
   h_postfiterror__10->SetBinError(5,0.0243171);
   h_postfiterror__10->SetBinError(6,0.01145996);
   h_postfiterror__10->SetMinimum(0.8);
   h_postfiterror__10->SetMaximum(1.2);
   h_postfiterror__10->SetEntries(11068.08);
   h_postfiterror__10->SetStats(0);
   h_postfiterror__10->SetLineWidth(2);
   h_postfiterror__10->SetMarkerStyle(20);
   h_postfiterror__10->SetMarkerSize(1.2);
   h_postfiterror__10->GetXaxis()->SetBinLabel(1,"HPL1WWGGFTCR");
   h_postfiterror__10->GetXaxis()->SetBinLabel(2,"HPL1WWGGFWCR");
   h_postfiterror__10->GetXaxis()->SetBinLabel(3,"LPL1WWGGFTCR");
   h_postfiterror__10->GetXaxis()->SetBinLabel(4,"LPL1WWGGFWCR");
   h_postfiterror__10->GetXaxis()->SetBinLabel(5,"L1WWGGFTCR");
   h_postfiterror__10->GetXaxis()->SetBinLabel(6,"L1WWGGFWCR");
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
   
   Double_t Graph0_fx3004[6] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5};
   Double_t Graph0_fy3004[6] = {
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph0_felx3004[6] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph0_fely3004[6] = {
   0.02585573,
   0.01100251,
   0.02014784,
   0.00833444,
   0.01719479,
   0.008103419};
   Double_t Graph0_fehx3004[6] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph0_fehy3004[6] = {
   0.02585573,
   0.01100251,
   0.02014784,
   0.00833444,
   0.01719479,
   0.008103419};
   grae = new TGraphAsymmErrors(6,Graph0_fx3004,Graph0_fy3004,Graph0_felx3004,Graph0_fehx3004,Graph0_fely3004,Graph0_fehy3004);
   grae->SetName("Graph0");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3004);
   grae->SetMarkerStyle(0);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph03004 = new TH1F("Graph_Graph03004","Graph",100,0,6.6);
   Graph_Graph03004->SetMinimum(0.9689731);
   Graph_Graph03004->SetMaximum(1.031027);
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
   TLine *line = new TLine(0,1,6,1);
   line->SetLineStyle(2);
   line->Draw();
   
   TH1F *h_prefitdata__11 = new TH1F("h_prefitdata__11","h_prefitdata",6,0,6);
   h_prefitdata__11->SetBinContent(1,0.9993871);
   h_prefitdata__11->SetBinContent(2,0.9971988);
   h_prefitdata__11->SetBinContent(3,0.9999396);
   h_prefitdata__11->SetBinContent(4,1.000239);
   h_prefitdata__11->SetBinContent(5,1.000219);
   h_prefitdata__11->SetBinContent(6,1.001156);
   h_prefitdata__11->SetBinError(1,0.0262535);
   h_prefitdata__11->SetBinError(2,0.01169952);
   h_prefitdata__11->SetBinError(3,0.02069519);
   h_prefitdata__11->SetBinError(4,0.008818991);
   h_prefitdata__11->SetBinError(5,0.01730736);
   h_prefitdata__11->SetBinError(6,0.008181489);
   h_prefitdata__11->SetEntries(21179.88);
   h_prefitdata__11->SetStats(0);
   h_prefitdata__11->SetLineWidth(2);
   h_prefitdata__11->SetMarkerStyle(20);
   h_prefitdata__11->SetMarkerSize(1.2);
   h_prefitdata__11->GetXaxis()->SetBinLabel(1,"HPL1WWGGFTCR");
   h_prefitdata__11->GetXaxis()->SetBinLabel(2,"HPL1WWGGFWCR");
   h_prefitdata__11->GetXaxis()->SetBinLabel(3,"LPL1WWGGFTCR");
   h_prefitdata__11->GetXaxis()->SetBinLabel(4,"LPL1WWGGFWCR");
   h_prefitdata__11->GetXaxis()->SetBinLabel(5,"L1WWGGFTCR");
   h_prefitdata__11->GetXaxis()->SetBinLabel(6,"L1WWGGFWCR");
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
   
   TH1F *h_postfiterror_copy__12 = new TH1F("h_postfiterror_copy__12","h_postfiterror",6,0,6);
   h_postfiterror_copy__12->SetBinContent(1,1);
   h_postfiterror_copy__12->SetBinContent(2,1);
   h_postfiterror_copy__12->SetBinContent(3,1);
   h_postfiterror_copy__12->SetBinContent(4,1);
   h_postfiterror_copy__12->SetBinContent(5,1);
   h_postfiterror_copy__12->SetBinContent(6,1);
   h_postfiterror_copy__12->SetBinError(1,0.03656553);
   h_postfiterror_copy__12->SetBinError(2,0.0155599);
   h_postfiterror_copy__12->SetBinError(3,0.02849335);
   h_postfiterror_copy__12->SetBinError(4,0.01178668);
   h_postfiterror_copy__12->SetBinError(5,0.0243171);
   h_postfiterror_copy__12->SetBinError(6,0.01145996);
   h_postfiterror_copy__12->SetMinimum(0.8);
   h_postfiterror_copy__12->SetMaximum(1.2);
   h_postfiterror_copy__12->SetEntries(11068.08);
   h_postfiterror_copy__12->SetDirectory(0);
   h_postfiterror_copy__12->SetStats(0);
   h_postfiterror_copy__12->SetLineWidth(2);
   h_postfiterror_copy__12->SetMarkerStyle(20);
   h_postfiterror_copy__12->SetMarkerSize(1.2);
   h_postfiterror_copy__12->GetXaxis()->SetBinLabel(1,"HPL1WWGGFTCR");
   h_postfiterror_copy__12->GetXaxis()->SetBinLabel(2,"HPL1WWGGFWCR");
   h_postfiterror_copy__12->GetXaxis()->SetBinLabel(3,"LPL1WWGGFTCR");
   h_postfiterror_copy__12->GetXaxis()->SetBinLabel(4,"LPL1WWGGFWCR");
   h_postfiterror_copy__12->GetXaxis()->SetBinLabel(5,"L1WWGGFTCR");
   h_postfiterror_copy__12->GetXaxis()->SetBinLabel(6,"L1WWGGFWCR");
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
   
   TH1F *h_prefiterror__13 = new TH1F("h_prefiterror__13","h_prefiterror",6,0,6);
   h_prefiterror__13->SetBinContent(1,1.06584);
   h_prefiterror__13->SetBinContent(2,1.069523);
   h_prefiterror__13->SetBinContent(3,1.109701);
   h_prefiterror__13->SetBinContent(4,1.117248);
   h_prefiterror__13->SetBinContent(5,1.049929);
   h_prefiterror__13->SetBinContent(6,0.9921117);
   h_prefiterror__13->SetBinError(1,0.03783855);
   h_prefiterror__13->SetBinError(2,0.01611769);
   h_prefiterror__13->SetBinError(3,0.03010988);
   h_prefiterror__13->SetBinError(4,0.01252078);
   h_prefiterror__13->SetBinError(5,0.02506844);
   h_prefiterror__13->SetBinError(6,0.01145345);
   h_prefiterror__13->SetMinimum(0.5);
   h_prefiterror__13->SetMaximum(1.5);
   h_prefiterror__13->SetEntries(11670.37);
   h_prefiterror__13->SetStats(0);
   h_prefiterror__13->SetLineWidth(2);
   h_prefiterror__13->SetMarkerStyle(20);
   h_prefiterror__13->SetMarkerSize(1.2);
   h_prefiterror__13->GetXaxis()->SetBinLabel(1,"HPL1WWGGFTCR");
   h_prefiterror__13->GetXaxis()->SetBinLabel(2,"HPL1WWGGFWCR");
   h_prefiterror__13->GetXaxis()->SetBinLabel(3,"LPL1WWGGFTCR");
   h_prefiterror__13->GetXaxis()->SetBinLabel(4,"LPL1WWGGFWCR");
   h_prefiterror__13->GetXaxis()->SetBinLabel(5,"L1WWGGFTCR");
   h_prefiterror__13->GetXaxis()->SetBinLabel(6,"L1WWGGFWCR");
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
   line = new TLine(0,1,6,1);
   line->SetLineStyle(2);
   line->Draw();
   
   TH1F *h_prefiterror__14 = new TH1F("h_prefiterror__14","h_prefiterror",6,0,6);
   h_prefiterror__14->SetBinContent(1,1.06584);
   h_prefiterror__14->SetBinContent(2,1.069523);
   h_prefiterror__14->SetBinContent(3,1.109701);
   h_prefiterror__14->SetBinContent(4,1.117248);
   h_prefiterror__14->SetBinContent(5,1.049929);
   h_prefiterror__14->SetBinContent(6,0.9921117);
   h_prefiterror__14->SetBinError(1,0.03783855);
   h_prefiterror__14->SetBinError(2,0.01611769);
   h_prefiterror__14->SetBinError(3,0.03010988);
   h_prefiterror__14->SetBinError(4,0.01252078);
   h_prefiterror__14->SetBinError(5,0.02506844);
   h_prefiterror__14->SetBinError(6,0.01145345);
   h_prefiterror__14->SetMinimum(0.5);
   h_prefiterror__14->SetMaximum(1.5);
   h_prefiterror__14->SetEntries(11670.37);
   h_prefiterror__14->SetStats(0);
   h_prefiterror__14->SetLineWidth(2);
   h_prefiterror__14->SetMarkerStyle(20);
   h_prefiterror__14->SetMarkerSize(1.2);
   h_prefiterror__14->GetXaxis()->SetBinLabel(1,"HPL1WWGGFTCR");
   h_prefiterror__14->GetXaxis()->SetBinLabel(2,"HPL1WWGGFWCR");
   h_prefiterror__14->GetXaxis()->SetBinLabel(3,"LPL1WWGGFTCR");
   h_prefiterror__14->GetXaxis()->SetBinLabel(4,"LPL1WWGGFWCR");
   h_prefiterror__14->GetXaxis()->SetBinLabel(5,"L1WWGGFTCR");
   h_prefiterror__14->GetXaxis()->SetBinLabel(6,"L1WWGGFWCR");
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
