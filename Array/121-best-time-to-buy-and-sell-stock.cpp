#include <iostream>
#include <limits.h>
using namespace std;

int bestTime(int arr[], int size)
{
  int minElement=arr[0],maxProfit=-9999;

  for (int i = 1; i < size; i++) {

      if (arr[i]<minElement) {
        minElement=arr[i];
      }
      if (maxProfit<(arr[i]-minElement)) {
        maxProfit=arr[i]-minElement;
      }

  }
  return maxProfit;
}

int main()
{
//                0
  int prices[] = {7,1,5,3,6,4};
  int size = sizeof(prices) / sizeof(prices[0]);
  cout << bestTime(prices, size) << "\n";

  return 0;
}
