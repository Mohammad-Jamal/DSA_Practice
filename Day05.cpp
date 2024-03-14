#include <iostream>
using namespace std;

//* Printing Pattern Medium level
int main()
{
  int row, col;

  //* Print
  //* *
  //* * *
  //* * * *
  //* * * * *
  //* * * * * *

  for (row = 1; row <= 5; row += 1)
  {
    for (col = 1; col <= row; col += 1)
    {
      cout << "*"
           << " ";
    }
    cout << endl;
  }

  //* Print
  //*  1
  //*  1 2
  //*  1 2 3
  //*  1 2 3 4
  //*  1 2 3 4 5

  for (row = 1; row <= 5; row = row + 1)
  {
    for (col = 1; col <= row; col = col + 1)
    {
      cout << col << " ";
    }
    cout << endl;
  }

  //* Print
  //*  1
  //*  2 2
  //*  3 3 3
  //*  4 4 4 4
  //*  5 5 5 5 5

  for (row = 1; row <= 5; row++)
  {
    for (col = 1; col <= row; col++)
    {
      cout << row << " ";
    }
    cout << endl;
  }

  //* PRint
  //* 1
  //* 2 1
  //* 3 2 1
  //* 4 3 2 1
  //* 5 4 3 2 1

  for (row = 1; row <= 5; row++)
  {
    for (col = row; col >= 1; col = col - 1)
    {
      cout << col << " ";
    }
    cout << endl;
  }

  //* Print
  //*  a
  //*  b b
  //*  c c c
  //*  d d d d
  //*  e e e e e

  for (row = 1; row <= 5; row = row + 1)
  {
    char name = 'a' + row - 1;
    for (col = 1; col <= row; col = col + 1)
    {
      cout << name << " ";
    }
    cout << endl;
  }

  //* Print
  //*  * * * * *
  //*  * * * *
  //*  * * *
  //*  * *
  //*  *

  //? one approach
  for (row = 1; row <= 5; row = row + 1)
  {
    for (col = 1; col <= 5 - (row - 1); col = col + 1)
    {
      cout << "*"
           << " ";
    }
    cout << endl;
  }

  //? another approach
  for (row = 5; row >= 1; row = row - 1)
  {
    for (col = 1; col <= row; col = col + 1)
    {
      cout << "*"
           << " ";
    }

    cout << endl;
  }

  //? another approach
  for (row = 1; row <= 5; row = row + 1)
  {
    for (col = 5; col >= row; col = col - 1)
    {
      cout << "*"
           << " ";
    }
    cout << endl;
  }

  //* Print
  //*     1 2 3 4 5
  //*     1 2 3 4
  //*     1 2 3
  //*     1 2
  //*     1

  //? One approach
  for (row = 1; row <= 5; row = row + 1)
  {
    for (col = 1; col <= 5 - (row - 1); col = col + 1)
    {
      cout << col << " ";
    }

    cout << endl;
  }

  //? Another approach
  for (row = 5; row >= 1; row = row - 1)
  {
    for (col = 1; col <= row; col = col + 1)
    {
      cout << col << " ";
    }
    cout << endl;
  }

  //* Print
  //*  5
  //*  5 4
  //*  5 4 3
  //*  5 4 3 2
  //*  5 4 3 2 1

  for (row = 1; row <= 5; row = row + 1)
  {
    for (col = 5; col >= 5 - (row - 1); col = col - 1)
    {
      cout << col << " ";
    }
    cout << endl;
  }
}
