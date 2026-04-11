#include <iostream>
#include <stack>
#include <vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

vector<int>algo(vector<int>arr){
int actualLen=arr.size();
int len=actualLen*2;
vector<int> result(actualLen);
stack<int> st;

for (int i = len-1; i >=0 ; i-- ) {
      while (!st.empty() && st.top()<=arr[i%actualLen]) {
        st.pop();
      }
      if (i%actualLen<actualLen) {
          result[i%actualLen] = st.empty() ? -1 : st.top();
      }

      st.push(arr[i%actualLen]);
}

 return result;
}

int main() {
std::vector<int> arr={1,2,3,4,3};
arr=algo(arr);

for (size_t i = 0; i < arr.size(); i++) {
  cout<<arr[i]<<" ";
}

cout<<endl;

  return 0;
}
