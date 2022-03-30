#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream myfile("example.wav", ios::in | ios::binary);
  char header[44];
  myfile.read(header, sizeof(header));

  unsigned int *SampleRate;
  SampleRate = (unsigned int *)(header + 24);

  short data[1000];
  myfile.seekg(SampleRate[0] * 10);
  myfile.read((char *)data, sizeof(data));
  myfile.close();

  ofstream myfile2("data.txt", ios::out | ios::binary);
  float dt = 1. / SampleRate[0];
  for (int i = 0; i < 500; i++)
  {
    myfile2 << i * dt << " " << data[i * 2] << " " << data[i * 2 + 1] << endl;
  }
  myfile2.close();

  return 0;
}
