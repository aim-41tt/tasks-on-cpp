#ifndef STUDENT_H
#define STUDENT_H

#include "Human.h"

class Student : public Human {
private:
    std::string name;
    int age;

public:
    Student(const std::string& name, int age);
    ~Student() override;

    void introduce() const override;
};

#endif 