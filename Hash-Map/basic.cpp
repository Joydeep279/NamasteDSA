#include <iostream>
#include<unordered_map>

using namespace std;


int main() {

  string s="anagram";
  string t="nagaram";
  bool isAnagram=true;


  unordered_map<char,int> sequenceTable;


  for (int i = 0; i < s.length(); i++) {
    if (sequenceTable.count(s[i])) {
      sequenceTable[s[i]]=sequenceTable[s[i]]+1;
    }
    else{
      sequenceTable[s[i]]=1;

    }
  }

  // Modern range-based for loop
  for (const auto& pair : sequenceTable) {
      std::cout << pair.first << ": " << pair.second << std::endl;
  }


  for (int i = 0; i < t.length(); i++) {
    if(sequenceTable.count(t[i]==0||sequenceTable[t[i]]<0)){
      isAnagram=false;
      break;
    }
      else{
        sequenceTable[t[i]]=sequenceTable[t[i]]-1;
      }

  }

  for (const auto& pair : sequenceTable) {
      std::cout << pair.first << ": " << pair.second << std::endl;
  }

  for (const auto& pair : sequenceTable) {
      if(pair.second)
        {
          isAnagram=false;
          break;
        }
  }

if (isAnagram) {
  cout<<"anagram";
}
else{
  cout<<"not anagram";

}

  return 0;
}
