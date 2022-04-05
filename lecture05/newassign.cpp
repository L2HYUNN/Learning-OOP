#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
  const float pi = 3.141592;
  char header[44];
  short *NumC;
  NumC = (short *)(header + 22);
  int *SR;
  SR = (int *)(header + 24);
  short *BPS;
  BPS = (short *)(header + 34);

  int N = 44100;
  short *data;
  data = new short[5 * N];
  float dt = 1. / (float)N;
  float a = 5000.;
  float f1, f2, f3;
  f1 = 261.63;
  f2 = 329.63;
  f3 = 392.00;
  for (int i = 0; i < 5 * N; i++)
  {
    if (i < N)
      data[i] = (short)(a * sin(2.0 * pi * f1 * i * dt));
    else if (i < 2 * N)
      data[i] = (short)(a * sin(2.0 * pi * f2 * i * dt));
    else if (i < 3 * N)
      data[i] = (short)(a * sin(2.0 * pi * f3 * i * dt));
    else if (i < 4 * N)
      data[i] = (short)(a * sin(2.0 * pi * f2 * i * dt));
    else
      data[i] = (short)(a * sin(2.0 * pi * f1 * i * dt));
  }

  ifstream bb("example.wav", ios::binary | ios::in);
  if (!bb)
    return 555;
  bb.read(header, sizeof(header));
  bb.close();

  ofstream mm("my.wav", ios::binary | ios::out);
  if (!mm)
    return 666;
  // *NumC = 1;
  // *SR = 44100;
  // *BPS = 16;
  mm.write(header, sizeof(header));
  mm.write((char *)data, 5 * N * sizeof(short));
  mm.close();
}