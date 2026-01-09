#include "Sed.hpp"

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Error: Invalid number of inputs.\nExpected: ./sed <filename> <s1> <s2>\n";
        return (1);
    }
    
    Sed sed(argv[1]);
    sed.replace(argv[2], argv[3]);
    
    return (0);
}