#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;
void fail()
{
	cout << "Nice try,but we can't work with that.";
	cin.clear();
	cin.ignore(1000, '\n');
}

float check()
{
	float f;
	cin >> f;
	while (cin.fail())
	{
		fail();
		cin >> f;

	}
	cin.ignore(1000, '\n');
	return f;
}
int main (int argc, char argv[])
{
	int a, b, c, q;
	char r;
	double s, k, d;
label:
	cout << "Hello, my dear.Are you want to enter fractional numbers?" << endl;
	cin >> r;
	if (r == 'y')
	{
		goto fractional;
	}
	cout << " What are the numbers?" << endl;
	cin >> a >> b;
	check;
	cout << "Number 1:" << a << endl << "Number 2:" << b << endl << "What do you want to do ?" << endl << "1. +" << endl << "2. -" << endl << "3. *" << endl << "4. /" << endl << "5.^2" << endl << "6.√" << endl << "7.log" << endl;
	cin >> c;
	cout << "Your answer:" << c << endl;
	switch (c)
	{
	case 1:
	{
		s = a + b;
		cout << "Result = " << s << endl;

	}
	case 2:
	{
		s = a - b;
		cout << "Result = " << s << endl;

	}
	case 3:
	{
		s = a * b;
		cout << "Result = " << s << endl;

	}
	case 4:
	{s = a / b;
	cout << "Result = " << s << endl;

	}
	case 5:
	{
		s = pow(a, 2);
		k = pow(b, 2);
		cout << "Result = " << s << ";" << k << endl;

	}
	case 6:
	{
		s = sqrt(a);
		k = sqrt(b);
		cout << "Result = " << s << ";" << k << endl;
	}
	case 7:
	{
		cin >> q;
		s = log(a) / log(q);
		k = log(b) / log(q);
		cout << "Result = " << s << ";" << k << endl;
	}
	cout << "Do you want to try again? y/n" << endl;
	cin >> r;
	if (r == 'y')
	{
		goto label;
	}
	break;
fractional:
	cout << " What are the numbers?" << endl;
	cin >> d >> k;
	cout << "Number 1:" << a << endl << "Number 2:" << b << endl << "What do you want to do ?" << endl << "1. +" << endl << "2. -" << endl << "3. *" << endl << "4. /" << endl << "5.^2" << endl << "6.√" << endl << "7.log" << endl;
	check();
	cin >> c;
	switch (c)
	{
	case 1:
	{
		s = d + k;
		cout << "Result = " << s << endl;

	}
	case 2:
	{
		s = d - k;
		cout << "Result = " << s << endl;

	}
	case 3:
	{
		s = d * k;
		cout << "Result = " << s << endl;

	}
	case 4:
	{s = d / k;
	cout << "Result = " << s << endl;

	}
	system("pause");
	return 1;
	}
	}
}
	