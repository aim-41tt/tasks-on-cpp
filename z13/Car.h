#ifndef CAR_H
#define CAR_H

#include <string>
#include <iostream>

class Car {
private:
    std::string brand;
    std::string color;
    std::string bodyType;
    float engineVolume;
    int mileage;

public:
    Car(const std::string &brand = "", const std::string &color = "", const std::string &bodyType = "", float engineVolume = 0.0, int mileage = 0);
    ~Car();

    void setAttributes(const std::string &brand, const std::string &color, const std::string &bodyType, float engineVolume, int mileage);
    void display() const;
};

#endif