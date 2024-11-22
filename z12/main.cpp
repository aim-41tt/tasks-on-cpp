#include "Human.h"
#include "Car.h"
#include "Animal.h"

int main() {
    Human h1;
    h1.setName("Иван");
    h1.setSurname("Иванов");
    h1.setAge(30);
    h1.setWeight(80.5);
    h1.setHeight(175.0);
    h1.display();

    Human *h2 = new Human("Мария", "Петрова", 25, 60.0, 165.0);
    h2->display();
    delete h2;

    Car c1;
    c1.setAttributes("Toyota", "Черный", "Седан", 1.8, 20000);
    c1.display();

    Car *c2 = new Car("Honda", "Красный", "Хэтчбек", 1.5, 15000);
    c2->display();
    delete c2;

    Animal a1;
    a1.setAttributes("Мурзик", "Кот", "Черный", 3, 5.0);
    a1.display();

    Animal *a2 = new Animal("Бобик", "Собака", "Коричневый", 5, 10.0);
    a2->display();
    delete a2;

    return 0;
}