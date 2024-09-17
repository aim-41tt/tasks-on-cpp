#include <iostream>
using namespace std;

int main() {
    int num = 5;
    int *pNum;
    pNum = &num; 
    cout << "Number before: " << *pNum << endl;

    *pNum = 10;
    cout << "Number after: " << *pNum << endl;

    float value = 5.5;
    float *pFloat = &value; 
    cout << "Float value: " << *pFloat << endl;

    int arr[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++) { // Изменено на i < 5
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
