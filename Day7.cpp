#include <iostream>
using namespace std;

int main()
{
  int row, col, n;
  cout << "Enter the input :";
  cin >> n;

  //* Print
  //* Enter the input :5
  //*          *
  //*        * * *
  //*      * * * * *
  //*    * * * * * * *
  //*  * * * * * * * * *
  for (row = 1; row <= n; row = row + 1)
  {
    //? Space Print
    for (col = 1; col <= n - row; col = col + 1)
      cout << "  ";

    //? Star Print
    for (col = 1; col <= 2 * row - 1; col = col + 1)
      cout << "*"
           << " ";

    cout << endl;
  }

  //* Print
  //* Enter the input :5
  //*            1
  //*          1 2 1
  //*        1 2 3 2 1
  //*      1 2 3 4 3 2 1
  //*    1 2 3 4 5 4 3 2 1

  for (row = 1; row <= n; row = row + 1)
  {
    //? Space Print
    for (col = 1; col <= n - row; col = col + 1)
      cout << "  ";

    //? Print 1 to row
    for (col = 1; col <= row; col = col + 1)
      cout << col << " ";

    //? Print row-1 to 1
    for (col = row - 1; col >= 1; col = col - 1)
      cout << col << " ";

    cout << endl;
  }

  //* Print
  //* Enter the input :5
  //*    * * * * * * * * *
  //*      * * * * * * *
  //*        * * * * *
  //*          * * *
  //*            *

  //? MY approach for this pattern
  for (row = 1; row <= n; row = row + 1)
  {
    for (col = 1; col <= row - 1; col = col + 1)
      cout << "  ";

    for (col = 1; col <= 2 * (n - row) + 1; col = col + 1)
      cout << "* ";

    cout << endl;
  }

  //? Rohit Negi Approach
  for (row = n; row >= 1; row = row - 1)
  {
    //? Space Print
    for (col = 1; col <= n - row; col = col + 1)
      cout << "  ";

    //? Star Print
    for (col = 1; col <= 2 * row - 1; col = col + 1)
      cout << "*"
           << " ";

    cout << endl;
  }
}