#include <iostream>

using namespace std;

int S(int n)
{
  if (n == 1)
    return 1;
  else
    return n + S(n - 1);
}

int main()
{
  int n, i, total = 0;

  cout << endl;
  cout << "Welcome\n\n";
  cout << "Deret bilangan 1\n\n";
  cout << "Masukkan n : ";
  cin >> n;

  for (i = 1; i <= n; i++)
  {
    if (i == 1)
      cout << i;
    else
      cout << " + " << i;
  }

  cout << " = " << S(n) << endl;
  cout << "\nThank you!\n";

  return 0;
}