#include "entity.h"

#include <iostream>

// Assignment 6.4.2 Developing the tagged union class
// 
// Exercise 1: added << operator overload function -> can print entity data
// by object name
//
// Exercise 2: a function "read_and_create" that reads a string, checks if it is int, float or
// alphabetic and creates an instance
//
// Exercise 3: 

int main()
{

    std::string str1 {"axdf"};
    std::string str2 {"45"};
    std::string str3 {"4.65"};

    Entity four {read_and_create(str1)};
    Entity five {read_and_create(str2)};
    Entity six  {read_and_create(str3)};

    std::cout << four;
    std::cout << five;
    std::cout << six;

    return 0;
}