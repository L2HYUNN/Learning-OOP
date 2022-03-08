#include <fstream>
#include <cmath>
using namespace std;
const float PI = 3.141592;
int main()
{
  float dt, T;
  T = 10. / 220.;
  dt = 1. / 220. / 5.;

  ofstream out("assignment1.txt");
  for (float t = 0.0; t < T; t += dt)
  {
    out << exp(110 * t) * cos(220 * PI * t) << " " << exp(110 * t) * sin(220 * PI * t) << endl;
  }
  out.close();

  return 0;
}