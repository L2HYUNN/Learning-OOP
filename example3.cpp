#include <iostream>
using namespace std;

float calculateBMI(float, float);

int main()
{
  float h, w;
  cout << "Please Enter your height and weight: ";
  cin >> h >> w;
  cout << "height: " << h << endl
       << "weight: " << w << endl;

  calculateBMI(h, w);
}

float calculateBMI(float h, float w)
{
  float BMI;
  BMI = w / (h * h);
  cout << "BMI: " << BMI << endl;
  return BMI;
}