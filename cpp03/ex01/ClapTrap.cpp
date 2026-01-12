#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap " << _name << " constructed!" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << _name << " destructed!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src) {
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = src;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs) {
    if (this != &rhs) {
        this->_name = rhs._name;
        this->_hitPoints = rhs._hitPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_attackDamage = rhs._attackDamage;
    }
    std::cout << "ClapTrap assignment operator called" << std::endl;
    return *this;
}

void ClapTrap::attack(const std::string& target) {
    if (this->_energyPoints == 0 || this->_hitPoints == 0) {
        std::cout << "ClapTrap " << _name << " can't act!" << std::endl;
        return;
    }
    this->_energyPoints--;
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (amount >= _hitPoints) _hitPoints = 0;
    else _hitPoints -= amount;
    std::cout << "ClapTrap " << _name << " took " << amount << " damage. HP: " << _hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (_energyPoints == 0 || _hitPoints == 0) return;
    _energyPoints--;
    _hitPoints += amount;
    std::cout << "ClapTrap " << _name << " repaired " << amount << " HP!" << std::endl;
}