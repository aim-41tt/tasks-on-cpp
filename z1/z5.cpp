// 5: Проверка числа на четность и положительность

#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    cout << ((num > 0 && num % 2 == 0) ? 1 : 0) << endl;
    return 0;
}