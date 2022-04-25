#include <iostream>
using namespace std;
int main()
{
  // short exam[4];
  // for (int i = 0; i < 4; i++)
  // {
  //   exam[i] = i + 1;
  // }
  // char *data2 = (char *)exam;
  // for (int i = 0; i < 8; i++)
  // {
  //   cout << data2[i] << endl;
  // }

  char header[12];
  for (int i = 0; i < 12; i++)
  {
    header[i] = i;
  }
  short *data = (short *)header;
  for (int i = 0; i < 6; i++)
  {
    cout << hex << data[i] << endl;
  }
  for (int i = 7; i < 17; i++)
  {
    data[i] = i;
  }
  for (int i = 0; i < 17; i++)
  {
    cout << hex << data[i] << endl;
  }
  return 0;
}