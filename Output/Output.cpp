//
// Created by Moesenbacher on 13.05.2026.
//

#include "Output.h"
#include <iostream>
int Output::printNumbers() {
    std::cout<<3<<std::endl;
    std::cout<< 3+3<<std::endl;
    std::cout<<2*5<<std::endl;
    return 0;
}

//use \n for newline (escape sequence)
int Output::breakInText() {
    std::cout << "Hello World! \n";
    std::cout << "I am learning C++"<<"\n";
    return 0;
}

int Output::breakSeperated() {
    std::cout << "Hello World!" << "\n";
    std::cout << "I am learning C++" << "\n";
    return 0;
}

int Output::blankLine() {
        std::cout << "Hello World!" << "\n\n";
        std::cout << "I am learning C++"<< "\n";
        return 0;
}

int Output::endlManipulator() {
    std::cout << "Hello World!" << std::endl;
    std::cout << "I am learning C++" << std::endl;
    return 0;
}

int Output::pritntNameAndAge() {
    std::cout << "Jakob" << std::endl;
    std::cout << 25 << std::endl;
    return 0;
}