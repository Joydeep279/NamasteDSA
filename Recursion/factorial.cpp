#include <iostream>
using namespace std;
int count=0;
int factorial(int n)
{
  if (n==1) {
    return 1;
  }
  return n*factorial(n-1);
}

int main() {
  int num;
  cout<<"Enter the value: ";
  cin>>num;
  std::cout << factorial(num) << '\n';

  return 0;
}
