// 3: Вывод ASCII-кода символа типа char

#include <iostream>
using namespace std;

int main() {
    char letter = 'A';
    cout << static_cast<int>(letter) << endl;
    return 0;
}
