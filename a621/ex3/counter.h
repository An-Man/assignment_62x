#ifndef COUNTER_H
#define COUNTER_H

#include <iostream>

class Counter
{
public:
    static int count;  // this needs to be static

    Counter()          // constructor
    {
        count++;       // increase count
    }

    ~Counter();        // destructor prototype
};

void print_count(); // not a member function so that 0 can be printed as well

#endif