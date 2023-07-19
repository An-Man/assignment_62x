// Assignment 6.3.1.

// Exercise 1

// Create a class that can only be instantiated by static member functions.
// (i.e. a class that has a static member function that returns an object of
// the type of the class itself)    

#include "mushroom.h"

int main()
{
    Mushroom m = Mushroom::create();  // creates an instance with static member func

    return 0;
}          
         