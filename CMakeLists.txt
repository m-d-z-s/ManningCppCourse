cmake_minimum_required(VERSION 3.24)
project(ManningCppCourse)

set(CMAKE_CXX_STANDARD 17)

add_executable(ManningCppCourse TierOne/firstProgram.cpp TierOne/arrays.cpp TierOne/tierOne.h main.cpp TierOne/input.cpp TierOne/exerciseOne.cpp TierTwo/tierTwo.h TierTwo/functions.cpp TierTwo/exerciseTwo.cpp)
