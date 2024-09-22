#include <iostream>
#include <cmath>
#include <stdexcept>
#include <cstdlib>
using namespace std;

double sqrti(double x) {
    if (x < 0) {
        throw invalid_argument("Negative argument");
    }
    return sqrt(x);
}

int main() {
    double num;
    cout << "Введите число: ";
    cin >> num;
    
    try {
        cout << "Квадратный корень числа: " << sqrti(num) << endl;
    } catch (invalid_argument& e) {
        cerr << e.what() << endl;
        exit(0);
    }
    
    return 0;
}