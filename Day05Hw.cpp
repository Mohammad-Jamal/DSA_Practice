#include <iostream>
using namespace std;

int main()
{
  //* First Pattern:

  //*    1
  //*    1 2
  //*    1 2 3
  //*    1 2 3 4
  //*    1 2 3 4 5
  //*    1 2 3 4 5 6

  int row, col;

  for (row = 1; row <= 6; row = row + 1)
  {
    for (col = 1; col <= row; col = col + 1)
    {
      cout << col << " ";
    }
    cout << endl;
  }

  //* Second Pattern:

  //*  A
  //*  A B
  //*  A B C
  //*  A B C D
  //*  A B C D E

  for (row = 1; row <= 5; row = row + 1)
  {
    char name = 'A' + (row - 1);
    for (col = 1; col <= row; col = col + 1)
    {
      cout << name << " ";
    }
    cout << endl;
  }

  //* Third Pattern:

  //* 10
  //* 10 11
  //* 10 11 12
  //* 10 11 12 13
  //* 10 11 12 13 14
  //* 10 11 12 13 14 15

  for (row = 1; row <= 6; row = row + 1)
  {
    for (col = 10; col <= 10 + row - 1; col = col + 1)
    {
      cout << col << " ";
    }
    cout << endl;
  }

  //* Fourth Pattern
  //*  10
  //*  10 9
  //*  10 9 8
  //*  10 9 8 7
  //*  10 9 8 7 6
  //*  10 9 8 7 6 5

  for (row = 1; row <= 6; row = row + 1)
  {
    for (col = 10; col >= 10 - (row - 1); col = col - 1)
    {
      cout << col << " ";
    }
    cout << endl;
  }

  //* Fifth Pattern:

  //*  A B C D
  //*  A B C
  //*  A B
  //*  A

  for (row = 1; row <= 4; row = row + 1)
  {
    for (col = 1; col <= 4 - (row - 1); col = col + 1)
    {
      char name = 'A' + (col - 1);
      cout << name << " ";
    }
    cout << endl;
  }
}