#include "Dog.h"

Dog::Dog(const std::string& name) : name(name) {}

Dog::~Dog() {
    std::cout << "Деструктор собаки: " << name << std::endl;
}

void Dog::makeSound() const {
    std::cout << name << " говорит: Гав-гав!" << std::endl;
}