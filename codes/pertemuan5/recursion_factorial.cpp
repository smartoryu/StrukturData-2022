#include <iostream>

using namespace std;

int factorial(int n)
{
  if (n == 1)
    return 1;
  else
    return n * factorial(n - 1);
}

int main()
{
  int bil;

  system("clear");

  cout << "Program Faktorial dengan Rekursif" << endl;
  cout << "=================================" << endl;
  cout << endl;
  cout << "Masukkan bilangan bulat [integer]" << endl;
  cout << "bilangan = ";
  cin >> bil;
  cout << factorial(bil);
  cout << endl;

  return 1;
}