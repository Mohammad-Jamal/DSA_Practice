#include <iostream>
using namespace std;

int main()
{
  //* While loop
  // syntax
  // initialization;
  // while(iteration/condition)
  // {
  //   // your logic
  //   update;
  // }

  //* print 1 to 10 numbers using while loop
  int i = 1;
  while (i <= 10)
  {
    cout << i << " ";
    i++;
  }

  //* Print 2 table using while loop
  int i = 1;
  while (i <= 10)
  {
    cout << "2 x " << i << " = " << 2 * i << endl;
    i++;
  }

  //* Print factors of n
  int n;
  cin >> n;
  int i = 1;
  while (i <= n)
  {
    if (n % i == 0)
      cout << i << " ";

    i++;
  }

  //* Print even numbers of n
  int n;
  cout << "Enter the input :";
  cin >> n;
  int i = 1;
  while (i <= n)
  {
    if (i % 2 == 0)
      cout << i << " ";

    i++;
  }

  //* Print odd numbers of n
  int n;
  cout << "Enter the input :";
  cin >> n;
  int i = 1;
  while (i <= n)
  {
    if (i % 2 == 1)
      cout << i << " ";

    i++;
  }

  //* do-while loop
  // syntax

  // initialization;
  // do {
  //   //your logic
  //   update;
  // } while(iteration/condition);

  //* Print 1 to n numbers using do-while loop;
  int n;
  cout << "Enter the input :";
  cin >> n;
  int i = 1;
  do
  {
    cout << i << " ";
    i++;
  } while (i <= n);

  //* Print sum of n numbers using do-while loop
  int n;
  cout << "Enter the input :";
  cin >> n;
  int i = 1;
  int sum = 0;
  do
  {
    sum = sum + i;
    i++;
  } while (i <= n);

  cout << sum;

  //* break statement => breaks the loop
  int i;
  for (i = 1; i <= 10; i++)
  {
    if (i == 5)
      break;
    cout << i << " ";
  }
  //? 1 2 3 4

  //* continue statement => skips the iteration
  int i;
  for (i = 1; i <= 20; i++)
  {
    if (i % 2 == 0)
      continue; //? skips if numbers are even numbers

    cout << i << " ";
  }

  //* SWITCH statement
  // syntax
  // switch (expression)
  // {
  // case /* constant-expression */:
  //   /* code */
  //   break;

  // default:
  //   break;
  // }

  int i;
  cout << "Enter the  number : ";
  cin >> i;

  switch (i)
  {
  case 1:
    cout << "Jamal";
    break;

  case 2:
    cout << "Moosin";
    break; //? if we remove all break statements here then it will print all data inside the switch irrespective of cases
           //? like JamalMoosinZubi  that's why u should use break in each case..
  case 3:
    cout << "Zubi";
    break;

  default:
    cout << "None";
    break;
  }

  switch (i)
  {
  case 1:
    cout << "Monday";
    break;

  case 2:
    cout << "Tuesday";
    break;

  case 3:
    cout << "Wednesday";
    break;

  case 4:
    cout << "Thursday";
    break;

  case 5:
    cout << "Friday";
    break;

  case 6:
    cout << "Saturday";
    break;

  case 7:
    cout << "Sunday";
    break;

  default:
    cout << "Enter only between 1 - 7";
    break;
  }
}