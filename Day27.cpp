#include <iostream>
#include <vector>
using namespace std;

int main()
{
  // //todo 42.Trapping Rain Water leet_code - hard
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
}