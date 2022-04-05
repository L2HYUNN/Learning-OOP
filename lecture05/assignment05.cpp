#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
  const float pi = 3.141592;
  float c = 523.25, d = 587.33, e = 659.26, f = 698.46, g = 783.99, a2 = 880.00, b = 987.77;
  int N = 44100;
  int n = 44100 * 5;
  short data[n];
  float dt = 1. / (float)N;
  float a = 5000.;

  for (int i = 0; i < n; i++)
  {
    if (i < N)
      data[i] = (short)(a * sin(2.0 * pi * c * i * dt));
    else if (i < 2 * N)
      data[i] = (short)(a * sin(2.0 * pi * d * i * dt));
    else if (i < 3 * N)
      data[i] = (short)(a * sin(2.0 * pi * e * i * dt));
    else if (i < 4 * N)
      data[i] = (short)(a * sin(2.0 * pi * f * i * dt));
    else
      data[i] = (short)(a * sin(2.0 * pi * g * i * dt));
  }

  ifstream myfile("example.wav", ios::in | ios::binary);
  char header[44];
  myfile.read(header, sizeof(header));
  myfile.close();

  ofstream new_music("new_music3.wav", ios::out | ios::binary);
  new_music.write(header, sizeof(header));
  new_music.write((char *)data, sizeof(data));
  new_music.close();

  return 0;
}
