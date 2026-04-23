#include <iostream>
#include<vector>

using namespace std;


vector<int> searchRange(vector<int>& nums, int target) {

    vector<int> result={-1,-1};
    int left=0;
    int right=nums.size()-1;

    while (left<=right) {
      if(nums[left]==target){
        result[0]=left;
        break;
      }

      int mid=left+(right-left)/2;


      if (nums[mid]==target) {
        if (nums[mid-1]==target) {
          right=mid-1;
        }
        else{
          result[0]=mid;
          break;
        }
      }
      else if(nums[mid]<target){
        left=mid+1;
      }
      else{
        right=mid-1;
      }

  }
   left=0;
 right=nums.size()-1;
    while (left<=right) {
    if(nums[right]==target){
      result[1]=right;
      break;
    }

    int mid=left+(right-left)/2;

    if (nums[mid]==target) {
      if (nums[mid+1]==target) {
        left=mid+1;
      }
      else{
        result[1]=mid;
        break;
      }
    }
    else if(nums[mid]<target){
      left=mid+1;
    }
    else{
      right=mid-1;
    }

}


return result;

}

int main() {
vector<int> nums={1,2,3,3,3,3,4,5,9};
vector<int> result=searchRange(nums,3);


for (size_t i = 0; i <2 ; i++) {
  cout<<result[i]<<" ";
}
cout<<endl;
  return 0;
}
