#pragma once
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

// Формування масиву випадкових чисел від Low до High
void Create(int* a, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        a[i] = Low + rand() % (High - Low + 1);
}

// Універсальний шаблон для виведення масиву в рядок
template <typename T>
void Print(const T* a, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(8) << a[i];
    cout << endl;
}

// Звичайна функція: пошук найбільшого елемента для масиву int
int Max(const int* a, const int size)
{
    int max = a[0];
    for (int i = 1; i < size; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}

// Шаблонна функція: пошук найбільшого елемента для будь-якого типу даних
template <typename T>
T Max(const T* a, const int size)
{
    T max = a[0];
    for (int i = 1; i < size; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}