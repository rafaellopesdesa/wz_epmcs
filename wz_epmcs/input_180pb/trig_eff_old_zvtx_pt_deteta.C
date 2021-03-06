{
const int n_trig_eff_old_xbins = 2;
float trig_eff_old_xbins[n_trig_eff_old_xbins+1] = {-1000.000000 ,0.000000 ,1000.000000  };

const int n_trig_eff_old_ybins = 9;
float trig_eff_old_ybins[n_trig_eff_old_ybins+1] = {20.000000 ,23.000000 ,25.000000 ,27.000000 ,30.000000 ,33.000000 ,36.000000 ,40.000000 ,45.000000 ,50.000000  };

const int n_trig_eff_old_zbins = 12;
float trig_eff_old_zbins[n_trig_eff_old_zbins+1] = {-2.300000 ,-1.800000 ,-1.500000 ,-1.100000 ,-0.700000 ,-0.300000 ,0.000000 ,0.300000 ,0.700000 ,1.100000 ,1.500000 ,1.800000 ,2.300000  };

TH3F *trig_eff_old = new TH3F("trig_eff_old","trigger efficiency, old vs zvtx, pt and deteta", n_trig_eff_old_xbins, trig_eff_old_xbins, n_trig_eff_old_ybins, trig_eff_old_ybins, n_trig_eff_old_zbins, trig_eff_old_zbins);

////////////////////////////////////////////////////
////////////////////////////////////////////////////
// zbin: under -2.300000

////////////////////////////////////////////////////
// ybin: under 20.000000

////////////////////////////////////////////////////
// ybin: 20.000000 to 23.000000

////////////////////////////////////////////////////
// ybin: 23.000000 to 25.000000

////////////////////////////////////////////////////
// ybin: 25.000000 to 27.000000

////////////////////////////////////////////////////
// ybin: 27.000000 to 30.000000

////////////////////////////////////////////////////
// ybin: 30.000000 to 33.000000

////////////////////////////////////////////////////
// ybin: 33.000000 to 36.000000

////////////////////////////////////////////////////
// ybin: 36.000000 to 40.000000

////////////////////////////////////////////////////
// ybin: 40.000000 to 45.000000

////////////////////////////////////////////////////
// ybin: 45.000000 to 50.000000

////////////////////////////////////////////////////
// ybin: over 50.000000

////////////////////////////////////////////////////
////////////////////////////////////////////////////
// zbin: -2.300000 to -1.800000

////////////////////////////////////////////////////
// ybin: under 20.000000

////////////////////////////////////////////////////
// ybin: 20.000000 to 23.000000

////////////////////////////////////////////////////
// ybin: 23.000000 to 25.000000

////////////////////////////////////////////////////
// ybin: 25.000000 to 27.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,3,1,0.785714);
trig_eff_old->SetBinError(1,3,1,0.105021);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,3,1,1.000000);
trig_eff_old->SetBinError(2,3,1,0.037010);

////////////////////////////////////////////////////
// ybin: 27.000000 to 30.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,4,1,0.903226);
trig_eff_old->SetBinError(1,4,1,0.055973);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,4,1,1.000000);
trig_eff_old->SetBinError(2,4,1,0.030288);

////////////////////////////////////////////////////
// ybin: 30.000000 to 33.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,5,1,0.956522);
trig_eff_old->SetBinError(1,5,1,0.034580);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,5,1,0.980000);
trig_eff_old->SetBinError(2,5,1,0.026415);

////////////////////////////////////////////////////
// ybin: 33.000000 to 36.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,6,1,0.973684);
trig_eff_old->SetBinError(1,6,1,0.034037);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,6,1,0.956522);
trig_eff_old->SetBinError(2,6,1,0.034580);

////////////////////////////////////////////////////
// ybin: 36.000000 to 40.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,7,1,0.980000);
trig_eff_old->SetBinError(1,7,1,0.026415);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,7,1,0.965517);
trig_eff_old->SetBinError(2,7,1,0.027905);

////////////////////////////////////////////////////
// ybin: 40.000000 to 45.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,8,1,1.000000);
trig_eff_old->SetBinError(1,8,1,0.016127);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,8,1,0.984615);
trig_eff_old->SetBinError(2,8,1,0.020637);

