#include <iostream>
#include <fstream>
#include <cmath>
#include "Complex.h"

#define PI 3.141592
using namespace std;

int main()
{

  ofstream out;
  out.open("complex.txt");

  complex com1(1, 2);
  complex com2(2, 3);

  complex sum = com1 + com2;

  cout << sum.re << " + " << sum.im << "j" << endl;

  return 0;
}