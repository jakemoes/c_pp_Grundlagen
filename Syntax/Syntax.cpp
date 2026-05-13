//
// Created by Moesenbacher on 13.05.2026.
//

#include "Syntax.h"
#include <iostream> // header file library
using namespace std; //names for objects and variables from the standard library



int Syntax::helloWorld() {
    cout << "Hello World!"  << endl; // insertion operator (<<)
    return 0;
}

//Better to use it like this to keep namespaces as clean as possible
int Syntax::specificNamespace() {
    std::cout << "Hello World!" << std::endl;
    return 0;
}

//Every statement ist ended by a ;
int Syntax::statements() {
    std::cout << "Hello World! " << std::endl;
    std::cout << "Have a good day!" << std::endl;
    return 0;
}

int Syntax::codeChallenge() {
    std::cout << "Hello, C++!" << std::endl;
    return 0;
}
