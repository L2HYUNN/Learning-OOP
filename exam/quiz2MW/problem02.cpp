#include <iostream>
using namespace std;

const int n = 5;
float fn(float *, float *);
int main()
{
  float ysum, x[n], y[n];
  ysum = fn(x, y);

  cout << ysum << endl;

  return 0;
}

float fn(float *x, float *y)
{
  float sum = 0.0;
  float dt = 0.2;

  for (int i = 0; i < n; i++)
  {
    x[i] = 0.1 + (dt * n);
    y[i] = 3 * x[i] + 4;
    sum += y[i];

    return sum;
  }
  return 0;
}