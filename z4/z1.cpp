#include <iostream>

using namespace std;

int main() {
    int number;
    cout << "Введите число: ";
    cin >> number;

    if (number == 10) {
        cout << "Вы ввели 10";
    } else {
        cout << "Вы ввели не 10";
    }

    return 0;
}
