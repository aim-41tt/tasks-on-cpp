#include <iostream>
#include "Human.h"
#include "Car.h"
#include "Animal.h"

int main() {
    
    Human h1("John", "Doe", 30, 75.5, 180);
    h1.display();
    h1.setAge(35);
    h1.setWeight(80.0);
    h1.display();

    
    Car c1("Toyota", "Red", "Sedan", 2.5, 10000);
    c1.display();
    c1.setAttributes("Honda", "Blue", "Coupe", 3.0, 5000);
    c1.display();

    
    Animal a1("Lion", "Panthera leo", "Golden", 5, 190.0);
    a1.display();
    a1.increaseWeight(30);
    a1.display();

    return 0;
}