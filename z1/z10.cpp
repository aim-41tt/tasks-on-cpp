// 10: Простейший консольный калькулятор

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << "Сложение: " << a + b << endl;
    cout << "Вычитание: " << a - b << endl;
    cout << "Умножение: " << a * b << endl;
    cout << "Деление: " << a / b << endl;
    return 0;
}