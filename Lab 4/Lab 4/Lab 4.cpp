#include <iostream>
#include <math.h>
#include <windows.h>
#include <stdio.h>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    short n;
    double x;
    double y;
    short h;
    for (n = 0; n < 5; n++)
    {
        printf("|   x   |      у     |\n");
        printf("|-------|------------|\n");
        for (x = 0; x < 4; x += 0.25) {
            if (x < 1)
                y = 2 * x - 1;
            else if (x < 3)
                y = 1 - sqrt(1 - (x - 2) * (x - 2));
            else
                y = 7 - 2 * x;
            printf("| %5.2lf | %10.7lf |", x + n * 4, y);
            h = (y + 1) * 10;
            if (y - 1 - h * 10 > 0.5) h++;
            for (; h > 0; h--)
                printf(" ");
            printf("*\n");
        }
        printf("Натисніть клавішу Enter...");
        getchar();
    }
    return 0;
}
