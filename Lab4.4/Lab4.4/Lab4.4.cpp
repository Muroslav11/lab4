#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double R, xp, xk, dx, x, y;

    // Введення початкових даних
    cout << "R = "; cin >> R;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed; // фіксований формат чисел
    cout << "------------------------------" << endl;
    cout << "|" << setw(10) << "x" << " |" << setw(15) << "y" << " |" << endl;
    cout << "------------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        // Обчислення функції y залежно від x
        if (x <= -8 - R)
            y = R;
        else if (-8 - R < x && x <= -8 + R)
            y = R - sqrt(R * R - x * x - 16 * x - 64);
        else if (-8 + R < x && x <= -4)
            y = R;
        else if (-4 < x && x <= 2)
            y = -x - 4 - R * x + 2 * R;
        else
            y = x - 3;

        // Виведення результату в таблицю
        cout << "|" << setw(10) << setprecision(2) << x
            << " |" << setw(15) << setprecision(6) << y
            << " |" << endl;

        x += dx; // переходимо до наступного x
    }

    cout << "------------------------------" << endl;
    return 0;
}
