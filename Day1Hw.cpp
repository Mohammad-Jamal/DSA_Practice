#include <iostream>
using namespace std;

int main()
{
  int a, b;
  //* Two numbers are given, print their product
  cout << "Enter a number :";
  cin >> a;
  cout << "Enter one more number :";
  cout >> b;
  cout << "Product of " << a << " & " << b << " is " << a * b;

  //* Two numbers are given a and b, print a-b
  cout << "Enter a number :";
  cin >> a;
  cout << "Enter one more number :";
  cout >> b;
  cout << "Subtraction of " << a << " & " << b << " is " << a - b;

  //* Print 6*3 in output, don’t print 18, just 6*3 should be in the output screen.
  cout << "6 * 3";

  //* Ticket Price Calculator: Create a program that asks the user for their age and checks if they qualify for a discounted ticket price (e.g., under 12 and over 65 get discounts), If they are eligible print “YES” else “NO

  int age;
  cout << "Enter your age :";
  cin >> age;
  if (age <= 12 || age >= 65)
  {
    cout << "YES" << endl
         << "You are eligible for ticket discount";
  }
  else
  {
    cout << "NO" << endl
         << "You are not eligible for ticket discount";
  }

  //? For loop problems

  //* Print “India will win the World Cup 2023”, 20 times.
  for (int i = 1; i <= 20; i = i + 1)
  {
    cout <<“India will win the World Cup 2023” << endl;
  }

  //* Print all Odd numbers from 1 to n, take n as an input from the user.
  int n;
  cout << "Enter a number :";
  cin >> n;
  for (int i = 1; i <= n; i = i + 1)
  {
    if (i % 2 == 1)
    {
      cout << i << " ";
    }
  }

  //* Print all numbers from 1 to n, which is divisible by 4. Take n as an input from the user.
  int n, i;
  cout << "Enter a number :";
  cin >> n;
  for (i = 1; i <= n; i = i + 1)
  {
    if (i % 4 == 0)
    {
      cout << i << " ";
    }
  }
}