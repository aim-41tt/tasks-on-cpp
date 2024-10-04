#ifndef ARRAY_OPERATIONS_H
#define ARRAY_OPERATIONS_H

int findMax(int* arr, int size, int (*compare)(int, int));

int sumEven(int* arr, int size, bool (*isEven)(int));

int compareFunc(int a, int b);

bool isEvenFunc(int num);

#endif 
