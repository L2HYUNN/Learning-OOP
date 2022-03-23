#include <iostream>
#include <fstream>
#include <cmath>
const float pi = 3.141592;
using namespace std;

int main()
{
  char header[12];
  int *n;
  n = (int *)header;
  *n = 500;
  float *f;
  f = (float *)(header + 4);
  *f = 1000.;
  float *a;
  a = (float *)(header + 8);
  *a = 100;
  short *p;
  p = (short *)(header + 10);
  *p = 12;
  short *data;
  data = new short[*n];
  float dt = 1. / f[0] / 20.0;
  for (int i = 0; i < n[0]; i++)
    data[i] = (short)(a[0] * sin(2.0 * pi * f[0] * i * dt));
  ofstream aa1("a.dat", ios::binary | ios::out);
  if (!aa1)
    return 666;
  aa1.write(header, 12 * sizeof(char));
  aa1.write((char *)data, n[0] * sizeof(short));
  aa1.close();
  *f = 700;
  ofstream bb1("b.dat", ios::binary | ios::out);
  if (!bb1)
    return 666;
  bb1.write(header, 12 * sizeof(char));
  bb1.write((char *)data, n[0] * sizeof(short));
  bb1.close();
  ifstream aa2("a.dat", ios::binary | ios::in);
  if (!aa2)
    return 666;
  aa2.read(header, 12 * sizeof(char));
  aa2.read((char *)data, n[0] * sizeof(short));
  float *data1;
  data1 = new float[*data];
  aa2.read((char *)data1, n[0] * sizeof(float));
  aa2.close();
  ifstream bb2("a.dat", ios::binary | ios::in);
  if (!bb2)
    return 666;
  bb2.read(header, 12 * sizeof(char));
  bb2.read((char *)data, n[0] * sizeof(short));
  float *data2;
  data2 = new float[*data];
  bb2.read((char *)data2, n[0] * sizeof(float));
  bb2.close();
  ofstream cc("c.txt");
  if (!cc)
    return 666;

  cc << " n " << *n << endl;
  cc << " f " << *f << endl;
  cc << " a " << *a << endl;
  cc << " p " << *p << endl;
  for (int j = 0; j < n[0]; j++)
  {
    cc << j * dt << " " << data1[j] << " " << data2[j] << endl;
  }

  cout << " n " << *n << endl;
  cout << " f " << *f << endl;
  cout << " a " << *a << endl;
  cout << " p " << *p << endl;
  cc.close();
  return 123;
}