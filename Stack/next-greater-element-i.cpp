#include <iostream>
#include <unordered_map>
#include<vector>
#include<stack>

using namespace std;

 vector<int> nextGreaterElement(vector<int>& subArray, vector<int>& mainArr)
{
  unordered_map<int,int> ngtPair;
  stack<int> st;
  int mainArrLen=mainArr.size();
ngtPair[mainArr[mainArrLen-1]]=-1;
st.push(mainArr[mainArrLen-1]);


for (int i = mainArrLen-2; i >=0 ; i--) {
    if (!st.empty()&&st.top()>mainArr[i]) {
      ngtPair[mainArr[i]]=st.top();
      st.push(mainArr[i]);
    }
 else   if(!st.empty()&&st.top()<mainArr[i]){
      while (!st.empty()&&mainArr[i]>st.top()) {
      st.pop();
      }
      if (st.empty()) {
        ngtPair[mainArr[i]]=-1;
      }
      else{
        ngtPair[mainArr[i]]=st.top();
      }
      st.push(mainArr[i]);
    }



}

for (size_t i = 0; i < subArray.size(); i++) {
  subArray[i]=ngtPair[subArray[i]];
}

return subArray;
 }



int main() {

  vector<int> subArray={1,4,2};
  vector<int> mainArr={1,5,4,2,8,7};

  vector<int> result=nextGreaterElement(subArray,mainArr);

  for (size_t i = 0; i < result.size(); i++) {
    cout<<result[i]<<" ";
  }
  cout<<endl;

  return 0;
}
