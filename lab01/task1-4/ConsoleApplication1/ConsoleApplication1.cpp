#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;
int checking(int f)
{
	cin >> f;
	while (f<1 || f>7)
	{
		cout << "Nice try,but we can't work with that.Please try again";
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> f;	
	}
	return(f);
}
float check(float f)
{

	cin >> f;
	while (cin.fail())
	{
		cout << "Nice try,but we can't work with that.Please try again";
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> f;

	}

	return f;
}
int calc()
{
	float a, b, q, f = 0;
	int c,m=0;
	double s=0, k = 0;
	cout << "Hello my dear. What are the numbers?" << endl;
	a = check(f);
	b = check(f);
	cout << "Number 1:" << a << endl << "Number 2:" << b << endl << "What do you want to do ?" << endl << "1. +" << endl << "2. -" << endl << "3. *" << endl << "4. /" << endl << "5.^2" << endl << "6.√" << endl << "7.log" << endl;
	c = checking(f);
	cout << "Your answer:" << c << endl;
	switch (c)
	{
	case 1:
	{
		s = a + b;
		break;
	}
	case 2:
	{
		s = a - b;
		break;
	}
	case 3:
	{
		s = a * b;
		break;
	}
	case 4:
	{
		if (b != 0)
		{
			s = a / b;
		}
		else
		{
			cout << "I can't do this!" << endl;
		}
		break;
	}
	case 5:
	{
		s = pow(a, 2);
		k = pow(b, 2);
		break;
	}
	case 6:
	{
		s = sqrt(a);
		k = sqrt(b);
		break;
	}
	case 7:
	{
		cout << "What log are you want?" << endl;
		q = check(f);
		s = log(a) / log(q);
		k = log(b) / log(q);
		break;
	}
	
	}
	if (k == 0 && b != 0 && c==4) 
	{
		cout << "Result=" << s << endl;
		m = m + 1;
	}
	if (k == 0 && m!=1)
	{
		cout << "Result=" << s << endl;
	}
	if (k!=0)
	{
		cout << "Result = " << s << ";" << k << endl;
	}
	
	return(1);
}

int main(int argc, char argv[])
{
	char r='y';
while (r=='y')
{
	calc();
cout << "Do you want to try again? y/n" << endl;
cin >> r;
}
	system("pause");
}
