#include "Human.h"
#include <iostream>
using namespace std;


Human::Human() : name(""), surname(""), age(0), weight(0.0), height(0.0) {}

Human::Human(const string &name, const string &surname, int age, float weight, float height) {
    setAttributes(name, surname, age, weight, height);
}

void Human::setAttributes(const string &name, const string &surname, int age, float weight, float height) {
    this->name = name;
    this->surname = surname;
    this->age = (age >= 0) ? age : 0;
    this->weight = (weight > 0) ? weight : 0;
    this->height = (height > 0) ? height : 0;
}

double Human::calculateBMI() const {
    return (weight / 2.20462) / ((height / 39.37) * (height / 39.37));  
}

int Human::calculateBirthYear() const {
    return 2024 - age;
}

void Human::display() const {
    cout << "Имя: " << name << ", Фамилия: " << surname
         << ", Возраст: " << age << ", Вес: " << weight
         << ", Рост: " << height << ", ИМТ: " << calculateBMI() << endl;
}


Adult::Adult(const string &name, const string &surname, int age, float weight, float height, const string &job)
    : Human(name, surname, age, weight, height), job(job) {}

void Adult::setJob(const string &job) {
    this->job = job;
}

string Adult::getJob() const {
    return job;
}

void Adult::display() const {
    Human::display();
    cout << "Работа: " << job << endl;
}


Child::Child(const string &name, const string &surname, int age, float weight, float height, const string &favoriteToy)
    : Human(name, surname, age, weight, height), favoriteToy(favoriteToy) {}

void Child::setFavoriteToy(const string &favoriteToy) {
    this->favoriteToy = favoriteToy;
}

string Child::getFavoriteToy() const {
    return favoriteToy;
}

void Child::display() const {
    Human::display();
    cout << "Любимая игрушка: " << favoriteToy << endl;
}