#include <iostream>
#include <cmath>
using namespace std;
float fn(float *, float *);
int main()
{
  float xsum, xt[100], t[100];
  xsum = fn(xt, t);
  for (int i = 0; i < 100; i++)
  {
    cout << t[i] << " " << xt[i] << endl;
  }
  return 0;
}
float fn(float *xt, float *t)
{
  float PI = 3.141592;
  int a = 6000, n = 100;
  float dt = 0.01;
  float xsum;

  for (int i = 0; i < n; i++)
  {
    *(t + i) = 0.0 + (i * dt);
    *(xt + i) = sin(2 * PI * i * dt);
    xsum += *(xt + i);
  }
  return xsum;
}