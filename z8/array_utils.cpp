#include "array_utils.h"
#include <algorithm>
#include <cstring>

using namespace std;

// copyArray для целых чисел
void copyArray(const int* source, int* destination, int size) {
    for (int i = 0; i < size; ++i) {
        destination[i] = source[i];
    }
}

// copyArray для чисел с плавающей точкой
void copyArray(const float* source, float* destination, int size) {
    for (int i = 0; i < size; ++i) {
        destination[i] = source[i];
    }
}

// contains для целых чисел
bool contains(const int* arr, int size, int element) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == element) {
            return true;
        }
    }
    return false;
}

// contains для чисел с плавающей точкой
bool contains(const float* arr, int size, float element) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == element) {
            return true;
        }
    }
    return false;
}

// resizeArray для целых чисел
int* resizeArray(const int* arr, int oldSize, int newSize) {
    int* newArr = new int[newSize];
    copy(arr, arr + min(oldSize, newSize), newArr);
    return newArr;
}

// resizeArray для чисел с плавающей точкой
float* resizeArray(const float* arr, int oldSize, int newSize) {
    float* newArr = new float[newSize];
    copy(arr, arr + min(oldSize, newSize), newArr);
    return newArr;
}