////////////////////////////////////////////////////
// ybin: 45.000000 to 50.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,9,1,1.000000);
trig_eff_old->SetBinError(1,9,1,0.031234);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,9,1,1.000000);
trig_eff_old->SetBinError(2,9,1,0.027766);

////////////////////////////////////////////////////
// ybin: over 50.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,10,1,1.000000);
trig_eff_old->SetBinError(1,10,1,0.058709);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,10,1,1.000000);
trig_eff_old->SetBinError(2,10,1,0.055459);

////////////////////////////////////////////////////
////////////////////////////////////////////////////
// zbin: -1.800000 to -1.500000

////////////////////////////////////////////////////
// ybin: under 20.000000

////////////////////////////////////////////////////
// ybin: 20.000000 to 23.000000

////////////////////////////////////////////////////
// ybin: 23.000000 to 25.000000

////////////////////////////////////////////////////
// ybin: 25.000000 to 27.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,3,2,0.916667);
trig_eff_old->SetBinError(1,3,2,0.090351);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,3,2,1.000000);
trig_eff_old->SetBinError(2,3,2,0.062361);

////////////////////////////////////////////////////
// ybin: 27.000000 to 30.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,4,2,0.900000);
trig_eff_old->SetBinError(1,4,2,0.057571);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,4,2,0.956522);
trig_eff_old->SetBinError(2,4,2,0.053205);

////////////////////////////////////////////////////
// ybin: 30.000000 to 33.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,5,2,0.931035);
trig_eff_old->SetBinError(1,5,2,0.052264);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,5,2,0.965517);
trig_eff_old->SetBinError(2,5,2,0.043429);

////////////////////////////////////////////////////
// ybin: 33.000000 to 36.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,6,2,0.945946);
trig_eff_old->SetBinError(1,6,2,0.042133);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,6,2,0.976744);
trig_eff_old->SetBinError(2,6,2,0.030385);

////////////////////////////////////////////////////
// ybin: 36.000000 to 40.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,7,2,1.000000);
trig_eff_old->SetBinError(1,7,2,0.020404);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,7,2,0.960526);
trig_eff_old->SetBinError(2,7,2,0.024816);

////////////////////////////////////////////////////
// ybin: 40.000000 to 45.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,8,2,1.000000);
trig_eff_old->SetBinError(1,8,2,0.014924);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,8,2,1.000000);
trig_eff_old->SetBinError(2,8,2,0.010988);

////////////////////////////////////////////////////
// ybin: 45.000000 to 50.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,9,2,1.000000);
trig_eff_old->SetBinError(1,9,2,0.020829);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,9,2,1.000000);
trig_eff_old->SetBinError(2,9,2,0.017854);

////////////////////////////////////////////////////
// ybin: over 50.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,10,2,1.000000);
trig_eff_old->SetBinError(1,10,2,0.041627);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,10,2,1.000000);
trig_eff_old->SetBinError(2,10,2,0.045403);

////////////////////////////////////////////////////
////////////////////////////////////////////////////
// zbin: -1.500000 to -1.100000

////////////////////////////////////////////////////
// ybin: under 20.000000

////////////////////////////////////////////////////
// ybin: 20.000000 to 23.000000

////////////////////////////////////////////////////
// ybin: 23.000000 to 25.000000

////////////////////////////////////////////////////
// ybin: 25.000000 to 27.000000

////////////////////////////////////////////////////
// ybin: 27.000000 to 30.000000

////////////////////////////////////////////////////
// ybin: 30.000000 to 33.000000

////////////////////////////////////////////////////
// ybin: 33.000000 to 36.000000

////////////////////////////////////////////////////
// ybin: 36.000000 to 40.000000

////////////////////////////////////////////////////
// ybin: 40.000000 to 45.000000

////////////////////////////////////////////////////
// ybin: 45.000000 to 50.000000

////////////////////////////////////////////////////
// ybin: over 50.000000

////////////////////////////////////////////////////
////////////////////////////////////////////////////
// zbin: -1.100000 to -0.700000

////////////////////////////////////////////////////
// ybin: under 20.000000

////////////////////////////////////////////////////
// ybin: 20.000000 to 23.000000

////////////////////////////////////////////////////
// ybin: 23.000000 to 25.000000

