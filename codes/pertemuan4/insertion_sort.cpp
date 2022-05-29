#include <iostream>
#include <iomanip>

using namespace std;

int arr[10], arr2[10];
int n;

void tukar(int a, int b)
{
  int t;
  t = arr[b];
  arr[b] = arr[a];
  arr[a] = t;
}

void insertion_sort()
{
  int temp, i, j;
  for (i = 0; i < n; i++)
  {
    temp = arr[i];
    j = i - 1;
    while (arr[j] > temp && j >= 0)
    {
      arr[j + 1] = arr[j];
      j--;
    }

    arr[j + 1] = temp;
  }
}

int main()
{
  system("clear");
  cout << "\t\t\t===== PROGRAM INSERTION SORT =====\n\n";
  cout << "\t\t\t---------- (ASCENDING) -----------\n\n";
  cout << endl;

  // input data
  cout << "Masukkan jumlah data = ";
  cin >> n;
  cout << "\n";

  for (int i = 0; i < n; i++)
  {
    cout << "Masukkan data ke-" << i + 1 << " = ";
    cin >> arr[i];
    arr2[i] = arr[i];
  }

  cout << "\n\n";
  cout << "Data sebelum diurutkan : " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << setw(3) << arr[i];
  }

  insertion_sort();
  cout << "\n\n";

  cout << "Data setelah diurutkan : " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << setw(3) << arr[i];
  }

  cout << "\n\n\n";
  cout << endl;

  cout << "\t\t\t----------------------------------" << endl;
  cout << "\t\t\t           TERIMA KASIH           " << endl;
  cout << "\t\t\t----------------------------------" << endl;

  return 0;
}