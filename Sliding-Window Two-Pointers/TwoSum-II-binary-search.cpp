#include <iostream>
#include<vector>
using namespace std;

vector<int> findSUm(vector<int> nums,int target){
  int lastIndex=nums.size()-1;

  vector<int> result={0,0};

  for (size_t i = 0; i < nums.size(); i++) {
    int left=i+1;
    int right=lastIndex;

    while (left<=right) {
      int mid=left+(right-left)/2;
      int sum=nums[i]+nums[mid];

      if (sum==target) {
        result[0]=i+1;
        result[1]=mid+1;
        break;
      }
      else if (sum>target) {
        right=mid-1;
      }
      else{
        left=mid+1;
      }
    }
    if (result[1]) {
      break;
    }
  }
return result;
}

int main() {

vector<int> nums={2,3,4};
vector<int> result=findSUm(nums,6);

for (size_t i = 0; i < result.size(); i++) {
  /* code */
  cout<<result[i]<<" ";
}
cout<<endl;
  return 0;
}
