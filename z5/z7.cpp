#include <iostream>
#include <cstring>
using namespace std;

int compareStrings(const char* str1, const char* str2) {
    return strcmp(str1, str2);
}

int main() {
    const char* str1 = "hello";
    const char* str2 = "world";
    
    int result = compareStrings(str1, str2);
    
    if (result == 0) {
        cout << "Строки равны" << endl;
    } else if (result < 0) {
        cout << "Первая строка меньше" << endl;
    } else {
        cout << "Первая строка больше" << endl;
    }
    
    return 0;
}