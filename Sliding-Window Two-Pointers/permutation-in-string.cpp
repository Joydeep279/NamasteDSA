#include <iostream>
using namespace std;

int* refFreq;

int* buildFreqArr(string s,int i,int j){
  int temp[26]={0};
  for (int k = i; k <= j; k++) {
      ++temp[s[k] - 'a'];
  }

  for (int i = 0; i <26; i++) {
      cout<<temp[i]<<" ";
  }
  cout<<endl;

  return temp;
}

bool isTrueFreq(string s, int i, int j) {
    int* windowFreq = buildFreqArr(s, i, j);
    for (int k = i; k <= j; k++) {
        if (refFreq[s[k] - 'a'] != windowFreq[s[k] - 'a']) {
            return false;
        }
    }
    return true;
}

bool checkInclusion(string s1, string s2) {

    int s1Len=s1.length();
    int s2Len=s2.length();

    if (s1Len>s2Len) {
      return false;
    }

    int i=0,j=s1Len-1;

    refFreq=buildFreqArr(s1,0,s1Len-1);

    while (i < s2Len && j < s2Len) {
        if (isTrueFreq(s2,i,j)) {
          return true;
        }
        i += 1;
        j += 1;
    }

    return false;
}
int main() {

  string s1 = "ab", s2 = "eidbaooo";

  if(checkInclusion(s1,s2))
    cout<<"TRUE"<<"\n";
  else
    std::cout << "FALSE" << '\n';

  return 0;
}
