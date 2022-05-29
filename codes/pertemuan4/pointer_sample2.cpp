#include <iostream>
using namespace std;

int main()
{
  int *p, a = 25, b;
  p = &a;
  b = *p;

  cout << endl;
  cout << endl;
  cout << "Nilai a: " << a << endl;
  cout << "di alamat: " << p << endl;
  cout << endl;

  cout << "Nilai b: " << b << endl;
  cout << "di alamat: " << p << endl;
  cout << endl;

  return 0;
}