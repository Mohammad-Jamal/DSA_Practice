#include<iostream>
using namespace std;

//todo Given array is in Descending order now perform Binary Search and return its index else -1 
//todo {30,28,20,16,10} and key = 16(lets say)
int BinarySearch(int arr[],int n,int key)
{
  int start=0,end=n-1,mid;
  while(start<=end)
  {
    mid = start + (end - start)/2;
    // mid = end + (start -end)/2;
    if (arr[mid] == key)
    return mid;
    //? moves to left side
    else if (arr[mid] < key)
    end = mid-1;
    //? moves to right side i.e arr[mid] > key
    else
    start = mid+1;
    
  }

  return -1;
}



int main()
{
  int arr[1000];
  int n;
  cout<<"Enter the number of elements in array:";
  cin>>n;
  cout<<"Enter the elements in descending order :";
  for (int i=0;i<n;i++)
  cin>>arr[i];

  int key;
  cout<<"Enter the key value to find :";
  cin>>key;
  cout<<BinarySearch(arr,n,key);
}