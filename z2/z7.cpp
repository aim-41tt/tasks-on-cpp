#include <iostream>
using namespace std;

int main() {
    int n;
    bool isPrime = true;

    cout << "Введите число для проверки на простоту: ";
    cin >> n;

    if (n <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        cout << n << " является простым числом." << endl;
    } else {
        cout << n << " не является простым числом." << endl;
    }

    return 0;
}
