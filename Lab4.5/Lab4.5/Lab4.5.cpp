#include <iostream>
#include <iomanip>
#include <time.h> 

using namespace std;

int main()
{
    double x, y, a, b, R;

    srand((unsigned)time(NULL)); // ініціалізація генератора випадкових чисел

    // Введення параметрів
    cout << "a: "; cin >> a;
    cout << "b: "; cin >> b;
    cout << "R: "; cin >> R;

    double maxVal = max(max(a, b), R); // знаходимо max(a,b,R)

   

    // 1 спосіб: введення координат вручну
    for (int i = 0; i < 10; i++)
    {
        cout << "x = "; cin >> x;
        cout << "y = "; cin >> y;

        if ((x * x + y * y <= R * R && x >= -a && x <= 0 && y >= -b && y <= 0) ||
            (x * x + y * y >= R * R && x >= 0 && x <= a && y >= 0 && y <= b))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }

    cout << endl << fixed;

    // 2 спосіб: випадкові координати
    for (int i = 0; i < 10; i++)
    {
        // Генерація випадкових координат у межах [-maxVal; maxVal]
        x = 2 * maxVal * rand() / RAND_MAX - maxVal;
        y = 2 * maxVal * rand() / RAND_MAX - maxVal;

        if ((x * x + y * y <= R * R && x >= -a && x <= 0 && y >= -b && y <= 0) ||
            (x * x + y * y >= R * R && x >= 0 && x <= a && y >= 0 && y <= b))
        cout << setw(8) << setprecision(4) << x << " " << setw(8) << setprecision(4) << y << " " << "yes" << endl;
        else
            cout << setw(8) << setprecision(4) << x << " "
            << setw(8) << setprecision(4) << y << " " << "no" << endl;
    }

    return 0;
}