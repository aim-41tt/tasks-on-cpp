#include "Animal.h"
#include <iostream>
using namespace std;

Animal::Animal() : name(""), species(""), color(""), age(0), weight(0.0) {}

Animal::Animal(const string &name, const string &species, const string &color, int age, float weight) {
    setAttributes(name, species, color, age, weight);
}

void Animal::setAttributes(const string &name, const string &species, const string &color, int age, float weight) {
    if (age >= 0) this->age = age;
    if (weight > 0) this->weight = weight;
    this->name = name;
    this->species = species;
    this->color = color;
}

void Animal::increaseWeight(int daysFed) {
    weight += weight * 0.01 * daysFed;
}

void Animal::display() const {
    cout << "Имя: " << name << ", Вид: " << species
         << ", Окрас: " << color << ", Возраст: " << age
         << ", Вес: " << weight << endl;
}