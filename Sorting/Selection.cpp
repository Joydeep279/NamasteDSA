#include <iostream>
using namespace std;

void Selection(int arr[],int count) {
  for (int i = 0; i < count-1; i++) {
    int min=i;
    for (int j = i+1; j < count; j++) {
      if (arr[j]<arr[min]) {
        min=j;
      }
    }
    swap(arr[i],arr[min]);
  }
return;
}

int main() {

  int nums[] = {12, 45, 231, 12, 78, 43};
  int size = sizeof(nums) / sizeof(nums[0]);
  Selection(nums,size);

  for (int i = 0; i < size; i++) {
    cout<<nums[i]<<" ";
  }
  cout<<endl;
  return 0;
}
