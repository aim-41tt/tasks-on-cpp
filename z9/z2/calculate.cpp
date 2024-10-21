#include "calculate.h"
#include <stdexcept>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

double divide(int a, int b) {
    if (b == 0) {
        throw std::invalid_argument("Ошибка: Деление на ноль!");
    }
    return static_cast<double>(a) / b;
}

int factorial(int n) {
    if (n < 0) {
        throw std::invalid_argument("Ошибка: Факториал для отрицательного числа не определен.");
    }
    return (n == 0 || n == 1) ? 1 : n * factorial(n - 1);
}

double power(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    }
    if (exponent < 0) {
        return 1.0 / power(base, -exponent);
    }
    return base * power(base, exponent - 1);
}
