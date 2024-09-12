#include <iostream>
using namespace std;

int main() {
    int base = 2;
    int result = 1;
    int exponent = 10;
    int i = 0;

    while (i < exponent) {
        result *= base;
        i++;
    }

    cout << "2 в степени 10 равно: " << result << endl;

    return 0;
}
