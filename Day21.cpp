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
}