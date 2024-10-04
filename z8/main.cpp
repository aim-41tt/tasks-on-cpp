#include <iostream>
#include "array_utils.h"

using namespace std;

int main() {
    int intArr[] = {1, 2, 3, 4, 5};
    float floatArr[] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};

    int intArrCopy[5];
    float floatArrCopy[5];

    copyArray(intArr, intArrCopy, 5);
    copyArray(floatArr, floatArrCopy, 5);

    cout << "Массив целых чисел скопирован: ";
    for (int i = 0; i < 5; ++i) {
        cout << intArrCopy[i] << " ";
    }
    cout << endl;

    cout << "Массив чисел с плавающей точкой скопирован: ";
    for (int i = 0; i < 5; ++i) {
        cout << floatArrCopy[i] << " ";
    }
    cout << endl;

    cout << "Содержит ли массив 3: " << (contains(intArr, 5, 3) ? "Да" : "Нет") << endl;
    cout << "Содержит ли массив 2.2: " << (contains(floatArr, 5, 2.2f) ? "Да" : "Нет") << endl;

    int* resizedIntArr = resizeArray(intArr, 5, 7);
    float* resizedFloatArr = resizeArray(floatArr, 5, 3);

    cout << "Измененный размер массива целых чисел: ";
    for (int i = 0; i < 7; ++i) {
        cout << resizedIntArr[i] << " ";
    }
    cout << endl;

    cout << "Измененный размер массива чисел с плавающей точкой: ";
    for (int i = 0; i < 3; ++i) {
        cout << resizedFloatArr[i] << " ";
    }
    cout << endl;

    delete[] resizedIntArr;
    delete[] resizedFloatArr;

    return 0;
}
