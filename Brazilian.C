#include "macros/AtlasStyle.C"

//mass in MeV, x-sec in #pb
std::map<int,float> HVTWW_theorySigma={{500,4.39E+00},{600,2.04E+00},{700,1.07E+00},{800,6.05E-01},{900,3.65E-01},{1000,2.31E-01},{1100,1.51E-01},{1200,1.02E-01},{1300,7.06E-02},{1400,4.98E-02},{1500,3.58E-02},{1600,2.61E-02},{1700,1.92E-02},{1800,1.44E-02},{1900,1.08E-02},{2000,8.23E-03},{2200,4.86E-03},{2400,2.94E-03},{2600,1.82E-03},{2800,1.14E-03},{3000,7.26E-04},{3500,2.44E-04},{4000,8.89E-05},{4500,3.03E-05},{5000,1.08E-05}};
std::map<int,float> HVTWW_theorySigmaB={{800,0.3548}, {900,0.3025}, {1000, 0.23}, {1100,0.17 }, {1200,0.125 }, {1300,0.09219 }, {1400,0.0684 }, {1500,0.0511 }, {1600,0.03845 }, {1700,0.02914 }, {1800,0.02222 }, {2000,0.013149 }, {2200,0.00794 }, {2400,0.004876 }, {2600, 0.003035}, {2800,0.0019106 }, {3000,0.0012134 }, {3500, 0.00040156}, {4000, 0.0001361}, {4500, 0.000046519}, {5000,0.000015831 }};
std::map<int,float> HVTWZ_theorySigma={{500,9.159 }, {600,4.225 }, {700, 2.201}, {800,1.248 }, {900,0.7539 }, {1000,0.4777 }, {1100,0.3141 }, {1200,0.2127 }, {1300, 0.1477}, {1400,0.1047 }, {1500,0.0755 }, {1600,0.0552 }, {1700,0.0409 }, {1800,0.0306 }, {2000,0.01765 }, {2200,0.01048 }, {2400,0.00637 }, {2600,0.00395 }, {2800,0.00248 }, {3000,0.00158 }, {3500,0.0005305 }, {4000,0.0001842 }, {4500,0.00006487 }, {5000,0.00002297 }};
std::map<int,float> HVTWZ_theorySigmaB={{800, 0.6823}, {900,0.5925 }, {1000,0.4546 }, {1100,0.3383 }, {1200,0.2505 }, {1300,0.1861 }, {1400,0.139 }, {1500,0.1046 }, {1600,0.0793 }, {1700,0.06051 }, {1800,0.04647 }, {2000,0.027871 }, {2200,0.01704 }, {2400,0.01057 }, {2600,0.006637 }, {2800,0.0042057 }, {3000,0.0026831 }, {3500,0.00088812 }, {4000,0.00029604 }, {4500,0.000097651 }, {5000,0.000031427 }};
std::map<int,float> RSG_theorySigma={{500,4.63 }, {600,1.565 }, {700,0.644 }, {800,0.301 }, {900,0.154 }, {1000,0.08461 }, {1100,0.04883 }, {1200,0.02936 }, {1300,0.01827 }, {1400,0.01169 }, {1500,0.007655 }, {1600,0.005113 }, {1700,0.003474 }, {1800,0.002397 }, {2000, 0.001185}, {2200,0.0006115 }, {2400,0.0003263 }, {2600,0.0001788 }, {2800,0.0001 }, {3000,5.70E-05 }, {3500, 1.49E-05}, {4000,4.11E-06 }, {4500,1.19E-06 }, {5000,3.58E-07 }};

std::map<int,float> null_theorySigma={{300,1.0},{700,1.0},{1000,1.0},{1400,1.0},{2000,1.0},{2400,1.0},{3000,1.0},{4000,1.0},{5000,1.0}};
std::map<int,float> null_theoryAcc={{300,1.0},{700,1.0},{1000,1.0},{1400,1.0},{2000,1.0},{2400,1.0},{3000,1.0},{4000,1.0},{5000,1.0}};



