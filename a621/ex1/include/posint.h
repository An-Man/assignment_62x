#ifndef POSINT_H
#define POSINT_H

#include <stdexcept>
#include <iostream>

class Posint
{
private:
    int value {};

public:
    Posint(int number=0) // a number can be given, default is 0
    {
        if (number < 0){  // can not be negative
            throw std::runtime_error("Value must be positive\n");
        }

        value = number; // assign argument to value
    }

    void print_value() const;

};

#endif