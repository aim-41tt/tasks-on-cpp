#include <iostream>

void copyString(const char* src, char* dest) {
    if (*src == '\0') {
        *dest = '\0';
        return;
    }
    *dest = *src;
    copyString(src + 1, dest + 1);
}

int main() {
    char src[100], dest[100];
    std::cout << "Введите исходную строку: ";
    std::cin.getline(src, 100);

    copyString(src, dest);
    std::cout << "Скопированная строка: " << dest << std::endl;

    return 0;
}