////////////////////////////////////////////////////
// ybin: 25.000000 to 27.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,3,4,0.500000);
trig_eff_old->SetBinError(1,3,4,0.121268);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,3,4,1.000000);
trig_eff_old->SetBinError(2,3,4,0.110240);

////////////////////////////////////////////////////
// ybin: 27.000000 to 30.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,4,4,0.785714);
trig_eff_old->SetBinError(1,4,4,0.075965);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,4,4,0.954545);
trig_eff_old->SetBinError(2,4,4,0.055277);

////////////////////////////////////////////////////
// ybin: 30.000000 to 33.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,5,4,0.928571);
trig_eff_old->SetBinError(1,5,4,0.042855);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,5,4,1.000000);
trig_eff_old->SetBinError(2,5,4,0.018864);

////////////////////////////////////////////////////
// ybin: 33.000000 to 36.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,6,4,0.984375);
trig_eff_old->SetBinError(1,6,4,0.020942);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,6,4,0.983607);
trig_eff_old->SetBinError(2,6,4,0.021915);

////////////////////////////////////////////////////
// ybin: 36.000000 to 40.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,7,4,0.991150);
trig_eff_old->SetBinError(1,7,4,0.012137);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,7,4,0.980583);
trig_eff_old->SetBinError(2,7,4,0.016181);

////////////////////////////////////////////////////
// ybin: 40.000000 to 45.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,8,4,0.994118);
trig_eff_old->SetBinError(1,8,4,0.008151);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,8,4,1.000000);
trig_eff_old->SetBinError(2,8,4,0.006024);

////////////////////////////////////////////////////
// ybin: 45.000000 to 50.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,9,4,0.986111);
trig_eff_old->SetBinError(1,9,4,0.011701);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,9,4,1.000000);
trig_eff_old->SetBinError(2,9,4,0.009999);

////////////////////////////////////////////////////
// ybin: over 50.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,10,4,1.000000);
trig_eff_old->SetBinError(1,10,4,0.012047);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,10,4,0.984127);
trig_eff_old->SetBinError(2,10,4,0.021257);

////////////////////////////////////////////////////
////////////////////////////////////////////////////
// zbin: -0.700000 to -0.300000

////////////////////////////////////////////////////
// ybin: under 20.000000

////////////////////////////////////////////////////
// ybin: 20.000000 to 23.000000

////////////////////////////////////////////////////
// ybin: 23.000000 to 25.000000

////////////////////////////////////////////////////
// ybin: 25.000000 to 27.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,3,5,0.882353);
trig_eff_old->SetBinError(1,3,5,0.081536);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,3,5,0.947368);
trig_eff_old->SetBinError(2,3,5,0.062584);

////////////////////////////////////////////////////
// ybin: 27.000000 to 30.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,4,5,0.975610);
trig_eff_old->SetBinError(1,4,5,0.031748);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,4,5,1.000000);
trig_eff_old->SetBinError(2,4,5,0.039965);

////////////////////////////////////////////////////
// ybin: 30.000000 to 33.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,5,5,1.000000);
trig_eff_old->SetBinError(1,5,5,0.015150);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,5,5,0.942308);
trig_eff_old->SetBinError(2,5,5,0.035313);

////////////////////////////////////////////////////
// ybin: 33.000000 to 36.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,6,5,1.000000);
trig_eff_old->SetBinError(1,6,5,0.016947);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,6,5,1.000000);
trig_eff_old->SetBinError(2,6,5,0.017854);

////////////////////////////////////////////////////
// ybin: 36.000000 to 40.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,7,5,1.000000);
trig_eff_old->SetBinError(1,7,5,0.005988);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,7,5,1.000000);
trig_eff_old->SetBinError(2,7,5,0.006896);

////////////////////////////////////////////////////
// ybin: 40.000000 to 45.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,8,5,1.000000);
trig_eff_old->SetBinError(1,8,5,0.003937);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,8,5,0.995074);
trig_eff_old->SetBinError(2,8,5,0.006848);

////////////////////////////////////////////////////
// ybin: 45.000000 to 50.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,9,5,1.000000);
trig_eff_old->SetBinError(1,9,5,0.006329);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,9,5,0.993548);
trig_eff_old->SetBinError(2,9,5,0.008922);

