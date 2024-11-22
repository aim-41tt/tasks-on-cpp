#ifndef HUMAN_H
#define HUMAN_H

#include <string>
#include <iostream>

class Human {
private:
    std::string name;
    std::string surname;
    int age;
    float weight;
    float height;

public:
    Human(const std::string &name = "", const std::string &surname = "", int age = 0, float weight = 0.0, float height = 0.0);
    ~Human();

    void setName(const std::string &name);
    void setSurname(const std::string &surname);
    void setAge(int age);
    void setWeight(float weight);
    void setHeight(float height);

    std::string getName() const;
    std::string getSurname() const;
    int getAge() const;
    float getWeight() const;
    float getHeight() const;

    void display() const;
};

#endif