#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main()
{
  //Sprint 1:
  char header[12];

  int *number;
  number = (int *)header;
  *number = 500;

  float *frequency;
  frequency = (float *)(header + 4);
  *frequency = 1000;

  short *amplitude, *phase;
  amplitude = (short *)(header + 8);
  *amplitude = 1000;
  phase = (short *)(header + 10);
  *phase = 12;

  ofstream assignmentFileOut("a.dat", ios::binary | ios::out);

  if (!assignmentFileOut)
  {
    cout << "File not founded" << endl;
    return 1;
  }
  assignmentFileOut.write(header, sizeof(header));
  assignmentFileOut.close();

  //Sprint 2:
  ifstream assignmentFileIn("a.dat", ios::binary | ios::in);

  if (!assignmentFileIn)
  {
    cout << "File not founded" << endl;
    return 1;
  }

  assignmentFileIn.read(header, sizeof(header));

  float *frequencyConfirmation;
  frequencyConfirmation = (float *)(header + 4);

  cout << "  frequency: " << *frequencyConfirmation << endl;
  assignmentFileIn.close();
  *frequency = 700.0;

  ofstream assignmentFileOut2("a.dat", ios::binary | ios::out);

  if (!assignmentFileOut2)
  {
    cout << "File not founded" << endl;
    return 1;
  }

  assignmentFileOut2.write(header, sizeof(header));
  assignmentFileOut2.close();

  //Sprint 3:
  const float pi = 3.141592;
  float dt = 1. / *frequency / 20.0;

  float *data;
  data = new float[*number];
  for (int i = 0; i < *number; i++)
  {
    data[i] = *amplitude * sin(2.0 * pi * *frequency * i * dt);
  }

  ofstream assignmentFileOut3("a.dat", ios::binary | ios::out);

  if (!assignmentFileOut3)
  {
    cout << "File not founded" << endl;
    return 1;
  }

  assignmentFileOut3.write(header, sizeof(header));
  assignmentFileOut3.write((char *)data, sizeof(data));
  assignmentFileOut3.close();

  //Sprint 4:
  *frequency = 1000;

  float *data2;
  data2 = new float[*number];

  ofstream assignmentFileOut4("b.dat", ios::binary | ios::out);
  assignmentFileOut4.write(header, sizeof(header));
  for (int i = 0; i < *number; i++)
  {
    data2[i] = *amplitude * sin(2.0 * pi * *frequency * i * dt);
  }
  assignmentFileOut4.write((char *)data2, sizeof(data2));
  assignmentFileOut4.close();

  // ifstream assignmentFileIn2("a.dat", ios::binary | ios::in);

  // if (!assignmentFileIn2)
  // {
  //   cout << "File not founded" << endl;
  //   return 1;
  // }

  // assignmentFileIn2.read((char *)data, sizeof(data));
  // assignmentFileIn2.close();

  // ifstream assignmentFileIn3("b.dat", ios::binary | ios::in);

  // if (!assignmentFileIn3)
  // {
  //   cout << "File not founded" << endl;
  //   return 1;
  // }

  // assignmentFileIn3.read((char *)data2, sizeof(data2));
  // assignmentFileIn3.close();

  ofstream makeTextFile("graph.txt");
  for (int i = 0; i < *number; i++)
  {
    makeTextFile << i * dt << " " << data[i] << " " << data2[i] << endl;
  }
  makeTextFile.close();
}