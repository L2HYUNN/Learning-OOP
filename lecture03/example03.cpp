#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int *sum, N;
  float *root;
  sum = new int[10];
  root = new float[10];
  for (int i = 0; i < 10; i++)
  {
    N = i + 1;
    sum[i] = N * (N + 1) / 2;
    root[i] = sqrt((float)N);
  }
  sum[5] = 1;
  root[6] = 0.0;
  for (int i = 0; i < 10; i++)
  {
    cout << sum[i] << " " << root[i] << endl;
  }
  delete sum;
  delete root;
}