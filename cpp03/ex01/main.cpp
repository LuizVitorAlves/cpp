#include "ScavTrap.hpp"

int main() {
    std::cout << "--- 1. Testing Construction Order ---" << std::endl;
    ScavTrap scavvy("BraveScav");

    std::cout << "\n--- 2. Testing Attributes (Scav vs Clap) ---" << std::endl;
    scavvy.attack("a bully");
    scavvy.takeDamage(30);
    scavvy.beRepaired(10);

    std::cout << "\n--- 3. Special Ability ---" << std::endl;
    scavvy.guardGate();

    std::cout << "\n--- 4. Destruction Order ---" << std::endl;
    return 0;
}