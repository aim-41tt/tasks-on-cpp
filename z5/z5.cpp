#include <iostream>
using namespace std;

int sumWithElement(int n, int* arr) {
    return n + arr[n];
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int n;
    
    cout << "Введите индекс элемента: ";
    cin >> n;
    
    cout << "Результат: " << sumWithElement(n, arr) << endl;
    return 0;
}