#ifndef HUMAN_H
#define HUMAN_H

#include <string>
#include <iostream>

class Human {
public:
    virtual ~Human() = default;
    virtual void introduce() const = 0;
};

#endif 