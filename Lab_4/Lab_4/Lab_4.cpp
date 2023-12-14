#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <math.h>
using namespace std;

enum class MenuOptions { ClearConsole = -1, Exit = 0, PrintChartTask, GuesNumberTask, CheckMultiplyingTableTask, DigitSumTask };
void PrintMenuAndAskChoice(const HANDLE& h, MenuOptions& choice);

void PrintChartTask() {
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	short n;
	double x, y;
	short w;

	for (n = 0; n < 5; n++) {
		printf("|   x   |      y     |\n");
		printf("|-------|------------|\n");

		for (x = 0; x <= 1; x += 0.25) {
			y = x;
			printf("| %5.2lf | %10.7lf |", x + n * 4, y);
			w = (y + 1) * 10;
			if (y - 1 - w * 10 > 0.5) w++;

			for (; w > 0; w--) printf(" ");
			printf("*\n");
		}

		for (x = 1; x <= 2; x += 0.25) {
			y = 1 - (x - 1);
			printf("| %5.2lf | %10.7lf |", x + n * 4, y);
			w = (y + 1) * 10;
			if (y - 1 - w * 10 > 0.5) w++;

			for (; w > 0; w--) printf(" ");
			printf("*\n");
		}
	}

	system("pause");
	system("cls");
}
	
void CheckMultiplyingTableTask() {

	srand(time(0));
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	int from = 2, to = 9;
	cout << "Вирішіть рівняння " << endl;
	int mark = 0;
	for (int i = 0; i < 10; i++) {

		int firstMultiplier = (rand() % (to - from + 1)) + from;
		int secondMultiplier = (rand() % (to - from + 1)) + from;
		int answer = firstMultiplier * secondMultiplier;
		int userInput = -1;
		while (userInput != answer) {
			cout << firstMultiplier << " x " << secondMultiplier << " = ";
			cin >> userInput;
			if (userInput != answer) {
				SetConsoleTextAttribute(h, 4);
				cout << "Неправильна відповідь" << endl;
				SetConsoleTextAttribute(h, 15);
				mark--;
			}
		}
		mark++;
		SetConsoleTextAttribute(h, 10);
		cout << "Правильна відповідь! " << endl;
		SetConsoleTextAttribute(h, 15);
	}
	SetConsoleTextAttribute(h, 15);
	cout << "Оцінка " << mark << "/10\n";
	system("pause");
	system("cls");
}
void GuesNumberTask()
{
	srand(time(0));
	int from = 0, to = 100;
	int computerNumber = (rand() % (to - from + 1)) + from;
	int userNumber = -1;
	int tryCount = 0;
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 15);
	cout << "Від " << from << " до " << to << endl;
	while (userNumber != computerNumber) {
		cout << "Введіть число: ";
		cin >> userNumber;
		tryCount++;
		if (userNumber < computerNumber) {
			cout << "Більше " << endl;
		}
		else if (userNumber > computerNumber) {
			cout << "Меньше " << endl;
		}
	}
	cout << "Кількість спроб " << tryCount << " відповідь знайдена" << endl;
	system("pause");
	system("cls");
}
void DigitSumTask() {
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 15);
	char number[10];

	cout << "Введіть число: ";
	SetConsoleTextAttribute(h, 9);
	cin >> number;
	SetConsoleTextAttribute(h, 15);
	int digitSum = 0;
	int digitCount = 0;
	int endOfNumberIndex = -1;
	if (number[0] == '-') {
		SetConsoleTextAttribute(h, 4);
		cout << "Неправильне значення!" << endl;
		system("pause");
		system("cls");
		return;
	}
	SetConsoleTextAttribute(h, 11);
	for (int i = sizeof(number) / sizeof(char) - 1; i > 0; i--) {
		if (number[i] == '\0') {
			endOfNumberIndex = i;
		}
	}
	for (int i = 0; i <= endOfNumberIndex; i++) {
		if (number[i] == '\0') {
			continue;
		}
		int digit = int(number[i] - '0');
		if (digit < 0 || digit>9) {
			SetConsoleTextAttribute(h, 4);
			cout << "Неправильна дія!" << endl;
			SetConsoleTextAttribute(h, 15);
			system("pause");
			system("cls");
			return;
		}
	}
	for (int i = endOfNumberIndex; i >= 0; i--) {
		if (number[i] == '\0') {
			continue;
		}
		int digit = int(number[i] - '0');
		digitCount++;
		digitSum += digit;
		cout << digit;
	}
	SetConsoleTextAttribute(h, 15);
	cout << endl;
	system("pause");
	system("cls");
}
void PrintMenuAndAskChoice(const HANDLE& h, MenuOptions& choice)
{
	SetConsoleTextAttribute(h, 15);
	printf("Оберіть программу:");
	SetConsoleTextAttribute(h, 6);
	printf("\n%i", MenuOptions::PrintChartTask);
	SetConsoleTextAttribute(h, 15);
	printf(" - Графік");
	SetConsoleTextAttribute(h, 6);
	printf("\n%i", MenuOptions::GuesNumberTask);
	SetConsoleTextAttribute(h, 15);
	printf(" - Вгадай число");
	SetConsoleTextAttribute(h, 6);
	printf("\n%i", MenuOptions::CheckMultiplyingTableTask);
	SetConsoleTextAttribute(h, 15);
	printf(" - Таблиця множення");
	SetConsoleTextAttribute(h, 6);
	printf("\n%i", MenuOptions::DigitSumTask);
	SetConsoleTextAttribute(h, 15);
	printf(" - Обернуті числа");
	SetConsoleTextAttribute(h, 6);
	printf("\n%i", MenuOptions::Exit);
	SetConsoleTextAttribute(h, 15);
	printf(" - Вихід\nВарінт: ");
	SetConsoleTextAttribute(h, 2);
	scanf("%i", &choice);
	SetConsoleTextAttribute(h, 15);
}

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	MenuOptions choice;
	while (true) {
		PrintMenuAndAskChoice(h, choice);
		switch (choice)
		{
		case MenuOptions::PrintChartTask:
			PrintChartTask();
			break;
		case MenuOptions::GuesNumberTask:
			GuesNumberTask();
			break;
		case MenuOptions::CheckMultiplyingTableTask:
			CheckMultiplyingTableTask();
			break;
		case MenuOptions::DigitSumTask:
			DigitSumTask();
			break;
		case MenuOptions::Exit:
			return 0;
		default:
			SetConsoleTextAttribute(h, 4);
			printf("Непраильна дія - %i\n", (int)choice);
			SetConsoleTextAttribute(h, 7);
			system("pause");
			system("cls");
			break;
		}
	}

}