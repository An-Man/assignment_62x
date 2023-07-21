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
    Cfile(const std::string& filename);     // constructor

    // function to read in the next line
    std::string read_line();

    ~Cfile(); // destructor, closes also file
};


#endif