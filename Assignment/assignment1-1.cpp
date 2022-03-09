#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
const float pi = 3.141592;
int main()
{
  ofstream out("assignment1-1.txt");

  float t, dt, T;
  float r, dr, R;

  T = 2;
  dt = 1. / 8.;
  R = 1.6;
  dr = 1. / 50.;

  r = 1.2;
  for (t = 0; t <= T; t += dt)
  {
    out << r * cos(pi * t) << "  " << r * sin(pi * t) << endl; //태양 선
  }

  out.close();
}