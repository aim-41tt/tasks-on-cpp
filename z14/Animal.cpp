#include "Animal.h"
#include <iostream>
using namespace std;

Animal::Animal() : name(""), species(""), age(0), weight(0.0) {}

Animal::Animal(const string &name, const string &species, int age, double weight) {
    setAttributes(name, species, age, weight);
}

void Animal::setAttributes(const string &name, const string &species, int age, double weight) {
    this->name = name;
    this->species = species;
    this->age = age;
    this->weight = weight;
}

void Animal::display() const {
    cout << "Имя: " << name << ", Вид: " << species
         << ", Возраст: " << age << ", Вес: " << weight << " кг" << endl;
}

Dog::Dog(const string &name, const string &species, int age, double weight, const string &breed)
    : Animal(name, species, age, weight), breed(breed) {}

void Dog::setBreed(const string &breed) {
    this->breed = breed;
}

string Dog::getBreed() const {
    return breed;
}

void Dog::display() const {
    Animal::display();
    cout << "Порода: " << breed << endl;
}

Cat::Cat(const string &name, const string &species, int age, double weight, const string &color)
    : Animal(name, species, age, weight), color(color) {}

void Cat::setColor(const string &color) {
    this->color = color;
}

string Cat::getColor() const {
    return color;
}

void Cat::display() const {
    Animal::display();
    cout << "Цвет: " << color << endl;
}