#include "Human.h"
#include <iostream>
using namespace std;

Human::Human() : name(""), surname(""), age(0), weight(0.0), height(0.0) {}

Human::Human(const string &name, const string &surname, int age, float weight, float height) {
    setAttributes(name, surname, age, weight, height);
}

void Human::setAttributes(const string &name, const string &surname, int age, float weight, float height) {
    if (age >= 0) this->age = age;
    if (weight > 0) this->weight = weight;
    if (height > 0) this->height = height;
    this->name = name;
    this->surname = surname;
}

double Human::calculateBMI() const {
    return (weight / 2.205) / ((height / 39.37) * (height / 39.37));
}

int Human::calculateBirthYear() const {
    return 2024 - age;
}

void Human::display() const {
    cout << "Имя: " << name << ", Фамилия: " << surname
         << ", Возраст: " << age << ", Вес: " << weight
         << ", Рост: " << height << ", ИМТ: " << calculateBMI()
         << ", Год рождения: " << calculateBirthYear() << endl;
}