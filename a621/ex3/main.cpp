// Assignment 6.2.1

// Exercise 3

// Create a class that counts how many instances of it exist.  
// Do not use global variables.  Create a function to print the count.

#include "counter.h"

int main()
{
    Counter count1;
    Counter count2;
    Counter count3;

    count1.print_count();   // prints 3

    return 0;
}