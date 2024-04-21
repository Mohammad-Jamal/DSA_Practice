#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Divide(vector<int> arr)
{
  int total_sum = 0, prefix = 0, ans, n = arr.size();

  //? Total sum in vector
  for (int i = 0; i < n; i++)
    total_sum += arr[i];

  for (int i = 0; i < n - 1; i++)
  {
    prefix += arr[i];
    ans = total_sum - prefix;
    if (total_sum == 2 * prefix) //? or if (ans == prefix) or if(total_sum - prefix == prefix)
      return 1;
  }
  return 0;
}

int main()
{
  //* Basic approach having time complexity of O(n2)
  int arr[8] = {3, 4, -2, 5, 8, 20, -10, 8};
  int sz = sizeof(arr) / sizeof(arr[0]);
  int no_ans = 1;
  for (int i = 0; i < sz - 1; i++)
  {
    int sum1 = 0, sum2 = 0;
    for (int j = 0; j <= i; j++)
      sum1 += arr[j];

    for (int j = i + 1; j < sz; j++)
      sum2 += arr[j];

    if (sum1 == sum2)
    {
      cout << "Yes";
      no_ans = 0;
      break;
    }
  }
  if (no_ans == 1)
    cout << "No";

  // //* Best approach with Time Complexity of O(N) and Auxiliary space of O(1)
  int n;
  cout << "Enter the size of vector :";
  cin >> n;
  vector<int> v(n);
  cout << "Enter the elements in vector : ";
  for (int i = 0; i < n; i++)
    cin >> v[i];
  cout << Divide(v);

  // todo Better approach with time complexity of O(N2)
  int arr[8] = {3, 4, -5, 8, -12, 7, 6, -2};
  int n = sizeof(arr) / sizeof(arr[0]), prefix = 0, maxi = INT_MIN;

  for (int i = 0; i < n; i++)
  {
    prefix = 0;
    for (int j = i; j < n; j++)
    {
      prefix += arr[j];
      maxi = max(maxi, prefix);
    }
  }
  cout << maxi;

  // todo Best approach by using KADANE's Algorithm with time complexity of O(N)

  int arr[8] = {3, 4, -5, 8, -12, 7, 6, -2};
  int n = sizeof(arr) / sizeof(arr[0]), prefix = 0, maxi = INT_MIN;

  for (int i = 0; i < n; i++)
  {
    prefix += arr[i];
    maxi = max(maxi, prefix);
    if (prefix < 0)
      prefix = 0;
  }
  cout << maxi;

  // todo 2016. Maximum Difference Between Increasing Elements /? leetcode
  //  Solved
  //  Easy
  //  Topics
  //  Companies
  //  Hint
  //  Given a 0-indexed integer array nums of size n, find the maximum difference between nums[i] and nums[j] (i.e., nums[j] - nums[i]), such that 0 <= i < j < n and nums[i] < nums[j].

  // Return the maximum difference. If no such i and j exists, return -1.

  int arr[8] = {9, 5, 8, 12, 2, 3, 7, 4};
  int suffix = INT_MIN, prev_ans = -1, ans = -1;
  int n = sizeof(arr) / sizeof(arr[0]);
  int n = arr.size();

  for (int i = n - 2; i >= 0; i--)
  {
    suffix = max(suffix, arr[i + 1]);
    ans = suffix - arr[i];
    ans = max(ans, prev_ans);
    prev_ans = ans;
  }
  cout << ans;
}