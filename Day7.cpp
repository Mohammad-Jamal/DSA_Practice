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
    //? Space Print
    for (col = 1; col <= row - 1; col = col + 1)
      cout << "  ";

    //? Star Print
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

  //* Print
  //* Enter the input :4
  //*  * * * * * * * *
  //*  * * *     * * *
  //*  * *         * *
  //*  *             *
  //*  *             *
  //*  * *         * *
  //*  * * *     * * *
  //*  * * * * * * * *

  //? First Half
  //*  * * * * * * * *
  //*  * * *     * * *
  //*  * *         * *
  //*  *             *
  for (row = n; row >= 1; row = row - 1)
  {
    //? Print star *
    for (col = 1; col <= row; col = col + 1)
      cout << "* ";

    //? Space Print
    for (col = 1; col <= 2 * n - 2 * row; col = col + 1)
      cout << "  ";

    //? Print star *
    for (col = 1; col <= row; col = col + 1)
      cout << "* ";

    cout << endl;
  }
  //? Second half
  //*  *             *
  //*  * *         * *
  //*  * * *     * * *
  //*  * * * * * * * *
  for (row = 1; row <= n; row = row + 1)
  {
    //? Print star *
    for (col = 1; col <= row; col = col + 1)
      cout << "* ";

    //? Print Space
    for (col = 1; col <= 2 * n - 2 * row; col = col + 1)
      cout << "  ";

    //? Print Star *
    for (col = 1; col <= row; col = col + 1)
      cout << "* ";

    cout << endl;
  }

  //* Print
  //* Enter the input :4
  //*    *             *
  //*    * *         * *
  //*    * * *     * * *
  //*    * * * * * * * *
  //*    * * *     * * *
  //*    * *         * *
  //*    *             *

  //? First Half

  //*    *             *
  //*    * *         * *
  //*    * * *     * * *
  //*    * * * * * * * *

  for (row = 1; row <= n; row = row + 1)
  {
    //? Print star
    for (col = 1; col <= row; col = col + 1)
      cout << "* ";

    //? Print space
    for (col = 1; col <= 2 * n - 2 * row; col = col + 1)
      cout << "  ";

    //? Print star
    for (col = 1; col <= row; col = col + 1)
      cout << "* ";

    cout << endl;
  }

  //? Second Half

  //*    * * *     * * *
  //*    * *         * *
  //*    *             *

  for (row = n - 1; row >= 1; row = row - 1)
  {
    //? Print star
    for (col = 1; col <= row; col = col + 1)
      cout << "* ";

    //? Print Space
    for (col = 1; col <= 2 * n - 2 * row; col = col + 1)
      cout << "  ";

    //? Print star
    for (col = 1; col <= row; col = col + 1)
      cout << "* ";

    cout << endl;
  }

  //* Print
  //* Enter the input :5
  //*        *
  //*       * *
  //*      * * *
  //*     * * * *
  //*    * * * * *
  //*    * * * * *
  //*     * * * *
  //*      * * *
  //*       * *
  //*        *

  //? First Half
  //*        *
  //*       * *
  //*      * * *
  //*     * * * *
  //*    * * * * *
  for (row = 1; row <= n; row = row + 1)
  {
    //? Space print
    for (col = 1; col <= n - row; col = col + 1)
      cout << " ";

    //? Print Star
    for (col = 1; col <= row; col = col + 1)
      cout << "* ";

    cout << endl;
  }

  //? Second Half
  //*    * * * * *
  //*     * * * *
  //*      * * *
  //*       * *
  //*        *
  for (row = n; row >= 1; row = row - 1)
  {
    //? Space Print
    for (col = n - row; col >= 1; col = col - 1)
      cout << " ";

    //? Print Star
    for (col = row; col >= 1; col = col - 1)
      cout << "* ";

    cout << endl;
  }
}