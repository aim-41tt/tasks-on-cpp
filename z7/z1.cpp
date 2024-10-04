#include <iostream>
#include <cstring>

int sumArray(int* arr, int size) {
    if (size == 0) return 0;
    return arr[size - 1] + sumArray(arr, size - 1);
}

void copyString(const char* source, char* destination) {
    if (*source == '\0') {
        *destination = '\0';
        return;
    }
    *destination = *source;
    copyString(source + 1, destination + 1);
}

bool isPalindrome(const char* str, int start, int end) {
    if (start >= end) return true;
    return (str[start] == str[end]) && isPalindrome(str, start + 1, end - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    std::cout << "Сумма элементов массива: " << sumArray(arr, size) << std::endl;

    const char* source = "Hello";
    char destination[6];
    copyString(source, destination);
    std::cout << "Скопированная строка: " << destination << std::endl;

    const char* str = "madam";
    std::cout << "Строка \"" << str << "\" является палиндромом: " 
              << (isPalindrome(str, 0, strlen(str) - 1) ? "Да" : "Нет") << std::endl;

    return 0;
}