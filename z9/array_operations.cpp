#include "array_operations.h"

// для нахождения максимального элемента
int findMax(int* arr, int size, int (*compare)(int, int)) {
    int max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (compare(arr[i], max) > 0) {
            max = arr[i];
        }
    }
    return max;
}

// для нахождения суммы четных чисел
int sumEven(int* arr, int size, bool (*isEven)(int)) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        if (isEven(arr[i])) {
            sum += arr[i];
        }
    }
    return sum;
}

int compareFunc(int a, int b) {
    return a - b;
}

bool isEvenFunc(int num) {
    return num % 2 == 0;
}
