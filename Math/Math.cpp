//
// Created by Jakob Mösenbacher on 04.06.26.
//

#include "Math.h"

#include <iostream>
#include <ostream>
#include <cmath>

int Math::overview() {
    std::cout << std::max(5, 10) << std::endl;
    std::cout << std::min(5, 10) << std::endl;

    std::cout << sqrt(64) << std::endl;
    std::cout << round(2.6) << std::endl;
    std::cout << log(2) << std::endl;

    return 0;
}
