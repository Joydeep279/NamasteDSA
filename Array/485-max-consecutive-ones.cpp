#include <iostream>
using namespace std;


int findMaxConsecutiveOnes(int* nums, int numsSize) {
  int max=0,count=0;
  for (size_t i = 0; i < numsSize; i++){
    if (nums[i]==1){
      if (++count>max)
        max=count;
    }
    else{
      count=0;
    }

}
  return max;
}

int main() {

    int nums[]={1,1,0,1,1,1};
    int size=sizeof(nums)/sizeof(nums[0]);
    cout<<findMaxConsecutiveOnes(nums,size);
  return 0;
}
