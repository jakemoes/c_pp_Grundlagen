//
// Created by Moesenbacher on 23.09.2026.
//

#include "MethodClass.h"

#include <iostream>
#include <ostream>

class MyMethodClass {
    public:
    void myMethod() {
        std::cout << "Hello World" << std::endl;
    }
    void myMethodOut();
};



void MyMethodClass::myMethodOut() {
    std::cout<<"Hello World outised"<<std::endl;
}


class Car {
    public:
    int speed (int maxSpeed);
};


int Car::speed (int maxSpeed) {
    return maxSpeed;
}


int MethodClass::methodClassCall() {
    MyMethodClass myMethodClass;
    myMethodClass.myMethod();

    myMethodClass.myMethodOut();

    Car myCar;
    std::cout<<myCar.speed(200)<<std::endl;

    return 0;
}




