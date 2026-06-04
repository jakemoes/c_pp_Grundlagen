//
// Created by Jakob Mösenbacher on 04.06.26.
//

#include "Booleans.h"

#include <iostream>
#include <ostream>

int Booleans::overview() {
    bool isCodingFun = true;
    bool isFishTasty = false;

    std::cout << isCodingFun << std::endl;
    std::cout << isFishTasty << std::endl;

    std::cout << std::boolalpha;
    std::cout << isCodingFun << std::endl;
    std::cout << isFishTasty << std::endl;

    std::cout << std::noboolalpha;
    std::cout << isCodingFun << std::endl;

    return 0;
}

int Booleans::booleanExpressions() {
    int x = 10;
    int y = 9;
    std::cout << (x > y) << std::endl;
    std::cout << (x == 10) << std::endl;
    std::cout << (15 == 10) << std::endl;
    bool isGreaterThan = x > y;
    std::cout << isGreaterThan << std::endl;

    return 0;
}

int Booleans::realLifeExample() {
    int myAge = 25;
    int votingAge = 18;

    std::cout << (myAge >= votingAge) << std::endl;

    if (myAge >= votingAge) {
        std::cout << "Old enought to vote" << std::endl;
    }
    else {
        std::cout << "Not old enough to vote" << std::endl;
    }



    return 0;
}


int Booleans::codingChallange() {
    int age = 25;
    int minAge = 21;

    std::cout << (age >= minAge) << std::endl;

    return 0;
}