//
// Created by Moesenbacher on 13.05.2026.
//

#pragma once
#include <iostream>
#include <ostream>
#include <string>
namespace Utils::Console {
    //Colors
    const std::string RESET = "\033[0m";
    const std::string BLACK = "\033[30m";
    const std::string RED = "\033[31m";
    const std::string GREEN = "\033[32m";
    const std::string YELLOW = "\033[33m";
    const std::string BLUE = "\033[34m";
    const std::string MAGENTA = "\033[35m";
    const std::string CYAN = "\033[36m";
    const std::string WHITE = "\033[37m";

    //Font
    const std::string BOLD = "\033[1m";


    inline void printError(const std::string& message) {
        std::cerr <<BOLD << RED << "ERROR: " << RESET  << RED << ": " << message << RESET << std::endl;
    }

    inline void newLine() {
        std::cout << std::endl;
    }
}
