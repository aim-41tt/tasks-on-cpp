#ifndef ARRAY_UTILS_H
#define ARRAY_UTILS_H

// copyArray для целых чисел
void copyArray(const int* source, int* destination, int size);

// copyArray для чисел с плавающей точкой
void copyArray(const float* source, float* destination, int size);

// contains для целых чисел
bool contains(const int* arr, int size, int element);

// contains для чисел с плавающей точкой
bool contains(const float* arr, int size, float element);

// resizeArray для целых чисел
int* resizeArray(const int* arr, int oldSize, int newSize);

// resizeArray для чисел с плавающей точкой
float* resizeArray(const float* arr, int oldSize, int newSize);

#endif
