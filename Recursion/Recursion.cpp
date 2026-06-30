//
// Created by Jakob Mösenbacher on 30.06.26.
//

#include "Recursion.h"

#include <iostream>
#include <ostream>

int sum (int k) {
    if (k > 0) {
        return k +sum(k-1);
    }else {
        return  0;
    }
}

int Recursion::overview() {
    int result = sum(10);
    std::cout << result << std::endl;
    return 0;
}

void countdownFunction (int n) {
    if (n > 0) {
        std::cout << n << " ";
        countdownFunction(n-1);
    }
}

int Recursion::countdown() {
    countdownFunction(5);

    std::cout << std::endl;

    return 0;
}


int factorialFunction (int n) {
    if (n > 1) {
        return n * factorialFunction(n-1);
    }
    else {
        return 1;
    }
}

int Recursion::factorial() {
    std::cout << "Factorial of 5 is " << factorialFunction(5) << std::endl;
    return 0;
}