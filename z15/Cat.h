#ifndef CAT_H
#define CAT_H

#include "Animal.h"

class Cat : public Animal {
private:
    std::string name;

public:
    explicit Cat(const std::string& name);
    ~Cat() override;

    void makeSound() const override;
};

#endif 