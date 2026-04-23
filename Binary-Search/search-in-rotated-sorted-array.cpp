#include <iostream>
#include<vector>
using namespace std;

int search(vector<int> arr,int target)
{

  int left=0;
  int right=arr.size()-1;

  while (left<=right) {
    int mid=left+((right-left)/2);

    if (arr[mid]==target) {
      return mid;
    }
    else if(arr[left]<arr[mid]){

      if (target<arr[mid]&&target>=arr[left]) {
        right=mid-1;
      }
      else{
        left=mid+1;
      }

    }
    else{
      if (arr[mid]<target &&target<=arr[right]) {
        left=mid+1;
      }
      else{
        right=mid-1;
      }
    }

  }
  return -1;
}


int main() {
  vector<int> arr={4,5,6,7,0,1,2};
  cout<<search(arr,4);


  return 0;
}
