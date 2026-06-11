//
// Created by Moesenbacher on 11.06.2026.
//

#include "Switch.h"

#include <iostream>
#include <ostream>

int Switch::overview() {

    int day = 4;
    switch (day) {
        case 1:
            std::cout << "Monday" << std::endl;
            break;
        case 2:
            std::cout << "Tuesday" << std::endl;
            break;
        case 3:
            std::cout << "Wednesday" << std::endl;
            break;
        case 4:
            std::cout << "Thursday" << std::endl;
            break;
        case 5:
            std::cout << "Friday" << std::endl;
            break;
        case 6:
            std::cout << "Saturday" << std::endl;
            break;
        case 7:
            std::cout << "Sunday" << std::endl;
            break;
    }


    switch (day) {
        case 6:
            std::cout << "Today is Saturday" << std::endl;
            break;
        case 7:
            std::cout << "Today is Sunday" << std::endl;
            break;
        default:
            std::cout << "Looking forward to the Weekend" << std::endl;
    }



    return 0;
}



int Switch::codeChallenge() {
    int choice = 1;

    // 1 = Coffee
    // 2 = Tea

    switch (choice) {
        case 1:
            std::cout << "You ordered Coffee" << std::endl;
            break;

        case 2:
            std::cout << "You ordered Tea" << std::endl;
            break;
        default:
            std::cout << "Invalid choice" << std::endl;
    }

    return 0;
}






