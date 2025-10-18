#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double xp, xk, x, dx, eps;
    // a - поточний доданок ряду a_n
    // S - сума ряду
    // R - коефіцієнт R = a_n+1 / a_n
    double a, S, R;

    int n; // n - індекс доданка ряду (починається з 0)

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> eps;

    cout << fixed;

    // Заголовок таблиці
    cout << "---------------------------------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
        << setw(15) << "arctanh(x)" << " |"
        << setw(15) << "S" << " |"
        << setw(5) << "n" << " |"
        << endl;
    cout << "---------------------------------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        // Перевірка умови |x| < 1 для кожної точки
        if (abs(x) >= 1.0) {
            cout << "|" << setw(7) << setprecision(2) << x << " |"
                << setw(15) << "undefined" << " |"
                << setw(15) << "---" << " |"
                << setw(5) << "---" << " |"
                << endl;
            x += dx;
            continue;
        }

        // Ініціалізація для n=0: a_0 = (x^(2*0+1))/(2*0+1) = x, S_0 = x
        n = 0;
        a = x;
        S = a;

        do {
              // Переходимо до наступного індексу: n=1 для a_1, n=2 для a_2 і т.д.
            n++;

            // a - це поточний доданок a_n. n - це поточний індекс.
            R = (x * x) * (2.0 * n + 1.0) / (2.0 * n + 3.0);

            // Обчислюємо наступний доданок: a_n+1 = a_n * R
            a *= R;

            // Додаємо a_n+1 до суми
            S += a;

        } while (abs(a) >= eps); // Умова зупинки

        
        // Виведення результатів
        cout << "|" << setw(7) << setprecision(2) << x << " |"
            << setw(15) << setprecision(10) << atanh(x) << " |"
            << setw(15) << setprecision(10) << S << " |"
            << setw(5) << n << " |"
            << endl;
        
        x += dx;
    }

    cout << "---------------------------------------------------" << endl;
    return 0;
}
