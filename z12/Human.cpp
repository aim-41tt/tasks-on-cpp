#include "Human.h"

Human::Human() : name(""), surname(""), age(0), weight(0.0), height(0.0) {
    cout << "Human (по умолчанию) создан." << endl;
}

Human::Human(const string &name, const string &surname, int age, float weight, float height) {
    this->setName(name);
    this->setSurname(surname);
    this->setAge(age);
    this->setWeight(weight);
    this->setHeight(height);
    cout << "Human (параметризованный) создан." << endl;
}

Human::~Human() {
    cout << "Human уничтожен." << endl;
}

void Human::setName(const string &name) { this->name = name; }
void Human::setSurname(const string &surname) { this->surname = surname; }
void Human::setAge(int age) {
    if (age >= 0) this->age = age;
    else cout << "Ошибка: возраст должен быть >= 0!" << endl;
}
void Human::setWeight(float weight) {
    if (weight > 0) this->weight = weight;
    else cout << "Ошибка: вес должен быть > 0!" << endl;
}
void Human::setHeight(float height) {
    if (height > 0) this->height = height;
    else cout << "Ошибка: рост должен быть > 0!" << endl;
}

string Human::getName() const { return name; }
string Human::getSurname() const { return surname; }
int Human::getAge() const { return age; }
float Human::getWeight() const { return weight; }
float Human::getHeight() const { return height; }

void Human::display() const {
    cout << "Имя: " << name << ", Фамилия: " << surname
         << ", Возраст: " << age << ", Вес: " << weight
         << ", Рост: " << height << endl;
}