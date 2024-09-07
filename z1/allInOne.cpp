#include <iostream>
#include <cmath>
#define cubeof(X) (X*X*X)

using namespace std;

void task1() {
    int number = 42;
    cout << "Задача 1: значение переменной = " << number << endl;
}

void task2() {
    double a = 3.14;
    double b = 2.71;
    cout << "Задача 2: a + b = " << a + b << endl;
    cout << "Задача 2: a - b = " << a - b << endl;
    cout << "Задача 2: a * b = " << a * b << endl;
    cout << "Задача 2: a / b = " << a / b << endl;
}

void task3() {
    char letter = 'A';
    cout << "Задача 3: ASCII код символа " << letter << " = " << int(letter) << endl;
}

void task4() {
    bool flag = true;
    cout << "Задача 4: значение переменной flag = " << (flag ? "True" : "false") << endl;
}

void task5() {
    int num;
    cout << "Задача 5: Введите число: ";
    cin >> num;
    cout << "Задача 5: Число чётное и положительное? " << ((num > 0 && num % 2 == 0) ? 1 : 0) << endl;
}

void task6() {
    double celsius;
    cout << "Задача 6: Введите температуру в градусах Цельсия: ";
    cin >> celsius;
    double fahrenheit = (celsius * 9) / 5 + 32;
    cout << "Задача 6: Температура в градусах Фаренгейта: " << fahrenheit << endl;
}

void task7() {
    int a = 10;
    a++;
    a -= 3;
    a %= 2;
    cout << "Задача 7: Результат = " << a << endl;
}

void task8() {
    const double pi = M_PI;
    double r;
    cout << "Задача 8: Введите радиус окружности: ";
    cin >> r;
    double circumference = 2 * pi * r;
    cout << "Задача 8: Длина окружности = " << circumference << endl;
}

void task9() {
    int x = 10;
    cout << "Задача 9: Куб числа " << x << " = " << cubeof(x) << endl;
}

void task10() {
    int x, y;
    cout << "Задача 10: Введите два целых числа: ";
    cin >> x >> y;
    cout << "Задача 10: x + y = " << x + y << endl;
    cout << "Задача 10: x - y = " << x - y << endl;
    cout << "Задача 10: x * y = " << x * y << endl;
    if (y != 0)
        cout << "Задача 10: x / y = " << x / y << endl;
    else
        cout << "Задача 10: Деление на ноль невозможно!" << endl;
}

int main() {
    task1();
    task2();
    task3();
    task4();
    task5();
    task6();
    task7();
    task8();
    task9();
    task10();
    return 0;
}
