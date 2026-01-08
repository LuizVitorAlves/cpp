#include "PhoneBook.hpp"
#include <iostream>

int main() {
    PhoneBook   phonebook;
    std::string command;

    std::cout << "Welcome to My Awesome PhoneBook!" << std::endl;
    std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;

    while (true) {
        std::cout << "> " << std::flush;
        if (!std::getline(std::cin, command))
            break;
        if (command == "EXIT")
            break;
        else if (command == "ADD")
            phonebook.add();
        else if (command == "SEARCH")
            phonebook.search();
    }
    return 0;
}