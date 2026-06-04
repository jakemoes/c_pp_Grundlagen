//
// Created by Jakob Mösenbacher on 04.06.26.
//

#include "Strings.h"

#include <iostream>
#include <ostream>
#include <string>

int Strings::overview() {
    std::string greeting = "Hello";
    std::cout<<greeting<<std::endl;
    return 0;
}

int Strings::stringConcatenation() {
    std::string firstName = "John";
    std::string lastName = "Doe";
    std::string fullName = firstName + " " + lastName;
    std::cout<<fullName<<std::endl;
    return 0;
}

int Strings::numberAndStrings() {
    int x = 10;
    int y = 20;

    int z = x + y;
    std::cout<<z<<std::endl;

    std::string a = "10";
    std::string b = "20";
    std::string c = a + b;

    std::cout<<c<<std::endl;

    return 0;
}

int Strings::stringLength() {
    std::string text = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::cout<<"The length of the text string is: " << text.length() <<std::endl;
    std::cout<<"The length of the text string is: " << text.size() <<std::endl;
    return 0;
}

int Strings::accessingStrings() {
    std::string myString = "Hello";
    std::cout<<myString[0]<<std::endl;
    std::cout<<myString[1]<<std::endl;

    std::cout<<myString[myString.length() - 1]<<std::endl;

    myString[0] = 'J';
    std::cout<<myString << std::endl;

    myString = "Hello";
    std::cout<< myString.at(0)<< std::endl;
    std::cout<<myString.at(1)<< std::endl;
    std::cout<<myString.at(myString.length() - 1)<< std::endl;

    myString.at(0) = 'J';
    std::cout<<myString << std::endl;

    return 0;
}

int Strings::specialChars() {
    std::string text = "We are the so-called \"Vikings\" from the north";
    std::cout<<text<<std::endl;
    text = "It\'s allright.";
    std::cout<<text<<std::endl;
    text = "The charcter \\ is called backslash";
    std::cout<<text<<std::endl;

    //\n is newline and \t ist tab


    return 0;
}


int Strings::userInputStrings() {

    std::string firstName;
    std::cout<<"Type your first name :";
    std::cin>>firstName ;
    std::cout<<"Your name is :" << firstName << std::endl;

    std::string fullName;
    std::cout<<"Type your full name :";
    std::cin.ignore();
    getline(std::cin,fullName);
    std::cout<<"Your full name is :" << fullName << std::endl;


    return  0;
}

int Strings::cStyleStrings() {
    std::string greeting1 = "Hello";
    char greeting2[] = "Hello";
    std::cout<<greeting1<<std::endl;
    std::cout<<greeting2<<std::endl;
    return 0;
}

int Strings::codeChallange() {
    std::string message = "Hello";
    std::cout<<message<<std::endl;
    return 0;
}


