#include <iostream>

using namespace std;

int main()
{
	float bil1, bil2, tambah, kurang, kali, bagi;
	int modulus;

	cout << "Masukkan bilangan ke-1: ";
	cin >> bil1;
	cout << "Masukkan bilangan ke-2: ";
	cin >> bil2;

	tambah = bil1 + bil2;
	kurang = bil1 - bil2;
	kali = bil1 * bil2;
	bagi = bil1 / bil2;
	modulus = (int)bil1 % (int)bil2;

	cout << "Hasil penjumlahan dari " << bil1 << " dan " << bil2 << " = " << tambah << endl;
	cout << "Hasil pengurangan dari " << bil1 << " dan " << bil2 << " = " << kurang << endl;
	cout << "Hasil perkalian dari " << bil1 << " dan " << bil2 << " = " << kali << endl;
	cout << "Hasil pembagian dari " << bil1 << " dan " << bil2 << " = " << bagi << endl;
	cout << "Hasil modulus dari " << bil1 << " dan " << bil2 << " = " << modulus << endl;

	return 0;
}
