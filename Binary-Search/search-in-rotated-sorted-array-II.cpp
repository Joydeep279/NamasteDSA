#include <iostream>
#include<vector>
using namespace std;

bool binarySearch(vector<int> nums,int target){


  int left=0;
  int right=nums.size()-1;


  while (left<=right) {
    int mid=left+(right-left)/2;

    while (nums[left]==nums[mid]) {
      left++;
    }

    if (nums[mid]==target) {
      return true;
    }
    else if (nums[left]>nums[mid]) {
      if (nums[left]<=target&&nums[mid]>target) {
        right=mid-1;
      }
      else{
        left=mid+1;
      }
    }
    else{
      if (nums[mid]<target&&nums[right]>target) {
        left=mid+1;
      }
      else{
        right=mid-1;
      }
    }

  }
  return false;
}

int main() {

  vector<int> v={1,0,1,1,1};

  if (binarySearch(v,0)) {
    cout<<"Found! \n";
  }
  else{
    std::cout << "not Found" << '\n';
  }

  return 0;
}
