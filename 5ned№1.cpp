#include <iostream>
#include <string>
#include <cmath>
#include <fstream>


//Вариант 3, задача 1 пример С
//y = 2x*2x + 7, если x > -8
//y = 5, если x = -8
//y = 2 * |x+6| - 1, если x < -8


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

    if (x > -8)
        y = 2 * x * 2 * x + 7;
    if (x == -8)
        y = 5;
    if (x < -8)
        y = 2 * abs(x + 6) - 1;
    std::cout << y << std::endl;

    fout << y;
    fout.close();

    return 0;
}