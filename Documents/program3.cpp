#include<iostream>
#include<conio.h>

using namespace std;

int main() {
	const float sks=3.5;
	long long int nim=20210801201;
	char name[15]="Prikenang PS", matkul[]="Struktur Data";
	float nilai1, nilai2, nilai3;
	
	nilai1=90;
	nilai2=80;
	nilai3=(nilai1+nilai2)/2;
	
	cout<<"Nama Mahasiswa	: "<<name<<"\n";
	cout<<"NIM		: "<<nim<<"\n";
	cout<<"Mata Kuliah	: "<<matkul<<"\n";
	cout<<"SKS		: "<<sks<<"\n";
	cout<<"Nilai Teori	: "<<nilai1<<"\n";
	cout<<"Nilai Praktik	: "<<nilai2<<"\n";
	cout<<"Nilai Akhir	: "<<nilai3<<"\n";
	getch();
}
