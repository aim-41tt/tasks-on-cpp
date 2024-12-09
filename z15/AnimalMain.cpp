#include "Dog.h"
#include "Cat.h"
#include <vector>

int main() {
    std::vector<Animal*> animals;

    Dog staticDog("Шарик");
    Cat staticCat("Мурка");

    animals.push_back(new Dog("Рекс"));
    animals.push_back(new Cat("Снежок"));

    staticDog.makeSound();
    staticCat.makeSound();

    for (auto* animal : animals) {
        animal->makeSound();
    }

    for (auto* animal : animals) {
        delete animal;
    }

    return 0;
}