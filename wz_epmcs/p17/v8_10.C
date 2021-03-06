{
//=========Macro generated from canvas: c1/c1
//=========  (Thu Jun 29 17:07:38 2006) by ROOT version4.04/02b
   TCanvas *c1 = new TCanvas("c1", "c1",14,29,699,499);
   c1->Range(-10,-0.141183,90,1.27065);
   c1->SetBorderSize(2);
   c1->SetFrameFillColor(0);
   Double_t xAxis[35] = {0, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 45, 50, 55, 60, 65, 70, 75, 80}; 
   
   TH1 *v8_10_Pt = new TH1F("v8_10_Pt","v8_10 trigger efficiency vs Pt",34, xAxis);
   v8_10_Pt->SetBinContent(3,0.173913);
   v8_10_Pt->SetBinContent(4,0.266667);
   v8_10_Pt->SetBinContent(5,0.235294);
   v8_10_Pt->SetBinContent(6,0.571429);
   v8_10_Pt->SetBinContent(7,0.666667);
   v8_10_Pt->SetBinContent(8,0.714286);
   v8_10_Pt->SetBinContent(9,0.8125);
   v8_10_Pt->SetBinContent(10,0.923077);
   v8_10_Pt->SetBinContent(11,0.919355);
   v8_10_Pt->SetBinContent(12,0.929825);
   v8_10_Pt->SetBinContent(13,0.95);
   v8_10_Pt->SetBinContent(14,0.937008);
   v8_10_Pt->SetBinContent(15,0.919355);
   v8_10_Pt->SetBinContent(16,0.969466);
   v8_10_Pt->SetBinContent(17,0.960526);
   v8_10_Pt->SetBinContent(18,1);
   v8_10_Pt->SetBinContent(19,1);
   v8_10_Pt->SetBinContent(20,0.976471);
   v8_10_Pt->SetBinContent(21,0.954128);
   v8_10_Pt->SetBinContent(22,0.994792);
   v8_10_Pt->SetBinContent(23,1);
   v8_10_Pt->SetBinContent(24,1);
   v8_10_Pt->SetBinContent(25,0.984436);
   v8_10_Pt->SetBinContent(26,0.985294);
   v8_10_Pt->SetBinContent(27,0.990073);
   v8_10_Pt->SetBinContent(28,0.986213);
   v8_10_Pt->SetBinContent(29,0.983957);
   v8_10_Pt->SetBinContent(30,1);
   v8_10_Pt->SetBinContent(31,1);
   v8_10_Pt->SetBinContent(32,1);
   v8_10_Pt->SetBinContent(33,1);
   v8_10_Pt->SetBinContent(34,1);
   v8_10_Pt->SetBinError(3,0.0790342);
   v8_10_Pt->SetBinError(4,0.11418);
   v8_10_Pt->SetBinError(5,0.102879);
   v8_10_Pt->SetBinError(6,0.093522);
   v8_10_Pt->SetBinError(7,0.0785674);
   v8_10_Pt->SetBinError(8,0.0645363);
   v8_10_Pt->SetBinError(9,0.0563367);
   v8_10_Pt->SetBinError(10,0.0369527);
   v8_10_Pt->SetBinError(11,0.0345808);
   v8_10_Pt->SetBinError(12,0.0338342);
   v8_10_Pt->SetBinError(13,0.024367);
   v8_10_Pt->SetBinError(14,0.0215582);
   v8_10_Pt->SetBinError(15,0.0244523);
   v8_10_Pt->SetBinError(16,0.0150323);
   v8_10_Pt->SetBinError(17,0.0157938);
   v8_10_Pt->SetBinError(18,0.00346899);
   v8_10_Pt->SetBinError(19,0.00371599);
   v8_10_Pt->SetBinError(20,0.0116255);
   v8_10_Pt->SetBinError(21,0.0141693);
   v8_10_Pt->SetBinError(22,0.00519475);
   v8_10_Pt->SetBinError(23,0.00222158);
   v8_10_Pt->SetBinError(24,0.002213);
   v8_10_Pt->SetBinError(25,0.0077213);
   v8_10_Pt->SetBinError(26,0.00729868);
   v8_10_Pt->SetBinError(27,0.00255044);
   v8_10_Pt->SetBinError(28,0.0035351);
   v8_10_Pt->SetBinError(29,0.00649669);
   v8_10_Pt->SetBinError(30,0.00476408);
   v8_10_Pt->SetBinError(31,0.00903559);
   v8_10_Pt->SetBinError(32,0.0243611);
   v8_10_Pt->SetBinError(33,0.0668855);
   v8_10_Pt->SetBinError(34,0.0756803);
   v8_10_Pt->SetEntries(35);
   v8_10_Pt->SetStats(0);
   v8_10_Pt->SetMarkerColor(4);
   v8_10_Pt->SetMarkerStyle(20);
   v8_10_Pt->SetMarkerSize(0.5);
   v8_10_Pt->GetXaxis()->SetTitle("pT [GeV]");
   v8_10_Pt->Draw("");
   
   TPaveText *pt = new TPaveText(0.01,0.940178,0.445673,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(2);
   pt->SetFillColor(19);
   TText *text = pt->AddText("v8-10 trigger efficiency vs Pt");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
