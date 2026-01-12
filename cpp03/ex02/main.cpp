#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    std::cout << "--- CREATING THE SQUAD ---" << std::endl;
    ClapTrap clap("Basic");
    ScavTrap scav("Guardian");
    FragTrap frag("Hero");

    std::cout << "\n--- ATTACK TESTS ---" << std::endl;
    clap.attack("Target A");
    scav.attack("Target B");
    frag.attack("Target C");

    std::cout << "\n--- FRAGTRAP STATUS ---" << std::endl;
    frag.takeDamage(50);
    frag.beRepaired(25);
    frag.highFivesGuys();

    std::cout << "\n--- DESTRUCTION ORDER ---" << std::endl;
    return 0;
}