#ifndef TEACHER_H
#define TEACHER_H

#include "Human.h"

class Teacher : public Human {
private:
    std::string name;
    std::string subject;

public:
    Teacher(const std::string& name, const std::string& subject);
    ~Teacher() override;

    void introduce() const override;
};

#endif 