#include <iostream>
using namespace std;

void arrFunc(int a[], int n)
{
  // cout<<sizeof(a)<<endl;  //? 8 (bytes)
  for (int i = 0; i < n; i++)
    cout << a[i] << " ";
}

int main()
{
  //* Search an element in an array & return its index
  int arr[6] = {1, 52, 4, 8, 7, 2};
  int index = -1;
  int x;
  cout << "Enter a number: ";
  cin >> x;
  for (int i = 0; i < 6; i++)
  {
    if (arr[i] == x)
    {
      index = i;
      break;
    }
  }
  cout << "Your given number is located at index : " << index;

  //* Reverse an array

  //? one method - this is long
  int arr[5] = {1, 2, 3, 4, 5}, temp[5];
  int i = 4, j = 0;
  //? store the reversed array in temp
  while (i >= 0)
  {
    temp[j] = arr[i];
    j++;
    i--;
  }

  //? swap the arrays
  for (int i = 0; i < 5; i++)
    arr[i] = temp[i];
  //? print the reversed array
  for (int i = 0; i < 5; i++)
    cout << arr[i] << " ";

  //! now second easy way to reverse the array without tem[]
  int arr[5] = {1, 2, 3, 4, 5};
  int start = 0, end = 4;
  while (start < end)
  {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }

  for (int i = 0; i < 5; i++)
    cout << arr[i] << " ";

  //* Second largest element in an array

  int Max = INT_MIN, secondMax = INT_MIN;
  int arr[6] = {1, 5, 12, 45, 3, 14};

  // //? first check maximum number
  for (int i = 0; i < 6; i++)
  {
    if (arr[i] > Max)
      Max = arr[i];
  }

  //? now check 2nd largest number with help of maximum number

  for (int i = 0; i < 6; i++)
  {
    if (arr[i] != Max)
      secondMax = max(secondMax, arr[i]);
  }

  cout << "Second Largest Number is " << secondMax;

  //* Missing number in array {lecture 16 = > 33:22}
  int N = 6;
  int arr[5] = {1, 3, 4, 5, 6};

  //? sum of array elements
  int sum = 0;
  for (int i = 0; i < N - 1; i++)
    sum += arr[i];

  //? sum of N elements
  int sumN = N * (N + 1) / 2;
  cout << "Missing number is " << sumN - sum;

  //* Fibonacci number series
  // todo  0 1 1 2 3 5 8 13 21 .....
  // todo n=7
  // todo output: 8
  int n;
  cout << "Enter the number : ";
  cin >> n;
  int arr[1000];
  arr[0] = 0; //? first = 0
  arr[1] = 1; //? second = 0

  for (int i = 2; i <= n - 1; i++)
    arr[i] = arr[i - 1] + arr[i - 2];

  cout << arr[n - 1];

  //* Rotate array by 1
  int arr[6] = {1, 2, 3, 4, 5, 6};
  int last = arr[5];
  int n = 6;
  for (int i = n - 2; i >= 0; i--)
    arr[i + 1] = arr[i];

  arr[0] = last;

  for (int i = 0; i < 6; i++)
    cout << arr[i] << " ";

  //* Arrays in function
  int arr[5] = {1, 2, 3, 4, 5};
  // cout<<sizeof(arr)<<endl; //? 20 ( 4 * 5 bytes)
  arrFunc(arr, 5);
}