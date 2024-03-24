#include <iostream>
using namespace std;

int main()
{
  // todo 852. Peak Index in a Mountain Array
  int arr[8] = {2, 4, 6, 10, 8, 5, 3, 1};
  int n = sizeof(arr) / sizeof(arr[0]);
  int start = 0, end = n - 1, mid;

  while (start <= end)
  {
    mid = end + (start - end) / 2;

    // peak element index
    if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
    {
      cout << mid;
      break;
    }
    // move right side
    else if (arr[mid] > arr[mid - 1])
      start = mid + 1;
    // move left side
    else
      end = mid - 1;
  }

  return -1; //? if does not exist

  // todo 153. Find Minimum in Rotated Sorted Array

  int arr[6] = {2, 4, 5, 6, 1, 3};
  int n = sizeof(arr) / sizeof(arr[0]);
  int start = 0, end = n - 1, mid, ans = arr[0];

  while (start <= end)
  {
    mid = start + (end - start) / 2;

    //? left side sorted
    if (arr[mid] >= arr[0])
      start = mid + 1;
    //? right side sorted
    else //?  means arr[mid] < arr[0]
    {
      ans = arr[mid];
      end = mid - 1;
    }
  }

  cout << "Minimum number is " << ans;

  // todo 33. Search in Rotated Sorted Array
  int arr[6] = {4, 5, 6, 1, 2, 3};
  int n = sizeof(arr) / sizeof(arr[0]);
  int start = 0, end = n - 1, mid, ans = -1, target;
  cout << "Enter the target :";
  cin >> target;

  while (start <= end)
  {
    mid = start + (end - start) / 2;

    if (arr[mid] == target)
    {
      ans = mid;
      break;
    }
    else if (arr[mid] >= arr[0])
    {
      if (arr[start] <= target && arr[mid] >= target)
        end = mid - 1;
      else
        start = mid + 1;
    }
    else
    {
      if (arr[mid] <= target && arr[end] >= target)
        start = mid + 1;
      else
        end = mid - 1;
    }
  }

  cout << ans;

  // todo 1539. Kth Missing Positive Number
  int start = 0, end = arr.size() - 1, mid, index = arr.size();

  while (start <= end)
  {
    mid = start + (end - start) / 2;

    if (arr[mid] - mid - 1 >= k)
    {
      index = mid;
      end = mid - 1;
    }
    else
      start = mid + 1;
  }

  return index + k;
  
}
