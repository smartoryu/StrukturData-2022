#include <iostream>

using namespace std;

int fibo(int n)
{
  if (n == 0)
    return 0;
  else if (n == 1)
    return 1;
  else
    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
  int bil;

  cout << endl;
  cout << "Program Fibonacci dengan Rekursif" << endl;
  cout << "=================================" << endl;
  cout << endl;
  cout << "Masukkan bilangan : ";
  cin >> bil;
  cout << "Fibonacci("<<bil<<") = " << fibo(bil);
  cout << endl;

  return 1;
}