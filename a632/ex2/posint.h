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

    Posint sum_of_two(const Posint& pos2);
    friend Posint sum_friend(const Posint& pos1, const Posint& pos2);
    Posint sum_of_two(const int& num);

    Posint substract(const Posint& pos2);
    friend Posint substract_friend(const Posint& pos1, const Posint& pos2);
    Posint substract(const int& num);

};

#endif