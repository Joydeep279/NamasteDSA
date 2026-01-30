#include <iostream>
using namespace std;

int Search(int arr[],int size,int target)
{
  for (int i = 0; i < size; i++)
    if (arr[i]==target)
      return i;
  return -1;
}


int main() {

  int nums[] = {12, 45, 231, 12, 78, 43};
  int size = sizeof(nums) / sizeof(nums[0]);
  cout << Search(nums,size,231);
  return 0;
}
