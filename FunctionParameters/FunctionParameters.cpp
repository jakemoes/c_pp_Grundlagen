//
// Created by Jakob Mösenbacher on 30.06.26.
//

#include "FunctionParameters.h"
#include <iostream>
#include <string>


// Parameters and Arguments
void myFunction(std::string fname) {
    std::cout  << fname << "Refsens" << std::endl;
}

int FunctionParameters::parametersAndArguments() {
    myFunction("Liam");
    myFunction("Jenny");
    myFunction("Anja");

    return 0;
}

//default Parameter Values
void myFunctionDefaultParameterValues(std::string country = "Norway") {
    std::cout  << country << std::endl;
}

int FunctionParameters::defaultParameterValues() {
    myFunctionDefaultParameterValues("Sweeeden");
    myFunctionDefaultParameterValues("India");
    myFunctionDefaultParameterValues();
    myFunctionDefaultParameterValues("USA");

    return 0;
}

//multiple Variables
void myFunctionMultipleParameters(std::string fname, int age) {
    std::cout  << fname << " Refsnes. " << age << " years old." << std::endl;
}

int FunctionParameters::multipleParameters() {
    myFunctionMultipleParameters("Liam", 3);
    myFunctionMultipleParameters("Jenny", 14);
    myFunctionMultipleParameters("Anja", 30);

    return 0;
}

//return Value
int myFunctionReturn1(int x) {
    return 5 + x;
}

int myFunctionReturn2(int x, int y) {
    return x + y;
}

int doubleGame(int x) {
    return x * 2;
}

int FunctionParameters::returnValue() {
    std::cout  << myFunctionReturn1(3) << std::endl;

    std::cout  << myFunctionReturn2(5, 3) << std::endl;

    int z = myFunctionReturn2(5,3);
    std::cout  << z << std::endl;

    for (int i = 1; i <= 5; i++) {
        std::cout  << "Double of " << i << " is " << doubleGame(i) << std::endl;
    }

    return 0;
}

//Pass by refence
void changeValue(int &num) {
    num = 50;
}

void swapNumbers( int &x, int &y ) {
    int z = x;
    x = y;
    y = z;
}

void modifyString (std::string &str) {
    str += "World";
}



int FunctionParameters::passByReference() {
    int value = 10;
    changeValue(value);
    std::cout << value << std::endl;

    int firstNum = 10;
    int secondNum = 20;

    std::cout << "Before swap: " << std::endl;
    std::cout << firstNum  << secondNum << std::endl;

    swapNumbers(firstNum, secondNum);
    std::cout << "After swap: " << std::endl;
    std::cout << firstNum << secondNum << std::endl;

    std::string greeting = "Hello";
    modifyString(greeting);
    std::cout << greeting << std::endl;

    return 0;
}

//Arrays
void myFunctionPassArray(int myNumbers[5]) {
    for (int i = 1; i <= 5; i++) {
        std::cout  << myNumbers[i] << std::endl;
    }
}


int FunctionParameters::passArrays() {
    int myNumbers[5] = {10, 20, 30, 40, 50};
    myFunctionPassArray(myNumbers);

    return 0;
}

//Structures
struct Car {
    std::string brand;
    int year;
};

void myFunctionStructures(Car c) {
    std::cout  << "Brand: " << c.brand << ", Year: " << c.year << std::endl;
}

void updateYear (Car &c) {
    c.year++;
}


int FunctionParameters::passStructures() {
    Car myCar = {"Toyota", 2020};
    myFunctionStructures(myCar);

    updateYear(myCar);
    std::cout << "The " << myCar.brand << " is now from year " << myCar.year << std::endl;

    return 0;
}

float toCelsius(float fahrenheit) {
    return (5.0/9.0) * (fahrenheit - 32.0);
}

int FunctionParameters::realLifeExample() {
    float f_value = 98.8;

    float result = toCelsius(f_value);

    std::cout << "Fahrenheit: " << f_value << std::endl;

    std::cout << "Convert Fahrenheit to Celsius: " << result << std::endl;

    return 0;
}



