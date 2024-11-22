#include "Animal.h"

Animal::Animal(const std::string &name, const std::string &species, const std::string &color, int age, float weight)
    : name(name), species(species), color(color), age(age), weight(weight) {
    if (age < 0) {
        std::cout << "Ошибка: возраст не может быть отрицательным!" << std::endl;
        this->age = 0;
    }
    if (weight <= 0) {
        std::cout << "Ошибка: вес должен быть больше нуля!" << std::endl;
        this->weight = 0.0;
    }
    std::cout << "Animal создан." << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal уничтожен." << std::endl;
}

void Animal::setAttributes(const std::string &name, const std::string &species, const std::string &color, int age, float weight) {
    if (!name.empty()) this->name = name;
    else std::cout << "Ошибка: имя не может быть пустым!" << std::endl;

    if (!species.empty()) this->species = species;
    else std::cout << "Ошибка: вид не может быть пустым!" << std::endl;

    if (!color.empty()) this->color = color;
    else std::cout << "Ошибка: цвет не может быть пустым!" << std::endl;

    if (age >= 0) this->age = age;
    else std::cout << "Ошибка: возраст не может быть отрицательным!" << std::endl;

    if (weight > 0) this->weight = weight;
    else std::cout << "Ошибка: вес должен быть больше нуля!" << std::endl;
}

void Animal::increaseWeight(int daysFed) {
    weight += weight * 0.01 * daysFed;
}

void Animal::display() const {
    std::cout << "Имя: " << name << ", Вид: " << species
              << ", Окрас: " <<

 color << ", Возраст: " << age
              << ", Вес: " << weight << std::endl;
}