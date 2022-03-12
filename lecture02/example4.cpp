#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
const float PI = 3.141592;
int main()
{
  float t = 0.0, dt, T;
  dt = 1. / 440. / 20.;
  T = 5. / 440.;

  ofstream out("graph.txt");
  for (t = 0; t < T; t += dt)
  {
    out << t << "  " << sin(2. * PI * 440 * t) << endl;
  }
  out.close();
}