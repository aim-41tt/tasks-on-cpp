#include <iostream>
using namespace std;

int main() {
    int numArray[5];
    for(int i = 0; i < 5; i++) {
        numArray[i] = i * 2;
    }

    cout << "Array values: " << endl;
    for(int i = 0; i < 5; i++) {
        cout << "Element " << i << ": " << numArray[i] << endl;
    }
    
    int sum = 0;

    return 0;
}
