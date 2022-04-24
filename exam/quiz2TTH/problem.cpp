#include <fstream>
#include <cmath>
using namespace std;
int main()
{
  const float PI = 3.141592;
  ofstream xx("sine.txt");
  float dt, xt, t = 0.0, f = 800.0, tmax = 0.1;
  dt = 1. / 800.0;
  for (t = 0; t < tmax; t += dt)
  {
    xt = 1000 * sin(2 * PI * f * t);
    xx << t << " " << xt << endl;
  }
  xx.close();
  return 0;
}