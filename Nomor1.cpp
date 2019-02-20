#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
	struct dbuku {
		char kbuku[99];
		char nbuku[99];
		char tt[99];
		char pg[99];
		char hrg[99];
	};
	int p;
	cout<<"---------------------------------------------"<<endl;
	cout<<"Input (Data Sejumlah P)"<<endl;
	cout<<"---------------------------------------------"<<endl;
	cout<<"Masukkan jumlah data yang diinput : ";
	cin >> p;
	dbuku dbk [p];
	for (int i=0; i<p; i++) {
		cout<<"Kode Buku	: "; cin.getline(dbk[i].kbuku, 99);
		cout<<"Nama Buku	: "; cin.getline(dbk[i].nbuku, 99);
		cout<<"Tahun Terbit	: "; cin.getline(dbk[i].tt, 99);
		cout<<"Pengarang	: "; cin.getline(dbk[i].pg, 99);
		cout<<"Harga		: "; cin.getline(dbk[i].hrg, 99);
		cout<<"---------------------------------------------"<<endl;
	}
	cout<<"\n\n\n";
	cout<<setfill('-')
		<<setw(1)<<"+"<<setw(75)<<"-"<<setw(1)<<"+"<<endl;
	cout<<setfill(' ')
		<<setw(1)<<"|"<<setw(38)<<"Output"<<setw(38)<<"|"<<endl;
	cout<<setfill('-')
		<<setw(1)<<"+"<<setw(10)<<"-"
		<<setw(1)<<"+"<<setw(23)<<"-"
		<<setw(1)<<"+"<<setw(14)<<"-"
		<<setw(1)<<"+"<<setw(14)<<"-"
		<<setw(1)<<"+"<<setw(10)<<"-"
		<<setw(1)<<"+"<<endl;
	cout<<setfill(' ')
		<<setw(1)<<"|"<<setw(10)<<left<<"Kode Buku"
		<<setw(1)<<"|"<<setw(23)<<left<<"Nama Buku"
		<<setw(1)<<"|"<<setw(14)<<left<<"Tahun Terbit"
		<<setw(1)<<"|"<<setw(14)<<left<<"Pengarang"
		<<setw(1)<<"|"<<setw(10)<<left<<"Harga"
		<<setw(1)<<"|"<<endl;
	cout<<setfill('-')
		<<setw(1)<<"+"<<setw(10)<<"-"
		<<setw(1)<<"+"<<setw(23)<<"-"
		<<setw(1)<<"+"<<setw(14)<<"-"
		<<setw(1)<<"+"<<setw(14)<<"-"
		<<setw(1)<<"+"<<setw(10)<<"-"
		<<setw(1)<<"+"<< endl;
	for (int i=0; i<p; i++) {
		cout<<setfill(' ')
			<<setw(1)<<"|"<<setw(10)<<left<<dbk[i].kbuku
			<<setw(1)<<"|"<<setw(23)<<left<<dbk[i].nbuku
			<<setw(1)<<"|"<<setw(14)<<left<<dbk[i].tt
			<<setw(1)<<"|"<<setw(14)<<left<<dbk[i].pg
			<<setw(1)<<"|"<<setw(10)<<left<<dbk[i].hrg
			<<setw(1)<<"|"<<endl;
		cout<<setfill('-')
			<<setw(1)<<"+"<<setw(10)<<"-"
			<<setw(1)<<"+"<<setw(23)<<"-"
			<<setw(1)<<"+"<<setw(14)<<"-"
			<<setw(1)<<"+"<<setw(14)<<"-"
			<<setw(1)<<"+"<<setw(10)<<"-"
			<<setw(1)<<"+"<<endl;
	}
}
