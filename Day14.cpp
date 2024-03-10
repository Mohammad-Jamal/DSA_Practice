#include <iostream>
using namespace std;

//* ARRAYS

int main()
{
  //* Array declare
  // int arr[5] ;

  //* Array defining

  //* 1 =>
  int arr[5] = {1, 2, 3, 4, 5};

  for (int i = 0; i < 5; i++)
    cout << arr[i] << " "; //? 1 2 3 4 5
  cout << endl;

  //* 2 =>
  int arr1[5] = {1, 2, 3};

  for (int i = 0; i < 5; i++)
    cout << arr1[i] << " "; //? 1 2 3 0 0
  cout << endl;

  //* 3 =>
  int arr2[5] = {0};
  for (int i = 0; i < 5; i++)
    cout << arr2[i] << " "; //? 0 0 0 0 0
  cout << endl;

  //* 4 =>
  //* taking values from the user itself
  int arr3[5];

  for (int i = 0; i < 5; i++)
    cin >> arr3[i]; //? takes the 5 values from the user

  for (int i = 0; i < 5; i++)
    cout << arr3[i] << " ";
  cout << endl;

  //* giving size of the array from the user
  int size;
  cout << "Enter size of the array :";
  cin >> size;
  // int arr4[size]; ❌
  int arr4[100];
  //? read the array values from the user
  for (int i = 0; i < size; i++)
    cin >> arr4[i];

  // //? print the array values
  for (int i = 0; i < size; i++)
    cout << arr4[i] << " ";
  cout << endl;

  //* what if you give more than the size of the array
  int arr5[5] = {1, 2, 3, 4, 5};
  cout << arr5[5] << endl; //? some random value 3452 3555 2482 7482

  int arr6[100] = {1, 2, 3, 4, 5, 6};
  cout << arr6[27] << endl; //? 0 cuz there is array but empty value

  // //* sizeof()
  int a;
  char b;
  float c;
  double d;
  bool f;
  cout << sizeof(a) << endl; //? 4 ...bytes
  cout << sizeof(b) << endl; //? 1 ...bytes
  cout << sizeof(c) << endl; //? 4 ...bytes
  cout << sizeof(d) << endl; //? 8 ...bytes
  cout << sizeof(f) << endl; //? 1 ...bytes

  //* size of array
  int arr7[] = {1, 5, 8, 8, 7};
  cout << sizeof(arr7) << endl; //? 20 ..bytes
  //* if you want to know no of elements in an array
  cout << sizeof(arr7) / sizeof(arr7[0]) << endl; //? 5 elements

  //* Print the least value in the array
  int arr8[5] = {8, 9, 2, 3, 10};
  int ans = INT_MAX;

  for (int i = 0; i < 5; i++)
  {
    if (arr8[i] < ans)
      ans = arr8[i];
  }

  cout << "The minimum value in the array : " << ans << endl;

  //* Print the Maximum value in the array
  int arr9[5] = {8, 12, 1, 15, 22};
  int ans = INT_MIN;

  for (int i = 0; i < 5; i++)
  {
    if (arr9[i] > ans)
      ans = arr9[i];
  }

  cout << "The maximum value in the array : " << ans << endl;

  return 0;
}