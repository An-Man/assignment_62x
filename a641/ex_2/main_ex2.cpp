// Exercise 2

// Create a 3D vector type (e.g. a type with x, y and z values) in your own namespace.

#include "vector.h"
#include <iostream>

int main()
{
    Turku::Point_in_space point;

    std::cout << point << '\n';     // because of operator << overload, prints 20, 32, 68

    return 0;
}