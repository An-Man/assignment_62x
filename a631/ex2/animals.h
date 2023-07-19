#ifndef ANIMALS_H
#define ANIMALS_H

// Exercise 2: inheritance between classes

class Animal
{
    public:

    private:
};

class Bird : public Animal
{
    public:

    private:
        Wings wings;
        Eyes eyes;
};

class Wings
{
    public:

    private:
};

class Eyes
{
    public:

    private:
};

class Parrot : public Bird
{
    public:

    private:
        Wings wings;

        Eyes eyes;
};

class Dog : public Animal
{
    public:

    private:
        Eyes eyes;
};

#endif