#include <iostream>
using namespace std;

int multiplicationTableNine(int);

int main()
{
  int i;

  i = 3;
  multiplicationTableNine(i);

  i = 5;
  multiplicationTableNine(i);

  i = 7;
  multiplicationTableNine(i);
}

int multiplicationTableNine(int n)
{
  cout << "9 x " << n << " = " << 9 * n << endl;
  return 0;
}