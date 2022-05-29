#include<iostream>
#include<conio.h>
#include<windows.h>

using namespace std;

void gotoxy(int x, int y){
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

main() {
	gotoxy(10,4);
	cout<<"Hello"<<endl;
	getch();
}
