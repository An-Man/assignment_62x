// Exercise 3

// Overload addition and subtraction operators

#include "vector.h"
#include <iostream>

int main()
{
    Turku::Point_in_space point; // values 0, 0, 0
    Turku::Point_in_space point2 {10, 20, 30};
    Turku::Point_in_space point3 {1, 2, 3};

    std::cout << point;    // prints 0, 0, 0
    std::cout << point2;   // prints 10, 20, 30

    point2 += point3;      // member function
    std::cout << point2;   // prints 11, 22, 33

    point = (point2 + point3);  // friend function
    std::cout << point;    // prints 12, 24, 36

    point -= point2;    
    std::cout << point;    // prints 1, 2, 3

    Turku::Point_in_space point4 {100, 200, 300};
    Turku::Point_in_space point5 {10, 20, 30};

    point = (point4 - point5);
    std::cout << point;    // prints 90, 180, 270

    return 0;
}