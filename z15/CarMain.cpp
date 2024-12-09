#include "Sedan.h"
#include "SUV.h"
#include <vector>

int main() {
    std::vector<Car*> cars;

    Sedan staticSedan("Toyota Camry");
    SUV staticSUV("Jeep Wrangler");

    cars.push_back(new Sedan("Hyundai Sonata"));
    cars.push_back(new SUV("Land Rover"));

    staticSedan.drive();
    staticSUV.drive();

    for (auto* car : cars) {
        car->drive();
    }

    for (auto* car : cars) {
        delete car;
    }

    return 0;
}