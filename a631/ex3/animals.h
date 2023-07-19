#ifndef ANIMALS_H
#define ANIMALS_H

#include <iostream>

class Wings
{
    public:
        Wings()
        {
            std::cout << "Wings were created!\n";
        }

        ~Wings();

    private:
};

class Eyes
{
    public:
        Eyes()
        {
            std::cout << "Eyes were created!\n";
        }

        ~Eyes();

    private:
};

class Animal
{
    public:
        Animal()
        {
            std::cout << "An animal was born!\n";
        }

        ~Animal();

        void say_hello();

    private:
};

class Bird : public Animal
{
    public:
        Bird()
        {
            std::cout << "A birb was born!\n";
        }

        ~Bird();

        void say_hello();        

    private:
        Wings wings;
        Eyes eyes;
};

class Parrot : public Bird
{
    public:
        Parrot()
        {
            std::cout << "A parrot was born!\n";
        }

        ~Parrot();

        void say_hello();

    private:
        Wings wings;
        Eyes eyes;
};

class Dog : public Animal
{
    public:
        Dog()
        {
            std::cout << "A dog was born!\n";
        }

        ~Dog();

        void say_hello();

    private:
        Eyes eyes;
};

#endif