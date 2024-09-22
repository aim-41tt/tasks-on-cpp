#include <iostream>
using namespace std;

void modifyArray(int& n, int* arr) {
    n++;
    arr[n - 1] = 0;
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int n;
    
    cout << "Введите индекс элемента: ";
    cin >> n;
    
    modifyArray(n, arr);
    
    cout << "Модифицированный массив: ";
    for (int i = 0; i < 4; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    cout << "Новое значение n: " << n << endl;
    return 0;
}