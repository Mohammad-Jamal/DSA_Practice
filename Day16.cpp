#include<iostream>
using namespace std;


int main()
{
  int arr[1000];
  int index;
  int n;  
  cout<<"Enter the Size of array :";
  cin>>n;  //? size of array

  cout<<"Enter array elements :";
  for (int i=0;i<n;i++)
  cin>>arr[i];

  for (int i=0;i<n-1;i++)
  {
    index = i;
    for (int j=i+1;j<n;j++)
    {
      if (arr[j] < arr[index])
      index = j;
    }

    swap(arr[i],arr[index]);

  }

  //? print sorted array 
  for (int i=0;i<n;i++)
  cout<<arr[i]<<" ";

  //todo space complexity 
  //todo Auxiliary : O(1)
  //todo Total Space Complexity : 1 + n = O(n)
  //todo Time Complexity : O(n square)

}