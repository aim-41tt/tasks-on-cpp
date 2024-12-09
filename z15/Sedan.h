#ifndef SEDAN_H
#define SEDAN_H

#include "Car.h"

class Sedan : public Car {
private:
    std::string model;

public:
    explicit Sedan(const std::string& model);
    ~Sedan() override;

    void drive() const override;
};

#endif 