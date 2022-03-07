#include <iostream>
using namespace std;

float cel2faren(float);

int main()
{
  float cel, faren;
  cel = 20.0;
  cel2faren(cel);

  cel = 30.0;
  cel2faren(cel);

  cel = 100.0;
  cel2faren(cel);

  cout << "Please Enter Cel = ";
  cin >> cel;
  cel2faren(cel);
}

float cel2faren(float cc)
{
  float cel = cc;
  float faren;
  faren = cc * 9.0 / 5.0 + 32;
  cout << "cel = " << cel << " faren = " << faren << endl;

  return faren;
}