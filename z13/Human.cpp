#include "Human.h"

Human::Human(const std::string &name, const std::string &surname, int age, float weight, float height)
    : name(name), surname(surname), age(age), weight(weight), height(height) {
    if (age < 0) {
        std::cout << "Ошибка: возраст не может быть отрицательным!" << std::endl;
        this->age = 0;
    }
    if (weight <= 0) {
        std::cout << "Ошибка: вес должен быть больше нуля!" << std::endl;
        this->weight = 0.0;
    }
    if (height <= 0) {
        std::cout << "Ошибка: рост должен быть больше нуля!" << std::endl;
        this->height = 0.0;
    }
    std::cout << "Human создан." << std::endl;
}

Human::~Human() {
    std::cout << "Human уничтожен." << std::endl;
}

void Human::setName(const std::string &name) {
    if (!name.empty()) this->name = name;
    else std::cout << "Ошибка: имя не может быть пустым!" << std::endl;
}

void Human::setSurname(const std::string &surname) {
    if (!surname.empty()) this->surname = surname;
    else std::cout << "Ошибка: фамилия не может быть пустой!" << std::endl;
}

void Human::setAge(int age) {
    if (age >= 0) this->age = age;
    else std::cout << "Ошибка: возраст должен быть >= 0!" << std::endl;
}

void Human::setWeight(float weight) {
    if (weight > 0) this->weight = weight;
    else std::cout << "Ошибка: вес должен быть > 0!" << std::endl;
}

void Human::setHeight(float height) {
    if (height > 0) this->height = height;
    else std::cout << "Ошибка: рост должен быть > 0!" << std::endl;
}

std::string Human::getName() const { return name; }
std::string Human::getSurname() const { return surname; }
int Human::getAge() const { return age; }
float Human::getWeight() const { return weight; }
float Human::getHeight() const { return height; }

void Human::display() const {
    std::cout << "Имя: " << name << ", Фамилия: " << surname
              << ", Возраст: " << age << ", Вес: " << weight
              << ", Рост: " << height << std::endl;
}