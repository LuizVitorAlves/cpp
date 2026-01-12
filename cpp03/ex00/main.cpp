#include "ClapTrap.hpp"

int main() {
    std::cout << "--- Constructor Tests ---" << std::endl;
    ClapTrap clappy("CL4P-TP");
    ClapTrap anonymous;

    std::cout << "\n--- Action Tests (Energy & HP) ---" << std::endl;
    clappy.attack("a scary fly");
    clappy.takeDamage(5);
    clappy.beRepaired(3);

    std::cout << "\n--- Testing Energy Depletion ---" << std::endl;
    for (int i = 0; i < 8; i++) {
        clappy.attack("the air");
    }
    clappy.attack("an enemy"); 
    clappy.beRepaired(10);

    std::cout << "\n--- Testing Death ---" << std::endl;
    ClapTrap target("Target");
    target.takeDamage(10);
    target.attack("someone");
    target.beRepaired(5);

    std::cout << "\n--- Destruction ---" << std::endl;
    return 0;
}