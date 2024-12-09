#include "Sedan.h"

Sedan::Sedan(const std::string& model) : model(model) {}

Sedan::~Sedan() {
    std::cout << "Деструктор седана: " << model << std::endl;
}

void Sedan::drive() const {
    std::cout << "Седан " << model << " едет." << std::endl;
}