// histogram_1D_flexible.C

void histogram_1D_flexible(){
    // Define your X-axis flexibly
    const int NBIN_ENERGY = 100; 
    const int ENERGY_MIN = 300; //300 MeV
    const int ENERGY_MAX = 100000; //100 GeV
    double xbins[NBIN_ENERGY+1];
    const double LOGE_BINWIDTH = (log10(ENERGY_MAX) - log10(ENERGY_MIN)) / NBIN_ENERGY; // Divide the X-axis by an equivalent width in log-space
    for(int ibin=0; ibin<NBIN_ENERGY; ibin++){
        xbins[ibin] = ENERGY_MIN * /*ここを変えて*/;
    }
    xbins[NBIN_ENERGY] = ENERGY_MAX;
    
    // Construct a 1D histogram    
    TH1D* hist = new TH1D("hist_1D", "Count spectrum;Energy[MeV];[events]", NBIN_ENERGY, /*ここを変えて*/);
    // Make the histogram fancy
    hist->SetFillStyle(3001);
    hist->SetFillColor(kBlue);
    hist->SetLineColor(kBlue);
    hist->SetLineWidth(2);

    // Open input file
    ifstream ifs("../lat-data/allsky_photons.dat");
    // Check if input file is open
    if(!ifs.is_open()){
        cout << "Input file is not opened!" << endl;
        return 0;
    } 
    // Fill the values to the histogram
    double energy, l, b, zenith, azimuth, time;

    while(ifs >> energy >> l >> b >> zenith >> azimuth >> time){
        hist->Fill(energy);
    }
  
    // Construct a canvas
    TCanvas* can = new TCanvas("can", "All-sky photons");
    // Draw the histogram
    can->cd();
    hist->Draw();
    /*ここを変えて*/
    /*ここを変えて*/
}
