#include <iostream>
#include<string>

using namespace std;


int main() {
  string s="joy deeeeep    ";
  bool isAlpha=false;
  int count=0;
  int i=s.length()-1;

  while (i>=0) {

    if(s[i] >='a' && s[i]<='z' || s[i] >='A' && s[i]<='Z'){
      isAlpha=true;
      count++;
    }



    if (isAlpha&&s[i]==' ') {
      break;
    }

      i--;
    }
    cout<<count<<endl;
  return 0;
}
