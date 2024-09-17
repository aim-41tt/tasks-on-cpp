#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {
    
    char stroka[] = {"aaaabbbbccccdddd"};
    int size = sizeof(stroka) / sizeof(stroka[0]);
    
    for (int i = 0; i < size; i++) {
        stroka[i] = stroka[i]-32;
    }
   
    cout << stroka;

    return 0;
}
