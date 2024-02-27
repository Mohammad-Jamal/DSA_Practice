#include <iostream>
using namespace std;

int main()
{
  // int a,b,c;
  // cout<<'Enter a number :';
  // cin>>a;
  // cout<<'Enter one more  number :'
  // cin>>b;
  // c = a + b;
  // cout<<c;

  // int a = 65 ;
  // char c = 'b';
  // c=a;
  // a=c;
  // cout<<c; //? output: A
  // cout<<a; //? output: 98

  //? if-else in cpp
  int package, marks;
  cin >> package;
  cout << 'Enter your package :';
  if (package > 10)
  {
    cout << 'Accepted';
  }
  else
  {
    cout << 'Rejected';
  }
  cout << 'Enter your marks :';
  cin >> marks;

  if (marks > 33)
  {
    cout << 'Pass'; //? if only one syntax then no need of curly braces..
  }
  else
  {
    cout << 'Fail';
  }

  int a, b;
  cout << 'Enter a number :';
  cin >> a;
  cout << 'Enter one more number :';
  cin >> b;

  if (a > b)
  {
    cout << 'Yes';
  }
  else
  {
    cout << 'No';
  }

  //? Even or Odd number
  int num;
  cout << 'Enter number :';
  cin >> num;
  if (num % 2 == 0)
  {
    cout << 'Even number';
  }
  else
  {
    cout << 'Odd number';
  }

  int age;
  cout << 'Enter your age :';
  cin >> age;

  if (age > 18)
  {
    cout << 'Adult';
  }
  else
  {
    cout << 'Teenager';
  }

  //? Positive Negative or Zero
  int number;
  cout << "Enter a number :";
  cin >> number;

  if (number > 0)
  {
    cout << "Positive";
  }
  else if (number == 0)
  {
    cout << "Zero";
  }

  else if (number < 0)
  {
    cout << "Negative";
  }

  //? Vowel or Consonant

  char c;
  cin >> c;

  if (c == 'a')
    cout << "Vowel";

  else if (c == 'e')
    cout << "Vowel";

  else if (c == 'i')
    cout << "Vowel";

  else if (c == 'o')
    cout << "Vowel";

  else if (c == 'u')
    cout << "Vowel";

  else
    cout << "Consonant";

  //? Looping

  for (int count = 1; count <= 10; count = count + 1)
    cout << "Hello Jamal\n";

  //* Print n natural numbers

  int n;
  cin >> n;
  for (int i = 1; i <= n; i = i + 1)
    cout << i << endl;

  //* Print square of n natural numbers

  for (int i = 1; i <= n; i = i + 1)
    cout << i << "Square is : " << i * i << endl;

  //* Print n Even numbers

  for (int i = 1; i <= n; i = i + 1)
    if (i % 2 == 0)
    {
      cout << i << endl;
    }

  //*easy way

  for (int i = 2; i <= n; i = i + 2)
  {
    cout << i << endl;
  }

  //* Printing Odd numbers
  for (int i = 1; i <= n; i = i + 2)
  {
    cout << i << endl;
  }

  //* another way
  for (int i = 1; i <= n; i = i + 1)
  {
    if (i % 2 == 1)
    {
      cout << i << " ";
    }
  }
};