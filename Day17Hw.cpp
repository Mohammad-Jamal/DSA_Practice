#include <iostream>
using namespace std;

int main()
{
  // todo Sort the array element in descending order(decreasing order) using Bubble Sort
  int arr[1000];
  int n;
  cout << "Enter the size of array :";
  cin >> n;
  cout << "Enter array elements :" << endl;
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  for (int i = n - 2; i >= 0; i--)
  {
    bool swapped = 0;
    for (int j = 0; j <= i; j++)
    {
      if (arr[j] < arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
        swapped = 1;
      }
    }

    if (swapped == 0)
      break;
  }

  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";

  // todo Sort the array elements using bubble sort but from the last
  int arr[1000];
  int n;

  cout << "Enter size of array :";
  cin >> n;

  cout << "Enter array elements :";
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  for (int i = 0; i < n - 1; i++)
  {
    bool swapped = 0;
    for (int j = n - 1; j > i; j--)
    {
      if (arr[j] < arr[j - 1])
      {
        swap(arr[j], arr[j - 1]);
        swapped = 1;
      }
    }
    if (swapped == 0)
      break;
  }

  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
}