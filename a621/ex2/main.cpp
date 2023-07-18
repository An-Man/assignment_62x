// Assignment 6.2.1

// exercise 2

// Create functions to add and substract our ex1. positive integers 
// from each other.  The integers should saturate
// at 0 and the maximum value (so they do not overflow, e.g. 42 - 51 = 0)

// (optional) Add overloads to your add and substract functions so 
// they work with normal integer values too.

#include "posint.h"

int main()
{
    Posint pos1(2147483647);    // maximum signed int
    Posint pos2(3);
    Posint pos3 {pos1.sum_of_two(pos2)}; // add pos1 and pos2 to make pos3
    pos3.print_value();         // prints saturated maximum 2147483647

    Posint pos4 {pos2.substract(pos1)}; // substract pos1 from pos2
    pos4.print_value();         // prints value 0

    pos1 = pos1.substract(pos2);
    pos1.print_value();         // prints 2147483644

    pos2 = pos2.sum_of_two(10); // overload function with int
    pos2.print_value();         // prints 13

    pos1 = pos1.substract(2000000000);
    pos1.print_value();         // prints 147483644

    return 0;
}