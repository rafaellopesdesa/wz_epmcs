{
//=========Macro generated from canvas: c1/c1
//=========  (Thu Jun 29 17:08:48 2006) by ROOT version4.04/02b
   TCanvas *c1 = new TCanvas("c1", "c1",14,29,699,499);
   c1->Range(-10,-0.131679,90,1.18511);
   c1->SetBorderSize(2);
   c1->SetFrameFillColor(0);
   Double_t xAxis[35] = {0, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 45, 50, 55, 60, 65, 70, 75, 80}; 
   
   TH1 *v13_Pt = new TH1F("v13_Pt","v13 trigger efficiency vs Pt",34, xAxis);
   v13_Pt->SetBinContent(2,0.565495);
   v13_Pt->SetBinContent(3,0.7);
   v13_Pt->SetBinContent(4,0.782998);
   v13_Pt->SetBinContent(5,0.834746);
   v13_Pt->SetBinContent(6,0.890459);
   v13_Pt->SetBinContent(7,0.930736);
   v13_Pt->SetBinContent(8,0.963415);
   v13_Pt->SetBinContent(9,0.944501);
   v13_Pt->SetBinContent(10,0.963025);
   v13_Pt->SetBinContent(11,0.982958);
   v13_Pt->SetBinContent(12,0.973538);
   v13_Pt->SetBinContent(13,0.981698);
   v13_Pt->SetBinContent(14,0.978714);
   v13_Pt->SetBinContent(15,0.979266);
   v13_Pt->SetBinContent(16,0.986542);
   v13_Pt->SetBinContent(17,0.988074);
   v13_Pt->SetBinContent(18,0.99035);
   v13_Pt->SetBinContent(19,0.996687);
   v13_Pt->SetBinContent(20,0.993962);
   v13_Pt->SetBinContent(21,0.997628);
   v13_Pt->SetBinContent(22,0.997264);
   v13_Pt->SetBinContent(23,0.994966);
   v13_Pt->SetBinContent(24,0.997683);
   v13_Pt->SetBinContent(25,0.998196);
   v13_Pt->SetBinContent(26,0.997343);
   v13_Pt->SetBinContent(27,0.996639);
   v13_Pt->SetBinContent(28,0.99695);
   v13_Pt->SetBinContent(29,0.996018);
   v13_Pt->SetBinContent(30,0.995012);
   v13_Pt->SetBinContent(31,1);
   v13_Pt->SetBinContent(32,0.986371);
   v13_Pt->SetBinContent(33,1);
   v13_Pt->SetBinContent(34,1);
   v13_Pt->SetBinError(2,0.0280182);
   v13_Pt->SetBinError(3,0.0256174);
   v13_Pt->SetBinError(4,0.0194966);
   v13_Pt->SetBinError(5,0.0170955);
   v13_Pt->SetBinError(6,0.0131276);
   v13_Pt->SetBinError(7,0.00964496);
   v13_Pt->SetBinError(8,0.00625111);
   v13_Pt->SetBinError(9,0.00727292);
   v13_Pt->SetBinError(10,0.00547014);
   v13_Pt->SetBinError(11,0.00337915);
   v13_Pt->SetBinError(12,0.0039816);
   v13_Pt->SetBinError(13,0.00302229);
   v13_Pt->SetBinError(14,0.00310493);
   v13_Pt->SetBinError(15,0.00284528);
   v13_Pt->SetBinError(16,0.00222785);
   v13_Pt->SetBinError(17,0.002033);
   v13_Pt->SetBinError(18,0.00169768);
   v13_Pt->SetBinError(19,0.00095482);
   v13_Pt->SetBinError(20,0.00122872);
   v13_Pt->SetBinError(21,0.000749176);
   v13_Pt->SetBinError(22,0.000788728);
   v13_Pt->SetBinError(23,0.00102488);
   v13_Pt->SetBinError(24,0.00066797);
   v13_Pt->SetBinError(25,0.000570087);
   v13_Pt->SetBinError(26,0.000685179);
   v13_Pt->SetBinError(27,0.000328999);
   v13_Pt->SetBinError(28,0.000386719);
   v13_Pt->SetBinError(29,0.000794845);
   v13_Pt->SetBinError(30,0.00157326);
   v13_Pt->SetBinError(31,0.000545979);
   v13_Pt->SetBinError(32,0.0047855);
   v13_Pt->SetBinError(33,0.00217962);
   v13_Pt->SetBinError(34,0.00327158);
   v13_Pt->SetEntries(35);
   v13_Pt->SetStats(0);
   v13_Pt->SetMarkerColor(4);
   v13_Pt->SetMarkerStyle(20);
   v13_Pt->SetMarkerSize(0.5);
   v13_Pt->GetXaxis()->SetTitle("pT [GeV]");
   v13_Pt->Draw("");
   
   TPaveText *pt = new TPaveText(0.01,0.940178,0.418416,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(2);
   pt->SetFillColor(19);
   TText *text = pt->AddText("v13 trigger efficiency vs Pt");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
