//
// Created by Jakob Mösenbacher on 30.06.26.
//

#include "Structures.h"

#include <iostream>
#include <ostream>
#include <string>
int Structures::overview() {

    struct {
        int myNum;
        std::string myString;
    } myStructure;

    myStructure.myNum = 1;
    myStructure.myString = "Hello World!";

    std::cout << myStructure.myNum << std::endl;
    std::cout << myStructure.myString << std::endl;

    return 0;
}

int Structures::multibleVariables() {
    struct {
        int myNum;
        std::string myString;
    } myStruct1, myStruct2, myStruct3;

    struct {
        std::string brand;
        std::string model;
        int year;
    } myCar1, myCar2;

    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 1999;

    myCar2.brand = "Ford";
    myCar2.model = "Mustang";
    myCar2.year = 1969;

    std::cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year<< std::endl;
    std::cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year<< std::endl;

    return 0;
}

//named sructure
struct car{
    std::string brand;
    std::string model;
    int year;
};

int Structures::namedStructure() {
    car myCar1;
    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 1999;

    car myCar2;
    myCar2.brand = "Ford";
    myCar2.model = "Mustang";
    myCar2.year = 1969;

    std::cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year<< std::endl;
    std::cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year<< std::endl;

    return 0;
}

struct student {
    std::string name;
    int age;
    char grade;
};

int Structures::challange() {
    student myStudent;
    myStudent.name = "Liam";
    myStudent.age = 35;
    myStudent.grade = 'A';

    std::cout << "Name: " << myStudent.name << std::endl;
    std::cout << "Age: " << myStudent.age << std::endl;
    std::cout << "Grade: " << myStudent.grade << std::endl;
}

