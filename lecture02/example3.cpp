#include <iostream>
using namespace std;
int main()
{
  int a = 48, b = 15, c;

  c = a << 2;
  cout << "a*4  " << dec << c << endl;

  c = b >> 2;
  cout << "b/4  " << dec << c << endl;
}