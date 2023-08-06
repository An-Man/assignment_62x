#include "entity.h"
#include <cassert>

int Entity::robot() const
{
    assert(type == Tag::robot && "Wrong type!"); // wrong type cannot be returned
    return id;
}

char Entity::person() const
{
    assert(type == Tag::person && "Wrong type!");
    return letter;
}

float Entity::alien() const
{
    assert(type == Tag::alien && "Wrong type!");
    return wavelength;
}

void Entity::set_robot(int num)
{
    type = Tag::robot;
    id = num;
}

void Entity::set_person(char ch)
{
    type = Tag::person;
    letter = ch;
}

void Entity::set_alien(float fl)
{
    type = Tag::alien;
    wavelength = fl;
}

void Entity::print_type()
{
    switch (type)
    {
        case Entity::Tag::robot:
        {
            std::cout << "Type stored is 'robot'\n";
            break;
        }
        case Entity::Tag::person:
        {
            std::cout << "Type stored is 'person'\n";
            break;
        }
        case Entity::Tag::alien:
        {
            std::cout << "Type stored is 'alien'\n";
            break;
        }    
    }
}

void Entity::print_value()
{
    if (type == Tag::robot)
    {
        std::cout << "Value of object is: " << id << '\n';
    }
    else if (type == Tag::alien)
    {
        std::cout << "Value of object is: " << wavelength << '\n';
    }
    else if (type == Tag::person)
    {
        std::cout << "Value of object is: " << letter << '\n';
    }
}