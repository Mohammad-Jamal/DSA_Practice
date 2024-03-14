#include <iostream>
using namespace std;

int main()
{
  //*1: Temperature Range: Write a program that checks if a given temperature is suitable for swimming. If the temperature is between 70 and 90 (Excluded) degrees Fahrenheit print yes, else NO.
  int temperature;
  cout << "Enter the temperature : ";
  cin >> temperature;

  if (temperature > 70 && temperature < 90)
    cout << "Yes";
  else
    cout << "No";

  //* 2: Even and Positive Number: Write a program that prints “YES” if a given number is both even and positive, otherwise it will print “NO”

  int n;
  cout << "Enter a number :";
  cin >> n;
  if (n > 0 && n % 2 == 0)
    cout << "YES";
  else
    cout << "NO";

  //* 3: Age Check: Implement a program that checks if a person is a teenager. A teenager is someone whose age is between 13 and 19 (inclusive).
  int age;
  cout << "Enter th age :";
  cin >> age;

  if (age >= 13 && age <= 19)
    cout << "Teenager";
  else
    cout << "Not teenager";

  //* 4: Take three numbers a,b,c from the user, print yes if a is either greater than b or c. Otherwise print NO.

  int a, b, c;
  cout << "Enter a value :";
  cin >> a;
  cout << "Enter b value :";
  cin >> b;
  cout << "Enter c value :";
  cin >> c;

  if (a > b || a > c)
    cout << "Yes";
  else
    cout << "No";

  //* 5: What will be the result below according to the precedence table.

  // todo    2*3-48==5/4*6
  // todo    6<<2-4*8/2
  // todo    5>4<3/2-8%4+5
  // todo    14-8+92>>2+70
}