#include<iostream>
using namespace std;

void triangle(int itration) {
  for (int i = 0; i < itration; i++) {
    for (int j = 0; j <= i; j++) {
      cout<<j+1<<" ";
    }
    cout<<endl;
  }
}

int main()
{
  int itration;
  std::cout << "Enter the value: ";
  cin>>itration;
  triangle(itration);

  return 0;
}
