//
// Created by Jakob Mösenbacher on 26.09.26.
//

#include "InheritanceAccess.h"

#include <iostream>
#include <ostream>

class Employee {
    protected:
        int salary;
};

//Derived class
class Programmer: public Employee {
    public:
        int bonus;
        void setSalary(int salary) {
            this->salary = salary;
        }
    int getSalary() {
            return salary;
        }
};


int InheritanceAccess::inheritanceAccess() {
    Programmer programmer;
    programmer.setSalary(50000);
    programmer.bonus = 15000;
    std::cout << "Salary: " << programmer.getSalary() << std::endl;
    std::cout << "Bonus: " << programmer.bonus << std::endl;

    return 0;
}
