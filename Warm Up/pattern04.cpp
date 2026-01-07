#include <iostream>
using namespace std;

void Display(int itration) {// itration => 5
  for (int i = 0; i < itration; i++) {
    for (int j = 1; j < itration-i; j++) {
      cout<<" ";
    }
    for (int j = 0; j <= i; j++) {
      cout<<"*";
    }
    cout<<endl;
  }
}

int main() {

  Display(5);

  return 0;
}
