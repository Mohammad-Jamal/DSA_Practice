#include <iostream>
#include <math.h>
using namespace std;

// todo 1: Find the cube of a number using Function.
int findCube(int num)
{
  int result = pow(num, 3);
  return result;
}

// todo 2: Reverse a number n using Function, Constraints: -5000<=n<=5000
int findRev(int n)
{
  int rem, rev = 0;
  if (n >= -5000 && n <= 5000)
  {
    while (n)
    {
      rem = n % 10;
      n /= 10;
      rev = rev * 10 + rem;
    }

    return rev;
  }

  return 0;
}

// todo 3: There are three numbers a,b,c. Put the value of a into b, put value of b into c and put value of c into a. Do it using Function.

void jumble(int &a, int &b, int &c)
{
  int temp = a;
  a = c;
  c = b;
  b = temp;
  cout << "Now " << endl
       << "a is " << a << endl
       << "b is " << b << endl
       << "c is " << c << endl;
}

// todo 4: Swap 2 numbers a, b without using extra variables. Range of -10000<=a,b<=100000.

void Swap(int &a, int &b)
{
  a = a + b;
  b = a - b;
  a = a - b;
  cout << "After Swapping " << endl
       << "a is " << a << endl
       << "b is " << b << endl;
}

// todo 5: Print “Hello Coder Army” n times using Function.
void print(int n)
{
  int i = 1;
  while (i <= n)
  {
    cout << "Hello Coder Army.." << endl;
    i++;
  }
}

// todo 6: Given two numbers n, r. Find nCr (Combination). Use Function here.
//? first create factorial function
long long fact(int n)
{
  long long result = 1;
  for (int i = 1; i <= n; i++)
  {
    result *= i;
  }
  return result;
}

long long nCr(int n, int r)
{
  if (r > n)
    return 0;
  else
    return fact(n) / (fact(r) * fact(n - r));
}

int main()
{
  // todo 1: Find the cube of a number using Function.
  int n;
  cout << "Enter a number :";
  cin >> n;
  int cube = findCube(n);
  cout << "Cube of the number " << n << " is " << cube;

  // todo 2: Reverse a number n using Function, Constraints: -5000<=n<=5000
  int n;
  cout << "Enter the number:";
  cin >> n;
  int reverse = findRev(n);
  cout << "Reverse of the number " << n << " is " << reverse;

  // todo 3: There are three numbers a,b,c. Put the value of a into b, put value of b into c and put value of c into a. Do it using Function.
  int a, b, c;
  cout << "Enter three numbers :";
  cin >> a >> b >> c;
  cout << "Initially " << endl
       << "a is " << a << endl
       << "b is " << b << endl
       << "c is " << c << endl;
  jumble(a, b, c);
  cout << "A value is " << a;

  // todo 4: Swap 2 numbers a, b without using extra variables. Range of -10000<=a,b<=100000.
  int a, b;
  cout << "Enter two numbers :";
  cin >> a >> b;
  cout << "Initially " << endl
       << "a is " << a << endl
       << "b is " << b << endl;
  Swap(a, b);

  // todo 5: Print “Hello Coder Army” n times using Function.
  int n;
  cout << "Enter the number of times you want to print :";
  cin >> n;
  print(n);

  // todo 6: Given two numbers n, r. Find nCr (Combination). Use Function here.
  int n, r;
  cout << "Enter n and r values :";
  cin >> n >> r;
  long long nCrCombo = nCr(n, r);
  cout << "nCr (Combination) of " << n << " & " << r << " is " << nCrCombo;
}