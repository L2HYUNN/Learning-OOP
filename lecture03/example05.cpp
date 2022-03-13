#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main()
{
  unsigned short man[] = {50230, 10030, 6005, 18070, 9004};
  float area[5];

  area[0] = 220000.0;
  area[1] = 100100.0;
  area[2] = 90232.0;
  area[3] = 31111.0;
  area[4] = 150105.0;

  ofstream out;
  out.open("out.bin", ios::binary | ios::out);
  out.write((char *)man, sizeof(short) * 5);
  out.write((char *)area, sizeof(area));
  out.close();

  return 0;
}