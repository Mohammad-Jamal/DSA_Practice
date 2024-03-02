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
}