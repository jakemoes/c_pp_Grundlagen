//
// Created by Jakob Mösenbacher on 26.06.26.
//

#include "Arrays.h"

#include <iostream>
#include <ostream>
#include <string>

int Arrays::overview() {
    std::string cars[4];
    std::string carBrands[4] = {"Volvo", "BMW", "Ford", "Mazda"};

    int mynum[3] = {1, 2, 3};

    return 0;
}

int Arrays::output() {
    std::string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    std::cout << cars[0] << " " << cars[0] << std::endl;

    return 0;
}

int Arrays::changeElement() {
    std::string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    cars[0] = "Opel";
    std::cout << cars[0] << std::endl;

    return 0;
}

//With Loops

int Arrays::loopArrays() {
    std::string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};

    for (int i = 0; i < 4; i++) {
        std::cout << cars[i] << std::endl;
    }

    for (int i = 0; i < 5; i++) {
        std::cout << i << " = " << cars[i] << std::endl;
    }


    int myNumbers[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++) {
        std::cout << myNumbers[i] << std::endl;
    }
    return 0;
}


int Arrays::forEach() {
    int myNumbers[5] = {1, 2, 3, 4, 5};

    for (int number : myNumbers) {
        std::cout << number << std::endl;
    }

    std::string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};

    for (std::string car : cars) {
        std::cout << car << std::endl;
    }

    return 0;
}



int Arrays::omitSize() {
    std::string cars[] = {"Volvo", "BMW", "Ford"};

    std::string carBrands[5];
    carBrands[0] = "Volvo";
    carBrands[1] = "BMW";
    carBrands[2] = "Ford";
    carBrands[3] = "Mazda";
    carBrands[4] = "Tesla";

    //Vectors
    //Vectors are rezisable arrays
    std::vector<std::string> carsVector = {"Volvo", "BMW", "Ford"};
    carsVector.push_back("Tesla");

    return 0;
}

int Arrays::ArraySize() {
    int myNumbers[5] = {10, 20, 30, 40, 50};
    std::cout << sizeof(myNumbers) << std::endl;

    int getArrayLength = sizeof(myNumbers) / sizeof(myNumbers[0]);
    std::cout << getArrayLength << std::endl;

    for (int i = 0; i < 5; i++) {
        std::cout << myNumbers[i] << std::endl;
    }

    for (int i = 0; i < sizeof(myNumbers) / sizeof(myNumbers[0]); i++) {
        std::cout << myNumbers[i] << std::endl;
    }

    for (int num : myNumbers) {
        std::cout << num << std::endl;
    }

    return 0;
}


int Arrays::realLifeExample() {
    int ages[8] = {20, 22, 18, 35, 48, 26, 87, 70};
    float avg, sum = 0;
    int i;

    int length = sizeof(ages) / sizeof(ages[0]);

    for (int age : ages) {
        sum += age;
    }

    avg = sum / length;

    std::cout << "The average is: " << avg << std::endl;

    return 0;
}

int Arrays::lowestAge() {
    int ages[8] = {20, 22, 18, 35, 48, 26, 87, 70};
    int lowestAge = ages[0];

    for (int age : ages) {
        if (lowestAge > age) {
            lowestAge = age;
        }
    }

    std::cout << "The lowest age is: " << lowestAge << std::endl;

    return 0;
}

int Arrays::multidimensionalArray() {
    std::string letters2D[2][4] = {
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"},
    };

    std::string letters3D[2][2][2] = {
        {
            { "A", "B" },
            { "C", "D" }
        },
        {
        { "E", "F" },
        { "G", "H" }
        }
    };




    std::cout << letters2D[0][2] << std::endl;


    letters2D[0][0] = "Z";
    std::cout << letters2D[0][0] <<std::endl;
    return 0;
}



int Arrays::CodeChallange() {

    int numbers[5];
    // 2) Set numbers[0] to 10
    numbers[0] = 10;
    // 3) Set numbers[4] to 50
    numbers[4] = 50;

    // 4) Print numbers[0]
    // 5) Print numbers[4]

    std::cout << numbers[0];
    std::cout << numbers[4];

    std::cout << std::endl;

    return 0;
}


