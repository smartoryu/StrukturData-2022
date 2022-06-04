#include <iostream>

using namespace std;

int S(int n)
{
  if (n == 1)
    return 2;
  else
    return (2 * n) + S(n - 1);
}

int main()
{
  int n, i, total = 0;

  cout << endl;
  cout << "Welcome\n\n";
  cout << "Deret bilangan 2\n\n";
  cout << "Masukkan n : ";
  cin >> n;

  for (i = 2; i <= n; i += 2)
  {
    if (i == 2)
      cout << i;
    else
      cout << " + " << i;
  }

  cout << " = " << S(n) << endl;
  cout << "\nThank you!\n";

  return 0;
}