#include<iostream>
using namespace std;

void printStar(int input)
{
  for (int i = 0; i < input; i++) {
    for (int j = 0; j < input; j++) {
         cout << "* ";
    }
    cout<<endl;
  }


  return;
}

int main() {
  printStar(5);
  return 0;
}
