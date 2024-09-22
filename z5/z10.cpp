#include <iostream>
using namespace std;

int mergeAndCompare(int* arr1, int size1, int* arr2, int size2, int*& mergedArr) {
    if (size1 != size2) {
        return -1;
    }
    
    mergedArr = new int[size1 + size2];
    
    for (int i = 0; i < size1; i++) {
        mergedArr[i] = arr1[i];
    }
    
    for (int i = 0; i < size2; i++) {
        mergedArr[size1 + i] = arr2[i];
    }
    
    return size1 + size2;
}

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    int* mergedArr;
    int mergedSize = mergeAndCompare(arr1, 3, arr2, 3, mergedArr);
    
    if (mergedSize == -1) {
        cout << "Размеры массивов не совпадают" << endl;
    } else {
        cout << "Объединенный массив: ";
        for (int i = 0; i < mergedSize; i++) {
            cout << mergedArr[i] << " ";
        }
        cout << endl;
    }
    
    delete[] mergedArr;
    return 0;
}