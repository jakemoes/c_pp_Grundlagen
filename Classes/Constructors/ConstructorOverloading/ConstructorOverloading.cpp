//
// Created by Moesenbacher on 23.09.2026.
//

#include "ConstructorOverloading.h"

#include <iostream>
#include <ostream>
#include <string>

class Car {
    public:
        std::string brand;
        std::string model;

        Car() {
            brand = "Unknown";
            model = "Unknown";
        }

        Car(std::string brand, std::string model) {
            this->brand = brand;
            this->model = model;
    }
};


int ConstructorOverloading::car() {
    Car car1;
    Car car2("BMW", "X5");
    Car car3("Ford", "Mustang");

    std::cout << car1.brand << " " << car1.model << std::endl;
    std::cout << car2.brand << " " << car2.model << std::endl;
    std::cout << car3.brand << " " << car3.model << std::endl;

    return 0;
}
