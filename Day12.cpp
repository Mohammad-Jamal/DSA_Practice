#include <iostream>
using namespace std;

int Sum(int x, int y) //? function declare
{
  int ans = x + y; //? this block is function define
  return ans;
}

int Mul(int x, int y) //? function declare
{
  int ans = x * y; //? this block is function define
  return ans;
}

void justPrint()
{
  cout << "Hello Coder Army..\n";
}

bool prime(int n)
{
  if (n < 2)
    return 0;

  for (int i = 2; i < n; i++)
  {
    if (n % i == 0)
      return 0;
  }

  return 1;
}

int fact(int n = 4) //? default parameter
{
  int ans = 1;
  for (int i = 1; i <= n; i++)
    ans *= i;

  return ans;
}

int main()
{
  int a, b;
  cout << "Enter 2 numbers :";
  cin >> a >> b;

  //* write a function to add two numbers
  cout << "Sum is " << Sum(a, b) << endl; //? function call
  // you can write like this
  // int result = Sum(a,b);
  // cout<<result;

  //* write a function to multiply two numbers
  cout << "Multiplication is " << Mul(a, b) << endl; //? function call

  //* write a function without returning anything and just print on console
  justPrint();

  //* Wite a function to print prime number or not

  //? a is prime or not
  cout << a << " is " << prime(a) << endl;
  //? factorial of a
  cout << "Factorial of " << a << " is " << fact(a) << endl;
  //? b is prime or not
  cout << b << " is " << prime(b) << endl;
  //? factorial of b
  cout << "Factorial of " << b << " is " << fact(b) << endl;
  //? b-a is prime or not
  cout << b - a << " is " << prime(b - a) << endl;
  //? factorial of b-a
  cout << "Factorial of " << b - a << " is " << fact(b - a) << endl;
}