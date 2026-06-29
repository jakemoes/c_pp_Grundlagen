//
// Created by Jakob Mösenbacher on 30.06.26.
//

#include "Pointers.h"

#include <iostream>
#include <ostream>
#include <string>

int Pointers::overview() {
    std::string food = "Pizza";
    std::string* ptr = &food;


    std::cout << food << std::endl;
    std::cout << &food << std::endl;
    std::cout << ptr << std::endl;


    return 0;
}

int Pointers::dereferencing() {
    std::string food = "Pizza";
    std::string* ptr = &food;

    std::cout << ptr << std::endl;
    std::cout << *ptr << std::endl;

    return 0;
}

int Pointers::modifyPointers() {
    std::string food = "Pizza";
    std::string* ptr = &food;

    std::cout << food << std::endl;
    std::cout << &food << std::endl;
    std::cout << *ptr << std::endl;

    *ptr = "Hamburger";

    std::cout << food << std::endl;
    std::cout << *ptr << std::endl;

    return 0;
}

