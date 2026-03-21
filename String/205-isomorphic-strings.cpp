#include <iostream>
#include<unordered_map>
using namespace std;

bool isomorphic(string s,string t){

  int sLen=s.length();
  int tLen=t.length();

  if (sLen!=tLen) {
    return false;
  }

  unordered_map<char,char> HashMap;

// STEP 1
  for (int i = 0; i < sLen; i++)
      HashMap[s[i]]=t[i];
// STEP 2
  for (int i = 0; i < tLen; i++)
     s[i]=HashMap.at(s[i]);
// STEP 3

for (const auto& pair : HashMap) {
    std::cout << pair.first << " : " << pair.second << std::endl;
}

  for (int i = 0; i < sLen; i++) {
    if (s[i]!=t[i]) {
      cout<<s[i]<<" : "<<t[i]<<endl;
      return false;
    }
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
