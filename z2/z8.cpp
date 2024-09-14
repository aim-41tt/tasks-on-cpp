#include <iostream>
#include <cmath> 

using namespace std;

int factorial(int n) {
    if (n < 0) {
        throw invalid_argument("Факториал определен только для неотрицательных чисел.");
    }
    int result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    char operation;
    int num1, num2;
    bool exit = false;

    while (!exit) {
        cout << "Выберите операцию (+, -, *, /, ^, ! или q для выхода): ";
        cin >> operation;

        if (operation == 'q') {
            exit = true;
            continue;
        }

        if (operation != '!') {
            cout << "Введите первое число: ";
            cin >> num1;

            cout << "Введите второе число: ";
            cin >> num2;

            switch (operation) {
                case '+':
                    cout << "Результат: " << num1 + num2 << endl;
                    break;
                case '-':
                    cout << "Результат: " << num1 - num2 << endl;
                    break;
                case '*':
                    cout << "Результат: " << num1 * num2 << endl;
                    break;
                case '/':
                    if (num2 != 0) {
                        cout << "Результат: " << num1 / num2 << endl;
                    } else {
                        cout << "Ошибка: Деление на ноль невозможно!" << endl;
                    }
                    break;
                case '^':
                    cout << "Результат: " << pow(num1, num2) << endl;
                    break;
                default:
                    cout << "Неизвестная операция." << endl;
            }
        }
        else {
            cout << "Введите число для вычисления факториала: ";
            cin >> num1;

            try {
                int factoriale = factorial(num1);
                cout << "Результат: " << factoriale << endl;
            } catch (const invalid_argument& e) {
                cout << "Ошибка: " << e.what() << endl;
            }
        }

        cout << endl;
    }

    return 0;
}