#include <iostream>
using namespace std;
int main()
{
  float f1, f2;
  for (float x = 0.0; x < 10.0; x += 0.1)
  {
    f1 = 2 * x;
    f2 = x * x;
    if (f1 == f2)
    {
      cout << "yes you all right" << endl;
    }
    if (f1 < f2)
    {
      cout << x << endl;
      break;
    }
    cout << End Midterm Exam Thank you ! << endl;
  }
  return 0;
}