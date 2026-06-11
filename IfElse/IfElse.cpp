//
// Created by Moesenbacher on 11.06.2026.
//

#include "IfElse.h"

#include <iostream>

int IfElse::overview() {

    if (20 > 18) {
        std::cout << "20 is greater than 18" << std::endl;
    }

    int x = 20;
    int y = 18;

    if (x > y) {
        std::cout << "x is greater than y" << std::endl;
    }


    bool isGreater = x > y;

    if (isGreater) {
        std::cout << "x is greater than y" << std::endl;
    }

    return 0;
}



int IfElse::elseStatement(){
    int time = 20;

    if (time < 18) {
        std::cout << "Good day." << std::endl;
    } else {
        std::cout << "Good evening." << std::endl;
    }

    bool isDay = time < 18;

    if (isDay) {
        std::cout << "Good day." << std::endl;
    } else {
        std::cout << "Good evening." << std::endl;
    }

    return 0;
}


int IfElse::elseIf () {
    int time = 16;

    if (time < 12) {
        std::cout << "Good morning." << std::endl;
    }else if (time < 18) {
        std::cout << "Good day." << std::endl;
    }else {
        std::cout << "Good evening." << std::endl;
    }


    bool isMorning = time < 12;
    bool isDay = time < 18;

    if (isMorning) {
        std::cout << "Good morning" << std::endl;
    }else if (isDay){
    std::cout << "Good day" << std::endl;
    }else {
        std::cout << "Good evening" << std::endl;
    }

    return 0;
}

int IfElse::shortHandIfElse() {
    int time = 20;
    std::string result =(time < 18) ? "Good day." : "Good evening.";
    std::cout << result << std::endl;

    std::cout << ((time < 18) ? "Good day." : "Good evening")<< std::endl;

    time = 22;

    std::string message = (time < 12) ? "Good morning."
  : (time < 18) ? "Good afternoon."
  : "Good evening.";

    std::cout << message << std::endl;

    return 0;
}


int IfElse::nestedIf () {
    int x = 15;
    int y = 25;

    if (x > 10) {
        std::cout << "x is greater than 10" << std::endl;

        if (y > 20) {
            std::cout << "y is also greater than 20" << std::endl;
        }
    }

    int age = 20;
    bool isCitizen = true;

    if(age >= 18) {
        std::cout << "Old enough to vote" << std::endl;
        if (isCitizen) {
            std::cout << "And you are a citizen, so you can vote!" << std::endl;
        }else {
            std::cout << "But you must be a citizen to vote." << std::endl;
        }
    }else {
        std::cout << "Not old eough to vote." << std::endl;
    }
    return 0;
}


int IfElse::logicalOperators() {
    int a = 200;
    int b = 33;
    int c = 500;

    if (a > b && a > c) {
        std::cout << "Both conditions are true" << std::endl;
    }

    if (a > b || a > c) {
        std::cout << "At least one condition is true" << std::endl;
    }

    if (!(a > b)) {
        std::cout << "a is NOT greater than b";
    }



    bool isLoggedIn = true;
    bool isAdmin = false;
    int securityLevel = 3; // 1 = highest

    if (isLoggedIn && (isAdmin || securityLevel <= 2)) {
        std::cout << "Access granted." << std::endl;
    } else {
        std::cout << "Access denied." << std::endl;
    }


    return 0;
}


int IfElse::realLifeExample() {
    //Door code
    int doorCode = 1337;

    if (doorCode == 1337) {
        std::cout << "The door is now open" << std::endl;
    }else {
        std::cout << "The door remains closed." << std::endl;
    }

    //positive vs negative
    int myNum = 10;
    if (myNum > 0) {
        std::cout << "The value is a positive number." << std::endl;
    }else if (myNum < 0) {
        std::cout << "The value is a negative number." << std::endl;
    }else {
        std::cout << "The value is 0." << std::endl;
    }

    //voting age
    int myAge = 25;
    int votingAge = 18;

    if (myAge >= votingAge) {
        std::cout << "Old enough to vote!" << std::endl;
    }else {
        std::cout << "Not old enough to vote!!" << std::endl;
    }

    //voting & citizen
    int age = 20;
    bool isCitizen = true;

    if (age >= 18) {
        std::cout << "Old enough to vote." << std::endl;

        if (isCitizen) {
            std::cout << "And you are a citizen, so you can vote!" << std::endl;
        } else {
            std::cout << "But you must be a citizen to vote." << std::endl;
        }
    } else {
        std::cout << "Not old enough to vote." << std::endl;
    }

    //even vs odd
    myNum = 5;

    if (myNum % 2 == 0) {
        std::cout << myNum << " is even." << std::endl;
    } else {
        std::cout << myNum << " is odd." << std::endl;
    }

    //temperature
    int temperature = 30;

    if (temperature < 0) {
        std::cout << "It's freezing!" << std::endl;
    } else if (temperature < 20) {
        std::cout << "It's cool." << std::endl;
    } else {
        std::cout << "It's warm." << std::endl;
    }


    return 0;
}


int IfElse::codeChallange() {
    int age = 10;

    // Write an if statement that checks if age >= 18
    if (age >= 18){
        std::cout << "Allowed" << std::endl;
    }else{
        std::cout << "Not allowed" << std::endl;
    }

    return 0;
}






