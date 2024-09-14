#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int arr[] = {5, 4, 3, 4, 9};
    
    int size = sizeof(arr) / sizeof(arr[0]); 
    
    int* maxValue = max_element(arr, arr + size);

    int indexMaxValue = maxValue-arr;

    cout<< "позиция максимального элемента массива: " << indexMaxValue <<endl;


}
