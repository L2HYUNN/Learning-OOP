#include <iostream>
using namespace std;

void dd(int x)
{
  cout << x + 2 << endl;
}
void ee()
{
  cout << " happy\n";
}

int main()
{

  int i;
  for (i = 0; i < 5; i++)
  {
    if (i == 0)
    {
      dd(i);
    }
    else if (i == 1)
    {
      ee();
    }
    else
    {
      i = 10;
      dd(i);
    }
  } // end of for-loop
  cout << i << endl;
  return 123;
}
