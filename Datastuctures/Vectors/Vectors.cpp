//
// Created by Moesenbacher on 30.09.2026.
//

#include "Vectors.h"
#include <vector>
#include <iostream>

int vectorBasics() {
    std::vector<std::string> cars = {"BMW", "Volvo", "Mazda"};

    for (std::string car : cars) {
        std::cout << car << std::endl;
    }

    std::cout << cars[0] << std::endl;
    std::cout << cars[1] << std::endl;

    std::cout << cars.front() << std::endl;
    std::cout << cars.back() << std::endl;

    std::cout << cars.at(1) << std::endl;
    std::cout << cars.at(2) << std::endl;

    cars[0] = "Opel";
    std::cout << cars.at(0) << std::endl;

    cars.at(0)= "BMW";
    std::cout << cars.at(0) << std::endl;

    cars.push_back("Tesla");
    cars.push_back("VW");
    cars.push_back("Mitsubishi");
    cars.push_back("Mini");

    for (std::string car : cars) {
        std::cout << car << std::endl;
    }


    cars.pop_back();

    for (std::string car : cars) {
        std::cout << car << std::endl;
    }

    std::cout << cars.size() << std::endl;
    std::cout << cars.empty() << std::endl;


    for (int i = 0; i < cars.size(); i++) {
        std::cout << cars[i] << std::endl;
    }

    

    return 0;
}