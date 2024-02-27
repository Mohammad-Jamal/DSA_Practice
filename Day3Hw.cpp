#include <iostream>
using namespace std;

int main()
{
  //* Print number from 280 to 250 with the help of for loop.
  int i;
  for (i = 280; i >= 250; i = i - 1)
  {
    cout << i << " ";
  }

  //* Print char from ‘A’ to ‘Z’ with the help of a for loop.
  for (char name = 'A'; name <= 'Z'; name = name + 1)
  {
    cout << name << " ";
  }

  //* Print char from ‘Z’ to ‘A’ with the help of a for loop.
  for (char name = 'Z'; name >= 'A'; name = name - 1)
  {
    cout << name << " ";
  }

  //* There is an Arithmetic Progression, First number is 220 and Common Difference is 7. So print all the numbers from 220 to 730 which follow the AP.

  for (int i = 220; i <= 730; i = i + 7)
  {
    cout << i << " ";
  }

  //* Print Sum of square of first n natural number.
  int n, sum = 0;
  cout << "Enter a number :";
  cin >> n;

  for (int i = 1; i <= n; i = i + 1)
  {
    sum = sum + (i * i);
  }

  cout << sum;

  //? Shortcut without for loop
  cout << (n * (n + 1) * (2 * n + 1)) / 6;

  //* Print Sum of cube of first n natural number
  int n, sum = 0;
  cout << "Enter a number :";
  cin >> n;
  for (int i = 1; i <= n; i = i + 1)
  {
    sum = sum + (i * i * i);
  }

  cout << sum;

  //? shortcut without for loop
  cout << (n * (n + 1) / 2) * (n * (n + 1) / 2);
  //? same but modified..
  cout << (n * n) * (n + 1) * (n + 1) / 4;

  //! Print nth fibonacci series
}