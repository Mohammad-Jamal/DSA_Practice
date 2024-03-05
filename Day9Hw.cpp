#include <iostream>
using namespace std;

int main()
{
  //* 1: Take a number n from the user and print all the even numbers between 1 and n(inclusive). Do this using while and do while loop separately.
  int n;
  cout << "Enter n value :";
  cin >> n;

  //? using while loop
  int i = 1;
  while (i <= n)
  {
    if (i % 2 == 0)
      cout << i << " ";

    i++;
  }

  //? using do-while loop
  int i = 1;
  do
  {
    if (i % 2 == 0)
      cout << i << " ";
    i++;
  } while (i <= n);

  //* 2: Find the factorial of a number n using a while loop and do a while loop.
  int n;
  cout << "Enter n value : ";
  cin >> n;

  ? using while loop int i = 1;
  while (i <= n)
  {
    if (n % i == 0)
      cout << i << " ";
    i++;
  }

  //? using do-while loop
  int i = 1;
  do
  {
    if (n % i == 0)
      cout << i << " ";
    i++;
  } while (i <= n);

  //* 3: Given a number n, print all the numbers from 1 to n(inclusive) which are not divisible by 3 and 5. (use Continue here).
  int n;
  cout << "Enter a number :";
  cin >> n;

  int i;
  for (i = 1; i <= n; i++)
  {
    if ((i % 3 == 0) && (i % 5 == 0))
      continue;
    cout << i << " ";
  }

  //* 5: Print all the Capital and small letters  using a while loop. It means A-Z, then a-z.
  char name;
  name = 'A';
  while (name <= 'Z')
  {
    cout << name << " ";
    name++;
  }

  cout << endl;

  name = 'a';
  while (name <= 'z')
  {
    cout << name << " ";
    name++;
  }

  //* 6: Give a number n, find if it is prime or not, use a while loop and break here to solve it.

  int n;
  cout << "Enter a number : ";
  cin >> n;
  int i = 2;
  int prime = 1;

  while (i < n)
  {
    if (n % i == 0)
    {
      prime = 0;
      break;
    }

    i++;
  }
  if (prime)
    cout << "Prime";
  else
    cout << "Not Prime";
}