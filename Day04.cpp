#include <iostream>
using namespace std;

int main()
{
  int row, col;

  //* Print start pattern..
  //? * * * * *
  //? * * * * *
  //? * * * * *
  //? * * * * *
  //? * * * * *
  for (row = 1; row <= 5; row = row + 1)
  {
    for (col = 1; col <= 5; col = col + 1)
    {
      cout << "*"
           << " "; //? or cout<<"* ";
    }
    cout << endl;
  }

  //* Print
  //  1 1 1 1 1
  //  2 2 2 2 2
  //  3 3 3 3 3
  //  4 4 4 4 4
  //  5 5 5 5 5

  for (row = 1; row <= 5; row = row + 1)
  {
    for (col = 1; col <= 5; col = col + 1)
    {
      cout << row << " ";
    }

    cout << endl;
  }

  //* Print
  //* 1 2 3 4 5
  //* 1 2 3 4 5
  //* 1 2 3 4 5
  //* 1 2 3 4 5
  //* 1 2 3 4 5

  for (row = 1; row <= 5; row = row + 1)
  {
    for (col = 1; col <= 5; col = col + 1)
    {
      cout << col << " ";
    }
    cout << endl;
  }

  //* Print
  //* 5 4 3 2 1
  //* 5 4 3 2 1
  //* 5 4 3 2 1
  //* 5 4 3 2 1
  //* 5 4 3 2 1

  for (row = 1; row <= 5; row = row + 1)
  {
    for (col = 5; col >= 1; col = col + 1)
    {
      cout << col << " ";
    }
    cout << endl;
  }

  //* Print
  //* 1 4 9 16 25
  //* 1 4 9 16 25
  //* 1 4 9 16 25
  //* 1 4 9 16 25
  //* 1 4 9 16 25
  for (row = 1; row <= 5; row = row + 1)
  {
    for (col = 1; col <= 5; col = col + 1)
    {
      cout << col * col << " ";
    }
    cout << endl;
  }

  //* Print
  //* 1 8 27 64 125
  //* 1 8 27 64 125
  //* 1 8 27 64 125
  //* 1 8 27 64 125
  //* 1 8 27 64 125

  for (row = 1; row <= 5; row = row + 1)
  {
    for (col = 1; col <= 5; col = col + 1)
    {
      cout << col * col * col << " ";
    }
    cout << endl;
  }

  //* Print
  //* a a a a a
  //* b b b b b
  //* c c c c c
  //* d d d d d
  //* e e e e e

  for (row = 1; row <= 5; row = row + 1)
  {
    char name = 'a' + (row - 1);
    for (col = 1; col <= 5; col = col + 1)
    {
      cout << name << " ";
    }
    cout << endl;
  }

  //* Print
  //* a b c d e
  //* a b c d e
  //* a b c d e
  //* a b c d e
  //* a b c d e

  //? One way
  for (row = 1; row <= 5; row = row + 1)
  {
    for (char col = 'a'; col <= 'e'; col = col + 1)
    {
      cout << col << " ";
    }
    cout << endl;
  }

  //? Another way
  for (row = 1; row <= 5; row = row + 1)
  {
    for (col = 1; col <= 5; col = col + 1)
    {
      char name = 'a' + (col - 1);
      cout << name << " ";
    }
    {
      cout << col << " ";
    }
    cout << endl;
  }

  //* Print
  //* 1  2  3  4  5
  //* 6  7  8  9  10
  //* 11 12 13 14 15
  //* 16 17 18 19 20
  //* 21 22 23 24 25

  //? One way
  int count = 1;
  for (row = 1; row <= 5; row = row + 1)
  {
    for (col = 1; col <= 5; col = col + 1)
    {
      cout << count << " ";
      count = count + 1;
    }
    cout << endl;
  }

  //? Another way

  for (row = 1; row <= 5; row = row + 1)
  {
    for (col = 1; col <= 5; col = col + 1)
    {
      cout << (row - 1) + col << " ";
    }
    cout << endl;
  }
}
