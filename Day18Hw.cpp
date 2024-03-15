#include <iostream>
using namespace std;

//* Home Work
int main()
{
  // todo Insertion sort in decreasing order
  int arr[1000];
  int n;
  cout << "Enter the size of array: ";
  cin >> n;

  cout<<"Enter array elements : ";
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  for (int i = 1; i < n; i++)
  {
    for (int j = i; j > 0; j--)
    {
      if (arr[j] > arr[j - 1])
        swap(arr[j], arr[j - 1]);
      else
        break;
    }
  }

  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";

  // todo Insertion sort in  increasing order only but frm the last
  int arr[1000];
  int n;
  cout << "Enter the size of array: ";
  cin >> n;

  cout << "Enter array elements : ";
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  for (int i = n - 2; i >= 0; i--)
  {
    for (int j = i; j < n - 1; j++)
    {
      if (arr[j] > arr[j + 1])
        swap(arr[j], arr[j + 1]);
      else
        break;
    }
  }

  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
}