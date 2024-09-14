#include <iostream>
#include <cstring>

using namespace std;

int main() {
    
    int size = 5;
    
    int* arr= new int[size];
    
    int16_t sum;
    
    for (int i = 0; i < size; i++) {
       cin >> arr[i];
    }
    
    for (int i = 0; i < size /2; i++) {
        int vrem = arr[i];
        arr[i] = arr[(size-i-1)];
        arr[(size-i-1)]=vrem;
    }
    
    cout << endl;
    
    for (int i = 0; i < size; i++)  {
        cout << arr[i];
    }
    

    delete []arr;
}
