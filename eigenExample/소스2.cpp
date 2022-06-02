#include <iostream>
#include <Eigen/Dense>
using namespace std;
using namespace Eigen;
int main()
{
	MatrixXd *a = new MatrixXd[3];
	MatrixXd *a2 = new MatrixXd[3];
	for (int i = 0; i < 3; i++)
	{
		a[i] = MatrixXd(1, 4);
		a2[i] = MatrixXd(1, 4);
	}

	a[0] << 100, 120, -4, 2;
	a[1] << 100, 20, 120, 32;
	a[2] << 10, 120, 108, 8;

	MatrixXd c(4, 4);
	c << 0.5, 0.5, 0.5, 0.5,
			0.5, 0.5, -0.5, -0.5,
			0.5, -0.5, -0.5, 0.5,
			0.5, -0.5, 0.5, -0.5;

	for (int i = 0; i < 3; i++)
	{
		cout << "A: " << a[i] * c << endl;
		a[i] = a[i] * c;
		cout << "a: " << a[i] * c.transpose() << endl;
		a[i] = a[i] * c.transpose();
		cout << endl;
	}

	a2[0] << 109, 111, 0, 0;
	a2[1] << 136, 0, 0, 84;
	a2[2] << 123, 0, -105, 0;

	for (int i = 0; i < 3; i++)
	{
		cout << "a2: " << a2[i] * c.transpose() << endl;
		a2[i] = a2[i] * c.transpose();
	}

	return 0;
}