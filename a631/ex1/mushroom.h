#ifndef MUSHROOM_H
#define MUSHROOM_H

#include <string>

class Mushroom
{
public:
    static Mushroom create();

private:
    std::string name;
};

#endif