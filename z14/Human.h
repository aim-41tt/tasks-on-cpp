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
    Human();
    Human(const std::string &name, const std::string &surname, int age, float weight, float height);
    void setAttributes(const std::string &name, const std::string &surname, int age, float weight, float height);
    double calculateBMI() const;
    int calculateBirthYear() const;
    virtual void display() const; 
};

class Adult : public Human {
private:
    std::string job;

public:
    Adult(const std::string &name, const std::string &surname, int age, float weight, float height, const std::string &job);
    void setJob(const std::string &job);
    std::string getJob() const;
    void display() const override;
};

class Child : public Human {
private:
    std::string favoriteToy;

public:
    Child(const std::string &name, const std::string &surname, int age, float weight, float height, const std::string &favoriteToy);
    void setFavoriteToy(const std::string &favoriteToy);
    std::string getFavoriteToy() const;
    void display() const override;
};

#endif