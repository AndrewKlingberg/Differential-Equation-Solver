//Andrew Klingberg
//Euler's Method
//2-19-18

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double yprime(double, double);

int main()
{
	int n, i, j = 0;
	double h, x0, y0, y = 0;
	cout << "Andrew Klingberg 2-19-18" << endl << endl;
	cout << " h:"; cin >> h;
	cout << " n:"; cin >> n;
	cout << "x0:"; cin >> x0;
	cout << "y0:"; cin >> y0;
	y = y0;

	cout << endl;
	cout << "                 Euler's Method" << endl;
	cout << "         ---------------------------" << endl;
	cout << setw(10) << "n" << "    " << setw(10) << "x(n)" << "  " << setw(10) << "y(n)" << "     " << endl;
	cout << "         ---------------------------" << endl;

	for (i = 0; i <= n; i++)
	{
		cout << setw(10) << i << "   " << setw(10) << x0 << "   " << setw(10) << y << "   " << endl;
		y = y0 + (h*yprime(x0, y0));
		y0 = y;
		x0 = x0 + h;
	}
	cout << endl << endl;
	system("pause");
	return 0;
}
double yprime(double x, double y)
{
	return((x*x) + (y*y));
}
