#include <iostream>
#include<vector>
using namespace std;

vector<int> findSUm(vector<int> nums,int target){
  int right=nums.size()-1;
  int left=0;
  vector<int> result={0,0};

  while (left<right) {
    int sum=nums[left]+nums[right];

    if (sum>target) {
      --right;
    }
    else if (sum<target) {
      ++left;
    }
    else{
      result[0]=left+1;
      result[1]=right+1;
      break;
    }

  }

return result;
}

int main() {

    vector<int> nums={1,3,4,5,8,9,12};
    int target=16;

    vector<int> ans=findSUm(nums,target);

    cout<<ans[0]<<" "<<ans[1]<<endl;


  return 0;
}
