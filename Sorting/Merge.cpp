#include <iostream>
using namespace std;

void mergeArray(int arr[],int left,int mid,int right) {

  int size1=mid-left+1;
  int size2=right-mid;

  int temp1[size1];
  int temp2[size2];
  int mainIndex=left;
  for (int i = 0; i < size1; i++) {
    temp1[i]=arr[mainIndex++];
  }
  for (int i = 0; i < size2; i++) {
    temp2[i]=arr[mainIndex++];
  }

  int i=0,j=0;
  mainIndex=left;

  while (i<size1 && j<size2) {
    if (temp1[i]<temp2[j]) {
      arr[mainIndex++]=temp1[i++];
    }
    else{
      arr[mainIndex++]=temp2[j++];
    }
  }

  while (i<size1) {
  arr[mainIndex++]=temp1[i++];
  }

  while (j<size2)
  arr[mainIndex++]=temp2[j++];


    return;
}


void Merge(int arr[],int left,int right){

  if (left>=right)
    return;


  int mid=(left+right)/2;
  Merge(arr,left,mid);
  Merge(arr,mid+1,right);

  mergeArray(arr,left,mid,right);
}

int main() {
  int nums[] = {5,2,3,1};
  int size = sizeof(nums) / sizeof(nums[0]);
  Merge(nums,0,size-1);

  for (int i = 0; i < size; i++)
    cout<<nums[i]<<" ";
cout<<"\n";

  return 0;
}
