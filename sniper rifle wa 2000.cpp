#include <iostream>
#include <string>
using namespace std;

class sniperrifle{
	public:
		void senapan(string tembak);
			 Menembak(string Menembak);
			 Senjata(string Senjata);
			 Air_soft_gun(string Air_soft_gun);
			 Langka(string Langka); 
		string rifle, tipe, negara, oleh, tahun, produsen, tembakan;
		int jumlah, panjang1, panjang2, jarak; 
		double berat1, berat2;
};

int main() {
	sniperrifle walther;
cout<<"\n\t\t\tNAMA      : Kevin Juli Reksi\n";
cout<<"\t\t\tNPM       : 16630474\n";
cout<<"\t\t\tPROGRAM   : Teknik Informtika\n";
cout<<"\t\t\tTentang   : Senapan Runduk Walther WA-2000\n";

	cout<<"\n";
 	walther.tipe     = "Senapan runduk \n";
 	walther.negara   = "Jerman \n";
 	walther.oleh     = "Polisi Jerman \n";
 	walther.tahun    = "1970s-1980an  \n";
 	walther.produsen = "1982-1988 \n";
 	walther.jumlah   =  176;
 	walther.berat1   =  6.95;
 	walther.berat2   =  7.35;
 	walther.panjang1 =  905;
 	walther.panjang2 =  650;
 	walther.tembakan =  "Semi otomatis \n";
 	walther.jarak     =  1000;
 	
