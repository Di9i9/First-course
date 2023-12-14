#include <stdio.h>
#include <math.h>
#include <iostream>
#include <vector>
#include <iomanip>
#include <cstdlib>
#include <Windows.h>
#include <ctime>
#include <string> 
using namespace std;

void Task_1() {
    const int arraySize = 10;  
    int array[arraySize];

    srand(static_cast<unsigned int>(time(0)));

    for (int i = 0; i < arraySize; ++i) {
        array[i] = rand() % 201 - 100;
    }

    cout << "Масив: ";
    for (int i = 0; i < arraySize; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    int sumOfPositives = 0;
    for (int i = 0; i < arraySize; ++i) {
        if (array[i] > 0) {
            sumOfPositives += array[i];
        }
    }

    cout << "Сума позитивних елементів: " << sumOfPositives << endl;
}

void Task_2() {

    int b;
    double a, c, z;

    std::cout << "Введіть ціле число b: ";
    std::cin >> b;

    std::cout << "Введіть дійсне число a: ";
    std::cin >> a;

    std::cout << "Введіть дійсне число c: ";
    std::cin >> c;

    z = std::pow(a, b) + std::pow(c, b);
    std::cout << a<<"^("<<b<<") + "<<c<<"^("<<b<<") = " << z << std::endl;
}


void menu()
{
    int gd;
    do
    {
        setlocale(LC_ALL, "ru");
        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);
        HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(h, 15);
        cout << "Сума додатніх значень масиву - 1" << endl;
        cout << "Математичне рівняня - 2" << endl;
        cout << "Програма: ";
        SetConsoleTextAttribute(h, 6);
        cin >> gd;
        SetConsoleTextAttribute(h, 15);
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
        case 0:
            SetConsoleTextAttribute(h, 12);
            cout << setw(10) << "Завершення...\n";
            SetConsoleTextAttribute(h, 15);
            system("pause");
            system("cls");
            break;
        default:
            SetConsoleTextAttribute(h, 4);
            cout << "Не правильна дія\n";
            SetConsoleTextAttribute(h, 15);
            system("pause");
            system("cls");
            break;
        }
    } while (gd != 0);
}

int main()
{
    menu();
}