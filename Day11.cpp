#include <iostream>
using namespace std;

int main()
{

  //* Bitwise Compliment
  int n, rem, rev = 0;
  cout << "Enter a number : ";
  cin >> n;
  int num = n;
  if (n < 0)
    cout << "False";
  return 0;
  if (n == 0)
    cout << 1;
  while (num)
  {
    rem = num % 10;
    num /= 10;
    rev = rev * 10 + rem;
  }
  if (rev == n)
    cout << "true" << endl
         << n;
  else
    cout << "false" << endl
         << n;

  //* check square root of a number or nearest value
  int n;
  cout << "Enter the number :";
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    if (i * i == n || (i + 1) * (i + 1) > n)
    {
      cout << i;
      break;
    }
  }
}
