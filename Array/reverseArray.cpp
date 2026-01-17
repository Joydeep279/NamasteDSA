#include <iostream>
using namespace std;

void reserve(char arr[],int size){
  for (int i = 0; i < size/2; i++) {
      swap(arr[i],arr[size-1-i]);
  }
  return;
}

void Display(char arr[],int size){
  for (int i = 0; i < size; i++)
     cout<<arr[i]<<" ";
     cout<<endl;

  return ;
}

int main() {

char arr[]={'j','o','y'};
int size = sizeof(arr) / sizeof(arr[0]);

reserve(arr,size);
Display(arr,size);
  return 0;
}
