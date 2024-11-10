#include "Car.h"
#include <iostream>
using namespace std;

Car::Car() : brand(""), color(""), bodyType(""), engineVolume(0.0), mileage(0) {}

Car::Car(const string &brand, const string &color, const string &bodyType, float engineVolume, int mileage) {
    setAttributes(brand, color, bodyType, engineVolume, mileage);
}

void Car::setAttributes(const string &brand, const string &color, const string &bodyType, float engineVolume, int mileage) {
    if (engineVolume > 0) this->engineVolume = engineVolume;
    if (mileage >= 0) this->mileage = mileage;
    this->brand = brand;
    this->color = color;
    this->bodyType = bodyType;
}

double Car::calculateFuelConsumption() const {
    return (engineVolume / mileage) * 100;
}

void Car::display() const {
    cout << "Марка: " << brand << ", Цвет: " << color
         << ", Тип кузова: " << bodyType << ", Объем двигателя: " << engineVolume
         << ", Пробег: " << mileage << ", Расход топлива на 100км: " << calculateFuelConsumption() << endl;
}