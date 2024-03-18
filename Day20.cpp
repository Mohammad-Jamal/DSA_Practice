#include <iostream>
using namespace std;

int main()
{
  // todo first and last occurrence of an element in a non - decreasing order(ascending) sorted array
  int arr[6] = {1, 2, 3, 4, 4, 5};
  int target;
  cout << "Enter the target :";
  cin >> target;
  int n = sizeof(arr) / sizeof(arr[0]);
  int start = 0, end = n - 1, first = -1, last = -1, mid;
  //?find  first occurrence
  while (start <= end)
  {
    mid = start + (end - start) / 2;

    if (arr[mid] == target)
    {
      first = mid;
      end = mid - 1;
    }
    else if (arr[mid] < target)
      start = mid + 1;
    else
      end = mid - 1;
  }

  //? find the last occurrence
  start = 0, end = n - 1;
  while (start <= end)
  {
    mid = start + (end - start) / 2;

    if (arr[mid] == target)
    {
      last = mid;
      start = mid + 1;
    }
    else if (arr[mid] < target)
      start = mid + 1;
    else
      end = mid - 1;
  }

  cout << first << " " << last;
}