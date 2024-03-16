#include <iostream>
using namespace std;

int main()
{
  int arr[5] = {1, 5, 1, 4, 5};

  int sum = 0;
  bool unique;

  int n = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < n; i++)
  {
    //? checks frontwards
    for (int j = i + 1; j < n; j++)
    {
      unique = 1; //* {1,2,5,7,1};
      if (arr[i] == arr[j])
      {
        unique = 0;
        break;
      }
    }
    //? checks backwards
    if (unique == 1 || i == n - 1)
    {
      for (int j = i; j > 0; j--)
      {
        unique = 1;
        if (arr[i] == arr[j - 1])
        {
          unique = 0;
          break;
        }
      }
    }

    if (unique)
    {
      sum += arr[i];
      unique = 1;
    }
  }

  cout << "Sum is " << sum <<;
}