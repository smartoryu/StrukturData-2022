#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main()
{
  int data_lulus[3][3];
  int i, j, total;
  float avg_prodi;
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
  cout<< "           Fasilkom TEKNIK  Rata-rata"<<endl;
    for (i=0; i<=2; i++) {
      cout<<"Tahun ke-"<<i+1;
      data_lulus[i][2] = (data_lulus[i][0] + data_lulus[i][1]) / 2;
      
      for (j=0; j<=2; j++) {
        cout<<setw(7)<<data_lulus[i][j];
        total = total + data_lulus[i][j];
      }
      cout<<endl;
    }
  cout<<endl;
  cout<<"Jumlah yang lulus    = "<<total<<endl;
  cout<<"Rata-rata yang lulus = "<<total / (i*2)<<endl;

  return 0;
}