#include <iostream>
using namespace std;

int main()
{

  int a = 1, b = 1;
  cout << "The Fibonacci series: ";

  if (n >= 1)
    cout << a << " ";
  if (n >= 2)
    cout << b << " ";

  for (int i = 3; i <= n; ++i)
  {
    int c = a + b;
    cout << c << " ";
    a = b;
    b = c;
  }

  // todo My approach
  // int n, last = 1, prev = 1, curr;
  // cout << "Enter n number for fibonacci :";
  // cin >> n;

  // cout<<"The fibonacci series : ";
  // if (n == 1)
  //   cout << last;
  // else if (n==0)
  //   cout<<"";
  // else
  // {
  //   cout << last << " " << prev << " "; //? 0 1 1
  //   curr = last + prev;

  //   for (int i = 1; i < n - 1; i++)
  //   {
  //     cout << curr << " ";
  //     last = prev;
  //     prev = curr;
  //     curr = last + prev;
  //   }
  // }
}