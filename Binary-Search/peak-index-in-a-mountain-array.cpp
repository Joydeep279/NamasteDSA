#include <iostream>
#include<vector>
using namespace std;


int peakIndexInMountainArray(vector<int>& arr) {

  int left=0;
   int right=arr.size()-1;

   while(left<=right){

       int mid=left+(right-left)/2;

       if(arr[mid+1]>arr[mid]){
           left=mid+1;
       }
       else if(arr[mid-1]>arr[mid]){
           right=mid-1;
       }
       else{
           return mid;
       }

   }
   return -1;

}

int main() {

  std::vector<int> arr={18,29,38,59,98,100,99,98,90};
  cout<<peakIndexInMountainArray(arr)<<endl;
  return 0;
}
