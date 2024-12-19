#include <iostream>
#include <fstream>
#include <string>
#include <vector>

class Car {
protected:
    std::string brand;
    int year;

public:
    Car(const std::string& brand = "", int year = 0) : brand(brand), year(year) {}
    virtual void input() {
        std::cout << "Введите марку автомобиля: ";
        std::cin >> brand;
        std::cout << "Введите год выпуска: ";
        std::cin >> year;
    }
    virtual void display() const {
        std::cout << "Марка: " << brand << ", Год выпуска: " << year << std::endl;
    }
    virtual void save(std::ofstream& out) const {
        out << "Марка: " << brand << ", Год выпуска: " << year << std::endl;
    }
    virtual ~Car() = default;
};

class Truck : virtual public Car {
protected:
    int loadCapacity;

public:
    Truck(const std::string& brand = "", int year = 0, int loadCapacity = 0)
        : Car(brand, year), loadCapacity(loadCapacity) {}

    void input() override {
        Car::input();
        std::cout << "Введите грузоподъемность: ";
        std::cin >> loadCapacity;
    }

    void display() const override {
        Car::display();
        std::cout << "Грузоподъемность: " << loadCapacity << " кг" << std::endl;
    }

    void save(std::ofstream& out) const override {
        Car::save(out);
        out << "Грузоподъемность: " << loadCapacity << " кг" << std::endl;
    }
};

class PassengerCar : virtual public Car {
protected:
    int passengerCapacity;

public:
    PassengerCar(const std::string& brand = "", int year = 0, int passengerCapacity = 0)
        : Car(brand, year), passengerCapacity(passengerCapacity) {}

    void input() override {
        Car::input();
        std::cout << "Введите количество пассажиров: ";
        std::cin >> passengerCapacity;
    }

    void display() const override {
        Car::display();
        std::cout << "Пассажировместимость: " << passengerCapacity << " человек" << std::endl;
    }

    void save(std::ofstream& out) const override {
        Car::save(out);
        out << "Пассажировместимость: " << passengerCapacity << " человек" << std::endl;
    }
};

class PublicTransport : public Truck, public PassengerCar {
private:
    std::string routeNumber;

public:
    PublicTransport(const std::string& brand = "", int year = 0, int loadCapacity = 0,
                    int passengerCapacity = 0, const std::string& routeNumber = "")
        : Car(brand, year), Truck(brand, year, loadCapacity),
          PassengerCar(brand, year, passengerCapacity), routeNumber(routeNumber) {}

    void input() override {
        Truck::input();
        std::cout << "Введите маршрутный номер: ";
        std::cin >> routeNumber;
    }

    void display() const override {
        Truck::display();
        std::cout << "Маршрутный номер: " << routeNumber << std::endl;
    }

    void save(std::ofstream& out) const override {
        Truck::save(out);
        out << "Маршрутный номер: " << routeNumber << std::endl;
    }
};

int main() {
    std::vector<Car*> vehicles;
    int choice;

    do {
        std::cout << "Выберите тип автомобиля:\n"
                  << "1. Грузовик\n2. Легковой автомобиль\n3. Общественный транспорт\n0. Завершить ввод\n";
        std::cin >> choice;

        Car* vehicle = nullptr;
        switch (choice) {
        case 1:
            vehicle = new Truck();
            break;
        case 2:
            vehicle = new PassengerCar();
            break;
        case 3:
            vehicle = new PublicTransport();
            break;
        default:
            break;
        }

        if (vehicle) {
            vehicle->input();
            vehicles.push_back(vehicle);
        }
    } while (choice != 0);

    std::ofstream outFile("cars.txt");
    for (const auto& vehicle : vehicles) {
        vehicle->display();
        vehicle->save(outFile);
    }

    for (auto& vehicle : vehicles) {
        delete vehicle;
    }

    return 0;
}
