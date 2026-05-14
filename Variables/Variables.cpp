//
// Created by Jakob Mösenbacher on 14.05.26.
//

#include "Variables.h"

#include <iostream>
#include <ostream>

//Declare Variables
int Variables::declaring() {
    int myNum = 15;
    std::cout << myNum << std::endl;
    return 0;
}

int Variables::initialising() {
    int myNum;
    myNum = 15;
    std::cout << myNum << std::endl;
    return 0;
}

int Variables::types() {
    int myNum = 5;
    double myFloatNum = 5.99;
    char myLetter = 'D';
    std::string myText = "Hello";
    bool myBool = true;
    std::cout << myNum << std::endl;
    std::cout << myFloatNum << std::endl;
    std::cout << myLetter << std::endl;
    std::cout << myText << std::endl;
    std::cout << myBool << std::endl;
    return 0;
}

int Variables::displayVariables() {
    int myAge = 35;
    std::string name = "John";
    double height = 6.1;

    std::cout << "I am " << myAge << " years old." << std::endl;
    std::cout << name << " is " << myAge << " years old and " << height << " feet tall.";
    return 0;
}

int Variables::addition() {
    int x = 5;
    int y = 6;
    int sum = x + y;
    std::cout << sum << std::endl;
    return 0;
}

//Multiple Variables
int Variables::declareMultibleVariables() {
    int x = 5, y = 6, z = 50;
    std::cout << x + y + z << std::endl;
    return 0;
}

int Variables::assignSameValue() {
    int x, y, z;
    x = y = z = 50;
    std::cout << x + y + z << std::endl;
    return 0;
}

//Identifiers
int Variables::identify() {
    //Good
    int minutesPerHour = 60;

    //Ob, but not so esy to understand what mactally is
    int m =60;

    std::cout << "A minute has " << minutesPerHour << std::endl;
    return 0;
}

//Constants
int Variables::constants () {
    const int myNum = 15;  // myNum will always be 15
    //myNum = 10;  // error: assignment of read-only variable 'myNum'
    const int minutesPerHour = 60;
    //Wont work
    //const int minutesPerH;
    //minutesPerH = 60; // error
    std::cout << "Constant: " << myNum << std::endl;
    return 0;
}


//Real life examples
int Variables::studentData() {
    // Student data
    int studentID = 15;
    int studentAge = 23;
    double studentFee = 75.25;
    char studentGrade = 'B';

    // Print variables
    std::cout << "Student ID: " << studentID << "\n";
    std::cout << "Student Age: " << studentAge << "\n";
    std::cout << "Student Fee: " << studentFee << "\n";
    std::cout << "Student Grade: " << studentGrade << "\n";
    return 0;
}

int Variables::areaOfRectangle() {
    // Create integer variables
    int length = 4;
    int width = 6;

    // Calculate the area of a rectangle
    int area = length * width;

    // Print the variables
    std::cout << "Length is: " << length << "\n";
    std::cout << "Width is: " << width << "\n";
    std::cout << "Area of the rectangle is: " << area << "\n";
    return 0;
}

//Coding Challenge
int Variables::codingChallenge() {
    // Write length here
    int length = 5;
    // Write width here
    int width = 6;
    // Write area here (length * width)
    int area = length * width;
    // Print area here
    std::cout << length;
    return 0;
}