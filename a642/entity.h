#ifndef ENTITY_H
#define ENTITY_H

#include <iostream>

class Entity {      // a tagged union
private:
    enum class Tag { robot, person, alien };
    Tag type; 

    union {  // anonymous union
        int id;             // value of robot
        char letter;        // person
        float wavelength;   // alien
    };

public:
    Entity() // default constructor 
    {
        type = Tag::robot;
        id = 10;
    }

    Entity(const int& val)
    {
        type = Tag::robot;
        id = val;
    }

    Entity(const char& val)
    {
        type = Tag::person;
        letter = val;
    }

    Entity(const float& val)
    {
        type = Tag::alien;
        wavelength = val;
    }

    int robot_value() const; // "getters"
    char person_value() const;
    float alien_value() const;

    void set_robot(int num); // "setters: also change the Tag"
    void set_person(char ch);
    void set_alien(float fl);
    
    void print_type(); // prints the Tag
    void print_value(); // prints value of object

    // overload << operator as friend
    friend std::ostream& operator<<(std::ostream& stream, const Entity& entity);
    
};

Entity read_and_create(const std::string& str);

#endif