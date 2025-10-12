#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;        // коефіцієнти
    double xp, xk, dx;     // початок, кінець і крок
    double x, F;           // змінні для обчислення

    // Введення даних
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed; // фіксований формат виводу
    cout << "-----------------------------" << endl;
    cout << "|" << setw(10) << "x" << " |" << setw(15) << "F(x)" << " |" << endl;
    cout << "-----------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        // Обчислення F(x) за умовами
        if (x < 3 && b != 0)
            F = a * x * x - b * x + c;
        else 
            if (x > 3 && b == 0)
                F = (x - a) / (x - c);
            else
                F = x / c;

        // Виведення результатів у вигляді таблиці
        cout << "|" << setw(10) << setprecision(2) << x
            << " |" << setw(15) << setprecision(6) << F
            << " |" << endl;

        x += dx;
    }

    cout << "-----------------------------" << endl;

    return 0;
}

