#ifndef COUNTER_H
#define COUNTER_H

#include <iostream>

class Counter
{
private:
    static inline int count;  // this needs to be static inline

public:
    Counter()
    {
        count++;              // increase count
    }

    void print_count() const;
};


#endif