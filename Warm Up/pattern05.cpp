#include <iostream>
using namespace std;

void Display(int itration) {
  int toggle=1;
  for (int i = 0; i < itration; i++) {

    for (int j = 0; j <=i; j++) {
      cout<<toggle<<" ";
        if (toggle==1) {
          toggle=0;
        }else{
          toggle=1;
        }
    }
    std::cout << "" << '\n';
  }
}

int main() {

Display(5);

  return 0;
}
