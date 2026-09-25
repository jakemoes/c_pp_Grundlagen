//
// Created by Moesenbacher on 23.09.2026.
//

#include "AccessSpecifiers.h"

#include <iostream>
#include <ostream>

class MyAccessSpecifiers {
    public:
        int x;
    private:
        int y;
};


int AccessSpecifiers::accessSpecifiers() {
    MyAccessSpecifiers myAccessSpecifiers;
    myAccessSpecifiers.x = 10;
    //myAccessSpecifiers.y = 20;
    std::cout << myAccessSpecifiers.x << std::endl;
    return 0;
}


class MyAccessSpecifiersUsually {
private:
    int x;
    int y;
};