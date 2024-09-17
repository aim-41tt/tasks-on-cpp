#include <iostream>

using namespace std;

int main() {
    
    int size = 10;
    
    int* arr= new int[size] ;
    
    int16_t sum;
    
    for (int i = 0; i < size; i++) {
        arr[i]=i;
    }
    
    for (int i = 0; i < size; i++)  {
        sum+=arr[i];
    }
    
    cout<< sum<<endl;

    delete []arr;
    
    return 0;
}
