#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
#include <random>
#include <string>
#include <iomanip>

using namespace std;
int random(int from, int to);
enum class MenuOptions { Exit = 0, Filling, SeatsDistributor, Task3 };
void PrintMenuAndAskChoice(const HANDLE& h, MenuOptions& choice);

int countOppositePairs(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size - 1; ++i) {
        if ((arr[i] < 0 && arr[i + 1] > 0) || (arr[i] > 0 && arr[i + 1] < 0)) {
            count++;
        }
    }

    return count;
}

void Task_1() {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    const int size = 6;
    int array[size];
    cout << "Введіть " << size << " цілих чисел:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Елемент " << i + 1 << ": ";
        cin >> array[i];
    }
    cout << "Ви ввели наступні значення у масив:" << endl;
    SetConsoleTextAttribute(h, 2);
    for (int i = 0; i < size; i++)
        cout << setw(4) << array[i];
    cout << endl;
    SetConsoleTextAttribute(h, 15);
    int result = countOppositePairs(array, size);
    cout << "Кількість пар сусідніх елементів з протилежними знаками: ";
    SetConsoleTextAttribute(h, 9);
    cout << result << std::endl;
    SetConsoleTextAttribute(h, 15);
    system("pause");
    system("cls");
}

void SeatsDistributor() {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 15);
    int smokingSeatsIndex = 0;
    int nonSmokingSeatsIndex = 5;
    int seats[10] = { 0, };
    while (smokingSeatsIndex + nonSmokingSeatsIndex < 15) {
        SetConsoleTextAttribute(h, 15);
        cout << "Місця: ";
        for (int i = 0; i < 10; i++) {
            if (seats[i] == 1) {
                SetConsoleTextAttribute(h, 2);
            }
            else {
                SetConsoleTextAttribute(h, 4);
            }
            cout << seats[i] << " ";
        }
        cout << endl;
        char answer[4];
        SetConsoleTextAttribute(h, 15);
        cout << "Палите?\n";
        SetConsoleTextAttribute(h, 4);
        cout << "так";
        SetConsoleTextAttribute(h, 15);
        cout << ",";
        SetConsoleTextAttribute(h, 2);
        cout << "ні";
        SetConsoleTextAttribute(h, 15);
        cout << "\n";
        cin >> answer;
        if (strcmp(answer, "так") == 0) {
            if (smokingSeatsIndex >= 5) {
                cout << "На жаль місця для курців закінчились\n";
                continue;
            }
            else {
                seats[smokingSeatsIndex] = 1;
                smokingSeatsIndex++;
                SetConsoleTextAttribute(h, 15);
                cout << "Ваше місце номер ";
                SetConsoleTextAttribute(h, 2);
                cout << smokingSeatsIndex << endl;
            }
            system("cls");
        }
        else if (strcmp(answer, "ні") == 0) {
            if (nonSmokingSeatsIndex >= 10) {
                cout << "На жаль місця для не некурців закінчились\n";
                continue;
            }
            else {
                seats[nonSmokingSeatsIndex] = 1;
                nonSmokingSeatsIndex++;
                SetConsoleTextAttribute(h, 15);
                cout << "Ваше місце номер ";
                SetConsoleTextAttribute(h, 2);
                cout << nonSmokingSeatsIndex << endl;
            }
            system("cls");
        }
        else {
            SetConsoleTextAttribute(h, 4);
            cout << "Неправильний варіант\n";
        
        }
    }
system("pause");
system("cls");
}

void ArrayInsert() {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 15);
    int arr[12];
    for (int i = 0; i < sizeof(arr) / sizeof(int); arr[i++] = random(-100, 100));
    cout << "Масив: ";
    for (int i = 0; i < sizeof(arr) / sizeof(int); cout << arr[i++] << " ");
    cout << endl;
    int insertPosition = 0;
    int insertCount = 0;
    cout << "Введіть позицію для вставки: ";
    cin >> insertPosition;
    cout << "Введіть кількість елементів для вставки: ";
    cin >> insertCount;
    if (insertPosition > sizeof(arr) / sizeof(int) - 1 || insertPosition < 0) {
        SetConsoleTextAttribute(h, 4);
        cout << "Неправильне значення!\n";
        SetConsoleTextAttribute(h, 15);
        system("pause");
        system("cls");
        return;
    }
    if (insertPosition + insertCount > sizeof(arr) / sizeof(int) - 1) {
        SetConsoleTextAttribute(h, 4);
        cout << "Неправильне значення!\n";
        SetConsoleTextAttribute(h, 15);
        system("pause");
        system("cls");
        return;
    }
    cout << "Введіть елементи для вставки: ";
    for (int i = insertPosition; i - insertPosition < insertCount; i++) {
        int insert = 0;
        cin >> insert;
        arr[i] = insert;
    }
    SetConsoleTextAttribute(h, 2);
    cout << "Результат: ";
    SetConsoleTextAttribute(h, 15);
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        if (i >= insertPosition && i < insertPosition + insertCount) {
            SetConsoleTextAttribute(h, 2);
        }
        cout << arr[i] << " ";
        SetConsoleTextAttribute(h, 15);
    }
    cout << endl;
    system("pause");
    system("cls");
}

void PrintMenuAndAskChoice(const HANDLE& h, MenuOptions& choice)
{
    SetConsoleTextAttribute(h, 15);
    printf("Виберіть програму:");
    SetConsoleTextAttribute(h, 10);
    //printf("\n%i", MenuOptions::Filling);
    SetConsoleTextAttribute(h, 15);
    printf("\nПари сусідніх значень - 1");
    SetConsoleTextAttribute(h, 10);
    //printf("\n%i", MenuOptions::SeatsDistributor);
    SetConsoleTextAttribute(h, 15);
    printf("\nМісця в літаку - 2");
    SetConsoleTextAttribute(h, 10);
    //printf("\n%i", MenuOptions::Task3);
    SetConsoleTextAttribute(h, 15);
    printf("\nВставка в масив - 3");
    SetConsoleTextAttribute(h, 10);
    //printf("\n%i", MenuOptions::Exit);
    SetConsoleTextAttribute(h, 15);
    printf("\nВихід - 0 \nПрограма: ");
    SetConsoleTextAttribute(h, 6);
    scanf("%i", &choice);
    SetConsoleTextAttribute(h, 15);
}

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 15);
    MenuOptions choice; 
    while (true) {
        PrintMenuAndAskChoice(h, choice);
        switch (choice)
        {
        case MenuOptions::Filling:
            Task_1();
            break;
        case MenuOptions::SeatsDistributor:
            SeatsDistributor();
            break;
        case MenuOptions::Task3:
            ArrayInsert();
            break;
        case MenuOptions::Exit:
            SetConsoleTextAttribute(h, 4);
            cout << "Завершення...\n";
            SetConsoleTextAttribute(h, 15);
            system("pause");
            system("cls");
            return 0;
        default:
            SetConsoleTextAttribute(h, 4);
            printf("Неправильне значення!\n");
            SetConsoleTextAttribute(h, 15);
            system("pause");
            system("cls");
            break;
        }
    }
}

int random(int from, int to) {
    if (from > 0) {
        int result = rand() % (from - to + 1) + to;
        return result;
    }
    if (from < 0) {
        int result = rand() % (to - from + 1) + from;
        return result;
    }
}