#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

class Animal {
public:
    virtual ~Animal() = default;
    virtual void makeSound() const = 0;
};

#endif 