////////////////////////////////////////////////////
// ybin: over 50.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,10,5,0.990741);
trig_eff_old->SetBinError(1,10,5,0.012682);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,10,5,1.000000);
trig_eff_old->SetBinError(2,10,5,0.011764);

////////////////////////////////////////////////////
////////////////////////////////////////////////////
// zbin: -0.300000 to 0.000000

////////////////////////////////////////////////////
// ybin: under 20.000000

////////////////////////////////////////////////////
// ybin: 20.000000 to 23.000000

////////////////////////////////////////////////////
// ybin: 23.000000 to 25.000000

////////////////////////////////////////////////////
// ybin: 25.000000 to 27.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,3,6,1.000000);
trig_eff_old->SetBinError(1,3,6,0.047559);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,3,6,1.000000);
trig_eff_old->SetBinError(2,3,6,0.058709);

////////////////////////////////////////////////////
// ybin: 27.000000 to 30.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,4,6,0.944444);
trig_eff_old->SetBinError(1,4,6,0.043180);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,4,6,0.958333);
trig_eff_old->SetBinError(2,4,6,0.033255);

////////////////////////////////////////////////////
// ybin: 30.000000 to 33.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,5,6,0.963636);
trig_eff_old->SetBinError(1,5,6,0.029320);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,5,6,0.982456);
trig_eff_old->SetBinError(2,5,6,0.023363);

////////////////////////////////////////////////////
// ybin: 33.000000 to 36.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,6,6,1.000000);
trig_eff_old->SetBinError(1,6,6,0.017541);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,6,6,1.000000);
trig_eff_old->SetBinError(2,6,6,0.018179);

////////////////////////////////////////////////////
// ybin: 36.000000 to 40.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,7,6,0.987342);
trig_eff_old->SetBinError(1,7,6,0.017137);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,7,6,0.990099);
trig_eff_old->SetBinError(2,7,6,0.013531);

////////////////////////////////////////////////////
// ybin: 40.000000 to 45.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,8,6,0.985782);
trig_eff_old->SetBinError(1,8,6,0.009279);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,8,6,1.000000);
trig_eff_old->SetBinError(2,8,6,0.005747);

////////////////////////////////////////////////////
// ybin: 45.000000 to 50.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,9,6,0.992537);
trig_eff_old->SetBinError(1,9,6,0.010284);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,9,6,1.000000);
trig_eff_old->SetBinError(2,9,6,0.008547);

////////////////////////////////////////////////////
// ybin: over 50.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,10,6,1.000000);
trig_eff_old->SetBinError(1,10,6,0.016947);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,10,6,1.000000);
trig_eff_old->SetBinError(2,10,6,0.016664);

////////////////////////////////////////////////////
////////////////////////////////////////////////////
// zbin: 0.000000 to 0.300000

////////////////////////////////////////////////////
// ybin: under 20.000000

////////////////////////////////////////////////////
// ybin: 20.000000 to 23.000000

////////////////////////////////////////////////////
// ybin: 23.000000 to 25.000000

////////////////////////////////////////////////////
// ybin: 25.000000 to 27.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,3,7,0.944444);
trig_eff_old->SetBinError(1,3,7,0.065465);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,3,7,1.000000);
trig_eff_old->SetBinError(2,3,7,0.062361);

////////////////////////////////////////////////////
// ybin: 27.000000 to 30.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,4,7,1.000000);
trig_eff_old->SetBinError(1,4,7,0.025632);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,4,7,0.938776);
trig_eff_old->SetBinError(2,4,7,0.037283);

////////////////////////////////////////////////////
// ybin: 30.000000 to 33.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,5,7,0.958333);
trig_eff_old->SetBinError(1,5,7,0.033255);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,5,7,1.000000);
trig_eff_old->SetBinError(2,5,7,0.018515);

////////////////////////////////////////////////////
// ybin: 33.000000 to 36.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,6,7,0.964912);
trig_eff_old->SetBinError(1,6,7,0.028361);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,6,7,0.984615);
trig_eff_old->SetBinError(2,6,7,0.020637);

////////////////////////////////////////////////////
// ybin: 36.000000 to 40.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,7,7,0.988764);
trig_eff_old->SetBinError(1,7,7,0.015285);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,7,7,1.000000);
trig_eff_old->SetBinError(2,7,7,0.010204);

