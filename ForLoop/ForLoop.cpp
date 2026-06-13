//
// Created by Moesenbacher on 11.06.2026.
//

#include "ForLoop.h"

#include <iostream>
#include <ostream>


int ForLoop::overview() {

    for (int i = 0; i < 5; i++) {
        std::cout << i << std::endl;
    }

    for (int i = 0; i <= 10; i = i + 2) {
        std::cout << i << std::endl;
    }

    return 0;
}


int ForLoop::nestedLoop() {
    // Outer loop
    for (int i = 1; i <= 2; ++i) {
        std::cout << "Outer: " << i << std::endl; // Executes 2 times

        // Inner loop
        for (int j = 1; j <= 3; ++j) {
            std::cout << " Inner: " << j << std::endl; // Executes 6 times (2 * 3)
        }
    }

    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            std::cout << i * j << " ";
        }
        std::cout << std::endl;
    }


    return 0;
}



int ForLoop::forEachLoop() {

    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int num : myNumbers) {
        std::cout << num << std::endl;
    }


    std::string word = "Hello";
    for (char c : word) {
        std::cout << c << std::endl;
    }


    return 0;
}


int ForLoop::realLifeExample() {

    //Count to 100 by tens
    for (int i = 0; i <= 100; i += 10) {
        std::cout << i << std::endl;
    }

    //even number 0-10
    for (int j = 2; j <= 10; j += 2) {
        std::cout << j << std::endl;
    }

    // print odd numbers
    for (int k = 1; k <= 10; k += 2) {
        std::cout << k << std::endl;
    }

    //powers of 2 up to 512
    for (int l = 2; l <= 512; l *= 2) {
        std::cout << l << std::endl;
    }

    int number = 2;
    int m;

    // Print the multiplication table for the number 2
    for (m = 1; m <= 10; m++) {
        std::cout << number << " x " << m << " = " << number * m << std::endl;
    }

    return 0;
}

int ForLoop::codeChallenge() {
    for(int i = 1; i <=5; i++){
        std::cout << i << std::endl;
    }
    return 0;
}

