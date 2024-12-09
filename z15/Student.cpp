#include "Student.h"

Student::Student(const std::string& name, int age) : name(name), age(age) {}

Student::~Student() {
    std::cout << "Деструктор студента: " << name << std::endl;
}

void Student::introduce() const {
    std::cout << "Я студент, меня зовут " << name << ", мне " << age << " лет." << std::endl;
}