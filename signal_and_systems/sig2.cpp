#include <iostream>
#include <fstream>
using namespace std;
int main()
{
  int x[7] = {
      1,
      1,
      1,
      1,
      1,
      1,
      1};
  int h[9] = {
      1,
      1,
      1,
      1,
      2,
      2,
      2,
      2,
      2};

  int y[15];
  for (int n = 0; n <= 15; n++)
  {

    if (n <= 7)
    {
      for (int k = 0; k <= n; k++)
      {
        y[n] += x[k] * h[n - k];
      }
    }
    else
    {
      for (int k = 0; k <= 15 - n; k++)
      {
        y[n] += x[n - 8 + k] * h[9 - k];
      }
    }
    cout << "y[" << n << "]"
         << "=" << y[n] << endl;
  }

  return 0;
}