#include <iostream>
#include<vector>

using namespace std;


vector<int> nextGreater(vector<int> subArray,vector<int> mainArr) {

  for (size_t i = 0; i < subArray.size(); i++) {
    int j=0;

    //STEP 1:
    while (subArray[i]!=mainArr[j])
      ++j;
      ++j;

    //STEP 2:
    bool isGreaterFound=false;
    while (mainArr.size()!=j) {
        if (mainArr[j]>subArray[i]) {
          isGreaterFound=true;
          subArray[i]=mainArr[j];
          break;
        }
        j++;
    }
    if (!isGreaterFound) {
      subArray[i]=-1;
    }



  }

  return subArray;

}


int main() {

vector<int> subArray={1,4,2};
vector<int> mainArr={1,5,4,2,8,7,};

vector<int> result=nextGreater(subArray,mainArr);

for (size_t i = 0; i < result.size(); i++) {
  cout<<result[i]<<" "; 
}
cout<<endl;
  return 0;
}
