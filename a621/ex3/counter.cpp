#include "counter.h"

void Counter::print_count() const
{
    std::cout << "Number of objects created: " << count << '\n';
}

// we need the next line if not using inline member variable (in older standards)
// int Counter::count = 0;
