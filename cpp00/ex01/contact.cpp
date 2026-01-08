#include "Contact.hpp"
#include <cstdlib>

Contact::Contact() {}
Contact::~Contact() {}

static std::string getInput(std::string prompt) {
    std::string input = "";
    while (true) {
        std::cout << prompt << std::flush;
        if (!std::getline(std::cin, input))
            std::exit(0);
        if (!input.empty())
            break;
        std::cout << "Field cannot be empty!" << std::endl;
    }
    return input;
}

void Contact::setContact() {
    this->_firstName = getInput("Enter First Name: ");
    this->_lastName = getInput("Enter Last Name: ");
    this->_nickname = getInput("Enter Nickname: ");
    this->_phoneNumber = getInput("Enter Phone Number: ");
    this->_darkestSecret = getInput("Enter Darkest Secret: ");
}

std::string Contact::_printColumn(std::string str) const {
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void Contact::view(int index) const {
    std::cout << "|" << std::setw(10) << index;
    std::cout << "|" << std::setw(10) << _printColumn(_firstName);
    std::cout << "|" << std::setw(10) << _printColumn(_lastName);
    std::cout << "|" << std::setw(10) << _printColumn(_nickname);
    std::cout << "|" << std::endl;
}

void Contact::display(int index) const {
    std::cout << std::endl;
    std::cout << "---- Contact #" << index << " ----" << std::endl;
    std::cout << "First Name:    " << _firstName << std::endl;
    std::cout << "Last Name:     " << _lastName << std::endl;
    std::cout << "Nickname:      " << _nickname << std::endl;
    std::cout << "Phone Number:  " << _phoneNumber << std::endl;
    std::cout << "Darkest Secret:" << _darkestSecret << std::endl;
    std::cout << "--------------------" << std::endl;
    std::cout << std::endl;
}