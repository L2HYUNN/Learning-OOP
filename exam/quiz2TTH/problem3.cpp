#include <iostream>
using namespace std;

int main()
{
  int i, ii[3];
  short *ss;
  for (i = 0; i < 3; i++)
  {
    ii[i] = (15 + i) * 0x10000 + 15 + i;
  }
  ss = (short *)(ii + 1);
  for (i = -1; i < 2; i++)
  {
    ss[i] = i * 2 + 5;
  }
  for (i = 0; i < 3; i++)
  {
    cout << hex << ii[i] << endl;
  }
  return 0;
}