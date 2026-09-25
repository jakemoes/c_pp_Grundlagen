//
// Created by Moesenbacher on 23.09.2026.
//

#include "MultipleInheritance.h"

#include <iostream>
#include <ostream>


class MyMultipleInheritance {
    public:
        void myFunction() {
            std::cout<<"Some content in parent class."<<std::endl;
        }
};

class MyOtherMultipleInheritance {
    public:
    void myOtherFunction() {
        std::cout<<"Some content in another class."<<std::endl;
    }
};

class MyChildClass: public MyMultipleInheritance, public MyOtherMultipleInheritance {

};


int MultipleInheritance::multipleInheritance() {
    MyChildClass myChildClass;
    myChildClass.myFunction();
    myChildClass.myOtherFunction();

    return 0;
}
