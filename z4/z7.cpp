#include <iostream>
using namespace std;

int main() {
    unsigned int uVal = 10;
    signed int sVal = -20;

    cout << "Unsigned Value: " << uVal << endl;
    cout << "Signed Value: " << sVal << endl;

    int user_input;
    cout << "Enter a number: ";
    cin >> user_input;

    if (user_input < 0) {
        cout << "Negative number!" << endl;
    } else {
        cout << "Positive number!" << endl;
    }

    return 0;
}
