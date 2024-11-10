#ifndef CAR_H
#define CAR_H

#include <string>
using namespace std;

class Car {
private:
    string brand;
    string color;
    string bodyType;
    float engineVolume;
    int mileage;

public:
    Car();
    Car(const string &brand, const string &color, const string &bodyType, float engineVolume, int mileage);
    void setAttributes(const string &brand, const string &color, const string &bodyType, float engineVolume, int mileage);
    double calculateFuelConsumption() const;
    void display() const;
};

#endif