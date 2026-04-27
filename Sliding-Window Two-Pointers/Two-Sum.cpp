#include <iostream>
#include <unordered_map>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int> valueIndexPair;
       vector<int> result={-1,-1};
       for(int i=0;i<nums.size();i++){
           if(nums[i]<=target){
               valueIndexPair[nums[i]]=i;
           }
       }

       for(int i=0;i<nums.size();i++){
          if (valueIndexPair.count(target-nums[i])&&valueIndexPair[target-nums[i]]!=i) {
             result[0]=i;
             result[1]=valueIndexPair[target-nums[i]];
             return result;
          }
       }
       return result;
   }

int main() {

  vector<int> nums={-1,-2,-3,-4,-5};
  nums=twoSum(nums,8);

  for(int i=0;i<nums.size();i++){
    cout<<nums[i]<<" ";
  }
  cout<<endl;
  return 0;
}
