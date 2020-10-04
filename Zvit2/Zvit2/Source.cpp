#include <iostream>
#include <math.h>

using namespace std;

double arcctg(double a)
{
	return 3.14 / 2 - atan(a);
}


double findY2(double x)
{
	return (x + cos(2 * x)) / 3 * x;
}

void findY_while(double start, double end, double step)
{
	int c = 0;
	for (double i = start; i <= end; i += step)
	{
		c++;
		cout << c << "\t" << i << "\t" << findY2(i) << "\n";
	}
}

void findY_goto(double start, double end, double step)
{
	int c = 0;
	double i = start;

tryAgain:

	if(i <= end)
	{
		c++;
		cout << c << "\t" << i << "\t" << findY2(i) << "\n";

		i += step;
		goto tryAgain;
	}
}


double findY3(double x)
{
	if (-2 <= x && x <= 0)
	{
		return sin(x) + pow(exp(1), x);
	}
	else if (0 < x && x <= 3) {
		return arcctg(x - 0.3);
	}
}

int main()
{
	// 1 task
	
	/*double x, z = 1;

	cin >> x;

	if (1 < x < 20.4)
	{
		cout << "1 < x < 20.4" << "\n";
		cout << "result 1: " << 2 * x * pow(pow(x, 2) + pow(z, 2), 1 / 3) << "\n";
	}
	else if (0 < x <= 1)
	{
		cout << "0 < x <= 1" << "\n";
		cout << "result 2: " << arcctg(x - z) << "\n";
	}
	else if (x <= 0)
	{
		cout << "x <= 0" << "\n";
		cout << "result 3: " << pow(exp(1), x + z) << "\n";
	}*/
	
	// task 2
	//findY_while(2.3, 5.4, 0.8);
	//findY_goto(2.3, 5.4, 0.8);

	// task 3
	/*double start, end, step, c = 0;

	cin >> start;
	cin >> end;
	cin >> step;

	for (double i = start; i <= end; i += step)
	{
		c++;
		cout << c << "\t" << i << "\t" << findY3(i) << "\n";
	}*/


	return 0;
}