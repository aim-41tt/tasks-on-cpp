#include "Cat.h"

Cat::Cat(const std::string& name) : name(name) {}

Cat::~Cat() {
    std::cout << "Деструктор кота: " << name << std::endl;
}

void Cat::makeSound() const {
    std::cout << name << " говорит: Мяу!" << std::endl;
}