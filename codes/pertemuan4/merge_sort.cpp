#include <iostream>
#include <iomanip>

using namespace std;

int arr[50];
void merge(int, int, int);

void merge_sort(int low, int high)
{
  int mid;
  if (low < high)
  {
    mid = (low + high) / 2;
    merge_sort(low, mid);
    merge_sort(mid + 1, high);
    merge(low, mid, high);
  }
}

void merge(int low, int mid, int high)
{
  int h, i, j, arr2[50], k;

  h = low;
  i = low;
  j = mid + 1;

  while ((h <= mid) && (j <= high))
  {
    if (arr[h] <= arr[j])
    {
      arr2[i] = arr[h];
      h++;
    }
    else
    {
      arr2[i] = arr[j];
      j++;
    }
    i++;
  }

  if (h > mid)
  {
    for (k = j; k <= high; k++)
    {
      arr2[i] = arr[k];
      i++;
    }
  }
  else
  {
    for (k = h; k <= mid; k++)
    {
      arr2[i] = arr[k];
      i++;
    }
  }

  for (k = low; k <= high; k++)
  {
    arr[k] = arr2[k];
  }
}

int main()
{
  int n, i;

  // system("clear");

  cout << "*====================================*" << endl;
  cout << "* Selamat datang di aplikasi *" << endl;
  cout << "* Merge Sort (ASCENDING) *" << endl;
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
    cin >> arr[i];
  }
  cout << endl;

  merge_sort(1, n);
  cout << endl;

  cout << "Data setelah diurutkan : " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << setw(3) << arr[i] << " ";
  }
  cout << endl;
  cout << endl;

  cout << "--------------------------------------" << endl;
  cout << "             TERIMA KASIH             " << endl;
  cout << "--------------------------------------" << endl;

  return 0;
}