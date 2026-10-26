#include <iostream>
#include <string>
#include <ctime>
#include "../PR_06.3.1/ArrayFunc.h"

using namespace std;

int main()
{
    srand((unsigned)time(NULL));

    const int n = 10;

    // 1) Звичайна та шаблонна функції для int масиву
    int a[n];
    Create(a, n, -20, 50);
    cout << "int array:" << endl;
    Print(a, n); // Викликає шаблонну Print для int
    cout << "Max(a, n)              = " << Max(a, n) << endl;
    cout << "Max<int>(a, n)         = " << Max<int>(a, n) << endl << endl;

    // 2) Шаблонна функція для double масиву
    double b[n] = { 1.1, 12.2, 3.3, -4.3, 5.5, 6.6, 7.7, 8.8, 9.9, 10.0 };
    cout << "double array:" << endl;
    Print(b, n); // Викликає шаблонну Print для double
    cout << "Max<double>(b, n)      = " << Max<double>(b, n) << endl << endl;

    // 3) Шаблонна функція для string масиву
    string c[n] = { "apple", "pear", "plum", "kiwi", "lemon",
                    "orange", "melon", "peach", "grape", "fig" };
    cout << "string array:" << endl;
    Print(c, n); // Викликає шаблонну Print для string
    cout << "Max<string>(c, n)      = " << Max<string>(c, n) << endl;

    return 0;
}