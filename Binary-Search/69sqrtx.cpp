#include <iostream>
using namespace std;

int sqrtx(int x){

  int left=1;
  int right=x;
  int nearestVal=-1;
  while (left<=right) {

    int mid=(left+right)/2;
    cout<<mid<<endl;
    if ((mid*mid)==x) {
      return mid;
    }
    else if ((mid*mid)>x) {
      right=mid-1;
    }
    else{
       nearestVal=mid;
      left=mid+1;
    }
  }

return nearestVal;

}

int main() {
cout<<sqrtx(8)<<endl;
  return 0;
}
