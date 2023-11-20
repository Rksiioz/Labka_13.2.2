#include <iostream>
#include <cstdarg>
#include <Windows.h>

using namespace std;

double sum(int count, ...)
{
    double sum = 0;
    va_list args;
    va_start(args, count);
    for (int i = 0; i < count; ++i)
    {
        sum += va_arg(args, double);
    }
    va_end(args);
    return sum;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Кількість чисел які хочемо додати: ";
    int count;
    cin >> count;

    double result = 0;
    for (int i = 0; i < count; ++i)
    {
        double num;
        cout << "Число " << i + 1 << ": ";
        cin >> num;
        result += num;
    }

    cout << "Сума: " << result << endl;
    return 0;
}
