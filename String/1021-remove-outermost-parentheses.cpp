#include <iostream>
#include<stack>
#include<vector>
using namespace std;
string removeOuterParentheses(string s) {
       stack<char> st;
       string temp = "";
       vector<string> strPair;
       string result = "";

       for (char ch : s) {
           if (ch == '(') {
             // cout<<ch<<endl;
               temp += ch;
               st.push(ch);
           } else if(st.top()=='('){
               temp += ch;
               st.pop();
               // cout<<ch<<endl;
           }
           if (st.empty()) {
               cout<<temp<<endl;
               strPair.push_back(temp);
               temp = "";
           }
       }
       cout<<"entering result loop\n";
       for (int i = 0; i < strPair.size(); i++) {
           // result += strPair[i].substr(1, strPair.size() - 2);
           cout<<strPair[i]<<endl;
       }
       for (int i = 0; i < strPair.size(); i++) {
           result += strPair[i].substr(1, strPair[i].size() - 2);
           cout<<result<<endl;
       }

       return result;
   }

int main() {
    string s = "(()())(())";

  cout<<removeOuterParentheses(s)<<endl;
  return 0;
}
