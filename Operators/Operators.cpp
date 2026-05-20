//
// Created by Moesenbacher on 20.05.2026.
//

#include "Operators.h"

#include <iostream>
#include <ostream>

//C++ divides the operators into the following groups:
//Arithmetic operators
//Assignment operators
//Comparison operators
//Logical operators
//Bitwise operators

int Operators::arethmeticOperators() {
    int x = 10;
    int y = 3;
    double a = 10.0;
    double b = 3.0;

    std::cout << x + y << std::endl;
    std::cout << x - y << std::endl;
    std::cout << x * y << std::endl;
    std::cout << x / y << std::endl;
    std::cout << x % y << std::endl;
    std::cout << a / b << std::endl;

    int z = 5;
    //increment
    ++z;
    std::cout << z << std::endl;
    //decrement
    --z;
    std::cout << z << std::endl;
    return 0;
}

int Operators::assignmentOperators() {
    int x = 10;
    x += 5; // same as x = x + 5
    std::cout << x << std::endl;
    x -= 1;
    std::cout << x << std::endl;
    x *= 2;  // same as x = x * 2
    std::cout << x << std::endl;
    x /= 2;
    x = 5;
    std::cout << x << std::endl;
    x %= 3;
    std::cout << x << std::endl;
    //bitweise AND
    x = 5;
    x &= 3;
    std::cout << x << std::endl;
    //bitweise OR
    x = 5;
    x |= 3;
    std::cout << x << std::endl;
    //bitweise XOR
    x = 5;
    x ^= 3;
    std::cout << x << std::endl;
    // Shifts bits right by 2. Binary becomes: 00000011 (Decimal: 3)
    x = 12;
    x >>= 2;
    std::cout << x << std::endl;
    //  Shifts bits left by 2. Binary becomes: 000001100 (Decimal: 12)
    x = 3;
    x <<= 2;
    std::cout << x << std::endl;

    return 0;
}

int Operators::trackingSavings() {
    int savings = 100;
    savings += 50;

    std::cout << "Total Savings: " << savings << std::endl;
    return 0;
}


int Operators::comparisonOperators() {
    int x = 5;
    int y = 3;
    std::cout << (x > y) << std::endl; // returns 1 (true) because 5 is greater than 3

    int age = 18;
    std::cout << (age >= 18) << std::endl;
    std::cout << (age < 18) << std::endl;

    int passwordLength = 5;
    std::cout << (passwordLength >= 8) << std::endl;
    std::cout << (passwordLength< 8) << std::endl;

    std::cout << (x == y) << std::endl;
    std::cout << (x != y) << std::endl;
    return 0;
}

int Operators::logicOperators() {
    int x = 3;
    std::cout << (x < 5 &&  x < 10) << std::endl;
    std::cout << (x < 5 ||  x < 10) << std::endl;
    std::cout << !(x < 5 &&  x < 10) << std::endl;

    return 0;
}


int Operators::precedenceOperator() {
    int result1 = 2 + 3 * 4;     // 2 + 12 = 14
    int result2 = (2 + 3) * 4;   // 5 * 4 = 20

    std::cout << result1 << std::endl;
    std::cout << result2 << std::endl;

    return 0;
}

int Operators::OpertorsCodeChallange() {
    // Write itemPrice here
    int itemPrice = 10;
    // Write shippingCost here
    int shippingCost = 4;
    // Write sum here (itemPrice + shippingCost)
    int sum = itemPrice + shippingCost;
    // Print sum here
    std::cout << sum << std::endl;

    return 0;
}