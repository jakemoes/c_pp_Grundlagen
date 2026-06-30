//
// Created by Jakob Mösenbacher on 30.06.26.
//

#include "Lambda.h"

#include <iostream>
#include <ostream>
#include <functional>

int Lambda::overview() {
    auto message = []() {
        std::cout << "Hello World" << std::endl;
    };

    message();

    return 0;
}


int Lambda::lambdaWithParameters() {
    auto add = [](int a, int b) {
        return a + b;
    };


    std::cout << add(3, 4) << std::endl;

    return 0;
}


void myFunctionLambda(std::function<void()> func) {
    func();
    func();
}

int Lambda::functionalLamda() {
    auto message = []() {
        std::cout << "Hello World" << std::endl;
    };

    myFunctionLambda(message);

    return 0;
}

int Lambda::lamdaInLoops() {

    for (int i = 1; i <= 3; i++) {
        auto show = [i]() {
            std::cout << "Numbers: " << i << std::endl;
        };
        show();
    }


    return 0;
}

int Lambda::captureClause() {
    int x = 10;
    auto show = [x]() {
        std::cout <<x << std::endl;
    };

    show();

    return 0;
}

int Lambda::captureByReference() {
    int x = 10;

    auto show = [&x]() {
        std::cout << x << std::endl;
    };

    x = 20;

    show();

    return 0;
}

