#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double x, xp, xk, dx, A, B, y;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "----------------------------" << endl;
    cout << "|" << setw(8) << "x" << " |" << setw(15) << "y" << " |" << endl;
    cout << "----------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        A = 4.95 * x * x; // Перша частина формули

        if (x < -3.5)
            B = 4 + pow(x, -2); // 4 + x^(-2)
        else 
            if (x >= -3.5 && x < 1)
                B = tan((3.5 + x) / 5); 
            else
                B = sin(3 * x) - cos(x); 

        y = A + B; // Загальна формула

        cout << "|" << setw(8) << setprecision(2) << x
            << " |" << setw(15) << setprecision(6) << y
            << " |" << endl;

        x += dx;
    }

    cout << "----------------------------" << endl;
    return 0;
}
