#include "animals.h"

Animal::~Animal()
{
    std::cout << "An animal died.\n";
}

Bird::~Bird()
{
    std::cout << "A birb died.\n";
}

Wings::~Wings()
{
    std::cout << "A pair of wings were destroyed.\n";
}

Eyes::~Eyes()
{
    std::cout << "A pair of eyes were destroyed.\n";
}

Parrot::~Parrot()
{
    std::cout << "A parrot died.\n";
}

Dog::~Dog()
{
    std::cout << "A dog died.\n";
}

void Animal::say_hello()
{
    std::cout << "Animal says hello!\n";
}

void Bird::say_hello()
{
    std::cout << "Bird says hello!\n";
}

void Parrot::say_hello()
{
    std::cout << "Parrot says hello!\n";
}

void Dog::say_hello()
{
    std::cout << "Dog says hello!\n";
}
