#include<iostream>

using namespace std;

int main() {
	char huruf[5] = {'a', 'b', 'c', 'd', 'e'};
	
	huruf[2] = 'z';
	
	cout<<"Huruf: "<< huruf[2] << endl;
	
	return 0;
}
