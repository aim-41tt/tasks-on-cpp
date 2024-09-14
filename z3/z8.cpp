#include <iostream>
#include <cstring>

using namespace std;

int main() {
    
    char stroka[] = {"AaBbCcDdEeFfGgggggg"};

    int count;
    
    for (char i : stroka) {
        if (i >= 'A' && i <= 'Z') {
           count++;
         }
    }
    
    cout << count;
 
}
