#include "entity.h"

#include <iostream>

int main()
{
    Entity a(12); // constructs default object, robot / 10
    Entity b('k');
    Entity c(7.88f);

    a.print_type();
    b.print_type();
    c.print_type();

    // citizen.print_type();   // prints 'robot'
    // citizen.set_robot(600);
    // citizen.print_value();  // prints 600

    // citizen.set_person('K');

    // citizen.print_type();   // prints 'person'
    // citizen.print_value();  // prints 'K'

    // citizen.set_alien(4.66); 
    // citizen.print_type();   // prints 'alien'
    // citizen.print_value();  // prints '4.66'

    // char ch {citizen.person()}; // getter fails as the type is alien here, not person

    return 0;
}