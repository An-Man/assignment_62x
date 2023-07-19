#include "Cfile.h"

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