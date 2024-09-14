#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int arr[] = {5, 4, 3, 4, 9};
    
    int size = sizeof(arr) / sizeof(arr[0]); 
    
    int minValue = *std::min_element(arr, arr + size);
    int maxValue = *std::max_element(arr, arr + size);

   cout<< "Разница между самым большим и самым маленьким элементом массива: " << (maxValue-minValue) <<endl;


}
