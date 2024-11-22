#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <iostream>

class Animal {
private:
    std::string name;
    std::string species;
    std::string color;
    int age;
    float weight;

public:
    Animal(const std::string &name = "", const std::string &species = "", const std::string &color = "", int age = 0, float weight = 0.0);
    ~Animal();

    void setAttributes(const std::string &name, const std::string &species, const std::string &color, int age, float weight);
    void increaseWeight(int daysFed);
    void display() const;
};

#endif