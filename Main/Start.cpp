//
// Created by Moesenbacher on 13.05.2026.
//

#include "Start.h"

#include <iostream>

#include "../Arrays/Arrays.h"
#include "../Utility/Console.h"

#include "../GetStarted/GetStarted.h"
#include "../Syntax/Syntax.h"
#include "../Output/Output.h"
#include "../Variables/Variables.h"
#include  "../UserInput/userInput.h"
#include  "../DataTypes/DataTypes.h"
#include  "../Operators/Operators.h"
#include  "../Strings/Strings.h"
#include  "../Math/Math.h"
#include  "../Booleans/Booleans.h"
#include "../BreakAndContinue/BreakAndContinue.h"
#include  "../IfElse/IfElse.h"
#include  "../Switch/Switch.h"
#include  "../WhileLoop/WhileLoop.h"
#include  "../ForLoop/ForLoop.h"
#include "../BreakAndContinue/BreakAndContinue.h"
#include "../Arrays/Arrays.h"


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
    Math math;
    Booleans booleans;
    IfElse ifElse;
    Switch switches;
    WhileLoop whileLoop;
    ForLoop for_loop;
    BreakAndContinue breakAndContinue;
    Arrays arrays;


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

    newLine();

    std::cout << GREEN << "Variables" << RESET << std::endl;
    strings.overview();
    strings.stringConcatenation();
    strings.numberAndStrings();
    strings.stringLength();
    strings.accessingStrings();
    strings.specialChars();
    std::cout << "--Input deactivated --" << std::endl;
    //strings.userInputStrings();
    strings.cStyleStrings();
    strings.codeChallange();

    newLine();

    std::cout << GREEN << "Math" << RESET << std::endl;
    math.overview();

    newLine();

    std::cout << GREEN << "Booleans" << RESET << std::endl;
    booleans.overview();
    booleans.booleanExpressions();
    booleans.realLifeExample();
    booleans.codingChallange();

    newLine();

    std::cout << GREEN << "If Statements" << RESET << std::endl;
    ifElse.overview();
    ifElse.elseStatement();
    ifElse.elseIf();
    ifElse.shortHandIfElse();
    ifElse.nestedIf ();
    ifElse.logicalOperators();
    ifElse.realLifeExample();
    ifElse.codeChallange();

    newLine();

    std::cout << GREEN << "Switch" << RESET << std::endl;
    switches.overview();
    switches.codeChallenge();

    newLine();

    std::cout << GREEN << "While Loop" << RESET << std::endl;
    whileLoop.overview();
    std::cout << "--Input deactivated --" << std::endl;
    //whileLoop.doWhileLoop();
    whileLoop.realLifeExample();
    whileLoop.codeChallange ();

    newLine();

    std::cout << GREEN << "For Loop" << RESET << std::endl;
    for_loop.overview();
    for_loop.nestedLoop();
    for_loop.forEachLoop();
    for_loop.realLifeExample();
    for_loop.codeChallenge();

    newLine();

    std::cout << GREEN << "Break and Continue" << RESET << std::endl;
    breakAndContinue.Break();
    breakAndContinue.Continue();

    newLine();

    std::cout << GREEN << "Arrays" << RESET << std::endl;

    newLine();


    arrays.overview();
    arrays.output();
    arrays.changeElement();
    arrays.loopArrays();
    arrays.forEach();
    arrays.omitSize();
    arrays.ArraySize();
    arrays.realLifeExample();
    arrays.lowestAge();
    arrays.multidimensionalArray();
    arrays.CodeChallange();

    return 0;
}

