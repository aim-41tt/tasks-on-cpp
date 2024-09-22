#include <iostream>
using namespace std;

int* findCommonElements(int* arr1, int size1, int* arr2, int size2, int& commonSize) {
    int* common = new int[min(size1, size2)];
    commonSize = 0;
    
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                common[commonSize++] = arr1[i];
            }
        }
    }
    return common;
}

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {3, 4, 5, 6};
    int commonSize;
    
    int* common = findCommonElements(arr1, 4, arr2, 4, commonSize);
    
    cout << "Общие элементы: ";
    for (int i = 0; i < commonSize; i++) {
        cout << common[i] << " ";
    }
    cout << endl;
    
    delete[] common;
    return 0;
}