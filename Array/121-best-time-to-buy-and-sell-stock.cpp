#include <iostream>
#include <limits.h>
using namespace std;

int bestTime(int prices[],int size)
{
  int maxElement=INT_MIN,maxIndex=0;

  for (int i = 0; i < size; i++) {
   if (prices[i]>maxElement) {
       maxIndex=i;
       maxElement=prices[i];
   }
 }

 int minElement;

for (int i = 0; i <= maxIndex; i++) {
  if (maxElement>prices[i]) {
        minElement=prices[i];
  }
}

  return maxElement-minElement;
}



int main() {

    int prices[] = {2,4,1};
    int size=sizeof(prices)/sizeof(prices[0]);
    cout<<bestTime(prices,size)<<"\n";

  return 0;
}
