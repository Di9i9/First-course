#include <iostream>
#include <math.h>
#include <windows.h>
#include <stdio.h>
#include <iomanip>
using namespace std;

void Task_1 ()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	HANDLE h;
	h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 14);
	double x, y;
	printf("Введіть координату x > ");
	SetConsoleTextAttribute(h, 5);
	cin >> x;
	SetConsoleTextAttribute(h, 14);
	printf("Введіть координату у > ");
	SetConsoleTextAttribute(h, 5);
	cin >> y;
	printf("x=%6.3lf;  y=%6.3lf\n", x, y);
	SetConsoleTextAttribute(h, 14);
	if ((y >= x) && (y >= -x) && (y <= 1) && (y >= -1))
		printf("Точка потрапляє в задану область\n");
	else {
		if ((y <= 1) && (y >= -1) && (y <= x) && (y <= -x))
			printf("Точка потрапляє в задану область\n");
		else
		{
			printf("Точка не потрапляє в задану область\n");
		}
	}
}

void Task_2() {
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	double a, b, c;
	cout << "Введіть значення a, b, c для рівняння вигляду ax^2 + bx + c = 0> ";
	cin >> a >> b >> c;
	cout << "Аналіз рівняння " << a << "*x^2 +" << b << "x +" << c << " = 0\n";

	if (a == 0) {
		SetConsoleTextAttribute(h, 4);
		cout << "Рівняння не є квадратним!\n";

		if (b == 0) {
			cout << "Рівняння не має дійсних коренів!\n";
			return;
		}

		double x = -c / b;
		cout << "Відповідь " << x << endl;
		return;
	}
	else if (b == 0) {
		SetConsoleTextAttribute(h, 4);
		cout << "Рівняння є неповним квадратним рівнянням!\n";

		if (c > 0) {
			cout << "Рівняння не має дійсних коренів!\n";
			SetConsoleTextAttribute(h, 15);
			return;
		}
		else {
			SetConsoleTextAttribute(h, 3);
			double x1 = sqrt(-c);
			double x2 = -sqrt(-c);
			cout << "Відповідь " << x1 << " " << x2 << endl;
			return;
		}
	}
	else if (c == 0) {
		SetConsoleTextAttribute(h, 4);
		cout << "Рівняння є неповним квадратним рівнянням!\n";

		if (b == 0) {
			SetConsoleTextAttribute(h, 3);
			double x1 = 0;
			double x2 = 0;
			cout << "Відповідь " << x1 << " " << x2 << endl;
		}
		else {
			double x = -b / a;
			SetConsoleTextAttribute(h, 3);
			cout << "Відповідь " << x << endl;
		}
		return;
	}

	double D;
	D = b * b - 4 * a * c;
	if (D < 0) {
		SetConsoleTextAttribute(h, 4);
		cout << "Рівняння не має дійсних коренів!\n";
		SetConsoleTextAttribute(h, 15);
	}
	else if (D == 0) {
		double y = b / (2 * a);
		SetConsoleTextAttribute(h, 15);
		cout << "Дискримінант рівняння дорівнює нулю\n";
		cout << "Відповідь " << y << endl;
	}
	else {
		double x1 = (-b - sqrt(D)) / (2 * a);
		double x2 = (-b + sqrt(D)) / (2 * a);
		SetConsoleTextAttribute(h, 10);
		cout << "Відповідь " << x1 << " " << x2 << endl;
	}
}

void Task_3() {
	int mushroomCount;
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << ">";
	cin >> mushroomCount;

	char wordEnding[3];
	if (mushroomCount > 10 && mushroomCount < 20) {
		wordEnding[0] = 'і';
		wordEnding[1] = 'в';
		wordEnding[2] = '\0';
	}
	else if (mushroomCount % 10 == 0 || mushroomCount % 10 >= 5) {
		wordEnding[0] = 'і';
		wordEnding[1] = 'в';
		wordEnding[2] = '\0';
	}
	else if (mushroomCount % 10 == 1) {
		wordEnding[0] = '\0';
	}
	else if (mushroomCount % 10 > 1 && mushroomCount % 10 < 5) {
		wordEnding[0] = 'а';
		wordEnding[1] = '\0';
	}

	cout << " У мене ";
	SetConsoleTextAttribute(h, 4);
	cout << mushroomCount;
	SetConsoleTextAttribute(h, 15);
	cout << " гриб";
	SetConsoleTextAttribute(h, 10);
	cout << wordEnding << endl;
}

void Menu()
{

	int gd;
	do
	{
		setlocale(LC_ALL, "Russian");
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);
		HANDLE h;
		h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 6);
		cout << "Введіть цифру 1 для запуску першої програми\n";
		cout << "Введіть цифру 2 для запуску другої програми\n";
		cout << "Введіть цифру 3 для запуску третьої програми\n";
		cout << "Введіть цифру 0 для виходу\n";
		cout << "Дія ";
		SetConsoleTextAttribute(h, 3);
		cin >> gd;
		SetConsoleTextAttribute(h, 7);
		switch (gd)
		{
		case 1:
			Task_1();
			system("pause");
			system("cls");
			break;
		case 2:
			Task_2();
			system("pause");
			system("cls");
			break;
		case 3:
			Task_3();
			system("pause");
			system("cls");
			break;
		case 0:
			SetConsoleTextAttribute(h, 4);
			cout << setw(10) << "Завершення...\n";
			SetConsoleTextAttribute(h, 7);
			system("pause");
			system("cls");
			break;
		default:
			SetConsoleTextAttribute(h, 4);
			cout << "Не правильна дія\n";
			SetConsoleTextAttribute(h, 7);
			system("pause");
			system("cls");
			break;
		}
	} while (gd != 0);

}

int main()
{
	Menu();
}
