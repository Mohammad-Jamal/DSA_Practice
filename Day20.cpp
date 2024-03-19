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

  // todo Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

  int arr[5] = {1, 2, 3, 5, 6};
  int n = sizeof(arr) / sizeof(arr[0]);
  int start = 0, end = n - 1, mid, ans = n;
  int target;
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
    else if (arr[mid] < target)
      start = mid + 1;
    else
    {
      ans = mid;
      end = mid - 1;
    }
  }
  cout << "Index of target " << target << " is " << ans;

  // todo Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

  // todo You must not use any built-in exponent function or operator.
  int x;
  cout << "Enter the number :";
  cin >> x;
  int start = 0, end = x, mid, ans;

  // if (x < 2)
  // cout<<x;
  // return x;

  while (start <= end)
  {
    mid = start + (end - start) / 2;

    if (mid * mid == x)
    {
      ans = mid;
      break;
    }
    else if (mid * mid < x)
    {
      ans = mid;
      start = mid + 1;
    }
    else
      end = mid - 1;
  }

  cout << ans;
}