#include <iostream>
using namespace std;

// todo Introduction to 2D array in c++

void printColSum(int arr[][4], int row, int col)
{
  for (int j = 0; j < col; j++)
  {
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
      sum += arr[i][j];
    }
    cout << j << "th column sum :" << sum << endl;
  }
}

void printMatrixDiff(int A[][3], int B[][3], int row, int col)
{
  int Diff[row][col];
  if (row == col)
  {
    for (int i = 0; i < row; i++)
    {
      for (int j = 0; j < col; j++)
      {
        Diff[i][j] = A[i][j] - B[i][j];
        cout << Diff[i][j] << " ";
      }
      cout << endl;
    }
  }
  else
    cout << "Rows and Columns of both matrix are not equivalent..";
}

void printDiagSum(int arr[][3], int row, int col)
{
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
      cout << arr[i][j] << " ";
    cout << endl;
  }
  cout << endl;
  int first_diag_sum = 0, second_diag_sum = 0;
  int i = 0, j = col - 1;
  //* Print first diagonal sum
  for (int i = 0; i < row; i++)
    first_diag_sum += arr[i][i];
  cout << "First Diagonal Sum : " << first_diag_sum << endl;
  while (j >= 0) //? OR while(j >= 0)
  {
    if (arr[i][i] != arr[i][j])
      second_diag_sum += arr[i][j];

    i++, j--;
  }
  cout << "Second Diagonal sum : " << second_diag_sum << endl;
  int ans = first_diag_sum + second_diag_sum;
  cout << "Sum of diagonals without duplicates is : " << ans;
}

void printLargestEle(int arr[][3], int row, int col)
{
  int largest_Elem = INT_MIN;
  for (int i = 0; i < row; i++)
    for (int j = 0; j < col; j++)
    {
      if (arr[i][j] > largest_Elem)
        largest_Elem = arr[i][j];
    }
  cout << "Largest element in the matrix is " << largest_Elem;
}

void printSmallestEle(int arr[][3], int row, int col)
{
  int smallest_Elem = INT_MAX;
  for (int i = 0; i < row; i++)
    for (int j = 0; j < col; j++)
    {
      if (arr[i][j] < smallest_Elem)
        smallest_Elem = arr[i][j];
    }

  cout << "Smallest Element in the matrix is " << smallest_Elem;
}

int main()
{
  // todo 1: Print sum of each column in 2D array.
  int arr[4][4] = {5, 4, 1, 9, 6, 4, 2, 1, 7, 8, 4, 1, 3, 6, 2, 0};
  printColSum(arr, 4, 4);

  // todo 2: Given 2 matrices A and B, Print A-B.
  int A[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int B[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  printMatrixDiff(A, B, 3, 3);

  // todo 3: Given a matrix of size n*n, Print sum of diagonal element.
  // todo  Ex:   1 2 3
  // todo        4 5 6
  // todo        7 8 9
  int matrix[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  printDiagSum(matrix, 3, 3);

  //! WHAT IS COLUMN MAJOR ORDER OR COLUMN WISE ORDER ?

  // todo Column-major order, also known as column-wise order, is a method of storing and accessing multi-dimensional arrays (such as matrices) in computer memory. In column-major order, elements of the array are stored column by column, meaning that the elements of the first column are contiguous in memory, followed by the elements of the second column, and so on.

  // todo This is in contrast to row-major order, where elements are stored row by row, meaning that the elements of the first row are stored together, followed by the elements of the second row, and so forth.

  // todo Column-major order is commonly used in programming languages like Fortran and MATLAB, while row-major order is more prevalent in languages like C and Python. Understanding the storage order of arrays is important for optimizing memory access and improving performance in numerical computations.

  // todo 5: Largest Element: Find and print the largest element in the 2D array.
  int matrix[3][3] = {1, 2, 3, 4, 5, 22, 7, -22, 9};
  printLargestEle(matrix, 3, 3);

  // todo 6: Smallest Element: Find and print the smallest element in the 2D arrays.
  printSmallestEle(matrix, 3, 3);
}