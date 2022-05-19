#include <iostream>
#include <random>
using namespace std;

int main()
{
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<int> dis(0, 99);

  for (int i = 0; i < 5; i++)
  {
    cout << "Ramdom Num : " << dis(gen) << endl;
  }

  return 0;
}