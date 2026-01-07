#include <iostream>
using namespace std;

void Display(int itration) {
  for (int i = 0; i <= itration; i++) {
        for (int j = 0; j <= itration-i; j++) {
            cout << j<<" ";

        }
        cout<<endl;
  }
}


int main() {

  int itration;
  std::cout << "Enter the value: ";
  cin>>itration;

  Display(itration);

    return 0;
}
