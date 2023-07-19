// Assignment 6.3.2, Exercise 1

// C functionality with RAII: encapsulated implementation
// (same as in 6.2.2 really)

#include "Cfile.h"
#include <iostream>

int main()
{
    Cfile filu;

    std::string text {};

    text = filu.read_line();
    std::cout << text << '\n';
}