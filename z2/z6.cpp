#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    for (int i = 1; i <= 100; i++) {
        sum += i;
        if (sum > 1000) {
            cout << "Сумма превысила 1000 и равна: " << sum << endl;
            break;
        }
    }

    return 0;
}
