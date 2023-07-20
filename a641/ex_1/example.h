#ifndef EXAMPLE_H
#define EXAMPLE_H

#include <string>

namespace Lapland       // a namespace with a function
{
    std::string town {"Rovaniemi"};
    
    std::string return_town()
    {
        return town;
    }
}


class Reindeer          // a type with static member function
{
    public:
        static int return_10()
        {
            return 10;
        }
};


#endif

