#include <iostream>
using namespace std;

int missingNumber(int* nums, int numsSize) {
    int totalCount=numsSize*(numsSize+1)/2;
    int partialCount=0;
    for (int i = 0; i < numsSize; i++) {
      partialCount+=nums[i];
    }

    return totalCount-partialCount;
}


int main() {

  int nums[]={1,0,3};
  int size=sizeof(nums)/sizeof(nums[0]);

  cout<<missingNumber(nums,size);

  return 0;
}
