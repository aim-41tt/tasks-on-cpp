#include "SUV.h"

SUV::SUV(const std::string& model) : model(model) {}

SUV::~SUV() {
    std::cout << "Деструктор внедорожника: " << model << std::endl;
}

void SUV::drive() const {
    std::cout << "Внедорожник " << model << " едет." << std::endl;
}