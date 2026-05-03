#include <iostream>
#include<unordered_map>
using namespace std;

int lengthOfLongestSubstring(string s){

  int len=s.length();
  int i=0;

  unordered_map<char,int> lookUp;
  int maxFreq=0;

  for (int j = 0; j < len; j++) {
    // char exist and within windowSize
      if (lookUp.count(s[j]) && lookUp[s[j]]>=i) {
          i=lookUp[s[j]]+1;
      }
          lookUp[s[j]]=j;


      maxFreq=max(maxFreq,j-i+1);
  }

  return maxFreq;
}

int main() {
  string s="abbcd";

  cout<<lengthOfLongestSubstring(s)<<endl;

  return 0;
}
