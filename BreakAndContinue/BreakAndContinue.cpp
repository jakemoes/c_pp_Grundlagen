//
// Created by Jakob Mösenbacher on 26.06.26.
//

#include "BreakAndContinue.h"

#include <iostream>
#include <ostream>

int BreakAndContinue::Break() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break;
        }
        std::cout << i << std::endl;
    }

    return  0;
}

int BreakAndContinue::Continue() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue;
        }
        std::cout << i << std::endl;
    }

    return  0;
}