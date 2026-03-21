#include <iostream>
using namespace std;

void reverseString(string & str,int i,int j)
{

    return;
}

int main() {

string str="abcdefg";
int k=2;
int strLen=str.length();

for (size_t i = 0; i < strLen; i+=2*k) {
  int left=i;
  int right=i+k-1;
  while (left<right)
    swap(str[left++],str[right--]);
}

  cout<<str<<"\n";

  return 0;
}
