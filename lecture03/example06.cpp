#include <iostream>
#include <fstream>
using namespace std;
int main()
{
  unsigned short man[5];
  float area[5];

  ifstream in;
  in.open("out.bin", ios::binary | ios::in);
  in.read((char *)man, sizeof(man));
  in.read((char *)area, sizeof(area));
  for (int i = 0; i < 5; i++)
  {
    cout << man[i] << " " << area[i] << endl;
  }
  in.close();
}