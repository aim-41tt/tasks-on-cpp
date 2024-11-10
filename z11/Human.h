#ifndef HUMAN_H
#define HUMAN_H

#include <string>
using namespace std;

class Human {
private:
    string name;
    string surname;
    int age;
    float weight;
    float height;

public:
    Human();
    Human(const string &name, const string &surname, int age, float weight, float height);
    void setAttributes(const string &name, const string &surname, int age, float weight, float height);
    double calculateBMI() const;
    int calculateBirthYear() const;
    void display() const;
};

#endif