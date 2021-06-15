#include <iostream>
#include <string>
#include <cmath>

/*
Вариант 12, задача 3, рисунок e
*/

float x;
float y;

void provirka() {
    if ((x <= 1) && (x >= -1) && (y>= x) && (y <=  x))
        std::cout << "Tochka popadaet" << std::endl;
    else
        std::cout << "Tochka ne popadaet" << std::endl;
}

int main() {

    std::cout << "Vvedite x y:" << std::endl;
    std::cin >> x >> y;
    provirka();
    return 0;
}