//
// Created by Moesenbacher on 30.09.2026.
//

#include "Errors.h"
#include <iostream>


int Errors::tryCatch() {
    try {
        throw 505;
    }catch (int errorCode) {
        std::cout<< "Error Code: " <<errorCode<<std::endl;
    }

    return 0;
}

int Errors::tryCatchRealLifeExample() {

    //parameter age
    try {
        int age = 15;
        if (age >= 18) {
            std::cout<<"Access granted - you are old enough."<<std::endl;
        }else {
            throw (age);
        }
    }catch (int myNumber) {
        std::cout<<"Access denied - You must be at least 18 years old."<<std::endl;
        std::cout<<"Age is: "<< myNumber <<std::endl;
    }


    //parameter error code (505)
    try {
        int age = 15;
        if (age >= 18) {
            std::cout << "Access granted - you are old enough." << std::endl;
        } else {
            throw 505;
        }
    }
    catch (int myNum) {
        std::cout << "Access denied - You must be at least 18 years old." << std::endl;
        std::cout << "Error number: " << myNum << std::endl;
    }



    //parameter none  ->catches all errors (handles any type of exception)
    try {
        int age = 15;
        if (age >= 18) {
            std::cout << "Access granted - you are old enough."<<std::endl;
        } else {
            throw 505;
        }
    }
    catch (...) {
        std::cout << "Access denied - You must be at least 18 years old.<<std::endl" << std::endl;
    }

    return 0;
}


int Errors::inputValidation() {
    int number;
    std::cout << "Enter a number: ";

    while (!(std::cin >> number)) {
        std::cout << "Invalid input. Try again." << std::endl;
        std::cin.clear();
        std::cin.ignore(1000, '\n');
    }
    std::cout << "You entered: " << number << std::endl;


    return 0;
}

int Errors::inputValidationRange() {
    int number;

    do {
        std::cout << "Chose a number beteen 1 and 5: : ";
        std::cin >> number;
    }while (number < 1 || number > 5);

    std::cout << "You chose: " << number << std::endl;

    return 0;
}

int Errors::inputValidationText() {
    std::string name;
    do {
        std::cout << "Enter your name: ";
        getline(std::cin, name);
    } while (name.empty());  // Keep asking until the user enters something (name is not empty)

    std::cout << "Hello, " << name << std::endl;
    return 0;
}

