#include <iostream>
using namespace std;

void Insertion(int arr[],int size)
{
  for (int i = 1; i < size; i++) {
    int j=i-1;
    int temp=arr[i];
    while (arr[j]>temp&&j>=0) {
      arr[j+1]=arr[j];
      j--;
    }
    arr[j+1]=temp;
  }
  return;
}

int main() {

    int nums[] = {-12, 45, 231, 11112, 78, 43};
    int size = sizeof(nums) / sizeof(nums[0]);
    Insertion(nums,size);

    for (int i = 0; i < size; i++) {
      cout<<nums[i]<<" ";
    }
    cout<<endl;

  return 0;
}
