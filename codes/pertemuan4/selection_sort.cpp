#include <iostream>
#include <iomanip>

using namespace std;

// fungsi algoritma selection sort
void SelectionSort(int arr[], const int size)
{
  int i, j, kecil, temp;
  for (int i = 0; i < size; i++)
  {
    kecil = i;

    // Mencari nilai terkecil dari array
    for (int j = i + 1; j < size; j++)
    {
      if (arr[kecil] > arr[j])
      {
        kecil = j;
      }
    }
    temp = arr[i];
    arr[i] = arr[kecil];
    arr[kecil] = temp;
  }
}

int main()
{
  int data[10];
  int temp;
  int n;

  system("clear");

  cout << "*====================================*" << endl;
  cout << "* Selamat datang di aplikasi *" << endl;
  cout << "* Selection Sort (ASCENDING) *" << endl;
  cout << "*====================================*" << endl;
  cout << "\n\n";

  // Input jumlah data
  cout << "Masukkan jumlah data = ";
  cin >> n;
  cout << "-----------------------" << endl;

  // Input data
  for (int i = 0; i < n; i++)
  {
    cout << "Masukkan data ke-" << i + 1 << " = ";
    cin >> data[i];
  }
  cout << endl;

  // Tamplikan data sebelum diurutkan
  cout << "Data sebelum diurutkan : " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << setw(3) << data[i] << " ";
  }
  cout << "\n\n\n";

  cout << "Proses Selection Sort................." << endl;
  SelectionSort(data, n);
  cout << endl;

  cout << "Data setelah diurutkan : " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << setw(3) << data[i] << " ";
  }
  cout << "\n\n\n";
  cout << endl;

  cout << "--------------------------------------" << endl;
  cout << "             TERIMA KASIH             " << endl;
  cout << "--------------------------------------" << endl;
  return 0;
}