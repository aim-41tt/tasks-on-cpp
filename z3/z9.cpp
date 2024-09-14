#include <iostream>
#include <cstring>

using namespace std;

int main() {
    
    char stroka[] = {"Aaa1323#aa"};

    int count;
    
    for (char i : stroka) {
        if (i == 'A' || i == 'a') {
           count++;
         }
    }
    
    cout << count;

    return 0;
}
