#include <iostream>
using namespace std;

bool  isBadVersion(int n){
  if (n<=5) {
    return true;
  }
  else{
    return false;
  }
}

int firstBadVersion(int n) {
  int left = 1;
    int right = n;
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (isBadVersion(mid)) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }

    return right;
    }


int main() {

  cout<<firstBadVersion(15)<<endl;

  return 0;
}
