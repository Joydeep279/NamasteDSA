#include <iostream>
#include<vector>

using namespace std;

int singleNonDuplicate(vector<int>& nums) {

  int left=0;
  int right=nums.size()-1;

  while (left<right) {
    int mid=left+((right-left)/2);

    if (nums[mid-1]==nums[mid]) {
      int leftCount =((mid-1)-left);

      if (leftCount%2) {
        right=mid-2;
      }
      else{
        left=mid+1;
      }
    }
    else if (nums[mid+1]==nums[mid]) {
      int rightCount =right-(mid+1);

      if (rightCount%2) {
        left=mid+2;
      }
      else{
        right=mid-1;
      }
    }
    else{
      return nums[mid];
    }
  }


  return nums[left];
}

int main() {

vector<int> nums={3,3,7,7,10,11,11};
cout<<singleNonDuplicate(nums)<<endl;
  return 0;
}
