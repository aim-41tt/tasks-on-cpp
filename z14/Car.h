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
    Car();
    Car(const std::string &brand, const std::string &color, const std::string &bodyType, float engineVolume, int mileage);
    void setAttributes(const std::string &brand, const std::string &color, const std::string &bodyType, float engineVolume, int mileage);
    double calculateFuelConsumption() const;
    virtual void display() const;
};

class Truck : public Car {
private:
    int maxLoad;

public:
    Truck(const std::string &brand, const std::string &color, const std::string &bodyType, float engineVolume, int mileage, int maxLoad);
    void setMaxLoad(int maxLoad);
    int getMaxLoad() const;
    void display() const override;
};

class PassengerCar : public Car {
private:
    int numberOfSeats;

public:
    PassengerCar(const std::string &brand, const std::string &color, const std::string &bodyType, float engineVolume, int mileage, int numberOfSeats);
    void setNumberOfSeats(int numberOfSeats);
    int getNumberOfSeats() const;
    void display() const override;
};

#endif