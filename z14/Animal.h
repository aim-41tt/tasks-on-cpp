#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <iostream> 

class Animal {
private:
    std::string name;
    std::string species

;
    int age;
    double weight;

public:
    Animal();
    Animal(const std::string &name, const std::string &species, int age, double weight);
    void setAttributes(const std::string &name, const std::string &species, int age, double weight);
    virtual void display() const;
};

class Dog : public Animal {
private:
    std::string breed;

public:
    Dog(const std::string &name, const std::string &species, int age, double weight, const std::string &breed);
    void setBreed(const std::string &breed);
    std::string getBreed() const;
    void display() const override;
};

class Cat : public Animal {
private:
    std::string color;

public:
    Cat(const std::string &name, const std::string &species, int age, double weight, const std::string &color);
    void setColor(const std::string &color);
    std::string getColor() const;
    void display() const override;
};

#endif