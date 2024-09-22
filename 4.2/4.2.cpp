#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double x, xp, xk, dx, A, B, y;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "--------------------------------" << endl;
	cout << "|" << setw(10) << "x" << " |" << setw(15) << "y" << " |" << endl;
	cout << "--------------------------------" << endl;

	x = xp;
	while (x <= xk) 
	{
		A = 5 * exp(3 * x);
		if (x <= -1) 
			B = 3 + sin(abs(x));
		else 
			if (x > 3)
			B = 7 - sqrt(2 * pow(x, 3));
		else
			B = 2 * exp((x / 4) - 1);

		y = A - B;

		cout << "|" << setw(10) << setprecision(2) << x
			<< " |" << setw(15) << setprecision(3) << y
			<< " |" << endl;

		x += dx;
	}

	cout << "--------------------------------" << endl;

	return 0;
}
