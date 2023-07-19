// Assignment 6.2.1

// Exercise 2

// A friend function is a function that has access to the internals 
// (private members) of a type.  You can declare such inside a class 
// using friend keyword.

// Make the functions to add and substract work with the encapsulated
// version of the positive integer class.

#include "posint.h"

int main()
{
    Posint pos1(466);
    Posint pos2(23);

    Posint pos3 {sum_friend(pos1, pos2)};   // not called from member
    pos3.print_value();                     // prints 489

    Posint pos4(2147483647);                // maximum signed int
    Posint pos5(3);
    Posint pos6 {pos4.sum_of_two(pos5)};    // add pos1 and pos2 to make pos3
    pos6.print_value();                     // prints saturated maximum 2147483647

    Posint pos7(15);
    Posint pos8(10);
    Posint pos9(20);
    Posint pos10 {substract_friend(pos7, pos8)};
    pos10.print_value();                            // prints 5 (15-10)
    Posint pos11 {substract_friend(pos7, pos9)};
    pos11.print_value();                            // prints 0 (15-20) -> negative


    return 0;
}