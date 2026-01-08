#include <iostream>
using namespace std;

bool isPalindrome(int num){
  int temp=num;
  int reverseNumber=0;

  while (temp!=0) {
    reverseNumber=(reverseNumber*10)+temp%10;
    temp/=10;
  }

  cout<<reverseNumber<<"\n";

  if(num==reverseNumber){
    cout<<"Is Palindrome \n";
    return true;
  }
  else {
    cout<<"Is Palindrome \n";
    return false;
  }

}

int main() {
  int num;
  cout<<"Enter the Number: ";
  cin>>num;
  isPalindrome(num);

  return 0;
}
