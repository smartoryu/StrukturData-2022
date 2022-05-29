#include <iostream>
using namespace std;

int main()
{
  int var1 = 10;
  int var2 = 24;
  int x, *a;
  int *poin = NULL;
  x = 7;
  a = &x;

  cout << endl;
  cout << "Address of var1: " << &var1 << endl;
  cout << endl;

  cout << "Address of x: " << &x << endl;
  cout << "Value of x: " << x << endl;
  cout << endl;

  cout << "Address of a: " << &a << endl;
  cout << "Value of a: " << a << endl;
  cout << endl;

  cout << "Address of poin: " << &poin << endl;
  cout << "Value of poin: " << poin << endl;
  cout << endl;

  long int num1 = 0, num2 = 0;
  long int *p = NULL;

  p = &num1;
  *p = 2;
  ++num2;
  num2 += *p;

  p = &num2;
  ++*p;

  printf("%ld %ld", num1, num2);
  cout << endl;

  printf("%ld %ld", *p, *p + num2);
  cout << endl;

  return 0;
}