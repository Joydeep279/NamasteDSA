#include <iostream>
using namespace std;

int uniqueElement(int arr[],int size){
    int curIndex=0;
    for (int i = 0; i < size; i++)
        if (arr[curIndex]<arr[i]) {
            arr[++curIndex]=arr[i];
    }

    return curIndex;
}

void Display(int arr[],int size){
  for (int i = 0; i < size; i++)
       cout<<arr[i]<<" ";
  cout<<endl;
  return ;
}

int main() {

    int arr[]={1,1,2};
    int len= sizeof(arr)/sizeof(arr[0]);
    cout<<uniqueElement(arr,len)<<endl;
    Display(arr,len);

  return 0;
}
