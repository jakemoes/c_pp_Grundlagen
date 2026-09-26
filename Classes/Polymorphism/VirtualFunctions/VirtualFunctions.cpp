//
// Created by Jakob Mösenbacher on 26.09.26.
//

#include "VirtualFunctions.h"

#include <iostream>
#include <ostream>

//Without Virtual Function
class Animal {
    public:
        void sound() {
            std::cout<<"Animal sound"<<std::endl;
        }
};

class Dog: public Animal {
    public:
        void sound() {
            std::cout<<"Dog barks"<<std::endl;
        }
};



int VirtualFunctions::normalFunction() {
    Animal* animal;
    Dog dog;
    animal = &dog;
    animal->sound();

    return 0;
}

//With Virtual Fuction

class AnimalVirtual {
    public:
        virtual void sound() {
            std::cout<<"Animal sound"<<std::endl;
        }
};

class DogVirtual: public AnimalVirtual {
    public:
        void sound() override {
            std::cout<<"Dog barks"<<std::endl;
        }
};


int VirtualFunctions::virtualFunctions() {
    AnimalVirtual* animalVirtual;
    DogVirtual dogVirtual;
    animalVirtual = &dogVirtual;
    animalVirtual->sound();

    return 0;
}