std::string lumi="139";

void Brazilian(std::string dirname="/gpfs/slac/atlas/fs1/d/woodsn/novVVSemi/VVSemileptonicStats/batchwork/oldLimitsOutput/nov20_allsignalsHVTWZ_FloatRelevantUncorrXSSingleBinPrunSyst/root-files/gpfs/slac/atlas/fs1/d/woodsn/novVVSemi/VVSemileptonicStats/obs/", int mode=0){

bool doHVTWZ=false;
bool doHVTWW=false;
bool doRSG=false;
bool doHVTWWVBF=false;
bool doHVTWZVBF=false;
bool doTheory=false;
bool doObs=true;
bool doRatioPlot=true;
bool doScaleToXS=false;

  if(mode==0){
    doHVTWW=true;
    doTheory=true;
  }
  else if(mode==1){
    doHVTWZ=true;
    doTheory=true;
  }
  else if (mode==2){
    doRSG=true;
    doTheory=true;
  }

  else if (mode==3){
    doHVTWWVBF=true;
    doTheory=false;
  }
  else if (mode==4){
    doHVTWZVBF=true;
    doTheory=false;
  }
  //set cross section map
  std::map<int,float> xsMap,accMap;
  std::map<int,float> xsMapB,accMapB;
  if(doHVTWW){
    std::cout << "doing hvtww" << std::endl;
    xsMap=HVTWW_theorySigma;
    xsMapB=HVTWW_theorySigmaB;
    accMap=null_theoryAcc;
  }
  else if(doHVTWZ){
    std::cout << "doing hvtwz" << std::endl;
    xsMap=HVTWZ_theorySigma;
    xsMapB=HVTWZ_theorySigmaB;
    accMap=null_theoryAcc;
  }
  else if (doRSG){
    xsMap=RSG_theorySigma;
    accMap=null_theoryAcc;
  }
  else xsMap=null_theorySigma;

  //vectors for filling ifo
  std::vector<float> massVec;
  std::vector<float> obsVec;
  std::vector<float> expVec;
  std::vector<float> up1Vec;
  std::vector<float> down1Vec;
  std::vector<float> up2Vec;
  std::vector<float> down2Vec;

  //loop over the directory and find limits
  TSystemDirectory fileDir(dirname.c_str(),dirname.c_str());
  TList* files = fileDir.GetListOfFiles();
  if(files){
    TSystemFile *file;
    TIter next(files);
    while((file=(TSystemFile*)next())){
      string fname= file->GetName();
      if(fname.find("root") == std::string::npos) continue;
      if(fname==".root") continue;
      TFile* f = TFile::Open((dirname+fname).c_str());

      //find mass
      std::string massStr="";
      for(char c: fname){ if(std::isdigit(c)) massStr+=c; }
      float m=std::stof(massStr);
      float index=std::stoi(massStr);

      //find limit
      TH1* h_limit=(TH1*)f->Get("limit");
      float obs=h_limit->GetBinContent(1);
      float exp=h_limit->GetBinContent(2);
      float up2=fabs(h_limit->GetBinContent(3)-exp);
      float up1=fabs(h_limit->GetBinContent(4)-exp);
      float down1=fabs(h_limit->GetBinContent(5)-exp);
      float down2=fabs(h_limit->GetBinContent(6)-exp);

      //add to vectors
      massVec.push_back(m/1000);
      obsVec.push_back(obs*0.67);
      expVec.push_back(exp);
      up1Vec.push_back(up1);
      down1Vec.push_back(down1);
      up2Vec.push_back(up2);
      down2Vec.push_back(down2);

      f->Close();
    }
  }

  //sort 
  bool isDone=false;
  while(isDone!=true){
    bool isOrdered=true;
    for(int i=0; i<massVec.size()-1;i++){
      if(massVec[i]>massVec[i+1]){
        std::iter_swap(massVec.begin()+i,massVec.begin()+i+1);
        std::iter_swap(obsVec.begin()+i,obsVec.begin()+i+1);
        std::iter_swap(expVec.begin()+i,expVec.begin()+i+1);
        std::iter_swap(up1Vec.begin()+i,up1Vec.begin()+i+1);
        std::iter_swap(down1Vec.begin()+i,down1Vec.begin()+i+1);
        std::iter_swap(up2Vec.begin()+i,up2Vec.begin()+i+1);
        std::iter_swap(down2Vec.begin()+i,down2Vec.begin()+i+1);
        isOrdered=false;
      }
    }
    if(isOrdered) isDone=true;
  }

  //make canvas
  SetAtlasStyle();
  TCanvas* c1=new TCanvas("c1","Canvas",800,600);
  gPad->SetLogy();

  //make plots
  std::vector<float> emptyVec;
  for(int i=0;i<massVec.size();++i)
    emptyVec.push_back(0);
  TGraphAsymmErrors* sigma1= new TGraphAsymmErrors(massVec.size(),&massVec[0],&expVec[0],&emptyVec[0],&emptyVec[0],&down1Vec[0],&up1Vec[0]);
  TGraphAsymmErrors* sigma2= new TGraphAsymmErrors(massVec.size(),&massVec[0],&expVec[0],&emptyVec[0],&emptyVec[0],&down2Vec[0],&up2Vec[0]);
  TGraph* exp= new TGraph(massVec.size(),&massVec[0],&expVec[0]);
  TGraph* obs= new TGraph(massVec.size(),&massVec[0],&obsVec[0]);

  for(int i = 0; i < obsVec.size(); i ++)
    std::cout << "mass: " << massVec[i] << ": " << obsVec[i] << std::endl;

  std::vector<float> xs;
  std::vector<float> theoryMassVec;
  if(doTheory){
    for(auto itr: xsMap){
      xs.push_back(itr.second);///accMap[itr.first]);
      theoryMassVec.push_back(float(itr.first)/1000);
    }
  }

  std::vector<float> xsB;
  std::vector<float> theoryMassVecB;
  if(doHVTWW || doHVTWZ){
    for(auto itr: xsMapB){
      xsB.push_back(itr.second);///accMap[itr.first]);
      theoryMassVecB.push_back(float(itr.first)/1000);
    }
  }

  for(int i = 0; i < theoryMassVec.size(); i ++)
    std::cout << "Theory mass: " << theoryMassVec[i] << ": " << xs[i] << std::endl;
  for(int i = 0; i < theoryMassVecB.size(); i ++)
    std::cout << "Theory B mass: " << theoryMassVecB[i] << ": " << xsB[i] << std::endl;
  TGraph* theory= new TGraph(theoryMassVec.size(),&theoryMassVec[0],&xs[0]);
  TGraph* theoryB;
  if(doHVTWW || doHVTWZ){
    theoryB = new TGraph(theoryMassVecB.size(),&theoryMassVecB[0],&xsB[0]);
  }


  //decorate
  sigma2->SetFillColor(kYellow);
  sigma1->SetFillColor(kGreen);
  exp->SetLineStyle(2);
  exp->SetMarkerStyle(20);
  exp->SetLineWidth(2);
  obs->SetLineStyle(1);
  obs->SetMarkerStyle(0);
  obs->SetLineWidth(2);
  theory->SetLineWidth(2);
  theory->SetMarkerStyle(0);
  theory->SetLineColor(kBlue);

  //draw
  sigma2->Draw("A3");
  sigma1->Draw("same3");
  if(doTheory)
    theory->Draw("sameL");
  if(doHVTWW || doHVTWZ){
    theoryB->Draw("sameL");
  }

   
  exp->Draw("sameLP");
  if(doObs) obs->Draw("sameL");

  //legend
  //Draw Legend
  TLegend* leg = new TLegend(0.55,0.75,0.90,0.92);
  leg->SetBorderSize(0);
  leg->SetTextFont(62);
  leg->SetTextSize(0.03);
  leg->SetLineColor(1);
  leg->SetLineStyle(1);
  leg->SetLineWidth(1);
  leg->SetFillColor(0);
  leg->AddEntry(exp,"Expected Limit 95% CL limit","l");
  if(doObs) leg->AddEntry(obs,"Observed Limit","l");

  leg->AddEntry(sigma1,"Expected Limit (#pm 1#sigma)","f");
  leg->AddEntry(sigma2,"Expected Limit (#pm 2#sigma)","f");
  if(doHVTWW || doHVTWZ){
    leg->AddEntry(theory,"HVT Model A, g_{V}=1","l");
    leg->AddEntry(theoryB,"HVT Model B, g_{V}=3","l");
  }
  if(doRSG)
    leg->AddEntry(theory,"RS G_{KK} k/M_{pl}=1","l");

  leg->Draw();
  //atlas logo
  TLatex * tex = new TLatex(0.20,0.88,"ATLAS");
  tex->SetNDC();
  tex->SetTextFont(72);
  tex->SetTextSize(0.04);
  tex->SetLineWidth(2);
  tex->Draw();

  TLatex * tex2 = new TLatex(0.30,0.88,"Internal");
  tex2->SetNDC();
  tex2->SetTextFont(42);
  tex2->SetTextSize(0.04);
  tex2->SetLineWidth(2);
  tex2->Draw();

  TLatex * tex3 = new TLatex(0.20,0.83,("#sqrt{s}=13 TeV, "+lumi+"fb^{-1}").c_str());
  tex3->SetNDC();
  tex3->SetTextFont(42);
  tex3->SetTextSize(0.04);
  tex3->SetLineWidth(2);
  tex3->Draw();

  //set axis and stuff
  //sigma2->SetMaximum(sigma2->GetMaximum()*1e2);
  sigma2->SetMaximum(1e3);
  sigma2->SetMinimum(1e-4);
  double xmax,xmin,ymin,ymax;
  sigma2->ComputeRange(xmin,ymin,xmax,ymax);
  sigma2->GetXaxis()->SetRangeUser(xmin-0.1,xmax+0.1);

  if(doHVTWZ || doHVTWZVBF){
    sigma2->GetXaxis()->SetTitle("m(W') [TeV]");
    if(doHVTWW)sigma2->GetYaxis()->SetTitle("#sigma(pp#rightarrowW'#rightarrowWZ) [pb]");
    else sigma2->GetYaxis()->SetTitle("#sigma(pp#rightarrowW'jj#rightarrowWZ) [pb]");
  }
  if(doHVTWW || doHVTWWVBF){
    sigma2->GetXaxis()->SetTitle("m(Z') [TeV]");
    if(doHVTWW)sigma2->GetYaxis()->SetTitle("#sigma(pp#rightarrowZ'#rightarrowWW) [pb]");
    else sigma2->GetYaxis()->SetTitle("#sigma(pp#rightarrowZ'jj#rightarrowWW) [pb]");
  }
  if(doRSG){
    sigma2->GetXaxis()->SetTitle("m(G_{KK}) [TeV]");
    sigma2->GetYaxis()->SetTitle("#sigma(pp#rightarrowG_{KK}#rightarrowWW) [pb]");
  }
  gPad->RedrawAxis();

  printf("\nLimits\n");
  for(float x=0.0;x<5.5;x+=(5.5-0)/10000){
    if(exp->Eval(x)>theory->Eval(x)){
      printf("Exp Limit %f TeV\n",x);
      break;
    }
  }


  //save
  c1->Print("limits.pdf");
  //  c1->Print("summary.C");

  return;
}
