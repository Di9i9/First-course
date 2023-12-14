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

double calculateAverage(const std::vector<int>& row) {
    int sum = 0;
    for (int element : row) {
        sum += element;
    }
    return static_cast<double>(sum) / row.size();
}

double processArray(const std::vector<int>& inputArray) {
    std::vector<std::vector<int>> matrix(3, std::vector<int>(3));

    int index = 0;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            matrix[i][j] = inputArray[index++];
        }
    }

    std::cout << "Початковий одновимірний масив:" << std::endl;
    for (int element : inputArray) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    std::cout << "Початковий двомірний масив:" << std::endl;
    for (const auto& row : matrix) {
        for (int element : row) {
            std::cout << element << "\t";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < 3; ++i) {
        double average = calculateAverage(matrix[i]);
        for (int j = 0; j < 3; ++j) {
            matrix[i][j] *= average;
        }
    }

    std::cout << "Трансформований двомірний масив:" << std::endl;
    for (const auto& row : matrix) {
        for (int element : row) {
            std::cout << element << "\t";
        }
        std::cout << std::endl;
    }

    double sumOfAverages = 0.0;
    for (int i = 0; i < 3; ++i) {
        sumOfAverages += calculateAverage(matrix[i]);
    }

    std::cout << "Трансформований одновимірний масив:" << std::endl;
    std::vector<int> transformedArray;
    for (const auto& row : matrix) {
        for (int element : row) {
            transformedArray.push_back(element);
            std::cout << element << " ";
        }
    }
    std::cout << std::endl;

    return sumOfAverages;

    
}
std::string compareRandomNumbers() {
    int num1 = rand() % 101;
    int num2 = rand() % 101;

    if (num1 > num2) {
        return to_string(num1) + " > " + to_string(num2);
    }
    else if (num1 < num2) {
        return to_string(num1) + " < " + to_string(num2);
    }
    else {
        return to_string(num1) + " = " + to_string(num2);
    }
}

const int ROWS = 3; 
const int COLS = 4; 

void fillArray(int arr[ROWS][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            arr[i][j] = rand() % 100 - 50; 
        }
    }
}

void printArray(int arr[ROWS][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            std::cout << arr[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}

int sumOfPositiveElementsInRow(int row[COLS]) {
    int sum = 0;
    for (int i = 0; i < COLS; ++i) {
        if (row[i] > 0) {
            sum += row[i];
        }
    }
    return sum;
}

void Task_3() {
    int myArray[ROWS][COLS];

    fillArray(myArray);

    std::cout << "Масив:" << std::endl;
    printArray(myArray);

    std::cout << "\nСумма елементів рядка:" << std::endl;
    for (int i = 0; i < ROWS; ++i) {
        int sum = sumOfPositiveElementsInRow(myArray[i]);
        std::cout << "Рядок " << i + 1 << ": " << sum << std::endl;
    }
}

void Task_2() {
    std::srand(static_cast<unsigned int>(std::time(0)));

    for (int i = 0; i < 3; ++i) {
        std::string result = compareRandomNumbers();
        std::cout << result << std::endl;
    }
}

void Task_1() {
    std::vector<int> inputArray = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    double result = processArray(inputArray);

    std::cout << "Сума середніх значень рядків: " << result << std::endl;

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
        cout << "Середнє значення рядків матриці - 1" << endl;
        cout << "Порівняння випадкових значень - 2" << endl;
        cout << "Сума позитивних елементів - 3" << endl;
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
        case 3:
            Task_3();
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