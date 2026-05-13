cmake_minimum_required(VERSION 4.2)
project(c_pp_Grundlagen)

set(CMAKE_CXX_STANDARD 14)

include_directories("GetStarted")

add_executable(c_pp_Grundlagen
        GetStarted/GetStarted.cpp
        GetStarted/GetStarted.h
        Syntax/Syntax.cpp
        Syntax/Syntax.h
        Main/Start.cpp
        Main/Start.h
        Utility/Console.h
)
