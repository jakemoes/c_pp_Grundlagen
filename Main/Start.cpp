//
// Created by Moesenbacher on 13.05.2026.
//

#include "Start.h"

#include <iostream>

#include "../Utility/Console.h"

#include "../GetStarted/GetStarted.h"
#include "../Syntax/Syntax.h"
#include "../Output/Output.h"





int main () {
    using namespace Utils::Console;

    GetStarted getStarted;
    Syntax syntax;
    Output output;

    std::cout << GREEN << "Get started" << RESET << std::endl;
    getStarted.getStarted();

    newLine();

    std::cout << GREEN << "Syntax" << RESET << std::endl;
    syntax.helloWorld();
    syntax.specificNamespace();
    syntax.statements();
    syntax.codeChallenge();

    newLine();
    std::cout << GREEN << "Output" << RESET << std::endl;
    output.printNumbers();
    output.breakInText();
    output.breakSeperated();
    output.blankLine();
    output.endlManipulator();
    output.pritntNameAndAge();

    newLine();

    std::cout << GREEN << "Comments" << RESET << std::endl;



    return 0;
}
