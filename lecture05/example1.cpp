#include <iostream>
using namespace std;

int main()
{
  int *a;
  a = new int[11];

  for (int i = 0; i < 11; i++)
  {
    a[i] = i;
    cout << "result A: " << a[i] << endl;
  }

  delete[] a;

  int *c;

  c = (a + 1);

  for (int i = 0; i < 10; i++)
  {
    c[i] = i;
  }

  for (int i = 0; i < 11; i++)
  {
    cout << "result B: " << a[i] << endl;
  }

  return 0;
}

// 동적할당 메모리 사이즈 구하기

// 동적 배열 메모리 삭제에 관한 연구