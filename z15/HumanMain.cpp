#include "Student.h"
#include "Teacher.h"
#include <vector>

int main() {
    std::vector<Human*> humans;

    Student staticStudent("Иван", 20);
    Teacher staticTeacher("Мария", "Математика");

    humans.push_back(new Student("Анна", 19));
    humans.push_back(new Teacher("Петр", "Физика"));

    staticStudent.introduce();
    staticTeacher.introduce();

    for (auto* human : humans) {
        human->introduce();
    }

    for (auto* human : humans) {
        delete human;
    }

    return 0;
}