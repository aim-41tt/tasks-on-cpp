#include "Car.h"

Car::Car(const std::string &brand, const std::string &color, const std::string &bodyType, float engineVolume, int mileage)
    : brand(brand), color(color), bodyType(bodyType), engineVolume(engineVolume), mileage(mileage) {
    if (engineVolume <= 0) {
        std::cout << "Ошибка: объем двигателя должен быть больше 0!" << std::endl;
        this->engineVolume = 0.0;
    }
    if (mileage < 0) {
        std::cout << "Ошибка: пробег не может быть отрицательным!" << std::endl;
        this->mileage = 0;
    }
    std::cout << "Car создан." << std::endl;
}

Car::~Car() {
    std::cout << "Car уничтожен." << std::endl;
}

void Car::setAttributes(const std::string &brand, const std::string &color, const std::string &bodyType, float engineVolume, int mileage) {
    if (!brand.empty()) this->brand = brand;
    else std::cout << "Ошибка: марка не может быть пустой!" << std::endl;

    if (!color.empty()) this->color = color;
    else std::cout << "Ошибка: цвет не может быть пустым!" << std::endl;

    if (!bodyType.empty()) this->bodyType = bodyType;
    else std::cout << "Ошибка: тип кузова не может быть пустым!" << std::endl;

    if (engineVolume > 0) this->engineVolume = engineVolume;
    else std::cout << "Ошибка: объем двигателя должен быть больше 0!" << std::endl;

    if (mileage >= 0) this->mileage = mileage;
    else std::cout << "Ошибка: пробег не может быть отрицательным!" << std::endl;
}

void Car::display() const {
    std::cout << "Марка: " << brand << ", Цвет: " << color
              << ", Тип кузова: " << bodyType << ", Объем двигателя: " << engineVolume
              << ", Пробег: " << mileage << std::endl;
}