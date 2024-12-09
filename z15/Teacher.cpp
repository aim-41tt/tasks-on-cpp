#include "Teacher.h"

Teacher::Teacher(const std::string& name, const std::string& subject) : name(name), subject(subject) {}

Teacher::~Teacher() {
    std::cout << "Деструктор учителя: " << name << std::endl;
}

void Teacher::introduce() const {
    std::cout << "Я учитель, меня зовут " << name << ", я преподаю " << subject << "." << std::endl;
}