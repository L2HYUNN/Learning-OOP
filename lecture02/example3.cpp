#include <iostream>
using namespace std;
int main()
{
  const int a = 1, b = 3, d = 2;
  short c = 0;
  c = a << 7;
  c |= b << 3;
  c |= d;

  cout << oct << c << endl;
  return 0;
}