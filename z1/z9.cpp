//9: Макрос для вычисления куба числа

#include <iostream>
using namespace std;

#define cubeof(X) (X * X * X)

int main() {
    cout << cubeof(10) << endl;
    return 0;
}