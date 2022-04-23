#include <iostream>
using namespace std;
int main()
{
  int i = 1;
  while (i < 6)
  {
    switch (i)
    {
    case 1:
    case 2:
    case 3:
      cout << "small" << endl;
      break;
    case 4:
    case 5:
      cout << "big" << endl;
      break;
    default:
      break;
    }
    i++;
  }
  return 0;
}