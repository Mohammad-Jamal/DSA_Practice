#include <iostream>
using namespace std;

int main()
{
  // todo Aggressive Cows (GFG)
  //  You are given an array consisting of n integers which denote the position of a stall. You are also given an integer k which denotes the number of aggressive cows. You are given the task of assigning stalls to k cows such that the minimum distance between any two of them is the maximum possible.
  //  The first line of input contains two space-separated integers n and k.
  //  The second line contains n space-separated integers denoting the position of the stalls.

  int start = 1, end, mid, ans, n;
  end = stalls[n - 1] - stalls[0];
  //? first of all ,sort the given array

  while (start <= end)
  {
    mid = start + (end - start) / 2;
    int count = 1, pos = stalls[0];

    for (int i = 1; i < n; i++)
    {
      if (pos + mid <= stalls[i])
      {
        count++;
        pos = stalls[i];
      }
    }

    if (count < k)
    {
      end = mid - 1;
    }
    else
    {
      ans = mid;
      start = mid + 1;
    }
  }

  return ans;

  // todo 875. Koko Eating Bananas leetcode
  //  Solved
  //  Medium
  //  Topics
  //  Companies
  //  Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.

  // Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from that pile. If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.

  // Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.

  // Return the minimum integer k such that she can eat all the bananas within h hours.

  // Example 1:

  // Input: piles = [3,6,7,11], h = 8
  // Output: 4

  int start = 0, end = 0, mid, ans, n = piles.size();
  long long sum = 0;

  for (int i = 0; i < n; i++)
  {
    sum += piles[i];
    end = max(end, piles[i]);
  }

  start = sum / h;
  if (!start)
    start = 1;

  while (start <= end)
  {
    mid = start + (end - start) / 2;
    // mid amount of bananas to consume in 1 hour
    int total_time = 0;
    for (int i = 0; i < n; i++)
    {
      total_time += piles[i] / mid;
      if (piles[i] % mid)
        total_time++;
    }

    if (total_time > h)
    {
      start = mid + 1;
    }
    else
    {
      ans = mid;
      end = mid - 1;
    }
  }

  return ans;
}
}