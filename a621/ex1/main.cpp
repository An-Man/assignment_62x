// Assignment 6.2.1

// exercise 1: Create a type for positive integers with following requirements

// - Default-initialises to 0
// - Initialising with a negative number reports an error to the user and cleans up correctly (printing is not a valid way to report errors to the user)
// - Can be copied (e.g. a = b assignment works, where a and b are instances of the type)
// - Has a member function to print the contents

#include "include/posint.h"

int main()
{
    Posint pos;         // default argument 0

    pos.print_value(); 

    Posint pos2(2);     // value initialized as 2

    pos2.print_value(); // prints value 2

    Posint pos4(4); 

    pos4.print_value(); // prints value 4

    pos4 = pos2;        // pos2 copied to pos4

    pos4.print_value(); // prints now value 2
    
    Posint pos3(-1);    // trying to initialize with negative number

    pos3.print_value(); // not reached because exception thrown on line 21

    return 0;
}