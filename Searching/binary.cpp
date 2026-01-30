#include <iostream>
using namespace std;

int Binary(int nums[],int size,int target)
{
  int left=0;
  int right=size-1;

  while (left<=right) {
    int mid=(left+right)/2;
    if (nums[mid]==target) {
      return mid;
    }
    if (target>nums[mid]) {
      left=mid+1;
    }
    else{
      right=mid-1;
    }
  }
  return -1;
}


int main() {

  int nums[] = {12, 45, 61, 112, 178, 243};
  int size = sizeof(nums) / sizeof(nums[0]);
  int target;
  cin>>target;
  cout<<Binary(nums,size,target);
  return 0;
}
