#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  int II[10];
  short *ii;
  int *aa;
  ii = (short *)(II + 5);
  aa = (int *)ii;
  for (int i = 0; i < 5; i++)
    II[i] = i;
  for (int i = 0; i < 10; i++)
    ii[i] = i;

  ofstream out;
  out.open("abc.bin", ios::binary | ios::out);
  out.write((char *)II, sizeof(II));
  for (int i = 0; i < 5; i++)
    cout << hex << aa[i] << endl;
}