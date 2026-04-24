#include <iostream>
#include<vector>

using namespace std;

int findMin(vector<int>& nums) {

  int left=0;
  int right=nums.size()-1;

  while (left<right) {
    int mid=left+(right-left)/2;

    
  }

  return nums[right];


}

int main() {

 vector<int> nums={5,1,2,3,4};
 cout<<findMin(nums)<<endl;


  return 0;
}
