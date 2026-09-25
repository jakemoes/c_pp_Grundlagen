//
// Created by Moesenbacher on 23.09.2026.
//

#include "Encapsulation.h"

#include <iostream>
#include <ostream>

class Employee {
    private:
        int salary;
    public:
        //Setter
        void setSalary(int salary) {
            this->salary = salary;
        }
        //Getter
        int getSalary() {
            return salary;
        }
};

int Encapsulation::employee() {
    Employee employee;
    employee.setSalary(50000);

    std::cout << employee.getSalary() << std::endl;

    return 0;
}