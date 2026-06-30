//
// Created by Jakob Mösenbacher on 30.06.26.
//

#include "FunctionOverloading.h"

#include <iostream>
#include <ostream>

int myFunction(int x);
int myFunction(float x);
int myFunction(double x, double y);

int plusFuncInt (int x, int y) {
    return x + y;
}

double plusFuncDouble(double x, double y) {
    return x + y;
}

int FunctionOverloading::functionWithoutOverloading() {
    int myNum = plusFuncInt(8, 5);
    double myNum2 = plusFuncDouble(4.3, 6.26);

    std::cout << "Int: " << myNum << std::endl;
    std::cout << "Double: " << myNum2 << std::endl;

    return 0;
}


int plusFunc(int x, int y) {
    return x + y;
}

int plusFunc(double x, double y) {
    return x + y;
}

int plusFunc(int x, int y, int z) {
    return x + y + z;
}

int FunctionOverloading::functionOverloading() {
    int myNum = plusFuncInt(8, 5);
    double myNum2 = plusFuncDouble(4.3, 6.26);

    std::cout << "Int: " << myNum << std::endl;
    std::cout << "Double: " << myNum2 << std::endl;


    int result1 = plusFunc(8, 5);
    int result2 = plusFunc(1, 2, 3);

    std::cout << "Sum of 2 numbers: " << result1 << std::endl;
    std::cout << "Sum of 3 numbers: " << result2 << std::endl;

    return 0;
}









