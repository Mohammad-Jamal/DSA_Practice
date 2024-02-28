#include <iostream>
using namespace std;

int main()
{
  //* Print star pattern Hard level
  //*          *
  //*        * *
  //*      * * *
  //*    * * * *
  //*  * * * * *
  int row, col, n;
  cout << "Enter the number of rows :";
  cin >> n;

  for (row = 1; row <= n; row = row + 1)
  {
    //? Space Print
    for (col = 1; col <= n - row; col = col + 1)
    {
      cout << "  ";
    }
    //? Star Print
    for (col = 1; col <= row; col = col + 1)
    {
      cout << "*"
           << " ";
    }
    cout << endl;
  }

  //*   Print
  //* Enter the number of rows :5
  //*          1
  //*        2 2
  //*      3 3 3
  //*    4 4 4 4
  //*  5 5 5 5 5
  for (row = 1; row <= n; row = row + 1)
  {
    //? space print
    for (col = 1; col <= n - row; col = col + 1)
      cout << "  ";

    //? Number print
    for (col = 1; col <= row; col = col + 1)
      cout << row << " ";

    cout << endl;
  }

  //*   Print
  //* Enter the number of rows :5
  //*          1
  //*        1 2
  //*      1 2 3
  //*    1 2 3 4
  //*  1 2 3 4 5
  for (row = 1; row <= n; row = row + 1)
  {
    //? Space Print
    for (col = 1; col <= n - row; col = col + 1)
      cout << "  ";

    //? Number print
    for (col = 1; col <= row; col = col + 1)
      cout << col << " ";

    cout << endl;
  }

  //* Print
  //* Enter the number of rows :5
  //*          A
  //*        A B
  //*      A B C
  //*    A B C D
  //*  A B C D E
  for (row = 1; row <= n; row = row + 1)
  {
    //? SPace Print
    for (col = 1; col <= n - row; col = col + 1)
      cout << "  ";

    //? Print Char
    for (char name = 'A'; name <= 'A' + row - 1; name = name + 1)
      cout << name << " ";

    cout << endl;
  }

  //*     Print
  //* Enter the number of rows :5
  //*            1
  //*          2 1
  //*        3 2 1
  //*      4 3 2 1
  //*    5 4 3 2 1
  for (row = 1; row <= n; row = row + 1)
  {
    //? Space print
    for (col = 1; col <= n - row; col = col + 1)
      cout << "  ";

    //? Number print
    for (col = row; col >= 1; col = col - 1)
      cout << col << " ";

    cout << endl;
  }
}