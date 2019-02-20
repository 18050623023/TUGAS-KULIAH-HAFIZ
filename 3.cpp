#include<iostream>
#include<iomanip>
#include <cstdio>
#include <conio.h>
#include<stdlib.h>
using namespace std;
struct dktp {
		char nik[99];
		char nama[99];
		char asal[99];
		char gender;
		int tgllhir;
};

int jml,i=0,ttl=0;
dktp ktpd [101];

void tambah(){
    cout<<"Jumlah ktp yg di tambah :";
    cin>>jml;

    ttl=ttl+jml;
    while(i<ttl){
        cout<<"NIK	    : "; cin>>ktpd[i].nik;
        cout<<"nama 	: "; cin>>ktpd[i].nama;
        cout<<"asal	    : "; cin>>ktpd[i].asal;
        cout<<"gender	: "; cin>>ktpd[i].gender;
        cout<<"tanggal lahir : "; cin>>ktpd[i].tgllhir;
        cout<<"---------------------------------------------"<<endl;
        i++;
    }
}

void tampil(){
    int gen,z;
    char n;
    cout<<"1. Laki-Laki";
    cout<<"2. Perempuan";
    cin>>gen;

    if(gen==1){
        n='l';
        for(z=0;z<jml;z++){
            if(n==ktpd[z].gender){
                cout<<setfill(' ')
                    <<setw(38)<<"Daftar Nama"<<setw(38)<<endl;
                cout<<setfill(' ')
                    <<setw(5)<<left<<"no"
                    <<setw(13)<<left<<"NIK"
                    <<setw(23)<<left<<"nama"
                    <<setw(14)<<left<<"asal"
                    <<setw(14)<<left<<"gender"
                    <<setw(10)<<left<<"tanggal lahir"
                    <<endl;
                cout<<setfill(' ')
                    <<setw(5)<<i+1
                    <<setw(13)<<left<<ktpd[z].nik
                    <<setw(23)<<left<<ktpd[z].nama
                    <<setw(14)<<left<<ktpd[z].asal
                    <<setw(14)<<left<<ktpd[z].gender
                    <<setw(10)<<left<<ktpd[z ].tgllhir
                    <<endl;

            }
        }
    }
    else if (gen==2){
        n='p';
        for(z=0;z<jml;z++){
            if(n==ktpd[z].gender){
                cout<<setfill(' ')
                    <<setw(38)<<"Daftar Nama"<<setw(38)<<endl;
                cout<<setfill(' ')
                    <<setw(5)<<left<<"no"
                    <<setw(13)<<left<<"NIK"
                    <<setw(23)<<left<<"nama"
                    <<setw(14)<<left<<"asal"
                    <<setw(14)<<left<<"gender"
                    <<setw(10)<<left<<"tanggal lahir"
                    <<endl;
                cout<<setfill(' ')
                    <<setw(5)<<i+1
                    <<setw(13)<<left<<ktpd[z].nik
                    <<setw(23)<<left<<ktpd[z].nama
                    <<setw(14)<<left<<ktpd[z].asal
                    <<setw(14)<<left<<ktpd[z].gender
                    <<setw(10)<<left<<ktpd[z ].tgllhir
                    <<endl;

            }
        }
    }
}

void cari(){
    int tgl,z;
            cout<<"masukan tanggal lahir(ddmmyyyy):";
            cin>>tgl;

            for(z=0;z<jml;z++){
                if(tgl==ktpd[z].tgllhir){
                    cout<<setfill(' ')
                        <<setw(38)<<"Daftar Nama"<<setw(38)<<endl;
                    cout<<setfill(' ')
                        <<setw(5)<<left<<"no"
                        <<setw(13)<<left<<"NIK"
                        <<setw(23)<<left<<"nama"
                        <<setw(14)<<left<<"asal"
                        <<setw(14)<<left<<"gender"
                        <<setw(10)<<left<<"tanggal lahir"
                        <<endl;
                    cout<<setfill(' ')
                        <<setw(5)<<i+1
                        <<setw(13)<<left<<ktpd[z].nik
                        <<setw(23)<<left<<ktpd[z].nama
                        <<setw(14)<<left<<ktpd[z].asal
                        <<setw(14)<<left<<ktpd[z].gender
                        <<setw(10)<<left<<ktpd[z ].tgllhir
                        <<endl;
                }
            }

}

int main () {
	int *pil,pl;
	bool menu;
	menu=false;

	do{
        cout<<"1. tambah "<<endl;
        cout<<"2. tampilkan "<<endl;
        cout<<"3. edit "<<endl;
        cout<<"4. cari"<<endl;
        cout<<"Pilihan :";
        cin>>pl;

        pil=&pl;
        if(*pil==1){
            tambah();
            cout<<"Back";
            menu=true;
            getch();
            system("cls");
        }
        else if(*pil==2){
                tampil();
        }
        else if (*pil==3){
            int kb;
            cout<<"no buku yang mau di edit :";
            cin>>kb;
            kb=kb-1;
            cout<<"NIK	: "; cin>>ktpd[kb].nik;
            cout<<"nama	: "; cin>>ktpd[kb].nama;
            cout<<"asal	: "; cin>>ktpd[kb].asal;
            cout<<"gender	: "; cin>>ktpd[kb].gender;
            cout<<"tanggal lahir		: "; cin>>ktpd[kb].tgllhir;
        }
        else if(*pil==4){
                cari();
            }
    }while(menu=true);
}
