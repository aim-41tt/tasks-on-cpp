#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введите число для вычисления факториала: ";
    cin >> n;

    int result = 1;
    int i = 1;

    while (i <= n) {
        result *= i;
        i++;
    }

    cout << "Факториал числа " << n << " равен: " << result << endl;

    return 0;
}
