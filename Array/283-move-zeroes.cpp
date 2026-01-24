#include <iostream>
using namespace std;

void moveZeroes(int* nums, int numsSize) {

  int mainIndex=0;

  for (int i = 0; i < numsSize; i++) {
    if (nums[i]!=0) {
      int temp=nums[mainIndex];
      nums[mainIndex++]=nums[i];
      nums[i]=temp;
    }
  }
  return;
}

void Display(int arr[],int size){
  for (int i = 0; i < size; i++)
       cout<<arr[i]<<" ";
  cout<<endl;
  return ;
}

int main() {

  int nums1[]={0,1,0,3,12};
  int size=sizeof(nums1)/sizeof(nums1[0]);
  moveZeroes(nums1,size);
  Display(nums1,size);
  return 0;
}
