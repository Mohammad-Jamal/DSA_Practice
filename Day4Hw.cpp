#include <iostream>
using namespace std;

int main()
{
  //* First Pattern:

  //*     4 4 4 4 4 4
  //*     4 4 4 4 4 4
  //*     4 4 4 4 4 4
  //*     4 4 4 4 4 4
  //*     4 4 4 4 4 4
  //*     4 4 4 4 4 4

  int row, col;
  for (row = 1; row <= 6; row = row + 1)
  {
    for (col = 1; col <= 6; col = col + 1)
    {
      cout << 4 << " ";
    }
    cout << endl;
  }

  //* Second Pattern:

  //*     1 4 9 16 25
  //*     1 4 9 16 25
  //*     1 4 9 16 25
  //*     1 4 9 16 25
  //*     1 4 9 16 25
  //*     1 4 9 16 25

  for (row = 1; row <= 5; row = row + 1)
  {
    for (col = 1; col <= 5; col = col + 1)
    {
      cout << col * col << " ";
    }
    cout << endl;
  }

  //* Third Pattern:

  //*  1 8 27 64 125 216
  //*  1 8 27 64 125 216
  //*  1 8 27 64 125 216
  //*  1 8 27 64 125 216
  //*  1 8 27 64 125 216

  for (row = 1; row <= 6; row = row + 1)
  {
    for (col = 1; col <= 6; col = col + 1)
    {
      cout << col * col * col << " ";
    }

    cout << endl;
  }

  //* Fourth Pattern:

  //*   F G H I J K
  //*   F G H I J K
  //*   F G H I J K
  //*   F G H I J K
  //*   F G H I J K

  for (row = 1; row <= 5; row = row + 1)
  {
    for (char name = 'F'; name <= 'K'; name = name + 1)
    {
      cout << name << " ";
    }

    cout << endl;
  }
}