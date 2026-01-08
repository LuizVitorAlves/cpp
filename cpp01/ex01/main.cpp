#include "Zombie.hpp"
#include <cstdlib>

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        std::cerr << "Usage: ./moar_brainz <number_of_zombies> <name>" << std::endl;
        return (-1);
    }

    int N = std::atoi(argv[1]);
    std::string name = argv[2];

    if (N <= 0)
    {
        std::cerr << "Please enter a positive number of zombies." << std::endl;
        return (-1);
    }
    std::cout << "Allocating horde..." << std::endl;
    Zombie *horde = zombieHorde(N, name);
    for (int i = 0; i < N; i++)
    {
        horde[i].announce();
    }
    std::cout << "Deleting horde..." << std::endl;
    delete[] horde;

    return (0);
}