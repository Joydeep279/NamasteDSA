#include <iostream>
using namespace std;

void bubbleSort(int arr[],int size) {

  for (int j = 0; j < size; j++) {
    for (int i = 0; i < size-1-j; i++) {
      if (arr[i]>arr[i+1]) {
        int temp=arr[i+1];
        arr[i+1]=arr[i];
        arr[i]=temp;
      }
    }
  }

return;
}

int main() {

  int nums[] = {12, 45, 231, 12, 78, 43};
  int size = sizeof(nums) / sizeof(nums[0]);
  bubbleSort(nums,size);

  for (int i = 0; i < size; i++) {
    cout<<nums[i]<<" ";
  }


  return 0;
}
