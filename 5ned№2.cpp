#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

/*
Вариант 12, задача 1 пример E
y = 2x - 15, если x > 2
y = 5, если x = 2
y = 3 * |x-1| - 8, если x < 2
*/

int main() {

    std::ifstream fin;
    std::ofstream fout;
    fin.open("in.txt");
    fout.open("out.txt");

    float x;
    float y;
    std::cout << "Vvedite x:" << std::endl;
    std::cin >> x;

    fin >> x;
    fin.close();

    if (x > 2)
        y = 2 * x - 15;
    if (x == 2)
        y = 5;
    if (x < 2)
        y = 3 * abs(x -1) - 8;
    std::cout << y << std::endl;

    fout << y;
    fout.close();

    return 0;
}