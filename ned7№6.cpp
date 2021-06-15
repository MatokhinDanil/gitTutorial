#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

/*
 1/x+1/2x+1/3x+...+1/cx Вариант 12, задача 3b. Пользователь задаёт число n и Х. Посчитать y:
*/

int main() {

    std::ifstream fin;
    std::ofstream fout;
    fin.open("in.txt");
    fout.open("out.txt");

    float x, n, sum;
    int i = 1;
    sum = 0;
    cout << "1/1x+1/2x+1/3x+...+1/nx" << endl;
    cout << "Vvedite x i do kakogo chisla" << endl;
    cin >> x >> n;
    while (i <= n) {
        sum = sum + (float)1 / (i * x);
        i = i + 1;
    }
    cout << "Result: " << sum << endl;

    fin >> x;
    fout << sum;
    fin.close();
    fout.close();

}