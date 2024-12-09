#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>

class Car {
public:
    virtual ~Car() = default;
    virtual void drive() const = 0;
};

#endif 