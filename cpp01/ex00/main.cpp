#include "Zombie.hpp"

int main(int argc, char **argv)
{
    if (argc != 3 || !argv[1][0] || !argv[2][0])
    {
        std::cerr << "Invalid number of inputs." << std::endl;
        std::cerr << "Usage: ./brainz <heap_zombie_name> <stack_zombie_name>" << std::endl;
        return (-1);
    }
    Zombie *heap = newZombie(argv[1]);
    heap->announce();
    delete heap;

    std::cout << "-------------------------------------------------" << std::endl;

    randomChump(argv[2]);

    return (0);
}