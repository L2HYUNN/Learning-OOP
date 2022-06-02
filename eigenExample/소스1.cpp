#include <iostream>
#include <Eigen/Dense>
using namespace std;
using namespace Eigen;
int main()
{
	VectorXd *xX = new VectorXd[4];
	for (int i = 0; i < 4; i++)
	{
		xX[i] = VectorXd(4);
	}

	xX[0] << 0.5, 0.5, 0.5, 0.5;
	xX[1] << 0.5, 0.5, -0.5, -0.5;
	xX[2] << 0.5, -0.5, -0.5, 0.5;
	xX[3] << 0.5, -0.5, 0.5, -0.5;

	MatrixXd c(4, 4);
	c << 0.5, 0.5, 0.5, 0.5,
			0.5, 0.5, -0.5, -0.5,
			0.5, -0.5, -0.5, 0.5,
			0.5, -0.5, 0.5, -0.5;

	cout << c.transpose() << endl;
	cout << endl;
	cout << c.inverse() << endl;

	return 0;
}
