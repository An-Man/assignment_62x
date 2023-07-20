#include "entity.h"
#include <cassert>
#include <string>
#include <charconv>
#include <stdexcept>
#include <cctype>

int Entity::robot_value() const
{
    assert(type == Tag::robot && "Wrong type!"); // wrong type cannot be returned
    return id;
}

char Entity::person_value() const
{
    assert(type == Tag::person && "Wrong type!");
    return letter;
}

float Entity::alien_value() const
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

// overload bitshift op to enable printing type & value directly
std::ostream& operator<<(std::ostream& stream, const Entity& entity) 
{
    std::string type {};
    
    if (entity.type == Entity::Tag::robot)
    {
        type = "robot";
        stream << type << ", " << entity.id << '\n';
    }

    if (entity.type == Entity::Tag::person)
    {
        type = "person";
        stream << type << ", " << entity.letter << '\n';
    }

    if (entity.type == Entity::Tag::alien)
    {
        type = "alien";
        stream << type << ", " << entity.wavelength << '\n';
    }

    return stream;
}

bool is_float(std::string_view input)
{
    double val;
    auto [p, ec] = std::from_chars(input.data(), input.data() + input.size(), val);
    return ec == std::errc() && p == input.data() + input.size();
}

bool is_int(std::string_view input)
{
    int val;
    auto [p, ec] = std::from_chars(input.data(), input.data() + input.size(), val);
    return ec == std::errc() && p == input.data() + input.size();
}

Entity read_and_create(const std::string& input)
{
    if (is_int(input))
    {
        int num {std::stoi(input)};
        Entity ent(num);
        return ent;
    }
    else if (is_float(input))
    {
        float fl {std::stof(input)};
        Entity ent(fl);
        return ent;
    } 
    else if (input.size() > 0 && isalpha(input[0]))
    {
        char ch {input[0]};
        Entity ent(ch);
        return ent;
    } else {
        throw std::runtime_error("Error reading string");
    }
}