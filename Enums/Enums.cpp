//
// Created by Jakob Mösenbacher on 30.06.26.
//

#include "Enums.h"

#include <iostream>
#include <ostream>



int Enums::overview () {
    enum Level {
        LOW,
        MEDIUM,
        HIGH
    };

    enum Level myVar;
    enum Level level = MEDIUM;

    std::cout << level << std::endl;
}


int Enums::changeValues() {
    enum Level {
        LOW = 25,
        MEDIUM = 50,
        HIGH = 75
    };

    enum Level level = MEDIUM;

    std::cout << level << std::endl;

    enum Levels {
        LOW1 = 5,
        MEDIUM1, // Now 6
        HIGH1 // Now 7
      };


    return 0;
}


int Enums::enumInASwitchStatement() {
    enum Level {
        LOW = 1,
        MEDIUM,
        HIGH
      };

    enum Level level = MEDIUM;

    switch (level) {
        case 1:
            std::cout << "Low Level" << std::endl;
            break;
        case 2:
            std::cout << "Medium level" << std::endl;
            break;
        case 3:
            std::cout << "High level" << std::endl;
            break;
    }

    return 0;
}

