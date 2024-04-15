#include <iostream>
using namespace std;

// todo Two pointers

int main()
{
  // Segregate 0s and 1s //?(gfg)
  // EasyAccuracy: 54.25%Submissions: 78K+Points: 2
  // Given an array of length n consisting of only 0's and 1's in random order. Modify the array in-place to segregate 0s on the left side and 1s on the right side of the array.
  int arr[5] = {1, 0, 1, 0, 1}, temp;
  int n = sizeof(arr) / sizeof(arr[0]);
  int start = 0, end = n - 1;
  while (start < end)
  {
    if (arr[start] == 0)
      start++;
    else
    {
      if (arr[end] == 0)
      {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++, end--;
      }
      else
        end--;
    }
  }

  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";

  // 167. Two Sum II - Input Array Is Sorted Leetcode
  // Solved
  // Medium
  // Topics
  // Companies
  // Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number. Let these two numbers be numbers[index1] and numbers[index2] where 1 <= index1 < index2 <= numbers.length.

  // Return the indices of the two numbers, index1 and index2, added by one as an integer array [index1, index2] of length 2.

  // The tests are generated such that there is exactly one solution. You may not use the same element twice.

  // Your solution must use only constant extra space.
  int arr1[5] = {2, 5, 7, 8, 11}, target = 12;
  int n = sizeof(arr1) / sizeof(arr1[1]);
  int start = 0, end = n - 1;
  while (start < end)
  {
    if (arr1[start] + arr1[end] == target)
    {
      cout << arr1[start] << " " << arr1[end];
      break;
    }
    else if (arr1[start] + arr1[end] > target)
      end--;
    else
      start++;
  }

  // Pair With Given Difference
  // Programming
  // Two Pointers
  // Easy
  // 23.5% Success

  // 349

  // 38

  // Bookmark
  // Asked In:
  // Problem Description

  // Given an one-dimensional unsorted array A containing N integers.

  // You are also given an integer B, find if there exists a pair of elements in the array whose difference is B.

  // Return 1 if any such pair exists else return 0.

  int arr[5] = {5, 8, 14, 16, 25};
  int diff = 6, start = 0, end = 1;
  int n = sizeof(arr) / sizeof(arr[0]);
  while (end < n)
  {
    if (arr[end] - arr[start] == diff)
    {
      cout << arr[start] << " " << arr[end];
      break;
    }
    else if (arr[end] - arr[start] < diff)
      end++;
    else
      start++;
  }
}