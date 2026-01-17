#include <iostream>
using namespace std;

int removeElement(int arr[],int size,int val)
{
  int mainIndex=0;

  for (int i = 0; i < size; i++) {
    if (arr[i]!=val) {
      arr[mainIndex++]=arr[i];
    }
  }

  return mainIndex;
}


void Display(int arr[],int size){
  for (int i = 0; i < size; i++)
       cout<<arr[i]<<" ";
  cout<<endl;
  return ;
}

int main() {
  int arr[]={3,2,2,3};
  int size=4;

  cout<<removeElement(arr,size,3)<<"\n";
  Display(arr,size);

  return 0;
}
