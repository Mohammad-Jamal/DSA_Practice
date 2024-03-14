#include <iostream>
using namespace std;

int main()
{
  int row, col, n;
  cout << "Enter the input :";
  cin >> n;

  //* First Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
  //* Enter the input :5
  //*          1
  //*        2 1
  //*      3 2 1
  //*    4 3 2 1
  //*  5 4 3 2 1
  for (row = 1; row <= n; row = row + 1)
  {
    //? SPace Print
    for (col = 1; col <= n - row; col = col + 1)
      cout << "  ";

    //? Print Number
    for (col = row; col >= 1; col = col - 1)
      cout << col << " ";

    cout << endl;
  }

  //* Second Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

  //*            A
  //*          B B
  //*        C C C
  //*      D D D D
  //*    E E E E E

  for (row = 1; row <= n; row = row + 1)
  {
    //? Space Print
    for (col = 1; col <= n - row; col = col + 1)
      cout << "  ";

    //? Print character
    for (col = 1; col <= row; col = col + 1)
    {
      char name = 'A' + (row - 1);
      cout << name << " ";
    }

    cout << endl;
  }

  //* Third Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

  //*          5
  //*        5 4
  //*      5 4 3
  //*    5 4 3 2
  //*  5 4 3 2 1

  for (row = 1; row <= n; row = row + 1)
  {
    //? Space print
    for (col = 1; col <= n - row; col = col + 1)
      cout << "  ";

    //? Print number
    for (col = 5; col >= 5 - (row - 1); col = col - 1)
      cout << col << " ";

    cout << endl;
  }

  //* Fourth Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

  //*           E
  //*         E D
  //*       E D C
  //*     E D C B
  //*   E D C B A

  for (row = 1; row <= n; row = row + 1)
  {
    //? SPace print
    for (col = 1; col <= n - row; col = col + 1)
      cout << "  ";

    //? Number Print
    for (char name = 'E'; name >= 'E' - (row - 1); name = name - 1)
      cout << name << " ";

    cout << endl;
  }
}