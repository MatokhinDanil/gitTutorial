#include <iostream>
#include <iomanip> // чтобы работал precision
using namespace std;
/*
Вар 12, задача 2b. Протабулировать функцию y=-0.1*x*x+2x+1 (шаг и диапазон задаёт пользователь):
 */
int main()
{
    float sh, x1, x, y;
    cout << "Vvedite shag: ";
    cin >> sh;
    cout << "Vvedite nachalo diapazona: ";
    cin >> x;
    cout << "Vvedite konec diapazona: ";
    cin >> x1;
    // заголовок таблицы
    cout << "\t x \t \t y" << endl;
    cout.precision(6);
    while (x <= x1) {
        y = -0.1 * x * x + 2 * x +1;
        cout << "\t"
            << x << "\t\t" << y << endl;
        x += sh;
    }
    return 0;
}