//
// Created by Jakob Mösenbacher on 26.09.26.
//

#include "Templates.h"

#include <iostream>
#include <ostream>

template <typename T>
T add (T a, T b) {
    return a + b;
}

int Templates::templates() {
    std::cout << add<int>(5, 3) << std::endl;
    std::cout << add<double>(2.5, 1.5) << std::endl;

    return 0;
}

template <typename U>
class Box {
    public:
        U value;
        Box(U value) {
            this->value = value;
        }
        void show() {
            std::cout << "Value: " << value << std::endl;
        }
};

int Templates::templatesBox() {
    Box<int> intBox(50);
    Box<std::string> strBox("Hello");

    intBox.show();
    strBox.show();

    return 0;
}