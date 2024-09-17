#include <iostream>
using namespace std;

int main()
{
    float fValue = 3.14;
    float *pValue = &fValue;
    cout << "Float value: " << *pValue << endl;
    
    int arr[5] = {1, 2, 3, 4, 5};
    int *pArr = arr;

    for (int i = 0; i < 5; i++) {
        cout << pArr[i] << " ";
    }
    cout << endl;
    
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
