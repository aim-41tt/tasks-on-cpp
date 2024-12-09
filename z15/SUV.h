#ifndef SUV_H
#define SUV_H

#include "Car.h"

class SUV : public Car {
private:
    std::string model;

public:
    explicit SUV(const std::string& model);
    ~SUV() override;

    void drive() const override;
};

#endif 