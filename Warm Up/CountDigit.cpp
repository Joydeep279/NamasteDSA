#include <iostream>
using namespace std;


int CountDigit(int Digit){

  int count=1;

  while (Digit!=0) {
    Digit=Digit/10;
    count++;
  }

  return count-1;
}


int main() {
  int Digit;
  cout<<"Enter the Digit: ";
  cin>>Digit;
  cout<<CountDigit(Digit);

  return 0;
}
