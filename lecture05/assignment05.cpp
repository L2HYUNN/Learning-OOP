#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
  char header[44];

  ifstream myfile("example.wav", ios::in | ios::binary);
  myfile.read(header, sizeof(header));

  // int *header2;
  // header2 = (int *)header;

  // for (int i = 0; i < 11; i++)
  // {
  //   cout << hex << header2[i] << endl;
  // }

  unsigned int *SampleRate;
  SampleRate = (unsigned int *)(header + 24);

  // cout << "SampleRate: " << SampleRate[0] << endl;

  myfile.seekg(SampleRate[0] * 10);
  short data[1000];
  myfile.read((char *)data, 1000);

  for (int i = 0; i < 1000; i++)
  {
    cout << data[i] << endl;
  }
  myfile.close();

  ofstream myfile2("data.txt", ios::out | ios::binary);
  float dt = 1. / SampleRate[0];
  for (int i = 0; i < 500; i++)
  {
    myfile2 << i * dt << " " << data[i * 2] << " " << data[i * 2 + 1] << endl;
  }

  return 0;
}

// int *chunkID;
// chunkID = (int *)header;

// cout << chunkID[2] << endl;