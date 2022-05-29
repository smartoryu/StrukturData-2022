#include<iostream>
#include<conio.h>

using namespace std;

enum hari { senin, selasa, rabu, kamis, jumat, sabtu, minggu };
//enum hari { senin, selasa, rabu, kamis, jumat, sabtu, minggu };

int main() {
	enum hari sekarang;
	sekarang = kamis;
	cout<<"Sekarang hari ke-"<<sekarang + 1;
	getch();
}
