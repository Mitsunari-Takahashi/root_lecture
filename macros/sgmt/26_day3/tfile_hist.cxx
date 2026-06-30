{
  TFile *fout = new TFile("hist.root", "RECREATE");

  TH1D *h_write = new TH1D("h_gaus", "random 1d histogram;x;Events", 100, 0, 10);

  TRandom3 rng(42);  
  for (int i = 0; i < 10000; i++) {
      h_write->Fill(rng.Gaus(5.0, 1.0));
  }
  h_write->Draw();
  //h_write->Write();
  //fout->Close();
  
  //TFile *fin = new TFile("hist.root", "READ");
  //TH1D *h_read = (TH1D*)fin->Get("h_gaus");

  //h_read->Draw();
}
