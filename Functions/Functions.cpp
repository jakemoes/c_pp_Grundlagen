//
// Created by Jakob Mösenbacher on 30.06.26.
//

#include "Functions.h"

#include <iostream>

void myFunction2();

void myFunction() {
    //code can be ecevuted
    std::cout << "I Just of executed" << std::endl;
}



int Functions::overview() {
    myFunction();
    myFunction();
    myFunction();
    myFunction2();
    return 0;
}

void myFunction2() {
    std::cout << "Function below main." << std::endl;
}
