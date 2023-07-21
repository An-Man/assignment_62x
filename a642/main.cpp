#include "entity.h"
#include "cfile.h"

#include <iostream>
#include <vector>

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
    // Exercise 2 applied below
    std::string str1 {"axdf"};
    std::string str2 {"45"};
    std::string str3 {"4.65"};

    Entity four {read_and_create(str1)};
    Entity five {read_and_create(str2)};
    Entity six  {read_and_create(str3)};

    // print function written in Exercise 1
    // std::cout << four;
    // std::cout << five;
    // std::cout << six;

    // Exercise 3, read from file, create entities, push to vector
    std::vector<Entity> entities;
    read_from_file("source.txt", entities);

    // Exercise 4, print out elements found 
    for (auto& ent : entities)
    {
        std::cout << ent;
    }

    return 0;
}