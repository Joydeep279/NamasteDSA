#include <iostream>
#include<unordered_map>
using namespace std;

bool isomorphic(string s,string r){

  int sLen=s.length();
  int tLen=r.length();

  if (sLen!=tLen) {
    return false;
  }

  unordered_map<char,char> StoR;
  unordered_map<char,char> RtoS;

  for (size_t i = 0; i < sLen; i++) {
    if (StoR.count(s[i])==0&&RtoS.count(r[i])==0) {
      StoR[s[i]]=r[i];
      RtoS[r[i]]=s[i];
    }else if (StoR.count(s[i])&&StoR[s[i]]!=r[i]) {
      return false;
    }
    else if (RtoS.count(r[i])&&RtoS[r[i]]!=s[i]) {
      return false;
    }

    e;.
  }

  return true;

}


int main() {

string s="badc";
string t="baba";

if (isomorphic(s,t)) {
  cout<<"isomorphic";
}
else{
  cout<<"Not isomorphic";
}


  return 0;
}
