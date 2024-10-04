#include <iostream>
#include "array_operations.h"

using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxElement = findMax(arr, size, compareFunc);
    cout << "Максимальный элемент: " << maxElement << endl;

    int evenSum = sumEven(arr, size, isEvenFunc);
    cout << "Сумма четных чисел: " << evenSum << endl;

    return 0;
}
