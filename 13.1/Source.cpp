#include <iostream>
#include <math.h>
#include <iomanip>

#include "dod.h"
#include "sum.h"
#include "var.h"

using namespace std;

using namespace nsVar;
using namespace nsDod;
using namespace nsSum;

int main()
{
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "arctg(x) = "; cin >> eps;
	cout << endl;

	cout << fixed;
	cout << "-----------------------------------------" << endl;
	cout << "|" << setw(5) << "x" << "   |"
		<< setw(10) << "arctg(x)" << " |"
		<< setw(7) << "S" << "    |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "-----------------------------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		sum();

		cout << "|" << setw(7) << setprecision(2) << x << " |"
			<< setw(10) << setprecision(5) << atan(x) << " |"
			<< setw(10) << setprecision(5) << s << " |"
			<< setw(5) << n << " |"
			<< endl;
		x += dx;
	}
	cout << "-----------------------------------------" << endl;

	cin.get();
	return 0;
}