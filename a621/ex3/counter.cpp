#include "counter.h"

Counter::~Counter()
{
    --count;        // decrease count when object destroyed
}

// this to make count available outside class
int Counter::count = 0;

void print_count()
{
    std::cout << "Number of objects created: " << Counter::count << '\n';
}
