void random_th2d()
{
    // TH2D作成
    // TH2D(name, title, xbins, xmin, xmax, ybins, ymin, ymax)
    TH2D *h2 = new TH2D(
        "h2",
        "2D Gaussian random variables;X;Y;Counts",
        100, -5.0, 5.0,
        100, -5.0, 5.0,
    );

    // 乱数生成器
    TRandom3 rng(0);  // 0なら時刻ベースのseed

    // 正規分布に従う乱数を詰める
    const int nEvents = 100000;

    for (int i = 0; i < nEvents; ++i) {
        double x = rng.Gaus(0.0, 1.0);  // mean=0, sigma=1
        double y = rng.Gaus(0.0, 1.0);  // mean=0, sigma=1

        h2->Fill(x, y);
    }

    // Canvas作成
    TCanvas *c1 = new TCanvas("c1", "Gaussian TH2D", 800, 700);

    // 見た目調整
    gStyle->SetOptStat(0);
    
    h2->Draw("COLZ");

    c1->Update();
}
