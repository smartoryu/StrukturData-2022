#include <iostream>

using namespace std;

int factorial(int n)
{
  if (n == 1)
    return 1;
  else
    return n * factorial(n - 1);
}

int nPr(int n, int r)
{
  if (n < r)
    return 0;
  else
    return factorial(n) / (factorial(n - r));
}

int main()
{
  int n, r;

  system("clear");

  cout << "Program Permutasi dengan Rekursif" << endl;
  cout << "=================================" << endl;
  cout << endl;
  cout << "Masukkan angka untuk permutasi N = ";
  cin >> n;
  cout << "Masukkan angka untuk permutasi R = ";
  cin >> r;
  cout << "Hasil Permutasi = " << nPr(n, r);
  cout << endl;

  return 1;
}