#include <iostream>
using namespace std;

bool isSubsequence(string s, string t) {

  int sLen=s.length();
  int tLen=t.length();

  int sPtr=0;
  int tPtr=0;

  while (sPtr<sLen && tPtr<tLen) {

    if (s[sPtr]==t[tPtr]) {
      sPtr++;
    }

    tPtr++;
  }


  return sPtr==sLen;

  }

int main() {

string s="abc";
string t="asdbsd";

if (isSubsequence(s,t)) {
  cout<<"True"<<endl;
}
else{
  cout<<"False"<<endl;
}


  return 0;
}
