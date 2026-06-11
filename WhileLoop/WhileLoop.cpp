//
// Created by Moesenbacher on 11.06.2026.
//

#include "WhileLoop.h"

#include <iostream>
#include <ostream>

#include "../Utility/Console.h"

int WhileLoop::overview() {

    int i = 0;
    while (i < 5) {
        std::cout << i << std::endl;
        i++;
    }


    int countdown = 3;
    while (countdown > 0) {
        std::cout << countdown << std::endl;
        countdown--;
    }
    std::cout << "Happy New Year!" << std::endl;


    return 0;
}





int WhileLoop::doWhileLoop() {
    int i = 0;
    do {
        std::cout << i << std::endl;
        i++;
    }while (i < 5);

    i = 10;
    do {
        std::cout << i << std::endl;
    }while (i < 5);

    int number;
    do {
        std::cout << "Enter a positive number: ";
        std::cin >> number;
    }while (number > 0);


    return 0;
}



int WhileLoop::realLifeExample() {
    //countdown
    int countdown = 3;

    while (countdown > 0) {
        std::cout << countdown << std::endl;
        countdown--;
    }

    std::cout << "Happy New Year!!" << std::endl;


    //even numbers
    int i = 0;

    while (i <= 10) {
        std::cout << i << std::endl;
        i += 2;
    }


    //reverse numbers
    // A variable with some specific numbers
    int numbers = 12345;

    // A variable to store the reversed number
    int revNumbers = 0;

    // Reverse and reorder the numbers
    while (numbers) {
        // Get the last number of 'numbers' and add it to 'revNumbers'
        revNumbers = revNumbers * 10 + numbers % 10;
        // Remove the last number of 'numbers'
        numbers /= 10;
    }

    std::cout << "Reversed numbers: " << revNumbers << std::endl;



    //Yatzy
    int dice = 1;

    while (dice <= 6) {
        if (dice < 6) {
            std::cout << "No Yatzy" << std::endl;
        } else {
            std::cout << "Yatzy!" << std::endl;
        }
        dice = dice + 1;
    }


    return  0;
}


int WhileLoop::codeChallange () {
    int i = 1;

    while(i <= 5){
        std::cout << i;
        i++;
    }
    std::cout << std::endl;
    return 0;
}


