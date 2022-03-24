#include <iostream>
using namespace std;

float price(int n, int m)
{
  float apple = 1000, boat = 1500;
  float result = apple * n + boat * m;
  return result;
}

int main()
{
  float pp = price(5, 3);
  cout << pp << endl;
}
