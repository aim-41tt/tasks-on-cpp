#ifndef DOG_H
#define DOG_H

#include "Animal.h"

class Dog : public Animal {
private:
    std::string name;

public:
    explicit Dog(const std::string& name);
    ~Dog() override;

    void makeSound() const override;
};

#endif 