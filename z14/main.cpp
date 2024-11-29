#include <iostream>
#include "Human.h"
#include "Car.h"
#include "Animal.h"

using namespace std;

int main() {
    
    Human human1("Иван", "Иванов", 30, 75.0, 175.0);
    Adult adult1("Мария", "Петрова", 28, 60.0, 165.0, "Инженер");
    Child child1("Петя", "Иванов", 8, 30.0, 120.0, "Конструктор Лего");

    cout << "Информация о человеке:\n";
    human1.display();
    cout << "\nИнформация о взрослом человеке:\n";
    adult1.display();
    cout << "\nИнформация о ребенке:\n";
    child1.display();

    
    Car car1("Toyota", "Красный", "Седан", 2.0, 50000);
    Truck truck1("Mercedes", "Серый", "Грузовик", 5.0, 100000, 15000);
    PassengerCar passengerCar1("BMW", "Черный", "Хэтчбек", 2.5, 30000, 5);

    cout << "\nИнформация о машине:\n";
    car1.display();
    cout << "\nИнформация о грузовике:\n";
    truck1.display();
    cout << "\nИнформация о пассажирском автомобиле:\n";
    passengerCar1.display();

    
    Dog dog1("Шерлок", "Собака", 3, 25.0, "Бульдог");
    Cat cat1("Луна", "Кошка", 2, 4.0, "Черный");

    cout << "\nИнформация о собаке:\n";
    dog1.display();
    cout << "\nИнформация о кошке:\n";
    cat1.display();

    return 0;
}