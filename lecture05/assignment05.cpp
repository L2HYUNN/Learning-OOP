#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
  const float pi = 3.141592;
  float 도 = 130.81, 레 = 146.83, 미 = 164.81, 파 = 174.61, 솔 = 196.00, 라 = 220.00, 시 = 246.94;
  float 도2 = 261.63, 레2 = 293.66, 미2 = 329.63, 파2 = 349.23, 솔2 = 392.00, 라2 = 440.00, 시2 = 493.88;
  int N = 22050;
  int n = 22050 * 135;
  short data[n];
  float dt = 1. / (float)N;
  float a = 5000.;
  char header[44];
  short *BPS;
  BPS = (short *)(header + 34);

  for (int i = 0; i < n; i++)
  {
    if (i < N)
      data[i] = (short)(a * sin(2.0 * pi * 도 * i * dt));
    else if (i < 2 * N)
      data[i] = (short)(a * sin(2.0 * pi * 도2 * i * dt));
    else if (i < 3 * N)
      data[i] = (short)(a * sin(2.0 * pi * 레2 * i * dt));
    else if (i < 5 * N)
      data[i] = (short)(a * sin(2.0 * pi * 미2 * i * dt) + a * sin(2.0 * pi * 도 * i * dt));
    else if (i < 6 * N)
      data[i] = (short)(a * sin(2.0 * pi * 도2 * i * dt));
    else if (i < 7 * N)
      data[i] = (short)(a * sin(2.0 * pi * 시2 * i * dt));
    else if (i < 8 * N)
      data[i] = (short)(a * sin(2.0 * pi * 도2 * i * dt) + a * sin(2.0 * pi * 라 * i * dt));
    else if (i < 9 * N)
      data[i] = (short)(a * sin(2.0 * pi * 시2 * i * dt));
    else if (i < 10 * N)
      data[i] = (short)(a * sin(2.0 * pi * 도2 * i * dt));
    else if (i < 11 * N)
      data[i] = (short)(a * sin(2.0 * pi * 레2 * i * dt));
    else if (i < 12 * N)
      data[i] = (short)(a * sin(2.0 * pi * 미2 * i * dt) + sin(2.0 * pi * 라 * i * dt));
    else if (i < 14 * N)
      data[i] = 0;
    else if (i < 15 * N)
      data[i] = (short)(a * sin(2.0 * pi * 파 * i * dt));
    else if (i < 16 * N)
      data[i] = (short)(a * sin(2.0 * pi * 도2 * i * dt));
    else if (i < 17 * N)
      data[i] = (short)(a * sin(2.0 * pi * 레2 * i * dt));
    else if (i < 19 * N)
      data[i] = (short)(a * sin(2.0 * pi * 미2 * i * dt) + a * sin(2.0 * pi * 파 * i * dt));
    else if (i < 20 * N)
      data[i] = (short)(a * sin(2.0 * pi * 도2 * i * dt));
    else if (i < 21 * N)
      data[i] = (short)(a * sin(2.0 * pi * 시2 * i * dt));
    else if (i < 22 * N)
      data[i] = (short)(a * sin(2.0 * pi * 도2 * i * dt) + a * sin(2.0 * pi * 솔 * i * dt));
    else if (i < 23 * N)
      data[i] = (short)(a * sin(2.0 * pi * 시2 * i * dt));
    else if (i < 24 * N)
      data[i] = (short)(a * sin(2.0 * pi * 도2 * i * dt));
    else if (i < 25 * N)
      data[i] = (short)(a * sin(2.0 * pi * 미2 * i * dt));
    else if (i < 26 * N)
      data[i] = (short)(a * sin(2.0 * pi * 파2 * i * dt) + a * sin(2.0 * pi * 솔 * i * dt));
    else if (i < 27 * N)
      data[i] = (short)(a * sin(2.0 * pi * 미2 * i * dt));
    else if (i < 28 * N)
      data[i] = (short)(a * sin(2.0 * pi * 레2 * i * dt));
    else if (i < 29 * N)
      data[i] = (short)(a * sin(2.0 * pi * 도2 * i * dt));
    else if (i < 30 * N)
      data[i] = (short)(a * sin(2.0 * pi * 도 * i * dt));
    else if (i < 31 * N)
      data[i] = (short)(a * sin(2.0 * pi * 도2 * i * dt));
    else if (i < 32 * N)
      data[i] = (short)(a * sin(2.0 * pi * 레2 * i * dt));
    else if (i < 34 * N)
      data[i] = (short)(a * sin(2.0 * pi * 미2 * i * dt) + a * sin(2.0 * pi * 도 * i * dt));
    else if (i < 35 * N)
      data[i] = (short)(a * sin(2.0 * pi * 도2 * i * dt));
    else if (i < 36 * N)
      data[i] = (short)(a * sin(2.0 * pi * 시2 * i * dt));
    else if (i < 37 * N)
      data[i] = (short)(a * sin(2.0 * pi * 도2 * i * dt) + a * sin(2.0 * pi * 라 * i * dt));
    else if (i < 38 * N)
      data[i] = (short)(a * sin(2.0 * pi * 시2 * i * dt));
    else if (i < 39 * N)
      data[i] = (short)(a * sin(2.0 * pi * 도2 * i * dt));
    else if (i < 40 * N)
      data[i] = (short)(a * sin(2.0 * pi * 레2 * i * dt));
    else if (i < 41 * N)
      data[i] = (short)(a * sin(2.0 * pi * 미2 * i * dt) + sin(2.0 * pi * 라 * i * dt));
    // 미파 미파미도레
    else if (i < 43 * N)
      data[i] = 0;
    else if (i < 44 * N)
      data[i] = (short)(a * sin(2.0 * pi * 파 * i * dt));
    else if (i < 45 * N)
      data[i] = (short)(a * sin(2.0 * pi * 미2 * i * dt));
    else if (i < 46 * N)
      data[i] = (short)(a * sin(2.0 * pi * 파2 * i * dt));
    else if (i < 47 * N)
      data[i] = (short)(a * sin(2.0 * pi * 미2 * i * dt) + sin(2.0 * pi * 파 * i * dt));
    else if (i < 48 * N)
      data[i] = (short)(a * sin(2.0 * pi * 파2 * i * dt));
    else if (i < 49 * N)
      data[i] = (short)(a * sin(2.0 * pi * 미2 * i * dt));
    else if (i < 50 * N)
      data[i] = (short)(a * sin(2.0 * pi * 도2 * i * dt));
    else if (i < 51 * N)
      data[i] = (short)(a * sin(2.0 * pi * 레2 * i * dt) + sin(2.0 * pi * 솔 * i * dt));
    else if (i < 53 * N)
      data[i] = 0;
    else if (i < 55 * N)
      data[i] = 0;
    //다음
    else if (i < 56 * N)
      data[i] = (short)(a * sin(2.0 * pi * 도2 * i * dt));
    else if (i < 57 * N)
      data[i] = (short)(a * sin(2.0 * pi * 레2 * i * dt));
    else if (i < 59 * N)
      data[i] = (short)(a * sin(2.0 * pi * 미2 * i * dt) + a * sin(2.0 * pi * 도 * i * dt));
    else if (i < 60 * N)
      data[i] = (short)(a * sin(2.0 * pi * 도2 * i * dt));
    else if (i < 61 * N)
      data[i] = (short)(a * sin(2.0 * pi * 시2 * i * dt));
    else if (i < 62 * N)
      data[i] = (short)(a * sin(2.0 * pi * 도2 * i * dt) + a * sin(2.0 * pi * 라 * i * dt));
    else if (i < 63 * N)
      data[i] = (short)(a * sin(2.0 * pi * 시2 * i * dt));
    else if (i < 64 * N)
      data[i] = (short)(a * sin(2.0 * pi * 도2 * i * dt));
    else if (i < 65 * N)
      data[i] = (short)(a * sin(2.0 * pi * 레2 * i * dt));
    else if (i < 66 * N)
      data[i] = (short)(a * sin(2.0 * pi * 미2 * i * dt) + sin(2.0 * pi * 라 * i * dt));
    else if (i < 68 * N)
      data[i] = 0;
    else if (i < 69 * N)
      data[i] = (short)(a * sin(2.0 * pi * 파 * i * dt));
    else if (i < 70 * N)
      data[i] = (short)(a * sin(2.0 * pi * 도2 * i * dt));
    else if (i < 71 * N)
      data[i] = (short)(a * sin(2.0 * pi * 레2 * i * dt));
    else if (i < 73 * N)
      data[i] = (short)(a * sin(2.0 * pi * 미2 * i * dt) + a * sin(2.0 * pi * 파 * i * dt));
    else if (i < 74 * N)
      data[i] = (short)(a * sin(2.0 * pi * 도2 * i * dt));
    else if (i < 75 * N)
      data[i] = (short)(a * sin(2.0 * pi * 시2 * i * dt));
    else if (i < 76 * N)
      data[i] = (short)(a * sin(2.0 * pi * 도2 * i * dt) + a * sin(2.0 * pi * 솔 * i * dt));
    else if (i < 77 * N)
      data[i] = (short)(a * sin(2.0 * pi * 시2 * i * dt));
    else if (i < 78 * N)
      data[i] = (short)(a * sin(2.0 * pi * 도2 * i * dt));
    else if (i < 79 * N)
      data[i] = (short)(a * sin(2.0 * pi * 미2 * i * dt));
    else if (i < 80 * N)
      data[i] = (short)(a * sin(2.0 * pi * 파2 * i * dt));
    else if (i < 81 * N)
      data[i] = (short)(a * sin(2.0 * pi * 미2 * i * dt));
    else if (i < 82 * N)
      data[i] = (short)(a * sin(2.0 * pi * 레2 * i * dt));
    else if (i < 83 * N)
      data[i] = (short)(a * sin(2.0 * pi * 도2 * i * dt));
    // 다음
    else if (i < 84 * N)
      data[i] = (short)(a * sin(2.0 * pi * 도 * i * dt));
    else if (i < 85 * N)
      data[i] = (short)(a * sin(2.0 * pi * 도2 * i * dt));
    else if (i < 86 * N)
      data[i] = (short)(a * sin(2.0 * pi * 레2 * i * dt));
    else if (i < 88 * N)
      data[i] = (short)(a * sin(2.0 * pi * 미2 * i * dt) + a * sin(2.0 * pi * 도 * i * dt));
    else if (i < 89 * N)
      data[i] = (short)(a * sin(2.0 * pi * 도2 * i * dt));
    else if (i < 90 * N)
      data[i] = (short)(a * sin(2.0 * pi * 시2 * i * dt));
    else if (i < 91 * N)
      data[i] = (short)(a * sin(2.0 * pi * 도2 * i * dt) + a * sin(2.0 * pi * 라 * i * dt));
    else if (i < 92 * N)
      data[i] = (short)(a * sin(2.0 * pi * 시2 * i * dt));
    else if (i < 93 * N)
      data[i] = (short)(a * sin(2.0 * pi * 도2 * i * dt));
    else if (i < 94 * N)
      data[i] = (short)(a * sin(2.0 * pi * 파2 * i * dt));
    else if (i < 95 * N)
      data[i] = (short)(a * sin(2.0 * pi * 미2 * i * dt) + sin(2.0 * pi * 라 * i * dt));
    // 미파 미파미도레
    else if (i < 97 * N)
      data[i] = 0;
    else if (i < 98 * N)
      data[i] = (short)(a * sin(2.0 * pi * 파 * i * dt));
    else if (i < 99 * N)
      data[i] = (short)(a * sin(2.0 * pi * 미2 * i * dt));
    else if (i < 100 * N)
      data[i] = (short)(a * sin(2.0 * pi * 파2 * i * dt));
    else if (i < 101 * N)
      data[i] = (short)(a * sin(2.0 * pi * 미2 * i * dt) + sin(2.0 * pi * 파 * i * dt));
    else if (i < 102 * N)
      data[i] = (short)(a * sin(2.0 * pi * 파2 * i * dt));
    else if (i < 103 * N)
      data[i] = (short)(a * sin(2.0 * pi * 미2 * i * dt));
    else if (i < 104 * N)
      data[i] = (short)(a * sin(2.0 * pi * 도2 * i * dt));
    else if (i < 105 * N)
      data[i] = (short)(a * sin(2.0 * pi * 레2 * i * dt) + sin(2.0 * pi * 솔 * i * dt));
    else if (i < 109 * N)
      data[i] = 0;
    //다음
    // 레~
    else if (i < 110 * N)
      data[i] = (short)(a * sin(2.0 * pi * 미 * i * dt));
    else if (i < 111 * N)
      data[i] = (short)(a * sin(2.0 * pi * 레2 * i * dt));
    else if (i < 112 * N)
      data[i] = 0;
    else if (i < 113 * N)
      data[i] = (short)(a * sin(2.0 * pi * 레2 * i * dt));
    else if (i < 114 * N)
      data[i] = 0;
    else if (i < 115 * N)
      data[i] = (short)(a * sin(2.0 * pi * 레2 * i * dt) + sin(2.0 * pi * 시 * i * dt));
    else if (i < 116 * N)
      data[i] = (short)(a * sin(2.0 * pi * 미2 * i * dt));
    else if (i < 117 * N)
      data[i] = (short)(a * sin(2.0 * pi * 도2 * i * dt));
    else if (i < 118 * N)
      data[i] = (short)(a * sin(2.0 * pi * 시2 * i * dt));
    else if (i < 119 * N)
      data[i] = (short)(a * sin(2.0 * pi * 도2 * i * dt) + sin(2.0 * pi * 라 * i * dt));
    else if (i < 120 * N)
      data[i] = (short)(a * sin(2.0 * pi * 시2 * i * dt));
    else if (i < 121 * N)
      data[i] = (short)(a * sin(2.0 * pi * 도2 * i * dt));
    else if (i < 122 * N)
      data[i] = (short)(a * sin(2.0 * pi * 미 * i * dt));
    // 라 도 파 미~
    else if (i < 123 * N)
      data[i] = (short)(a * sin(2.0 * pi * 라2 * i * dt));
    else if (i < 124 * N)
      data[i] = (short)(a * sin(2.0 * pi * 도2 * i * dt));
    else if (i < 126 * N)
      data[i] = (short)(a * sin(2.0 * pi * 파2 * i * dt) + sin(2.0 * pi * 시 * i * dt));
    else if (i < 128 * N)
      data[i] = (short)(a * sin(2.0 * pi * 미2 * i * dt));
    else if (i < 129 * N)
      data[i] = (short)(a * sin(2.0 * pi * 레2 * i * dt) + sin(2.0 * pi * 라 * i * dt));
    else if (i < 132 * N)
      data[i] = (short)(a * sin(2.0 * pi * 도2 * i * dt));
    else if (i < 133 * N)
      data[i] = (short)(a * sin(2.0 * pi * 라2 * i * dt));
    else if (i < 134 * N)
      data[i] = (short)(a * sin(2.0 * pi * 솔2 * i * dt) + sin(2.0 * pi * 솔 * i * dt));
    // else if (i < 28 * N)
    //   data[i] = (short)(a * sin(2.0 * pi * 파 * i * dt));
    else
      data[i] = (short)(a * sin(2.0 * pi * 도 * i * dt));
  }

  ifstream myfile("example.wav", ios::in | ios::binary);
  myfile.read(header, sizeof(header));
  myfile.close();

  ofstream new_music("new_music_end5.wav", ios::out | ios::binary);
  new_music.write(header, sizeof(header));
  new_music.write((char *)data, sizeof(data));
  new_music.close();

  return 0;
}
