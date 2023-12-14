#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <Windows.h>
#include <random>
#include <cstdlib>
#include <ctime>
using namespace std;

int random(int from, int to) {
    int result = rand() % (to - from + 1) + from;
    return result;
}
void SwapElements(int** matrix, int aRow, int aColumn, int bRow, int bColumn) {
    int temp = matrix[aRow][aColumn];
    matrix[aRow][aColumn] = matrix[bRow][bColumn];
    matrix[bRow][bColumn] = temp;
}

void FillMatrix(int** matrix, int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            matrix[i][j] = random(10, 99);
        }
    }
}
void PrintMatrix(int** matrix, int rows, int columns) {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 15);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (matrix[i][j] < 55) {
                SetConsoleTextAttribute(h, 15);
            }
            else {
                SetConsoleTextAttribute(h, 15);
            }
            cout << setw(3) << matrix[i][j];
        }
        cout << endl;
    }
    SetConsoleTextAttribute(h, 15);
}

const int MAX_SIZE = 10;

void fillMatrixRandom(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = rand() % 100;
        }
    }
}

void multiplyMatrices(int firstMatrix[MAX_SIZE][MAX_SIZE], int secondMatrix[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rowsFirst, int colsFirst, int rowsSecond, int colsSecond) {
    for (int i = 0; i < rowsFirst; ++i) {
        for (int j = 0; j < colsSecond; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < colsFirst; ++k) {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

void displayMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

void SwapMaxUpMinDownInEveryColumn(int** matrix, int rows, int columns) {
    for (int j = 0; j < columns; j++) {
        int maxIndex = 0;
        int minIndex = 0;

        for (int i = 0; i < rows; i++) {
            if (matrix[maxIndex][j] < matrix[i][j]) {
                maxIndex = i;
            }
            if (matrix[minIndex][j] > matrix[i][j]) {
                minIndex = i;
            }
        }

        SwapElements(matrix, 0, j, maxIndex, j);
        SwapElements(matrix, rows - 1, j, minIndex, j);
    }
}

void Task3() {
    const int MAX_SIZE = 10;

    int rowsFirst;
    int rowsSecond;

    cout << "Визначте параметри першої матриці: ";
    cin >> rowsFirst;
    int colsFirst = rowsFirst;
    cout << "Визначте параметри другої матриці: ";
    cin >> rowsSecond;
    int colsSecond = rowsSecond;

    if (colsFirst != rowsSecond) {
        cout << "Неправильне значення!\n";
        system("pause");
        system("cls");
        exit(EXIT_FAILURE);
    }

    int firstMatrix[MAX_SIZE][MAX_SIZE], secondMatrix[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];

    fillMatrixRandom(firstMatrix, rowsFirst, colsFirst);
    fillMatrixRandom(secondMatrix, rowsSecond, colsSecond);

    cout << "\nПерша матриця:\n";
    displayMatrix(firstMatrix, rowsFirst, colsFirst);

    cout << "\nДруга матриця:\n";
    displayMatrix(secondMatrix, rowsSecond, colsSecond);

    multiplyMatrices(firstMatrix, secondMatrix, result, rowsFirst, colsFirst, rowsSecond, colsSecond);

    cout << "\nПідсумок множення:\n";
    displayMatrix(result, rowsFirst, colsSecond);
    system("pause");
    system("cls");
}



void Task2() {
    int rows = 9;
    int columns = 9;

    int** matrix = new int* [rows];

    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[columns];
    }

    FillMatrix(matrix, rows, columns);
    cout << "Початковий масив:\n";
    PrintMatrix(matrix, rows, columns);

    SwapMaxUpMinDownInEveryColumn(matrix, rows, columns);
    cout << "Замінений масив:\n";
    PrintMatrix(matrix, rows, columns);
    system("pause");
    system("cls");
}

void Task1() {
    const int rows = 20;
    const int cols = 20;

    int matrix[rows][cols];
    std::srand(std::time(0));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            double x = static_cast<double>(j) / (cols - 1) * 2 - 1;
            double y = 1 - static_cast<double>(i) / (rows - 1) * 2;
            if ((y >= x) && (y >= -x) && (y <= 1) && (y >= -1)) {
                matrix[i][j] = 0;
            }
            else if ((y <= 1) && (y >= -1) && (y <= x) && (y <= -x)) {
                matrix[i][j] = 0;
            }
            else {
                matrix[i][j] = std::rand() % 10;
            }
        }
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    system("pause");
    system("cls");
}

enum class MenuOptions { Exit = 0, Task1, Task2, Task3 };
void PrintMenuAndAskChoice(const HANDLE& h, MenuOptions& choice)
{
    printf("Виберіть програму:");
    printf("\nЗаповнення частин матриці - 1");
    printf("\nМаксимальні та мінімальні елементи масиву - 2");
    printf("\nПеремножування двох матриць - 3");
    printf("\nВихід - 0 \nПрограма: ");
    SetConsoleTextAttribute(h, 6);
    scanf("%i", &choice);
    SetConsoleTextAttribute(h, 15);
}

int main()
{
    srand(time(0));
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
        case MenuOptions::Task1:
            Task1();
            break;
        case MenuOptions::Task2:
            Task2();
            break;
        case MenuOptions::Task3:
            Task3();
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