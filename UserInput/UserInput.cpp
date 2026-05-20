//
// Created by Moesenbacher on 20.05.2026.
//

#include "UserInput.h"

#include <iostream>
#include <ostream>

int UserInput::general() {
    int x;
    std::cout << "Type a number: ";
    std::cin >> x;
    std::cout << "Your number is: " << x << std::endl;
    return 0;
}


int UserInput::additionCalculator() {
    int x, y, sum;
    std::cout << "Type a number: ";
    std::cin >> x;
    std::cout << "Type another number: ";
    std::cin >> y;
    sum = x + y;
    std::cout << "Sum is: " << sum << std::endl;

    return 0;
}

