#include<iostream>
#include<iomanip>
#include <cstdio>
#include <conio.h>
#include<stdlib.h>
using namespace std;
struct dbuku {
		char kbuku[99];
		char nbuku[99];
		char tt[99];
		char pg[99];
		char hrg[99];
};

int i,jml;
dbuku dbk [101];

void tambah(){
    cout<<"Jumlah barang :";
    cin>>jml;
    for(i=0;i<jml;i++){
        cout<<"Kode Buku	: "; cin>>dbk[i].kbuku;
        cout<<"Nama Buku	: "; cin>>dbk[i].nbuku;
        cout<<"Tahun Terbit	: "; cin>>dbk[i].tt;
        cout<<"Pengarang	: "; cin>>dbk[i].pg;
        cout<<"Harga		: "; cin>>dbk[i].hrg;
        cout<<"---------------------------------------------"<<endl;
    }
}

void tampil(){
    cout<<setfill(' ')
        <<setw(38)<<"Daftar Buku"<<setw(38)<<endl;
    cout<<setfill(' ')
        <<setw(5)<<left<<"no"
        <<setw(13)<<left<<"Kode Buku"
        <<setw(23)<<left<<"Nama Buku"
        <<setw(14)<<left<<"Tahun Terbit"
        <<setw(14)<<left<<"Pengarang"
        <<setw(10)<<left<<"Harga"
        <<endl;
    for (int i=0; i<jml; i++) {
        cout<<setfill(' ')
            <<setw(5)<<i+1
            <<setw(13)<<left<<dbk[i].kbuku
            <<setw(23)<<left<<dbk[i].nbuku
            <<setw(14)<<left<<dbk[i].tt
            <<setw(14)<<left<<dbk[i].pg
            <<setw(10)<<left<<dbk[i].hrg
            <<endl;
    }
}

int main () {
	int pil;
	bool menu;
	menu=false;

	do{
        cout<<"1. tambah buku"<<endl;
        cout<<"2. tampilkan buku"<<endl;
        cout<<"3. hapus buku"<<endl;
        cout<<"4. edit buku"<<endl;
        cout<<"Pilihan :";
        cin>>pil;

        if(pil==1){
            tambah();
            cout<<"Back";
            menu=true;
            getch();
            system("cls");
        }
        else if(pil==2){
                tampil();
//            system("cls");
        }
        else if(pil==3){

            int kb;
            cout<<"\n PENGHAPUSAN DATA buku\n";
            cout<<" ____________________________________\n\n";
            cout<<" kode buku : ";
            cin>>kb;
            cout<<endl;
            i--;

            for(int c=kb;c<i;c++)
            {
                    dbk[i]=dbk[i-1];
            }
            jml=jml-1;
            cout<<" DATA BERHASIL DI HAPUS\n\n";
            cout<<" ____________________________________________\n\n";
            cout<<"back";
            getch();
        }else if (pil==4){
            int kb;
            cout<<"no buku yang mau di edit :";
            cin>>kb;
            kb=kb-1;
            cout<<"Kode Buku	: "; cin>>dbk[kb].kbuku;
            cout<<"Nama Buku	: "; cin>>dbk[kb].nbuku;
            cout<<"Tahun Terbit	: "; cin>>dbk[kb].tt;
            cout<<"Pengarang	: "; cin>>dbk[kb].pg;
            cout<<"Harga		: "; cin>>dbk[kb].hrg;
        }

    }while(menu=true);
}
