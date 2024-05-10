#include <iostream>
using namespace std;


//todo 2D ARRAY (MATRIX)

void printCol(int arr[][4], int row, int col)
{
  //* print all the values of this 2D array column wise
  for (int j = 0; j < col; j++)
    for (int i = 0; i < row; i++)
      cout << arr[i][j] << " ";
}

void printRowMax(int arr[][4], int row, int col)
{
  int sum = INT_MIN,index = -1;

  for(int i = 0;i<row;i++)
  {
    int total = 0;
    for (int j=0;j<col;j++)
    total += arr[i][j];

    if (total > sum)
    {
      sum = total;
      index = i;
    }
  }

  cout<<index;
}

void printSumDiagonals(int matrix[][3], int row, int col)
{
  //todo First Diagonal sum
  int first_diag = 0;
  // for (int i = 0;i<row;i++)
  // first_diag += matrix[i][i];
  //* OR 
  int i = 0;
  while(i<row)
  {
    first_diag += matrix[i][i];
    i++;
  }

  //todo Second Diagonal sum
  int second_diag = 0;
  i = 0;
  int j = col - 1;
  while(j >= 0)
  {
    second_diag += matrix[i][j];
    i++,j--;
  }

  cout<<"First Diagonal sum : "<<first_diag<<endl<<"Second Diagonal sum : "<<second_diag;
}

void revRowMatrix(int arr[][4],int row, int col)
{
  for (int i = 0;i<row;i++)
  {
    //? Reverse iTH Row
    int start = 0,end = col - 1;
    while (start < end)
    {
      swap(arr[i][start], arr[i][end]);
      start++,end--;
    }
  }
}

int main()
{
  //* create a 2D array
  int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

  // * to print all the values of 2D array row wise
  for (int row = 0; row < 3; row++)
    for (int col = 0; col < 4; col++)
      cout << arr[row][col] << " ";

  cout << endl;

  //* to print all the values of 2D array column wise within a function
  printCol(arr, 3, 4);

  //* Search an  element in 2D array
  int x = 7;

  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 4; j++)
    {
      if (arr[i][j] == x)
      {
        cout << "Yes";
        return 0;
      }
    }

  cout << "No";

  //todo Add 2 matrix
  int arr1[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
  int arr2[3][4] = {2,4,8,6,5,1,2,3,5,4,7,8,};
  int ans[3][4];

  for (int row = 0;row<3;row++)
  for (int col = 0;col<4;col++)
  {
    ans[row][col] = arr1[row][col] + arr2[row][col];
  }

  // printing the added matrix
  for (int i = 0;i<3;i++)
  for (int j = 0;j<4;j++)
  cout<<ans[i][j]<<" ";

  //todo Print Row index with maximum sum
  int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
  printRowMax(arr , 3 ,4);

  //todo Print first and second diagonal sum of a matrix
  int matrix[3][3] = {1,2,3,4,5,6,7,8,9};

  printSumDiagonals(matrix ,3 ,3);

  //todo Reverse Each row of Matrix

  int arr[3][4] = {5,4,3,0,1,2,3,8,4,9,3,2};
  revRowMatrix(arr, 3, 4);

  for (int i = 0;i<3;i++)
  for (int j = 0;j<4;j++)
  cout<<arr[i][j]<<" ";

}