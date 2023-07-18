#ifndef CFILE_H
#define CFILE_H

#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>

class Cfile
{
private:
    FILE* file;  // C type file member

public:
    Cfile()
    {
        file = fopen("hello.txt", "r"); // read mode
            if (!file)
            {
                std::cout << "File not found.\n";
            }        
    }

    // function to read in the next line
    std::string read_line();

    ~Cfile(); // destructor, closes also file
};


#endif