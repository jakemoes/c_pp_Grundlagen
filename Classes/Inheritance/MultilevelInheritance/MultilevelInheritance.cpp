//
// Created by Moesenbacher on 23.09.2026.
//

#include "MultilevelInheritance.h"

#include <iostream>
#include <ostream>

class MultiLevelInheritance {
    public:
        void myFunction() {
            std::cout << "Some content in parent class" << std::endl;
        }
};

class MyChild: public MultiLevelInheritance {

};


class MyGrandChild: public MyChild {

};


int MultilevelInheritance::multiLevelInheritance() {
    MyGrandChild my_grand_child;
    my_grand_child.myFunction();

    return 0;
}