// Exercise 3: Playing around with animal classes of ex 2

#include "animals.h"

int main()
{
    Parrot parrot;  // creates and destroys both an animal, a bird and a parrot
    Dog dog;        // dog and animal

    parrot.say_hello();         // parrot says hello
    parrot.Bird::say_hello();   // bird says hello (inherited)
    dog.say_hello();            // dog says hello
    dog.Animal::say_hello();    // animal says hello (inherited)

    return 0;
}
