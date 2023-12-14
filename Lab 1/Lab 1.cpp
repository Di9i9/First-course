#include <iostream>
#include <math.h>
using namespace std;

void Tsk1()
{
	cout << "Ecsecution\n";
	cout << "Task 1\n";
	cout << "Type int has " << sizeof(int) << " bytes\n";
	cout << "Type short has " << sizeof(short) << " bytes\n";
	cout << "Type long has " << sizeof(long) << " bytes\n";
	cout << "Type char has " << sizeof(char) << " bytes\n";
	cout << "Type float has " << sizeof(float) << " bytes\n";
	cout << "Type double has " << sizeof(double) << " bytes\n";

	system("pause");
	system("cls");
}

void Tsk2()
{
	cout << "Task 2\n";
	int a;
	int b;
	int c;
	cout << "Input sides of triangle\n";
	cin >> a >> b >> c;
	if (a < b + c && b < a + c && c < a + b) {
		int p = (a + b + c) / 2;
		int s = sqrt(p * (p - a) * (p - b) * (p - c));
		cout << "Square of triangle is " << s << endl;
	}
	else {
		cout << "Incorect sides!\n";
	}

	system("pause");
	system("cls");
}

void Tsk3()
{
	cout << "Task 3\n";
	int x;
	long long x2;
	long long x4;
	long long x8;
	cout << "Input sourse number:";
	cin >> x;
	x2 = x * x;
	x4 = x2 * x2;
	x8 = x4 * x4;
	cout << x << " ^ 8 = " << x8 << endl;

	system("pause");
	system("cls");
}

void Tsk4()
{
	cout << "Task 4\n";
	int v;
	int v2;
	int t;
	cout << "Input valuas of two variables:";
	cin >> v >> v2;
	cout << "Method 1. Whis third variable" << endl;
	cout << "Variables are before changing: " << v << " and " << v2 << endl;
	t = v;
	v = v2;
	v2 = t;
	cout << "Variables are after changing: " << v << " and " << v2 << endl;
	system("pause");
	cout << "Method 2. Whihout third variable" << endl;
	cout << "Variables are before changing: " << v2 << " and " << v << endl;
	cout << "Variables are after changing: " << v << " and " << v2 << endl;

	system("pause");
	system("cls");
}

void Tsk5()
{
	cout << "Task 5\n";
	long long g;
	cout << "Number of years: ";
	cin >> g;
	cout << "Number of seconds in years: " << endl;
	cout << g * 365 * 24 * 60 * 60 << endl;

	system("pause");
	system("cls");
}

int main()
{
	Tsk1();

	Tsk2();

	Tsk3();

	Tsk4();

	Tsk5();
}
