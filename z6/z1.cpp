#include <iostream>

int sumArray(int* arr, int size) {
    if (size == 0) {
        return 0;
    }
    return arr[0] + sumArray(arr + 1, size - 1);
}

int main() {
    int n;
    std::cout << "Введите размер массива: ";
    std::cin >> n;

    int* arr = new int[n];
    std::cout << "Введите элементы массива:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    int result = sumArray(arr, n);
    std::cout << "Сумма элементов массива: " << result << std::endl;

    delete[] arr;
    return 0;
}
