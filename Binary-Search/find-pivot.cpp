#include <iostream>
#include <vector>
using namespace std;

int findPivot(vector<int> arr)
{
  int left=0;
  int len=arr.size();
  int right=len-1;

  while (left<=right) {
    int mid=left+((right-left)/2);
    else if (arr[mid]<arr[left]) {
      right=mid-1;
    }
    else{
      left=mid+1;
    }

  }

  return left;

}

int main() {
vector<int> arr={4,5,6,7,0,1,2};
cout<<findPivot(arr);

  return 0;
}
