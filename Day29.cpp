#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// todo VECTOR IN 2D

void printWaveForm(int arr[][4], int row, int col)
{
  for (int j = 0; j < col; j++)
  {
    //? col => even (up to down) or col => odd (down to up)
    if (j % 2 == 0)
    {
      for (int i = 0; i < row; i++)
        cout << arr[i][j] << " ";
    }
    else
    {
      for (int i = row - 1; i >= 0; i--)
        cout << arr[i][j] << " ";
    }
  }
}

void printSpiralForm(int matrix[][6], int row, int col)
{
  int top = 0, bottom = row - 1, left = 0, right = col - 1;
  while (top <= bottom && left <= right)
  {
    //? Print Top
    for (int j = left; j <= right; j++)
      cout << matrix[top][j] << " ";
    top++;
    //? Print Right
    for (int i = top; i <= bottom; i++)
      cout << matrix[i][right] << " ";
    right--;
    //? Print Bottom
    if (top <= bottom)
    {
      for (int i = right; i >= left; i--)
        cout << matrix[bottom][i];
      bottom--;
    }
    //? Print Left
    if (left <= right)
    {
      for (int i = bottom; i >= top; i--)
        cout << matrix[i][left];
      left++;
    }
  }
}

int main()
{
  // //* Create 2d Vector
  // ? syntax : vector< vector<int> > vector_name (rows, vector<int> (cols,initialize(optional)));
  vector<vector<int>> matrix(3, vector<int>(4, 1));

  //* Print the vector now
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
      cout << matrix[i][j] << " ";
    cout << endl;
  }

  //* to know the no.of rows and columns in a vector 2d
  cout << "Rows = " << matrix.size();
  cout << endl;
  cout << "Columns = " << matrix[0].size();
  cout << endl;

  // * take rows and cols size and matrix values as well for the user itself

  int rows, cols;
  cout << "Enter the no.of rows : ";
  cin >> rows;
  cout << "Enter the no.of cols : ";
  cin >> cols;
  cout << endl;

  vector<vector<int>> matrix2(rows, vector<int>(cols, 1));
  cout << "Enter the matrix values : " << endl;
  for (int i = 0; i < rows; i++)
    for (int j = 0; j < cols; j++)
      cin >> matrix2[i][j];

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
      cout << matrix2[i][j] << " ";
    cout << endl;
  }

  // todo WAVE FORM PROBLEM

  int arr[4][4] = {3, 6, 4, 2, 7, 8, 11, 5, 9, 3, 2, 1, 17, 8, 5, 9};

  printWaveForm(arr, 4, 4);

  // todo SPIRAL MATRIX PROBLEM
  printSpiralForm(arr, 6, 6);

  // todo Transpose of a Matrix
  int arr[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
  cout << "Before Swapping : " << endl;
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
      cout << arr[i][j] << "   ";
    cout << endl;
  }
  cout << endl;

  //* Upper diagonal way - same solution
  // for (int i = 0; i < 4; i++)
  // {
  //   for (int j = i + 1; j < 4; j++)
  //     swap(arr[i][j], arr[j][i]);
  // }

  //* Lower diagonal way - same solution
  for (int i = 1; i < 4; i++)
  {
    for (int j = 0; j < i; j++)
      swap(arr[i][j], arr[j][i]);
  }

  cout << "After Swapping : " << endl;
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
      cout << arr[i][j] << "   ";
    cout << endl;
  }
}