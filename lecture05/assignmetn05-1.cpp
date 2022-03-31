#include <iostream>
#include <fstream>
using namespace std;

void productself(float *, int);
void product5(int *, int);

int main()
{
  int *data;
  data = new int[3];

  char *data;
  data = new char[36];

  int *a;
  a = (int *)data;  
  int *b;
  b = (int *)data + 4;
  float *c;
  c = (float *)data + 24;
  A = 1234;
  b[0] = 1000;
  b[1] = 2000;
  b[2] = 3000;
  b[3] = 4000;
  b[4] = 5000;
  c[0] = -0.5;
  c[1] = 0;
  c[2] = 0.5;

  product5(b, 5);
  productself(c, 3);

  ofstream xxw("mybin.dat", ios::binary | ios::out); //mybin.dat 쓰기
  if (!xxw)
    return 111;
  xxw.write(data, sizeof(char) * 36);
  xxw.close();
  return 0;
}

void product5(int *x, int n)
{
  for (int i = 0; i < n; i++)
    x[i] = x[i] * 5;
}
void productself(float *x, int n)
{
  for (int i = 0; i < n; i++)
    x[i] = x[i] * x[i];
}
