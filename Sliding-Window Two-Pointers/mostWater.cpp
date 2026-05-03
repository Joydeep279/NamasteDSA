#include <iostream>
#include<vector>
#include<math.h>
using namespace std;

int mostWater(vector<int> height)
{
  int maxArea=0;
  int left=0;
  int right=height.size()-1;

  while (left<right) {
    int curArea=min(height[left],height[right])*(right-left);
    if (maxArea<curArea) {
        maxArea=curArea;
    }
    else if (height[left]<height[right]) {
      left++;
    }
    else{
      right--;
    }
  }

  return maxArea;
}

int main() {

  vector<int> height={1,1};
  cout<<mostWater(height)<<endl;


  return 0;
}
