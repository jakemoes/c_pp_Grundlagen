//
// Created by Jakob Mösenbacher on 30.06.26.
//

#include "MemoryManagement.h"
#include <iostream>
#include <string>


int MemoryManagement::overview() {
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    std::cout << sizeof(myInt)<< std::endl;
    std::cout << sizeof(myFloat)<< std::endl;
    std::cout << sizeof(myDouble)<< std::endl;
    std::cout << sizeof(myChar)<< std::endl;


    return 0;
}

int MemoryManagement::newAndDelete() {

    int* ptr = new int;
    *ptr = 35;
    std::cout << *ptr << std::endl;

    delete ptr;


    return 0;
}

int MemoryManagement::newAndDeleteWithArrays() {
    int numGuests;
    std::cout << "How many guests? ";
    std::cin >> numGuests;

    if (numGuests <= 0) {
        std::cout << "Number of guests mur be at least 1." << std::endl;
        return 0;
    }

    std::string* guests = new std::string[numGuests];

    std::cin.ignore();

    for (int i = 0; i < numGuests; i++) {
        std::cout << "Enter name for guest " << (i + 1) << ": ";
        getline(std::cin, guests[i]); //including spaces
    }

    std::cout << "\nGuests checked in:" << std::endl;

    for (int i = 0; i < numGuests; i++) {
        std::cout << guests[i] << std::endl;
    }
    delete [] guests;


    return 0;
}