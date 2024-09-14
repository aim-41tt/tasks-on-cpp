#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;

    cout << "Введите количество элементов в массиве: ";
    cin >> n;

    int arr [n];

    cout << "Введите " << n << " элементов массива: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int divisor;

    cout << "Введите число, кратное которому нужно считать элементы: ";
    cin >> divisor;

    int count = 0;

    for (int i = 0; i < n; ++i) {
        if (arr[i] % divisor == 0) {
            count++;
        }
    }

    cout << "Количество элементов в массиве, кратных " << divisor << ": " << count << endl;

    return 0;
}
