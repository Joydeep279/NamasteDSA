#include <iostream>
using namespace std;

int strStr(string haystack, string needle) {

  int hayLen=haystack.length();
  int needleLen=needle.length();

  int hayPtr=0;
  int needlePtr=0;

  for (int i = 0; i < hayLen; i++) {
    int startIndex=i;
    bool isSubSeq=false;
    for (int j = 0 ; j < needleLen; j++) {
      if (haystack[startIndex]==needle[j]) {
          isSubSeq=true;
          startIndex++;
      }
      else{
          isSubSeq=false;
          break;
      }
    }

    if (isSubSeq) {
      return i;
    }

  }

  return -1;

}


int main() {

string str1="mississippi";
string str2="issip";

cout<<strStr(str1,str2)<<endl;

  return 0;
}
