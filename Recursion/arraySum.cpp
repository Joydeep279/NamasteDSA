#include <iostream>
using namespace std;

int arrSum(int arr[],int index,int size){

    if (index>=size) {
      return arr[index];
    }
  return arr[index]+arrSum(arr,index+1,size);
}

int main() {

  int nums[]={1,2,3,4,5};
  int size=sizeof(nums)/sizeof(nums[0]);
  cout<<arrSum(nums,0,size);

  return 0;
}
