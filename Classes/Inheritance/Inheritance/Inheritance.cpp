//
// Created by Moesenbacher on 23.09.2026.
//

#include "Inheritance.h"
#include <iostream>

class Vehicle {
    public:
        std::string brand = "Ford";
        void honk() {
            std::cout << "Tuut, tuut!" << std::endl;
        }
};


class Car: public Vehicle {
    public:
        std::string model = "Mustang";
};

int Inheritance::vehicle() {
    Car car;
    car.honk();
    std::cout << car.brand << " " << car.model << std::endl;

    return 0;
}