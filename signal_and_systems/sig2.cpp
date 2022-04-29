#include <iostream>
#include <fstream>
using namespace std;
int main()
{
  int x[7];
  for (int i = 0; i < 7; i++)
  {
    x[i] = 1;
  }
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

  int y[20];
  int result = 0;
  for (int n = 0; n < 15; n++)
  {
    if (n <= 3)
    {
      for (int k = 0; k <= n; k++)
      {
        y[n] += x[k] * h[n - k];
      }
    }
    else if (n > 3 && n <= 7)
    {
      for (int k = 0; k <= n; k++)
      {
        y[n] += x[k] * h[n - k];
      }
    }
    else if (n > 7 && n <= 10)
    {
      for (int k = 0; k <= 15 - n; k++)
      {
        y[n] += x[n - 8 + k] * h[8 - k];
      }
    }
    else if (n > 10 && n <= 15)
    {
      for (int k = 0; k <= 15 - n; k++)
      {
        y[n] += x[n - 8 + k] * h[8 - k];
      }
    }
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
        y[n] += x[n - 8 + k] * h[8 - k];
      }
    }

    y[n] = result;
    result = 0;
    cout << "y[" << n << "]"
         << "=" << y[n] << endl;
  }

  return 0;
}