#ifndef SED_HPP
#define SED_HPP

#include <string>
#include <fstream>
#include <iostream>

class Sed {
private:
    std::string _filename;

public:
    Sed(std::string filename);
    ~Sed();

    void replace(std::string s1, std::string s2);
};

#endif