#include <iostream>
#include <cstring>
using namespace std;

int main() {

    string temp="a";
    int curPointer=temp.length()-1;
    int wordLenth=0;
    bool activeFlag=false;

    while (curPointer>=0){
      if (temp[curPointer]>='A' && temp[curPointer]<='Z' || temp[curPointer]>='a' && temp[curPointer] <='z'){
      wordLenth++;
      activeFlag=true;
      }
      if (activeFlag&&temp[curPointer]==' ') {
        break;
      }
      curPointer--;
    }

    cout<<wordLenth<<endl;


  return 0;
}
