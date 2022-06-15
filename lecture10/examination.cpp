#include <iostream>
using namespace std;
class A
{
public:
  A() : a(20) {}
  short ff() { return a * a; }
  short a;
}; // class A
class B : public A
{
public:
  B(){};
  short ff() { return a * a * a; }
}; // class B
int main()
{
  A *aa[3];
  aa[0] = new A();
  aa[1] = new B();
  aa[2] = new B();
  for (int i = 0; i < 3; i++)
    cout << aa[i]->ff() << endl;
  return 1;
}