//
// Created by Moesenbacher on 23.09.2026.
//

#include "MyClassesAndObjects.h"
#include <iostream>
#include <string>

class ClassesandObjects {
public:
    int myNum;
    std::string myString;
};

int MyClassesAndObjects::ClassesAndObjectsPrint() {
    // Create an object of MyClass
    ClassesandObjects myObject;

    // Access attributes and set values
    myObject.myNum = 15;
    myObject.myString = "Some Text";

    // Print attribute values
    std::cout << myObject.myNum << std::endl;
    std::cout << myObject.myString << std::endl;
    return 0;
}
