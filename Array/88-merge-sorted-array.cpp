#include <iostream>
#include <limits.h>
using namespace std;

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {

  int temp[m];
  int mainIndex=0;
  int i=0,j=0;
//store first array to a temp one
for (int i = 0; i <= m; i++)
  temp[i]=nums1[i];

  while (i<=m||j<=n) {

    if (temp[i]<=nums2[j]) {
      nums1[mainIndex++]=temp[i++];
    }
    else{
      nums1[mainIndex++]=nums2[j++];
    }
  }

  while (i<=m) {
    nums1[mainIndex++]=temp[i++];
  }

  while (j<=n) {
    nums1[mainIndex++]=nums2[j++];
  }

  for (int i = 0; i <mainIndex; i++)
    cout<<nums1[i]<<" ";
    cout<<"\n";

  return;
}

void mergeV2(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
{
  

  return;
}

int main() {

    int nums1[]={};
    int nums2[]={1};
    int size=sizeof(nums1)/sizeof(nums1[0]);
    int n=sizeof(nums2)/sizeof(nums2[0]);
    int m=0;
    merge(nums1,m,m-1,nums2,n,n-1);



  return 0;
}
