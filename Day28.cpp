#include <iostream>
using namespace std;


//todo 2D ARRAY

void printCol(int arr[][4], int row, int col)
{
  //* print all the values of this 2D array column wise
  for (int j = 0; j < col; j++)
    for (int i = 0; i < row; i++)
      cout << arr[i][j] << " ";
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

}