#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {
    
    char stroka[] = {"aaaabbbbccccdddd"};
    int size = sizeof(stroka) / sizeof(stroka[0]);
    
    for (int i = 0; i < size; i++) {
        char ch = stroka[i]-32;
        stroka[i] = ch;
    }
   
    cout << stroka;

    return 0;
}
