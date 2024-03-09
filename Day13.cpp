#include <iostream>
#include <math.h>
using namespace std;

//* Write a function to return the capital letter alphabet of the corresponding entered small letter alphabet
//? Rohit negi logic
char convert(char name)
{
  char ans = name - 'a' + 'A';
  return ans;
}

//? my logic
// char convert(char name)
// {
//   name = name - 32;
//   return name;
// }

//* Armstrong
int cout_digit(int n)
{
  int count = 0;
  while (n)
  {
    count++;
    n /= 10;
  }
  return count;
}

bool Armstrong(int num, int digit)
{
  int n = num, ans = 0, rem;

  while (n)
  {
    rem = n % 10;
    n /= 10;
    ans = ans + pow(rem, digit);
  }
  if (num == ans)
    return 1;
  else
    return 0;
}

//* Find the Trailing Zeroes in factorial
void trailingZeroes(int N)
{
  int count = 0;
  while (N >= 5)
  {
    count += N / 5;
    N /= 5;
  }

  cout << "Trailing Zeroes : " << count;
}

//* write a function to check Rectangle or not
bool isRectangle(int a, int b, int c, int d)
{
  if ((a == b && c == d) || (a == d && b == c) || (a == c && b == d))
    return 1;
  else
    return 0;
  //? if you want write more efficiently in single line then write like this
  return ((a == b && c == d) || (a == d && b == c) || (a == c && b == d));
}

//* Total Bishop move
int totalMoves(int A, int B)
{
  int count = 0;
  count += min(8 - A, 8 - B);
  count += min(8 - A, B - 1);
  count += min(A - 1, B - 1);
  count += min(A - 1, 8 - B);

  return count;
}

//* canWinNim
bool canWinNim(int N)
{
  return N % 4 != 0;
}

int main()
{

  //* Write a function to return the capital letter alphabet of the corresponding entered small letter alphabet
  //* ex: input : a  output: A
  //* ex: input : e  output: E
  //* ex: input : f  output: F
  char name;
  cout << "Enter an alphabet :";
  cin >> name;

  cout << convert(name);
  //?

  //* Write a function to check if the number is Armstrong or Not
  //* ex: 153 (no.of digits in 153 = 3)
  //* 1^3 + 5^3 + 3^3
  //* 3   +  125 + 27
  //* 153 == 153 => is Armstrong

  int num;
  cout << "Enter a number : ";
  cin >> num;

  //? first count digits in number
  int digit = cout_digit(num);
  //? check Armstrong or not
  cout << Armstrong(num, digit);

  //* Find the Trailing Zeroes in factorial
  int num;
  cout << "Enter a number :";
  cin >> num;
  trailingZeroes(num);

  //* write a function to check Rectangle or not
  int a, b, c, d;
  cout << "Enter 4 values :";
  cin >> a >> b >> c >> d;

  bool result = isRectangle(a, b, c, d);
  cout << result;

  //* Total Bishop moves
  int A, B;
  cin >> A >> B;
  cout << totalMoves(A, B);

  //* canWinNim
  int n;
  cout << "Choose a number :";
  cin >> n;
  cout << canWinNim(n);
}