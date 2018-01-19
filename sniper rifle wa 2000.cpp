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
 	
	cout<<"\n";
	cout<<"                                              SPESIFIKASI WA-2000 \n";
 	cout<<"---------------------------------------------------------------------------------------------------\n";
 	cout<<"Tipe            : "<<(walther.tipe);
 	cout<<"Negara asal     : "<<(walther.negara);
 	cout<<"Digunakan oleh  : "<<(walther.oleh);
 	cout<<"Tahun           : "<<(walther.tahun);
 	cout<<"Diproduksi      : "<<(walther.produsen);
 	cout<<"Jumlah          : "<<(walther.jumlah)<<endl;
 	cout<<"Berat           : "<<(walther.berat1)<<" kg (15.3 lb) tanpa peluru dan alat bidik optik \n";
 	cout<<"                  "<<(walther.berat2)<<" kg (16.2 lb) dengan amunisi peluru, tanpa alat bidik optik \n";
 	cout<<"Panjang         : "<<(walther.panjang1)<<"  mm (35.6 in) \n";
 	cout<<"                  "<<(walther.panjang1)<<"  mm (25.6 in) \n";
 	cout<<"Rata2 tembakan  : "<<(walther.tembakan);
 	cout<<"Jarak           : "<<(walther.jarak)<<" meter \n\n";
 	
 	
	walther.rifle = "\tSenapan runduk ";
	
	cout << (walther.rifle);
	walther.senapan("buatan");
}
