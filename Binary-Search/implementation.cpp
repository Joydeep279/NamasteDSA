#include <iostream>
using namespace std;

int BinarySearch(int arr[],int size,int target)
{

  int left=0;
  int right=size-1;


  while (left<=right) {

    int mid=(left+right)/2;

    if (arr[mid]==target) {
      return mid;
    }
    else if (target>arr[mid]) {
      left=mid+1;
    }
    else{
      right=mid-1;
    }

  }

  return -1;
}

int main() {
int target;//  0   1   2    3     4    5    6
int arr[]=   { 3 , 5 , 13 , 23 , 56 , 78 , 97 };
int size=sizeof(arr)/sizeof(arr[0]);
cout<<"Enter the Target: ";
cin>>target;
cout<<BinarySearch(arr,size,target)<<endl;

  return 0;
}
