//
// Created by Jakob Mösenbacher on 30.06.26.
//

#include "Refernces.h"

#include <iostream>
#include <string>

int Refernces::overview () {
    std::string food = "Pizza"; //food variable
    std::string &meal = food; //refence to food variabel

    std::cout << food << std::endl;
    std::cout << meal << std::endl;

    return 0;
}

int Refernces::updateThroughRefences() {
    std::string food = "Pizza";
    std::string &meal = food;

    meal = "Burger";

    std::cout << food << std::endl;
    std::cout << meal << std::endl;

    return 0;
}

int Refernces::MemoryAddress() {
    std::string food = "Pizza";
    std::cout << &food << std::endl;



    return 0;
}