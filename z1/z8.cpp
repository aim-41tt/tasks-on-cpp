//8: Вычисление длины окружности с использованием константы π

#include <iostream>
using namespace std;

const double PI = 3.14159;

int main() {
    double r;
    cin >> r;
    double circumference = 2 * PI * r;
    cout << circumference << endl;
    return 0;
}
