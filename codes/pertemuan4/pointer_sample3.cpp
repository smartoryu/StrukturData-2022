#include <iostream>
using namespace std;

int main()
{
  int nilai[3], *p;
  nilai[0] = 120;
  nilai[1] = 250;
  nilai[2] = 750;

  p = &nilai[0];

  cout << "nilai " << *p << " ada di alamat memori " << p << endl;
  cout << "nilai " << *(p + 1) << " ada di alamat memori " << p + 1 << endl;
  cout << "nilai " << *(p + 2) << " ada di alamat memori " << p + 2 << endl;

  return 0;
}
