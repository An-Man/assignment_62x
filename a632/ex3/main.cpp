#include "entity.h"

#include <iostream>

// Assigment 6.3.2
// Exercise 3: encapsulated functionality, private/public access

int main()
{
    Entity a(12);
    Entity b('k');
    Entity c(7.88f);

    a.print_type();
    b.print_type();
    c.print_type();

    

    return 0;
}