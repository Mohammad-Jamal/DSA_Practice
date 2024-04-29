#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  // todo 42.Trapping Rain Water leet_code - hard
  vector<int> height = {4, 2, 0, 5, 2, 6, 2, 3};
  int n = height.size(), water = 0;
  int left_max = 0, right_max = 0, max_height = height[0], index = 0;

  //* find maximum height of building
  for (int i = 1; i < n; i++)
  {
    if (max_height < height[i])
    {
      max_height = height[i];
      index = i;
    }
  }

  //* left part
  for (int i = 0; i < index; i++)
  {
    if (left_max > height[i])
      water += left_max - height[i];
    else
      left_max = height[i];
  }
  //* right part
  for (int i = n - 1; i > index; i--)
  {
    if (right_max > height[i])
      water += right_max - height[i];
    else
      right_max = height[i];
  }
  cout << "Total units of water : " << water;

  // todo Triplet sum in Array  - GFG

  int arr[6] = {1, 4, 45, 8, 10, 6};
  int n = sizeof(arr) / sizeof(arr[0]);
  int X = 24; //? target

  //* Sort the array first
  //! I am using bubble sort

  for (int i = n - 2; i >= 0; i--)
  {
    for (int j = 0; j <= i; j++)
    {
      if (arr[j] > arr[j + 1])
        swap(arr[j], arr[j + 1]);
    }
  }

  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";

  cout << "Array is sorted";

  //! now solve the problem

  int is_triplet_sum = 0;
  cout << "nx";
  for (int i = 0; i < n - 2; i++)
  {
    int ans = X - arr[i];
    int start = i + 1, end = n - 1;
    while (start < end)
    {
      if (arr[start] + arr[end] == ans)
        is_triplet_sum = 1;
      else if (arr[start] + arr[end] > ans)
        end--;
      else
        start++;
    }
  }
  if (is_triplet_sum)
    cout << "Triplet sum is possible";
  else
    cout << "Triplet sum is not possible";

  // todo Given an array A of integers and another number K. Find all the unique quadruple from the given array that sums up to K.
  // todo Also note that all the quadruples which you return should be internally sorted, ie for any quadruple [q1, q2, q3, q4] the following should follow: q1 <= q2 <= q3 <= q4.

  // Example 1:  //? GFG

  // Input:
  // N = 5, K = 3
  // A[] = {0,0,2,1,1}
  // Output: 0 0 1 2
  // Explanation: Sum of 0, 0, 1, 2 is equal
  // to K.

  // int arr[6] = {1,5,1,0,6,0};
  int arr[7] = {10, 2, 3, 4, 5, 7, 8};
  int n = sizeof(arr) / sizeof(arr[0]), X = 13;
  vector<vector<int>> result;

  //? sort the given array - bubble sort O(N2)
  for (int i = n - 2; i >= 0; i--)
  {
    for (int j = 0; j <= i; j++)
    {
      if (arr[j] > arr[j + 1])
        swap(arr[j], arr[j + 1]);
    }
  }

  //? just to show the sorted array
  cout << "Sorted array..first" << endl;
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;

  //? actual solution  - O(N3)
  for (int i = 0; i < n - 3; i++)
  {
    // int first_num = X - arr[i];
    for (int j = i + 1; j < n - 2; j++)
    {
      // int ans = first_num - arr[j];
      int ans = X - arr[i] - arr[j];
      int start = j + 1, end = n - 1;
      while (start < end)
      {
        int sum = arr[start] + arr[end];
        if (sum == ans)
        {
          vector<int> quadruple = {arr[i], arr[j], arr[start], arr[end]};
          result.push_back(quadruple);

          // processing and skipping the duplicates in the 2nd element
          while (start < end && arr[start] == quadruple[2])
            start++;

          // processing and skipping the duplicates in the 4th element
          while (start < end && arr[end] == quadruple[3])
            end++;
        }
        else if (sum > ans)
          end--;
        else
          start++;
      }

      // processing and skipping the duplicates in 3rd element
      while (j + 1 < n - 2 && arr[j] == arr[j + 1])
        j++;
    }

    // processing and skipping the duplicates in 1st element
    while (i + 1 < n - 3 && arr[i] == arr[i + 1])
      i++;
  }

  //? one way to print vector of vectors
  for (size_t i = 0; i < result.size(); ++i)
  {
    for (size_t j = 0; j < result[i].size(); ++j)
      cout << result[i][j] << " ";

    cout << endl;
  }

  //? one more way to print vector of vectors
  for (size_t i = 0; i < result.size(); ++i)
  {
    for (size_t j = 0; j < result[i].size(); ++j)
    {
      cout << result[i][j] << " ";
    }
    cout << "$ "; // Separator between quadruples
  }
}