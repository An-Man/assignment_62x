// Exercise 1

// Create a namespace and a type in the global namespace.  Create 
// a function in the namespace and a static member function 
// for the type.  Try using them from the global namespace.

#include "example.h"
#include <iostream>

int main()
{
    std::cout << Lapland::return_town() << '\n';

    std::cout << Reindeer::return_10() << '\n';

    return 0;
}

