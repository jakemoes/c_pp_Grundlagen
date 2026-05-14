//
// Created by Moesenbacher on 13.05.2026.
//

#include "Start.h"

#include <iostream>

#include "../Utility/Console.h"

#include "../GetStarted/GetStarted.h"
#include "../Syntax/Syntax.h"
#include "../Output/Output.h"
#include "../Variables/Variables.h"





int main () {
    using namespace Utils::Console;

    GetStarted getStarted;
    Syntax syntax;
    Output output;
    Variables variables;

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

    std::cout << GREEN << "Variables" << RESET << std::endl;
    variables.declaring();
    variables.initialising();
    variables.types();
    variables.displayVariables();
    variables.addition();
    variables.declareMultibleVariables();
    variables.assignSameValue();
    variables.identify();
    variables.constants ();
    variables.studentData();
    variables.areaOfRectangle();
    variables.codingChallenge();



    return 0;
}
