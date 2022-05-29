#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main()
{
  int data_lulus[3][2];
  int i, j, total;
  system("clear");

  total = 0;

  // inisialisasi data
  data_lulus[0][0] = 15;
  data_lulus[0][1] = 20;
  data_lulus[1][0] = 15;
  data_lulus[1][1] = 25;
  data_lulus[2][0] = 150;
  data_lulus[2][1] = 250;

  // menampilkan data kelulusan
  cout<< "Tampil Data Lulus" << endl; cout <<endl;
  cout<< "           Fasilkom TEKNIK"<<endl;
    for (i=0; i<=2; i++) {
      cout<<"Tahun ke-"<<i+1;
      for (j=0; j<=1; j++) {
        cout<<setw(7)<<data_lulus[i][j];
        total = total + data_lulus[i][j];
      }
      cout<<endl;
    }
  cout<<endl;
  cout<<"Jumlah yang lulus    = "<<total<<endl;
  cout<<"Rata-rata yang lulus = "<<total / (i*j)<<endl;

  return 0;
}