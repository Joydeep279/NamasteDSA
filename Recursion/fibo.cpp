#include <iostream>
using namespace std;

int Fibo(int n)
{
  if (n<=1)
    return n;
  return Fibo(n-1)+Fibo(n-2);
}

int main() {
// 0 1 1 2 3 5 8
  cout<<Fibo(1000);
  return 0;
}
