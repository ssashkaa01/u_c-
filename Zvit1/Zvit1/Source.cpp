#include <iostream>
#include <math.h>

using namespace std;

double arcctg(double a)
{
	return 3.14 / 2 - atan(a);
}

int main()
{
	// Завдання 1
	
	int x1;

	cout << "Task 1\nEnter number:\n";
	cin >> x1;

	double res = (pow(exp(1), -3 * x1) + tan(3 * x1 - 3)) / (abs(sin(x1))) + pow(cos(x1) + cos(2 * x1), 1 / 4);

	cout << res;
	

	// Завдання 2
	double c = 4.5, a = 2, z, x, y;

	const double p = 3.14;

	y = (pow(sin(pow(a, 3) / 2), 2) - cos(c) / sin(4)) / (log(a) + log(pow(c, 2)));
	
	x = ((log(abs(c + a))) / arcctg(p / a)) + 0.1;
	
	z = c * exp(-2.5 * x + pow(y, 2)) - pow(c * x, 1 / 3);

	cout << z;

	return 0;
}