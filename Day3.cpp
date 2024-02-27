#include <iostream>
using namespace std;

int main()
{

  //* Print a to z alphabets
  for (char name = 'a'; name <= 'z'; name = name + 1)
  {
    cout << name << endl;
  }

  //* Print 10 to 1 numbers in reverse

  for (int i = 10; i >= 1; i = i - 1)
  {
    cout << i << endl;
  }

  //* Print 1,4,7,10,13,17.....100
  for (int i = 1; i <= 100; i = i + 3)
  {
    cout << i << " ";
  }

  //* Printing Tables

  int n;
  cin >> n;

  for (int i = 1; i <= 10; i = i + 1)
  {
    cout << n << " * " << i << " = " << n * i << endl;
  }

  //* Print power of a number
  int n, p, num, i;
  cout << "Enter number :";
  cin >> n;
  cout << "Enter power of number :";
  cin >> p;
  num = n;

  for (i = 1; i < p; i = i + 1)
  {
    num = num * n;
  }

  cout << p << " power of " << n << " is " << num;

  //* Sum of n natural numbers
  int sum = 0, n, i;

  cin >> n;
  for (i = 1; i <= n; i = i + 1)
  {
    sum = sum + i;
  }
  cout << sum;

  //* Shortcut trick

  cout << n * (n + 1) / 2;

  //* Sum of Squares of n natural numbers
  int n = 6;

  cout << n * (n + 1) * (2 * n + 1) / 6;

  //? Long way
  for (i = 1; i <= n; i = i + 1)
  {
    sum = sum + (i * i);
  }

  cout << sum;

  //* Factorial of a number
  int n, fact = 1, i;
  cout << "Enter number :";
  cin >> n;

  for (i = 1; i <= n; i = i + 1)
  {
    fact = fact * i;
  }

  cout << fact;

  //* Prime number or not

  int n;
  cout << "Enter a number :";
  cin >> n;

  if (n < 2)
  {
    cout << "Not Prime";
    return 0;
  }
  else if (n == 2)
  {
    cout << "Prime number";
    return 0;
  }
  else
  {
    for (int i = 2; i < n; i = i + 1)
    {
      if (n % 2 == 0)
      {
        cout << "Not a prime number";
        return 0;
      }
    }

    cout << "Prime number..";
  }

  //* Fibonacci series

  int last = 0, prev = 1, current, n;
  cout << "Enter n number :";
  cin >> n;
  current = last + prev;

  cout << last << " " << prev << " ";
  for (int i = 1; i < n - 1; i = i + 1)
  {

    cout << current << " ";
    last = prev;
    prev = current;
    current = prev + last;
  }
}
