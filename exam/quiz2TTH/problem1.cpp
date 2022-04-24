#include <iostream>
#include <fstream>
using namespace std;
int main()
{
  int a[] = {10, 20, 30, 40};
  int b[4];

  ofstream out;
  out.open("a.dat", ios::binary | ios::out);
  out.write((char *)a, sizeof(a));
  out.close();

  ifstream in;
  in.open("a.dat", ios::binary | ios::in);
  in.read((char *)b, sizeof(b));
  in.close();

  for (int i = 0; i < 4; i++)
  {
    cout << b[i] << endl;
  }

  return 0;
}