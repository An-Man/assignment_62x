// Assignment 6.2.1

// Exercise 3

// Create a class that counts how many instances of it are alive.  
// Do not use global variables. Create a function to print the count.

#include "counter.h"

int main()
{
    print_count();      // prints 0

    Counter count1;
    Counter count2;
    Counter count3;

    print_count();      // prints 3

    count1.~Counter();  // destroy first object

    print_count();      // prints 2

    return 0;
}