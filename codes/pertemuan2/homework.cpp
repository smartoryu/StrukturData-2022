#include <iostream>
#include <iomanip>

using namespace std;

void kalkulator()
{
  float bil1, bil2, tambah, kurang, kali, bagi;
  int modulus;
  system("clear");

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
}

void kelulusan()
{
  double data_lulus[2][4];
  int i, j, k, avg;

  system("clear");

  // inisialisasi data
  data_lulus[0][0] = 2020;
  data_lulus[0][1] = 50;
  data_lulus[0][2] = 70;

  data_lulus[1][0] = 2021;
  data_lulus[1][1] = 50;
  data_lulus[1][2] = 90;

  // menampilkan data kelulusan
  cout << "Tampil Data Lulus" << endl << endl;
  cout << "Tahun  Teknik Informatika  Sistem Informasi  Rata2" << endl;

  for (i = 0; i <= 1; i++) {
    cout << data_lulus[i][0] << " ";

    // hitung rata-rata per tahun
    data_lulus[i][3] = (data_lulus[i][1] + data_lulus[i][2]) / 2;

    for (j = 1; j <= 3; j++) {
      cout << setw(14) << data_lulus[i][j];
    }

    cout << endl;
  }

  cout << "Rata2";
  for (i = 1; i <= 2; i++) {
    for (j = 0; j <= 1; j++) {
      avg += data_lulus[j][i];
    }

    cout << setw(14) << avg / 2;
    avg = 0;
  }
  cout << endl;
}

int main()
{
  // kalkulator();
  kelulusan();

  return 0;
}
