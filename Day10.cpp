#include <iostream>
using namespace std;

int main()
{

  int num;
  cout << "Enter the number :";
  cin >> num;
  int ans = 0, rem, mul = 1;

  //* Decimal to Binary
  while (num > 0)
  {
    //? remainder
    rem = num % 2; // or rem = num & 1(//? in bitwise operator);
    //? quotient
    num = num / 2; // or num = num >> 1(//? in bitwise operator);
    //? answer
    ans = rem * mul + ans; // or ans += rem * mul;
    //? update mul
    mul *= 10; // or mul = mul * 10;
  }

  cout << "Binary form : "<<ans;

  //* Binary to Decimal
    while (num)
    {
      // remainder or last digit
      rem = num % 10;
      // update number or quotient
      num = num / 10;
      // ans
      ans = rem * mul + ans;
      // update mul
      mul *= 2;
    }

    cout << "Decimal form : " << ans;

  //* Decimal to Octal

  while (num)
  {
    // remainder
    rem = num % 8;
    // update number or quotient
    num = num / 8;
    // ans
    ans = rem * mul + ans;
    // update mul
    mul *= 10;
  }

  cout << "Decimal to Octal form : " << ans;

  //* Octal to Decimal

  while (num)
  {
    // remainder or last digit
    rem = num % 10;
    // update number or quotient
    num = num / 10;
    // ans
    ans = rem * mul + ans;
    // update mul
    mul *= 8;
  }

  cout << "Octal to Decimal form : " << ans;

  //* Binary to Octal form
  //? 1.convert to binary to decimal and then decimal to octal
  int decimal;

  // todo 1. binary to decimal part
  while (num)
  {
    // last digit
    rem = num % 10;
    // update number
    num = num / 10;
    // ans
    ans = rem * mul + ans;
    // update mul
    mul *= 2;
  }

  decimal = ans;
  num = decimal;
  ans = 0;
  mul = 1;

  // //todo 2. decimal to octal part
  while (num)
  {
    // remainder
    rem = num % 8;
    // update number
    num = num / 8;
    // ans
    ans = rem * mul + ans;
    // update mul
    mul *= 10;
  }

  cout << "Binary to Octal form : " << ans;

  //* Octal to Binary Form
  //? Convert Octal to decimal and then decimal to Binary
  int decimal;

  //todo fist convert octal to decimal part
  while (num) 
  {
    // last digit
    rem = num % 10;
    // update number
    num = num / 10;
    // ans
    ans = rem * mul + ans;
    // update mul
    mul *= 8;
  }

  decimal =ans;
  ans = 0;
  num = decimal;
  mul = 1;

  //todo second convert decimal to binary part
  while (num)
  {
    // remainder
    rem = num % 2;
    // update number
    num = num / 2;
    // ans
    ans = rem * mul + ans;
    // update mul
    mul *= 10;
  }

  cout<<"Octal to Binary form : "<<ans;

}