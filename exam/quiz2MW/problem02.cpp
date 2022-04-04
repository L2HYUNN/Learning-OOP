#include <iostream>
using namespace std;

const int n = 5;
float fn(float *, float *, float);
int main()
{
  float ysum, x[n], y[n];
  ysum = fn(x, y, ysum);

  cout << ysum << endl;

  return 0;
}

float fn(float *x, float *y, float sum)
{
  for (int i = 0; i < n; i++)
  {
    x[i] = 0.1 + 0.2 * n;
    y[i] = 3 * x[i] + 4;
    sum += y[i];

    return sum;
  }
}