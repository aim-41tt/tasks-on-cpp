#include "Car.h"
#include <iostream>
using namespace std;

Car::Car() : brand(""), color(""), bodyType(""), engineVolume(0.0), mileage(0) {}

Car::Car(const string &brand, const string &color, const string &bodyType, float engineVolume, int mileage) {
    setAttributes(brand, color, bodyType, engineVolume, mileage);
}

void Car::setAttributes(const string &brand, const string &color, const string &bodyType, float engineVolume, int mileage) {
    this->brand = brand;
    this->color = color;
    this->bodyType = bodyType;
    this->engineVolume = engineVolume;
    this->mileage = mileage;
}

double Car::calculateFuelConsumption() const {
    return engineVolume * 0.15; 
}

void Car::display() const {
    cout << "Марка: " << brand << ", Цвет: " << color
         << ", Тип кузова: " << bodyType << ", Объем двигателя: " << engineVolume
         << ", Пробег: " << mileage << " км, Расход топлива: " << calculateFuelConsumption() << " л/100 км" << endl;
}

Truck::Truck(const string &brand, const string &color, const string &bodyType, float engineVolume, int mileage, int maxLoad)
    : Car(brand, color, bodyType, engineVolume, mileage), maxLoad(maxLoad) {}

void Truck::setMaxLoad(int maxLoad) {
    this->maxLoad = maxLoad;
}

int Truck::getMaxLoad() const {
    return maxLoad;
}

void Truck::display() const {
    Car::display();
    cout << "Максимальная нагрузка: " << maxLoad << " кг" << endl;
}

PassengerCar::PassengerCar(const string &brand, const string &color, const string &bodyType, float engineVolume, int mileage, int numberOfSeats)
    : Car(brand, color, bodyType, engineVolume, mileage), numberOfSeats(numberOfSeats) {}

void PassengerCar::setNumberOfSeats(int numberOfSeats) {
    this->numberOfSeats = numberOfSeats;
}

int PassengerCar::getNumberOfSeats() const {
    return numberOfSeats;
}

void PassengerCar::display() const {
    Car::display();
    cout << "Количество мест: " << numberOfSeats << endl;
}