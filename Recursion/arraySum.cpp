#include <iostream>
using namespace std;
int arr[]={1,2,3,4,5};

int arrSum(int mainIndex){

    if (mainIndex<=0) {
      if (arr[mainIndex]%2!=0) {
      return 0;
      }
      return arr[0];
    }
    if (arr[mainIndex]%2!=0) {
      --mainIndex;
    }
    cout<<arr[mainIndex]<<endl;
  return arr[mainIndex]+arrSum(mainIndex-1);
}

int main() {

  int size=sizeof(arr)/sizeof(arr[0]);
  cout<<arrSum(size-1);

  return 0;
}
