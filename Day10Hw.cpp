#include <iostream>
using namespace std;

int main()
{
  //* Write a program to convert binary numbers to decimal numbers using a for loop.
  int num, rem, ans = 0, mul = 1;

  cout << "Enter a binary number :";
  cin >> num;

  for (; num;)
  {
    rem = num % 10;
    num = num / 10;
    ans = rem * mul + ans;
    mul *= 2;
  }

  cout << "Binary to Decimal form : " << ans;

  //* Write a program to convert decimal numbers to binary numbers using a for loop.
  int num, rem, ans = 0, mul = 1;
  cout << "Enter a decimal number :";
  cin >> num;

  for (; num;)
  {
    rem = num % 2;
    num = num / 2;
    ans = rem * mul + ans;
    mul *= 10;
  }

  cout << "Decimal to Binary form : " << ans;

  //* Write a program to convert decimal numbers to Octal numbers.
  int num, rem, ans = 0, mul = 1;
  cout << "Enter a decimal number :";
  cin >> num;

  for (; num;)
  {
    rem = num % 8;
    num = num / 8;
    ans = rem * mul + ans;
    mul *= 10;
  }
  cout << "Decimal to Octal form : " << ans;

  //* Write a program to convert Octal numbers to decimal numbers.
  int num, rem, ans = 0, mul = 1;
  cout << "Enter a decimal number :";
  cin >> num;

  for (; num;)
  {
    rem = num % 10;
    num = num / 10;
    ans = rem * mul + ans;
    mul *= 8;
  }

  cout << "Octal to Decimal form : " << ans;

  //* Write a program to convert binary to Octal numbers
  int num, rem, ans = 0, mul = 1;
  cout << "Enter a binary number :";
  cin >> num;

  // todo 1st binary to decimal
  int decimal;
  for (; num;)
  {
    rem = num % 10;
    num = num / 10;
    ans = rem * mul + ans;
    mul *= 2;
  }
  decimal = ans;
  ans = 0, mul = 1;
  num = decimal;

  // //todo now decimal to octal
  for (; num;)
  {
    rem = num % 8;
    num = num / 8;
    ans = rem * mul + ans;
    mul *= 10;
  }

  cout << "Binary to Octal form : " << ans;

  //* Write a program to convert Octal numbers to binary numbers
  int num, rem, ans = 0, mul = 1;
  cout << "Enter a Octal number :";
  cin >> num;

  // todo 1st octal to decimal
  int decimal;
  for (; num;)
  {
    rem = num % 10;
    num = num / 10;
    ans = rem * mul + ans;
    mul *= 8;
  }

  decimal = ans;
  ans = 0, mul = 1;
  num = decimal;

  // todo now decimal to binary
  for (; num;)
  {
    rem = num % 2;
    num = num / 2;
    ans = rem * mul + ans;
    mul *= 10;
  }

  cout << "Octal to Binary form : " << ans;
}