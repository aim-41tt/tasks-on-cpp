#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

class Animal {
private:
    string name;
    string species;
    string color;
    int age;
    float weight;

public:
    Animal();
    Animal(const string &name, const string &species, const string &color, int age, float weight);
    ~Animal();

    void setAttributes(const string &name, const string &species, const string &color, int age, float weight);
    void increaseWeight(int daysFed);
    void display() const;
};

#endif