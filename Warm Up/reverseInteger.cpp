#include <iostream>
using namespace std;

int reverseNumber(int num){
  int temp=num;
  int reverseNumber=0;

  while (temp!=0) {
    reverseNumber=(reverseNumber*10)+temp%10;
    temp/=10;
  }

return reverseNumber;
}

int main() {
  int num;
  cout<<"Enter the Number: ";
  cin>>num;
  cout<<reverseNumber(num);

  return 0;
}
