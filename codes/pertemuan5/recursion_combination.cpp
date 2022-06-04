#include <iostream>

using namespace std;

int factorial(int n)
{
  if (n == 1)
    return 1;
  else
    return n * factorial(n - 1);
}

int nCr(int n, int r)
{
  if (n < r)
    return 0;
  else
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main()
{
  int n, r;

  system("clear");

  cout << "Program Kombinasi dengan Rekursif" << endl;
  cout << "=================================" << endl;
  cout << endl;
  cout << "Masukkan angka untuk kombinasi N = ";
  cin >> n;
  cout << "Masukkan angka untuk kombinasi R = ";
  cin >> r;
  cout << "Hasil Kombinasi = " << nCr(n, r);
  cout << endl;

  return 1;
}