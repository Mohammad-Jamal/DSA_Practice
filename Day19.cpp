#include<iostream>
using namespace std;


//todo BINARY SEARCH

int BinarySearch(int arr[],int n,int key)
{
  //? start ,end , mid values
  int start = 0,end = n-1,mid;
  
  while (start<=end)
  {
    //? find mid value
    mid = (start + end) / 2;
    //todo one more way to find mid value whuch are best to overcome the issue of integer overflow in binary search
    // mid = start + (end - start)/2;
    //todo OR
    // mid = end + (start-end)/2;
    //? arr[mid] == key
    if (arr[mid] == key)
    return mid;
    //? arr[mid] < key => moves right side
    else if (arr[mid] < key)
    start = mid + 1;
    //? arr[mid] > key => moves left side
    else
    end = mid - 1;
  }

  return -1;
}



int main()
{
  int arr[1000];
  int n;
  cout<<"Enter the number of elements in array : ";
  cin>>n;
  cout<<"Enter the array elements : ";
  for (int i=0;i<n;i++)
  cin>>arr[i];

  int key;
  cout<<"Enter the key value you want to find : ";
  cin>>key;

  cout<<BinarySearch(arr,n,key);

}