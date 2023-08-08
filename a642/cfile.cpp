#include "cfile.h"
#include <stdexcept>

Cfile::Cfile(const std::string& filename)
{
    file = fopen(filename.c_str(), "r"); // read mode
        if (!file)
        {
            throw std::runtime_error("File not found.\n");
        }        
}

Cfile::~Cfile()
{
    fclose(file);
}

std::string Cfile::read_line()  // C functionality in reading from file
{
    int symbol;
    std::string input {};

    while ((symbol = std::fgetc(file)) != EOF && (symbol != '\n'))
    {
      input += static_cast<char>(symbol);
    }

    return input;
}