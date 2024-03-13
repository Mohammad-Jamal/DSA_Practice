#include <iostream>
using namespace std;
//* SELECTION SORT
int main()
{
  //* SELECTION SORT
  // TODO Sorting the array elements in Ascending order
  int arr[1000];
  int index;
  int n;
  cout << "Enter the Size of array :";
  cin >> n; //? size of array

  cout << "Enter array elements :";
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  for (int i = 0; i < n - 1; i++)
  {
    index = i;
    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[index])
        index = j;
    }

    swap(arr[i], arr[index]);
  }

  //? print sorted array
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";

  //! space complexity
  //! Auxiliary : O(1)
  //! Total Space Complexity : 1 + n = O(n)
  //! Time Complexity : O(n square)

  // TODO Sorting the array elements in descending order
  int arr[6] = {10, 11, 1, 2, 8, 4};
  int n = 6;
  int index;
  for (int i = 0; i < n - 1; i++)
  {
    index = i;
    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] > arr[index])
        index = j;
    }

    swap(arr[i], arr[index]);
  }

  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";


  //todo Sorting the alphabets
  char arr[1000];
  int n;
  int index;
  cout << "Enter the size of array :";
  cin >> n;

  cout << "Enter the alphabets : ";
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  for (int i = 0; i < n - 1; i++)
  {
    index = i;
    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[index])
        index = j;
    }
    swap(arr[i], arr[index]);
  }

  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
}