////////////////////////////////////////////////////
// ybin: 40.000000 to 45.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,8,7,0.994737);
trig_eff_old->SetBinError(1,8,7,0.007308);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,8,7,1.000000);
trig_eff_old->SetBinError(2,8,7,0.005780);

////////////////////////////////////////////////////
// ybin: 45.000000 to 50.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,9,7,1.000000);
trig_eff_old->SetBinError(1,9,7,0.007812);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,9,7,1.000000);
trig_eff_old->SetBinError(2,9,7,0.008695);

////////////////////////////////////////////////////
// ybin: over 50.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,10,7,1.000000);
trig_eff_old->SetBinError(1,10,7,0.013888);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,10,7,0.986667);
trig_eff_old->SetBinError(2,10,7,0.018010);

////////////////////////////////////////////////////
////////////////////////////////////////////////////
// zbin: 0.300000 to 0.700000

////////////////////////////////////////////////////
// ybin: under 20.000000

////////////////////////////////////////////////////
// ybin: 20.000000 to 23.000000

////////////////////////////////////////////////////
// ybin: 23.000000 to 25.000000

////////////////////////////////////////////////////
// ybin: 25.000000 to 27.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,3,8,0.857143);
trig_eff_old->SetBinError(1,3,8,0.094665);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,3,8,0.904762);
trig_eff_old->SetBinError(2,3,8,0.068745);

////////////////////////////////////////////////////
// ybin: 27.000000 to 30.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,4,8,0.948718);
trig_eff_old->SetBinError(1,4,8,0.040183);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,4,8,0.948718);
trig_eff_old->SetBinError(2,4,8,0.040183);

////////////////////////////////////////////////////
// ybin: 30.000000 to 33.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,5,8,0.973684);
trig_eff_old->SetBinError(1,5,8,0.034037);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,5,8,0.983607);
trig_eff_old->SetBinError(2,5,8,0.021915);

////////////////////////////////////////////////////
// ybin: 33.000000 to 36.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,6,8,1.000000);
trig_eff_old->SetBinError(1,6,8,0.012986);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,6,8,0.986667);
trig_eff_old->SetBinError(2,6,8,0.018010);

////////////////////////////////////////////////////
// ybin: 36.000000 to 40.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,7,8,0.972603);
trig_eff_old->SetBinError(1,7,8,0.014801);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,7,8,1.000000);
trig_eff_old->SetBinError(2,7,8,0.005882);

////////////////////////////////////////////////////
// ybin: 40.000000 to 45.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,8,8,0.995885);
trig_eff_old->SetBinError(1,8,8,0.005737);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,8,8,1.000000);
trig_eff_old->SetBinError(2,8,8,0.004202);

////////////////////////////////////////////////////
// ybin: 45.000000 to 50.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,9,8,1.000000);
trig_eff_old->SetBinError(1,9,8,0.006536);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,9,8,1.000000);
trig_eff_old->SetBinError(2,9,8,0.006289);

////////////////////////////////////////////////////
// ybin: over 50.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,10,8,1.000000);
trig_eff_old->SetBinError(1,10,8,0.010752);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,10,8,0.988889);
trig_eff_old->SetBinError(2,10,8,0.015122);

////////////////////////////////////////////////////
////////////////////////////////////////////////////
// zbin: 0.700000 to 1.100000

////////////////////////////////////////////////////
// ybin: under 20.000000

////////////////////////////////////////////////////
// ybin: 20.000000 to 23.000000

////////////////////////////////////////////////////
// ybin: 23.000000 to 25.000000

////////////////////////////////////////////////////
// ybin: 25.000000 to 27.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,3,9,0.777778);
trig_eff_old->SetBinError(1,3,9,0.128565);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,3,9,0.571429);
trig_eff_old->SetBinError(2,3,9,0.120317);

////////////////////////////////////////////////////
// ybin: 27.000000 to 30.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,4,9,0.900000);
trig_eff_old->SetBinError(1,4,9,0.071557);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,4,9,0.705882);
trig_eff_old->SetBinError(2,4,9,0.075729);

