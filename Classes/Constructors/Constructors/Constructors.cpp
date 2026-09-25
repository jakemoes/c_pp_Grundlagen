//
// Created by Moesenbacher on 23.09.2026.
//

#include "Constructors.h"

#include <iostream>
#include <ostream>

class myConstructors {
    public:
        myConstructors() {
            std::cout<<"hello World"<<std::endl;
        }
};

int Constructors::constructor() {
    myConstructors constructor;
    return 0;
}


class Car {
    public:
    std::string brand;
    std::string model;
    int year;
    Car (std::string brand, std::string model, int year) {
        this->brand = brand;
        this->model = model;
        this->year = year;
    }
};


int Constructors::constructorCar() {
    Car myCarObj1("BMW", "X5", 1999);
    Car myCarObj2("Ford", "Mustang", 1969);

    std::cout << myCarObj1.brand << " " << myCarObj1.model << " " << myCarObj1.year << std::endl;
    std::cout << myCarObj2.brand << " " << myCarObj2.model << " " << myCarObj2.year << std::endl;

    return 0;
}



class CarOut {
    public:
    std::string brand;
    std::string model;
    int year;
    CarOut(std::string brand, std::string model, int year);
};

CarOut::CarOut(std::string brand, std::string model, int year) {
    this->brand = brand;
    this->model = model;
    this->year = year;
}

int Constructors::constructorCarOut() {
    // Create Car objects and call the constructor with different values
    Car carObj1("BMW", "X5", 1999);
    Car carObj2("Ford", "Mustang", 1969);

    // Print values
    std::cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << std::endl;
    std::cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << std::endl;

    return 0;
}