// Assignment 6.2.2, Exercise 1

// C functionality with RAII

#include "Cfile.h"
#include <iostream>

int main()
{
    Cfile filu;

    std::string text {};

    text = filu.read_line();
    std::cout << text << '\n';
}