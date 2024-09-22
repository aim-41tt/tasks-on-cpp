#include <iostream>
using namespace std;

double multiplyOrAdd(bool multiply, double x, double y, bool add = true) {
    if (multiply) {
        return x * y;
    } else {
        return x + y;
    }
}

int main() {
    double num1, num2;
    bool multiply;
    
    cout << "Введите два числа: ";
    cin >> num1 >> num2;
    cout << "Введите 1 для умножения или 0 для сложения: ";
    cin >> multiply;
    
    cout << "Результат: " << multiplyOrAdd(multiply, num1, num2) << endl;
    
    return 0;
}