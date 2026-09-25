//
// Created by Moesenbacher on 23.09.2026.
//

#include "FriendFunctions.h"

#include <iostream>
#include <ostream>

class Employee {
    private:
        int salary;

    public:
        Employee(int salary) {
            this->salary = salary;
        }

    friend void displaySalary(Employee emp);
};


void displaySalary(Employee emp) {
    std::cout << "Salary: " << emp.salary << std::endl;
}

int  FriendFunctions::employeeSalary() {
    Employee employee(50000);
    displaySalary(employee);

    return 0;
}