////////////////////////////////////////////////////
// ybin: 30.000000 to 33.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,5,9,1.000000);
trig_eff_old->SetBinError(1,5,9,0.024992);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,5,9,0.972973);
trig_eff_old->SetBinError(2,5,9,0.034876);

////////////////////////////////////////////////////
// ybin: 33.000000 to 36.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,6,9,1.000000);
trig_eff_old->SetBinError(1,6,9,0.014284);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,6,9,0.983607);
trig_eff_old->SetBinError(2,6,9,0.021915);

////////////////////////////////////////////////////
// ybin: 36.000000 to 40.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,7,9,0.991525);
trig_eff_old->SetBinError(1,7,9,0.011638);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,7,9,0.992537);
trig_eff_old->SetBinError(2,7,9,0.010284);

////////////////////////////////////////////////////
// ybin: 40.000000 to 45.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,8,9,1.000000);
trig_eff_old->SetBinError(1,8,9,0.006289);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,8,9,0.985148);
trig_eff_old->SetBinError(2,8,9,0.009684);

////////////////////////////////////////////////////
// ybin: 45.000000 to 50.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,9,9,0.992063);
trig_eff_old->SetBinError(1,9,9,0.010919);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,9,9,1.000000);
trig_eff_old->SetBinError(2,9,9,0.006803);

////////////////////////////////////////////////////
// ybin: over 50.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,10,9,1.000000);
trig_eff_old->SetBinError(1,10,9,0.011904);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,10,9,0.989796);
trig_eff_old->SetBinError(2,10,9,0.013931);

////////////////////////////////////////////////////
////////////////////////////////////////////////////
// zbin: 1.100000 to 1.500000

////////////////////////////////////////////////////
// ybin: under 20.000000

////////////////////////////////////////////////////
// ybin: 20.000000 to 23.000000

////////////////////////////////////////////////////
// ybin: 23.000000 to 25.000000

////////////////////////////////////////////////////
// ybin: 25.000000 to 27.000000

////////////////////////////////////////////////////
// ybin: 27.000000 to 30.000000

////////////////////////////////////////////////////
// ybin: 30.000000 to 33.000000

////////////////////////////////////////////////////
// ybin: 33.000000 to 36.000000

////////////////////////////////////////////////////
// ybin: 36.000000 to 40.000000

////////////////////////////////////////////////////
// ybin: 40.000000 to 45.000000

////////////////////////////////////////////////////
// ybin: 45.000000 to 50.000000

////////////////////////////////////////////////////
// ybin: over 50.000000

////////////////////////////////////////////////////
////////////////////////////////////////////////////
// zbin: 1.500000 to 1.800000

////////////////////////////////////////////////////
// ybin: under 20.000000

////////////////////////////////////////////////////
// ybin: 20.000000 to 23.000000

////////////////////////////////////////////////////
// ybin: 23.000000 to 25.000000

////////////////////////////////////////////////////
// ybin: 25.000000 to 27.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,3,11,0.833333);
trig_eff_old->SetBinError(1,3,11,0.144338);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,3,11,0.538462);
trig_eff_old->SetBinError(2,3,11,0.124722);

////////////////////////////////////////////////////
// ybin: 27.000000 to 30.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,4,11,1.000000);
trig_eff_old->SetBinError(1,4,11,0.024383);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,4,11,0.777778);
trig_eff_old->SetBinError(2,4,11,0.068078);

////////////////////////////////////////////////////
// ybin: 30.000000 to 33.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,5,11,1.000000);
trig_eff_old->SetBinError(1,5,11,0.020404);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,5,11,0.956522);
trig_eff_old->SetBinError(2,5,11,0.034580);

////////////////////////////////////////////////////
// ybin: 33.000000 to 36.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,6,11,0.960000);
trig_eff_old->SetBinError(1,6,11,0.032027);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,6,11,1.000000);
trig_eff_old->SetBinError(2,6,11,0.019227);

////////////////////////////////////////////////////
// ybin: 36.000000 to 40.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,7,11,0.972603);
trig_eff_old->SetBinError(1,7,11,0.022478);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,7,11,0.972603);
trig_eff_old->SetBinError(2,7,11,0.022478);

