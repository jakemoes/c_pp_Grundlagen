//
// Created by Jakob Mösenbacher on 26.09.26.
//

#include "Polymorphism.h"

#include <iostream>
#include <ostream>

class Animal {
    public:
        void animalSound() {
            std::cout<<"Teh animal makes a sound."<<std::endl;
        }
};

class Pig: public Animal {
    public:
        void animalSound() {
            std::cout<<"The pig says: wee wee"<<std::endl;
        }
};

class Dog: public Animal {
    public:
        void animalSound() {
            std::cout<<"The dog says: bow bow"<<std::endl;
        }
};


int Polymorphism::polymorphism() {
    Animal animal;
    Pig pig;
    Dog dog;

    animal.animalSound();
    pig.animalSound();
    dog.animalSound();

    return 0;
}