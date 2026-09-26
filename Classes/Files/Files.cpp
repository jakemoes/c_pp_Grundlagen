//
// Created by Jakob Mösenbacher on 26.09.26.
//

#include "Files.h"
#include <iostream>
#include <fstream>

int Files::files() {
    std::ofstream MyFile("../Classes/Files/filename.txt");

    MyFile << "Files can be trick, but it is fun enough!";

    MyFile.close();

    return 0;
}

int Files::readFiles() {
    std::string myText;

    std::ifstream MyReadFile("../Classes/Files/filename.txt");

    while (getline(MyReadFile, myText)) {
        std::cout << myText << std::endl;
    }

    MyReadFile.close();

    return 0;
}

int Files::deleteFiles() {
    int success = remove("../Classes/Files/filename.txt");

    return success;
}


