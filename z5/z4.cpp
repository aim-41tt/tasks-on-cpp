#include <iostream>
using namespace std;

int countOdd(int* arr, int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int size;
    cout << "Введите размер массива: ";
    cin >> size;
    
    int* arr = new int[size];
    
    cout << "Введите элементы массива: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    cout << "Количество четных чисел: " << countOdd(arr, size) << endl;
    
    delete[] arr;
    return 0;
}