cmake_minimum_required(VERSION 4.2)
project(c_pp_Grundlagen)

set(CMAKE_CXX_STANDARD 17)

include_directories("GetStarted")

add_executable(c_pp_Grundlagen
        GetStarted/GetStarted.cpp
        GetStarted/GetStarted.h
        Syntax/Syntax.cpp
        Syntax/Syntax.h
        Main/Start.cpp
        Main/Start.h
        Utility/Console.h
        Output/Output.cpp
        Output/Output.h
        Variables/Variables.cpp
        Variables/Variables.h
        UserInput/UserInput.cpp
        UserInput/UserInput.h
        DataTypes/DataTypes.cpp
        DataTypes/DataTypes.h
        Operators/Operators.cpp
        Operators/Operators.h
        Strings/Strings.cpp
        Strings/Strings.h
        Math/Math.cpp
        Math/Math.h
        Booleans/Booleans.cpp
        Booleans/Booleans.h
        IfElse/IfElse.cpp
        IfElse/IfElse.h
        Switch/Switch.cpp
        Switch/Switch.h
        WhileLoop/WhileLoop.cpp
        WhileLoop/WhileLoop.h
        ForLoop/ForLoop.cpp
        ForLoop/ForLoop.h
        BreakAndContinue/BreakAndContinue.cpp
        BreakAndContinue/BreakAndContinue.h
        Arrays/Arrays.cpp
        Arrays/Arrays.h
        Structures/Structures.cpp
        Structures/Structures.h
        Enums/Enums.cpp
        Enums/Enums.h
        Refences/Refernces.cpp
        Refences/Refernces.h
        Pointers/Pointers.cpp
        Pointers/Pointers.h
)
