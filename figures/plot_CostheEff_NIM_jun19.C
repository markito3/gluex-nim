void plot_CostheEff_NIM_jun19()
{
//=========Macro generated from canvas: c1/c1
//=========  (Thu Oct 10 10:25:44 2019) by ROOT version 6.14/06
   TCanvas *c1 = new TCanvas("c1", "c1",200,45,1200,400);
   gStyle->SetOptFit(1);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLeftMargin(0.15);
   c1->SetRightMargin(0.15);
   c1->SetBottomMargin(0.15);
   c1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: c1_1
   TPad *c1_1 = new TPad("c1_1", "c1_1",0.01,0.01,0.3233333,0.99);
   c1_1->Draw();
   c1_1->cd();
   c1_1->Range(-0.429,-0.3,2.431,1.7);
   c1_1->SetFillColor(0);
   c1_1->SetBorderMode(0);
   c1_1->SetBorderSize(2);
   c1_1->SetGridx();
   c1_1->SetGridy();
   c1_1->SetLeftMargin(0.15);
   c1_1->SetRightMargin(0.15);
   c1_1->SetBottomMargin(0.15);
   c1_1->SetFrameBorderMode(0);
   c1_1->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1001[25] = {
   0.04,
   0.12,
   0.2,
   0.28,
   0.36,
   0.44,
   0.52,
   0.6,
   0.68,
   0.76,
   0.84,
   0.92,
   1,
   1.08,
   1.16,
   1.24,
   1.32,
   1.4,
   1.48,
   1.56,
   1.64,
   1.72,
   1.8,
   1.88,
   1.96};
   Double_t Graph0_fy1001[25] = {
   0.4703606,
   0.9367952,
   0.965236,
   0.9733199,
   0.9624042,
   0.9500602,
   0.9701037,
   0.9556011,
   0.9715308,
   0.9710759,
   0.9748429,
   0.9641707,
   0.9691126,
   0.9793788,
   0.9788523,
   0.9787332,
   0.9730597,
   0.9768637,
   0.9636303,
   0.9830782,
   0.9272533,
   0.9293236,
   0.9427446,
   0.9227193,
   1.091516};
   Double_t Graph0_fex1001[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t Graph0_fey1001[25] = {
   0.01939701,
   0.006810336,
   0.004615133,
   0.004401485,
   0.004282187,
   0.004165865,
   0.004473251,
   0.005198384,
   0.006316753,
   0.007210204,
   0.008202077,
   0.009917294,
   0.01121231,
   0.01280118,
   0.01509783,
   0.01670838,
   0.02117441,
   0.02506733,
   0.02793287,
   0.03667319,
   0.04044177,
   0.04743389,
   0.06766631,
   0.06745656,
   0.1290546};
   TGraphErrors *gre = new TGraphErrors(25,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle("BCAL");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.3);
   
   TH1F *Graph_Graph01001 = new TH1F("Graph_Graph01001","BCAL",100,0,2.2);
   Graph_Graph01001->SetMinimum(0);
   Graph_Graph01001->SetMaximum(1.5);
   Graph_Graph01001->SetDirectory(0);
   Graph_Graph01001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01001->SetLineColor(ci);
   Graph_Graph01001->GetXaxis()->SetTitle("Low E_{#gamma} (GeV)");
   Graph_Graph01001->GetXaxis()->SetRange(1,91);
   Graph_Graph01001->GetXaxis()->SetLabelFont(42);
   Graph_Graph01001->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph01001->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph01001->GetXaxis()->SetTitleFont(42);
   Graph_Graph01001->GetYaxis()->SetTitle("Efficiency Ratio Data/MC");
   Graph_Graph01001->GetYaxis()->SetLabelFont(42);
   Graph_Graph01001->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph01001->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph01001->GetYaxis()->SetTitleOffset(0);
   Graph_Graph01001->GetYaxis()->SetTitleFont(42);
   Graph_Graph01001->GetZaxis()->SetLabelFont(42);
   Graph_Graph01001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph01001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph01001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01001);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4247316,0.94,0.5752684,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("BCAL");
   pt->Draw();
   c1_1->Modified();
   c1->cd();
  
// ------------>Primitives in pad: c1_2
   TPad *c1_2 = new TPad("c1_2", "c1_2",0.3433333,0.01,0.6566667,0.99);
   c1_2->Draw();
   c1_2->cd();
   c1_2->Range(-0.429,-0.3,2.431,1.7);
   c1_2->SetFillColor(0);
   c1_2->SetBorderMode(0);
   c1_2->SetBorderSize(2);
   c1_2->SetGridx();
   c1_2->SetGridy();
   c1_2->SetLeftMargin(0.15);
   c1_2->SetRightMargin(0.15);
   c1_2->SetBottomMargin(0.15);
   c1_2->SetFrameBorderMode(0);
   c1_2->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1002[25] = {
   0.04,
   0.12,
   0.2,
   0.28,
   0.36,
   0.44,
   0.52,
   0.6,
   0.68,
   0.76,
   0.84,
   0.92,
   1,
   1.08,
   1.16,
   1.24,
   1.32,
   1.4,
   1.48,
   1.56,
   1.64,
   1.72,
   1.8,
   1.88,
   1.96};
   Double_t Graph0_fy1002[25] = {
   0,
   0.9880946,
   0.9865922,
   1.074783,
   1.086262,
   1.0297,
   1.04699,
   1.016288,
   1.029186,
   1.012954,
   1.004971,
   1.004924,
   0.9935847,
   0.9962314,
   0.9607022,
   0.9844321,
   0.9688703,
   0.9516585,
   0.9785831,
   0.9625306,
   0.972786,
   0.9766549,
   1.035624,
   0.9614216,
   1.028911};
   Double_t Graph0_fex1002[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t Graph0_fey1002[25] = {
   0,
   0.1567927,
   0.06204603,
   0.03070793,
   0.0220802,
   0.01665166,
   0.01567747,
   0.01428997,
   0.01420922,
   0.01412157,
   0.01427517,
   0.01465424,
   0.01482166,
   0.01577563,
   0.01548792,
   0.01658356,
   0.01671506,
   0.01754658,
   0.01940315,
   0.02116076,
   0.02141388,
   0.02410326,
   0.02567187,
   0.02624022,
   0.03457925};
   gre = new TGraphErrors(25,Graph0_fx1002,Graph0_fy1002,Graph0_fex1002,Graph0_fey1002);
   gre->SetName("Graph0");
   gre->SetTitle("FCAL");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.3);
   
   TH1F *Graph_Graph01002 = new TH1F("Graph_Graph01002","FCAL",100,0,2.2);
   Graph_Graph01002->SetMinimum(0);
   Graph_Graph01002->SetMaximum(1.5);
   Graph_Graph01002->SetDirectory(0);
   Graph_Graph01002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph01002->SetLineColor(ci);
   Graph_Graph01002->GetXaxis()->SetTitle("Low E_{#gamma} (GeV)");
   Graph_Graph01002->GetXaxis()->SetRange(1,91);
   Graph_Graph01002->GetXaxis()->SetLabelFont(42);
   Graph_Graph01002->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph01002->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph01002->GetXaxis()->SetTitleFont(42);
   Graph_Graph01002->GetYaxis()->SetTitle("Efficiency Ratio Data/MC");
   Graph_Graph01002->GetYaxis()->SetLabelFont(42);
   Graph_Graph01002->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph01002->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph01002->GetYaxis()->SetTitleOffset(0);
   Graph_Graph01002->GetYaxis()->SetTitleFont(42);
   Graph_Graph01002->GetZaxis()->SetLabelFont(42);
   Graph_Graph01002->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph01002->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph01002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01002);
   
   gre->Draw("ap");
   
   pt = new TPaveText(0.4273957,0.94,0.5726043,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("FCAL");
   pt->Draw();
   c1_2->Modified();
   c1->cd();
  
// ------------>Primitives in pad: c1_3
   TPad *c1_3 = new TPad("c1_3", "c1_3",0.6766667,0.01,0.99,0.99);
   c1_3->Draw();
   c1_3->cd();
   c1_3->Range(-0.429,-0.3,2.431,1.7);
   c1_3->SetFillColor(0);
   c1_3->SetBorderMode(0);
   c1_3->SetBorderSize(2);
   c1_3->SetGridx();
   c1_3->SetGridy();
   c1_3->SetLeftMargin(0.15);
   c1_3->SetRightMargin(0.15);
   c1_3->SetBottomMargin(0.15);
   c1_3->SetFrameBorderMode(0);
   c1_3->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1003[25] = {
   0.04,
   0.12,
   0.2,
   0.28,
   0.36,
   0.44,
   0.52,
   0.6,
   0.68,
   0.76,
   0.84,
   0.92,
   1,
   1.08,
   1.16,
   1.24,
   1.32,
   1.4,
   1.48,
   1.56,
   1.64,
   1.72,
   1.8,
   1.88,
   1.96};
   Double_t Graph0_fy1003[25] = {
   0.4772774,
   0.9650522,
   0.9662632,
   0.9543509,
   0.957266,
   0.9598356,
   0.9631777,
   0.9810876,
   0.9713425,
   0.9785711,
   0.9938723,
   0.99551,
   0.9972663,
   0.9963184,
   0.9760759,
   0.9798825,
   1.022337,
   1.018969,
   0.9868429,
   0.9881436,
   0.9981491,
   1.000935,
   0.9785736,
   0.9759958,
   1.017849};
   Double_t Graph0_fex1003[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t Graph0_fey1003[25] = {
   0.003710795,
   0.002353998,
   0.002374904,
   0.003201578,
   0.004029507,
   0.004419352,
   0.004608932,
   0.005132013,
   0.005793056,
   0.006416154,
   0.007231949,
   0.008288858,
   0.009292377,
   0.01080273,
   0.01205207,
   0.01370882,
   0.01667749,
   0.01936565,
   0.02049195,
   0.0242172,
   0.03010159,
   0.03331851,
   0.04458698,
   0.04837298,
   0.06499792};
   gre = new TGraphErrors(25,Graph0_fx1003,Graph0_fy1003,Graph0_fex1003,Graph0_fey1003);
   gre->SetName("Graph0");
   gre->SetTitle("FCALBCAL");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.3);
   
   TH1F *Graph_Graph01003 = new TH1F("Graph_Graph01003","FCALBCAL",100,0,2.2);
   Graph_Graph01003->SetMinimum(0);
   Graph_Graph01003->SetMaximum(1.5);
   Graph_Graph01003->SetDirectory(0);
   Graph_Graph01003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph01003->SetLineColor(ci);
   Graph_Graph01003->GetXaxis()->SetTitle("Low E_{#gamma} (GeV)");
   Graph_Graph01003->GetXaxis()->SetRange(1,91);
   Graph_Graph01003->GetXaxis()->SetLabelFont(42);
   Graph_Graph01003->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph01003->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph01003->GetXaxis()->SetTitleFont(42);
   Graph_Graph01003->GetYaxis()->SetTitle("Efficiency Ratio Data/MC");
   Graph_Graph01003->GetYaxis()->SetLabelFont(42);
   Graph_Graph01003->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph01003->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph01003->GetYaxis()->SetTitleOffset(0);
   Graph_Graph01003->GetYaxis()->SetTitleFont(42);
   Graph_Graph01003->GetZaxis()->SetLabelFont(42);
   Graph_Graph01003->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph01003->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph01003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01003);
   
   gre->Draw("ap");
   
   pt = new TPaveText(0.3607953,0.94,0.6392047,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("FCALBCAL");
   pt->Draw();
   c1_3->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
