#include <iostream>
using namespace std;

void rotateArray(int* arr, int size, int positions) {
    int* temp = new int[positions];
    
    for (int i = 0; i < positions; i++) {
        temp[i] = arr[i];
    }
    
    for (int i = 0; i < size - positions; i++) {
        arr[i] = arr[i + positions];
    }
    
    for (int i = 0; i < positions; i++) {
        arr[size - positions + i] = temp[i];
    }
    
    delete[] temp;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int positions;
    
    cout << "Введите количество позиций для сдвига: ";
    cin >> positions;
    
    rotateArray(arr, 6, positions);
    
    cout << "Массив после сдвига: ";
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}