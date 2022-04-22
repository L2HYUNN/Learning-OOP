#include <iostream>
#include <fstream>
using namespace std;
int main()
{
  int A[4];
  short *aa;

  aa = (short *)A;
  for (int i = 0; i < 8; i++)
  {
    aa[i] = i + 5;
  }
  for (int i = 0; i < 4; i++)
  {
    cout << " 0x" << dec << A[i] << endl;
  }
  return 0;
}