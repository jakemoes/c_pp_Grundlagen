//
// Created by Jakob Mösenbacher on 30.06.26.
//

#include "Scope.h"

#include <iostream>
#include <ostream>


//Local Scope
void myFunctionLocal() {
    int x = 5;

    std::cout << x << std::endl;
}

int Scope::overview() {
    myFunctionLocal();
    return 0;
}


//Global scope
int x = 5;

void myFunctionGlobal() {
    std::cout << x << std::endl;
}

int Scope::global() {
    myFunctionGlobal();

    std::cout << x << std::endl;
    return 0;
}


//naming variables
int y = 5;

void myFunctionNaming() {
    int y = 22;
    std::cout << y << std::endl;
}

int Scope::naming() {
    myFunctionNaming();

    std::cout << y << std::endl;

    return 0;
}


//Excample
int z = 5;

void myFunctionExample() {
    std::cout << ++z << std::endl;
}

int Scope::example () {
    myFunctionExample();
    std::cout << z << std::endl;

    return 0;
}


