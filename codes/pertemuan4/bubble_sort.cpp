#include <iostream>

using namespace std;

// variabel array
int arr[10], arr2[10];

// variabel jumlah data
int n;

// fungsi algoritma bubble sort
void tukar(int a, int b)
{
  int t;
  t = arr[b];
  arr[b] = arr[a];
  arr[a] = t;
}

// fungsi input data
void Input()
{
  cout << "Masukkan jumlah data = ";
  cin >> n;
  cout << "-----------------------" << endl;

  for (int i = 0; i < n; i++)
  {
    cout << "Masukkan data ke-" << i + 1 << " = ";
    cin >> arr[i];
    arr2[i] = arr[i];
  }
  cout << endl;

  cout << "Data sebelum diurutkan : " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\n\n\n";
}

// fungsi untuk menampilkan data
void Tampil()
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

// fungsi untuk menjalankan bubble sort
void bubble_sort()
{
  for (int i = 0; i < n; i++)
  {
    for (int j = n - 1; j >= i; j--)
    {
      if (arr[j] < arr[j - 1])
        tukar(j, j - 1);
    }
    Tampil();
  }
  cout << endl;

  cout << "Data setelah diurutkan : " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\n\n\n";

  cout << endl;
}

int main()
{
  system("clear");

  cout << "*====================================*" << endl;
  cout << "* Selamat datang di aplikasi *" << endl;
  cout << "* Bubble Sort (ASCENDING) *" << endl;
  cout << "*====================================*" << endl;
  cout << "\n\n";

  Input();

  cout << "Proses Bubble Sort...................." << endl;
  cout << "--------------------------------------" << endl;
  Tampil();
  bubble_sort();
  cout << "--------------------------------------" << endl;
  cout << "             TERIMA KASIH             " << endl;
  cout << "--------------------------------------" << endl;
  return 0;
}
