#include <iostream>
#include <math.h>
#include <windows.h>
#include <stdio.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	HANDLE h; //Link on window of 
	char name1[9], name2[9], name3[9];
	char type1, type2, type3;
	unsigned short cnt1, cnt2, cnt3;
	float m1, m2, m3;
	h = GetStdHandle(STD_OUTPUT_HANDLE); //set link on standart cansel
	SetConsoleTextAttribute(h, 14);
	cout << "1. Введіть: назву, школу, кількість, площу >";
	SetConsoleTextAttribute(h, 8);
	cin >> name1 >> type1 >> cnt1 >> m1;
	SetConsoleTextAttribute(h, 14);
	cout << "2. Введіть: назву, школу, кількість, площу >";
	SetConsoleTextAttribute(h, 8);
	cin >> name2 >> type2 >> cnt2 >> m2;
	SetConsoleTextAttribute(h, 14);
	cout << "3. Введіть: назву, школу, кількість, площу >\n";
	SetConsoleTextAttribute(h, 8);
	cin >> name3 >> type3 >> cnt3 >> m3;
	SetConsoleTextAttribute(h, 5);
	printf("------------------------------------------------\n");
	SetConsoleTextAttribute(h, 14);
	printf("|Опис деталей                                  |\n");
	SetConsoleTextAttribute(h, 5);
	printf("|----------------------------------------------|\n");
	SetConsoleTextAttribute(h, 14);
	printf("|   Назва    |  Тип  | Кількість |    Вага     |\n");
	printf("|            |       |           |     (г)     |\n");
	SetConsoleTextAttribute(h, 5);
	printf("|------------|-------|-----------|-------------|\n");
	SetConsoleTextAttribute(h, 14);
	printf("| %10s | %-5c | %-9d | %-11.1f |\n", name1, type1, cnt1, m1);
	printf("| %9s | %-5c | %-9d | %-11.1f |\n", name2, type2, cnt2, m2);
	printf("| %10s | %-5c | %-9d | %-11.1f |\n", name3, type3, cnt3, m3);
	SetConsoleTextAttribute(h, 5);
	printf("|----------------------------------------------|\n");
	SetConsoleTextAttribute(h, 14);
	printf("|Примітка: О - Орегінальна; П - Покупна;       |\n");
	printf("|           З - Запозичена                     |\n");
	SetConsoleTextAttribute(h, 5);
	printf("------------------------------------------------\n");
	//Фланець З 3 450 Перехідник П 8 74 Станина О 1 117050
}