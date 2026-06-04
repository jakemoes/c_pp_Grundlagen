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
#include  "../UserInput/userInput.h"
#include  "../DataTypes/DataTypes.h"
#include  "../Operators/Operators.h"
#include  "../Strings/Strings.h"



int main () {
    using namespace Utils::Console;

    GetStarted getStarted;
    Syntax syntax;
    Output output;
    Variables variables;
    UserInput userInput;
    DataTypes dataTypes;
    Operators operators;
    Strings strings;

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

    newLine();

    std::cout << GREEN << "User Input" << RESET << std::endl;
    //deactivated uncomment to try them
    std::cout << "-- deactivated --" << std::endl;
    //userInput.general();
    //userInput.additionCalculator();


    newLine();

    std::cout << GREEN << "Data Types" << RESET << std::endl;
    dataTypes.numericTypes();
    dataTypes.sientificNumbers();
    dataTypes.bolean();
    dataTypes.character();
    dataTypes.characterASCI();
    dataTypes.stringType();
    dataTypes.autoType();
    dataTypes.realLifeExample();
    dataTypes.codeChallange();

    newLine();
    std::cout << GREEN << "Operators" << RESET << std::endl;
    operators.arethmeticOperators();
    operators.trackingSavings();
    operators.assignmentOperators();
    operators.comparisonOperators();
    operators.logicOperators();
    operators.precedenceOperator();
    operators.OpertorsCodeChallange();

    std::cout << GREEN << "Variables" << RESET << std::endl;
    strings.overview();
    strings.StringConcatenation();
    strings.numberAndStrings();
    strings.stringLength();
    strings.AccessingStrings();
    strings.specialChars();
    std::cout << "--Input deactivated --" << std::endl;
    //strings.userInputStrings();
    strings.cStyleStrings();
    strings.codeChallange();

    return 0;
}

