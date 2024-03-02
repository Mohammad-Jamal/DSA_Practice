#include <iostream>
using namespace std;

int main()
{
  int row, col, n;
  cout << "Enter the input :";
  cin >> n;

  //* First Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

  //*            *
  //*          *  *
  //*        *  *  *
  //*      *  *  *  *
  //*    *  *  *  *  *

  for (row = 1; row <= n; row = row + 1)
  {
    //? SPace print
    for (col = 1; col <= n - row; col = col + 1)
      cout << " ";

    //? Print star
    for (col = 1; col <= row; col = col + 1)
      cout << "* ";

    cout << endl;
  }

  //* Second Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

  //*              1
  //*            1 2 3
  //*          1 2 3 4 5
  //*        1 2 3 4 5 6 7
  //*      1 2 3 4 5 6 7 8 9

  for (row = 1; row <= n; row = row + 1)
  {
    //? space print
    for (col = 1; col <= n - row; col = col + 1)
      cout << "  ";

    //? Print number
    for (col = 1; col <= 2 * row - 1; col = col + 1)
      cout << col << " ";

    cout << endl;
  }

  //* Third Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

  //*            A
  //*          A B A
  //*        A B C B A
  //*      A B C D C B A
  //*    A B C D E D C B A

  for (row = 1; row <= n; row = row + 1)
  {
    char current_name;
    //? Space print
    for (col = 1; col <= n - row; col = col + 1)
      cout << "  ";

    //? Print character
    for (col = 1; col <= row; col = col + 1)
    {
      char name = 'A' + (col - 1);
      cout << name << " ";
      current_name = name;
    }

    for (col = 1; col <= row - 1; col = col + 1)
    {
      current_name = current_name - 1;
      cout << current_name << " ";
    }

    cout << endl;
  }

  //* Fourth Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

  //*           *
  //*         *  *
  //*       *  *  *
  //*     *  *  *  *
  //*   *  *  *  *  *
  //*   *  *  *  *  *
  //*    *  *  *  *
  //*      *  *  *
  //*       *  *
  //*        *

  //*  first half
  //*           *
  //*         *  *
  //*       *  *  *
  //*     *  *  *  *
  //*   *  *  *  *  *
  for (row = 1; row <= n; row = row + 1)
  {
    //? space print
    for (col = 1; col <= n - row; col = col + 1)
      cout << " ";

    //? Star print
    for (col = 1; col <= row; col = col + 1)
      cout << "* ";

    cout << endl;
  } 

  //? second half
  //*   *  *  *  *  *
  //*    *  *  *  *
  //*      *  *  *
  //*       *  *
  //*        *

  // for (row = n; row >= 1; row = row - 1)
  // {
  //   //? SPace print
  //   for (col = n - row; col >= 1; col = col - 1)
  //     cout << " ";

  //   //? Star print
  //   for (col = 1; col <= row; col = col + 1)
  //     cout << "* ";

  //   cout << endl;
  // }

  //? second half my approach
  //*   *  *  *  *  *
  //*    *  *  *  *
  //*      *  *  *
  //*       *  *
  //*        *
  for (row = 1; row <= n; row = row + 1)
  {
    //? SPace print
    for (col = 1; col <= row - 1; col = col + 1)
      cout << " ";

    //? Star print
    for (col = 1; col <= n - row + 1; col = col + 1)
      cout << "* ";

    cout << endl;
  }
}