////////////////////////////////////////////////////
// ybin: 40.000000 to 45.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,8,11,0.961832);
trig_eff_old->SetBinError(1,8,11,0.017930);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,8,11,1.000000);
trig_eff_old->SetBinError(2,8,11,0.012047);

////////////////////////////////////////////////////
// ybin: 45.000000 to 50.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,9,11,0.989583);
trig_eff_old->SetBinError(1,9,11,0.014210);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,9,11,0.984848);
trig_eff_old->SetBinError(2,9,11,0.020340);

////////////////////////////////////////////////////
// ybin: over 50.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,10,11,0.975610);
trig_eff_old->SetBinError(1,10,11,0.031748);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,10,11,1.000000);
trig_eff_old->SetBinError(2,10,11,0.024992);

////////////////////////////////////////////////////
////////////////////////////////////////////////////
// zbin: 1.800000 to 2.300000

////////////////////////////////////////////////////
// ybin: under 20.000000

////////////////////////////////////////////////////
// ybin: 20.000000 to 23.000000

////////////////////////////////////////////////////
// ybin: 23.000000 to 25.000000

////////////////////////////////////////////////////
// ybin: 25.000000 to 27.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,3,12,0.960000);
trig_eff_old->SetBinError(1,3,12,0.049493);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,3,12,0.641026);
trig_eff_old->SetBinError(2,3,12,0.074323);

////////////////////////////////////////////////////
// ybin: 27.000000 to 30.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,4,12,1.000000);
trig_eff_old->SetBinError(1,4,12,0.019996);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,4,12,0.680851);
trig_eff_old->SetBinError(2,4,12,0.066319);

////////////////////////////////////////////////////
// ybin: 30.000000 to 33.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,5,12,0.969231);
trig_eff_old->SetBinError(1,5,12,0.025080);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,5,12,0.967742);
trig_eff_old->SetBinError(2,5,12,0.026217);

////////////////////////////////////////////////////
// ybin: 33.000000 to 36.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,6,12,1.000000);
trig_eff_old->SetBinError(1,6,12,0.013697);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,6,12,0.986111);
trig_eff_old->SetBinError(2,6,12,0.018725);

////////////////////////////////////////////////////
// ybin: 36.000000 to 40.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,7,12,0.981132);
trig_eff_old->SetBinError(1,7,12,0.015740);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,7,12,1.000000);
trig_eff_old->SetBinError(2,7,12,0.012345);

////////////////////////////////////////////////////
// ybin: 40.000000 to 45.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,8,12,0.991071);
trig_eff_old->SetBinError(1,8,12,0.012243);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,8,12,0.977778);
trig_eff_old->SetBinError(2,8,12,0.018417);

////////////////////////////////////////////////////
// ybin: 45.000000 to 50.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,9,12,1.000000);
trig_eff_old->SetBinError(1,9,12,0.012986);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,9,12,0.983871);
trig_eff_old->SetBinError(2,9,12,0.021581);

////////////////////////////////////////////////////
// ybin: over 50.000000

// xbin: -1000.000000 to 0.000000
trig_eff_old->SetBinContent(1,10,12,1.000000);
trig_eff_old->SetBinError(1,10,12,0.034461);

// xbin: 0.000000 to 1000.000000
trig_eff_old->SetBinContent(2,10,12,1.000000);
trig_eff_old->SetBinError(2,10,12,0.030288);

////////////////////////////////////////////////////
////////////////////////////////////////////////////
// zbin: over 2.300000

////////////////////////////////////////////////////
// ybin: under 20.000000

////////////////////////////////////////////////////
// ybin: 20.000000 to 23.000000

////////////////////////////////////////////////////
// ybin: 23.000000 to 25.000000

////////////////////////////////////////////////////
// ybin: 25.000000 to 27.000000

////////////////////////////////////////////////////
// ybin: 27.000000 to 30.000000

////////////////////////////////////////////////////
// ybin: 30.000000 to 33.000000

////////////////////////////////////////////////////
// ybin: 33.000000 to 36.000000

////////////////////////////////////////////////////
// ybin: 36.000000 to 40.000000

////////////////////////////////////////////////////
// ybin: 40.000000 to 45.000000

////////////////////////////////////////////////////
// ybin: 45.000000 to 50.000000

////////////////////////////////////////////////////
// ybin: over 50.000000
}
