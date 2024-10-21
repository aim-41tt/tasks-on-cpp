#include <iostream>
#include "calculate.h"

void displayMenu() {
    std::cout << "\nВыберите операцию: \n"
              << "+ для сложения\n"
              << "- для вычитания\n"
              << "* для умножения\n"
              << "/ для деления\n"
              << "! для вычисления факториала\n"
              << "^ для возведения в степень\n"
              << "q для выхода\n";
}

int main() {
    char operation;
    int num1, num2;

    while (true) {
        displayMenu();
        std::cout << "Введите операцию: ";
        std::cin >> operation;

        if (operation == 'q') {
            std::cout << "Завершение программы.\n";
            break;
        }

        try {
            switch (operation) {
                case '+':
                    std::cout << "Введите два числа: ";
                    std::cin >> num1 >> num2;
                    std::cout << "Результат: " << add(num1, num2) << std::endl;
                    break;

                case '-':
                    std::cout << "Введите два числа: ";
                    std::cin >> num1 >> num2;
                    std::cout << "Результат: " << subtract(num1, num2) << std::endl;
                    break;

                case '*':
                    std::cout << "Введите два числа: ";
                    std::cin >> num1 >> num2;
                    std::cout << "Результат: " << multiply(num1, num2) << std::endl;
                    break;

                case '/':
                    std::cout << "Введите два числа: ";
                    std::cin >> num1 >> num2;
                    std::cout << "Результат: " << divide(num1, num2) << std::endl;
                    break;

                case '!':
                    std::cout << "Введите число для факториала: ";
                    std::cin >> num1;
                    std::cout << "Результат: " << factorial(num1) << std::endl;
                    break;

                case '^':
                    std::cout << "Введите основание и показатель степени: ";
                    std::cin >> num1 >> num2;
                    std::cout << "Результат: " << power(num1, num2) << std::endl;
                    break;

                default:
                    std::cout << "Неверная операция. Попробуйте снова.\n";
                    break;
            }
        } catch (const std::exception& e) {
            std::cout << e.what() << std::endl;
        }
    }

    return 0;
}
