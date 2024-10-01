#include <iostream>
#include <cstring>

bool isPalindrome(const char* str, int start, int end) {
    if (start >= end) {
        return true;
    }
    if (str[start] != str[end]) {
        return false;
    }
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    char str[100];
    std::cout << "Введите строку: ";
    std::cin.getline(str, 100);

    int length = std::strlen(str);
    if (isPalindrome(str, 0, length - 1)) {
        std::cout << "Строка является палиндромом." << std::endl;
    } else {
        std::cout << "Строка не является палиндромом." << std::endl;
    }

    return 0;
}
