#include <iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> dailyTemperatures(vector<int>& temperatures) {

vector<int> result(temperatures.size());
stack <int> st;

for (int i = temperatures.size()-1; i >=0 ; i--) {
  while (!st.empty()&&temperatures[st.top()]<=temperatures[i]) {
    st.pop();
  }

  result[i]=st.empty() ? 0 : st.top()-i;
  st.push(i);
}

return result;
}

int main() {

  std::vector<int> v={30,40,90};
v= dailyTemperatures(v);
  for (size_t i = 0; i < v.size(); i++) {
    cout<<v[i]<<" ";
  }
cout<<endl;
  return 0;
}
