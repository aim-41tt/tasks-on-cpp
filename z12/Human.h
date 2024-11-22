#ifndef HUMAN_H
#define HUMAN_H

#include <string>
#include <iostream>
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
    ~Human();

    void setName(const string &name);
    void setSurname(const string &surname);
    void setAge(int age);
    void setWeight(float weight);
    void setHeight(float height);

    string getName() const;
    string getSurname() const;
    int getAge() const;
    float getWeight() const;
    float getHeight() const;

    void display() const;
};

#endif