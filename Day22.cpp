#include <iostream>
using namespace std;

int main()
{

  // todo Allocate minimum number of pages (GFG-Hard)
  if (M > N)
    return -1;

  int start = 0, end = 0, mid, ans;
  for (int i = 0; i < N; i++)
  {
    start = max(start, A[i]);
    end += A[i];
  }

  while (start <= end)
  {
    mid = start + (end - start) / 2;

    int pages = 0, count = 1;

    for (int i = 0; i < N; i++)
    {
      pages += A[i];
      if (pages > mid)
      {
        count++;
        pages = A[i];
      }
    }

    if (count <= M)
    {
      ans = mid;
      end = mid - 1;
    }
    else
      start = mid + 1;
  }

  return ans;

  // todo  The Painter's Partition Problem-II
  int arr[], k, n;
  long long start = 0, end = 0, mid, ans;

  for (int i = 0; i < n; i++)
  {
    if (start < arr[i])
      start = arr[i];

    end += arr[i];
  }

  while (start <= end)
  {
    mid = start + (end - start) / 2;

    long long walls_len = 0, painters_count = 1;
    for (int i = 0; i < n; i++)
    {
      walls_len += arr[i];
      if (walls_len > mid)
      {
        painters_count++;
        walls_len = arr[i];
      }
    }

    if (painters_count <= k)
    {
      ans = mid;
      end = mid - 1;
    }
    else
      start = mid + 1;
  }

  return ans;
}