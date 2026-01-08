#include "PhoneBook.hpp"
#include <iostream>
#include <limits>
#include <cstdlib>

PhoneBook::PhoneBook() {
    this->_index = 0;
    this->_count = 0;
}

PhoneBook::~PhoneBook() {}

void PhoneBook::add() {
    std::cout << "\n--- ADD NEW CONTACT ---" << std::endl;
    
    this->_contacts[this->_index % 8].setContact();
    
    this->_index++;
    if (this->_count < 8)
        this->_count++;
        
    std::cout << "Contact added successfully! Total: " << this->_count << "\n" << std::endl;
}

void PhoneBook::search() {
    if (this->_count == 0) {
        std::cout << "\nPhonebook is empty!\n" << std::endl;
        return;
    }

    std::cout << "\n|     Index|First Name| Last Name|  Nickname|" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;

    for (int i = 0; i < this->_count; i++) {
        this->_contacts[i].view(i);
    }
    std::cout << "|----------|----------|----------|----------|" << std::endl;

    std::cout << "\nEnter index to view details: ";
    std::string input;
    if (!std::getline(std::cin, input)) std::exit(0);
    if (input.length() == 1 && input[0] >= '0' && input[0] <= '7') {
        int index = input[0] - '0';
        if (index < this->_count) {
            this->_contacts[index].display(index);
        } else {
            std::cout << "Error: Index out of range." << std::endl;
        }
    } else {
        std::cout << "Error: Invalid index." << std::endl;
    }
}