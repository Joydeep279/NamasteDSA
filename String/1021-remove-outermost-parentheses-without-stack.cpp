#include <iostream>
using namespace std;
#include<vector>

string removeOuterParentheses(string s) {
  int count=-1;
  string result="";


  for (char ch :s) {
    if (ch=='('){
      count++;
      count?result+=ch:result+="";
    }

    else
    {
      count?result+=ch:result+="";
        count--;
    }

}
return result;

}

int main() {

string s = "(()())(())";
std::cout << removeOuterParentheses(s) << '\n';

  return 0;
}
