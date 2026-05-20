//
// Created by Moesenbacher on 20.05.2026.
//

#include "DataTypes.h"

#include <iostream>
#include <ostream>

//Numeric
int DataTypes::numericTypes() {
    int myNum = 10;
    float myDecimalNum1 = 3.5;
    double myDecimalNum2 = 3.5;

    std::cout << "int: " << myNum << " float: " << myDecimalNum1 << " double" << myDecimalNum2 << std::endl;

    //float vs. double
    //The precision of a floating point value indicates how many digits the value can have after the decimal point.
    //The precision of float is only six or seven decimal digits, while double variables have a precision of about 15 digits.
    //Therefore it is safer to use double for most calculations.
    return 0;
}

int DataTypes::sientificNumbers() {
    float f1 = 35e3;
    double d1 = 12E4;
    std::cout << f1 << std::endl;
    std::cout << d1 << std::endl;
    return 0;
}

//Boolean
int DataTypes::bolean() {
    bool isCodingFun = true;
    bool isFishTasty = false;
    std::cout << isCodingFun << std::endl;
    std::cout << isFishTasty << std::endl;

    return 0;
}

//Char
int DataTypes::character() {
    char myGrade = 'B';
    std::cout << myGrade << std::endl;

    return 0;
}

int DataTypes::characterASCI() {
    char a = 65, b = 66, c = 67;
    std::cout << a << ", " << b << ", " << c << std::endl;
    return 0;
}


//String

int DataTypes::stringType() {
    //#include <string> inludes the library so you dodn't have to write std:: you can just wire string
    std::string greeting = "Hello";
    std::cout << greeting << std::endl;

    return 0;
}

//auto
int DataTypes::autoType() {
    auto x = 5; // x is automatically treated as int
    auto myNum = 5; // int
    auto myFloatNum = 5.99f; // float
    auto myDoubleNum = 9.98; // double
    auto myLetter = 'D'; // char
    auto myBoolean = true; // bool
    auto myString = std::string("Hello"); // std::string
    std::cout << myNum << std::endl;
    std::cout << myFloatNum << std::endl;
    std::cout << myDoubleNum << std::endl;
    std::cout << myLetter << std::endl;
    std::cout << myBoolean << std::endl;
    std::cout << myString << std::endl;

    //auto only works when you assign a value at the same time (You can't declare auto x; without assigning a value)
    //Once the type is chosen, it stays the same.
    return 0;
}

// Real Life Example
int DataTypes::realLifeExample() {
    int items = 50;
    double cost_per_item = 9.9;
    double total_cost = items * cost_per_item;
    char currency = '$';
    std::cout << "Number of items: " << items << std::endl;
    std::cout << "Cost per item: " << cost_per_item << currency << std::endl;
    std::cout << "Total cost: " << total_cost << currency << std::endl;
    return 0;
}


//Coding challange
int DataTypes::codeChallange() {
    // Write studentID here
    int studentID = 1;
    // Write score here
    float score = 1.2;
    // Write grade here
    char grade = 'A';
    // Print studentID
    std::cout << studentID << std::endl;
    // Print score
    std::cout << score << std::endl;
    // Print grade
    std::cout << grade << std::endl;

    return 0;
}
