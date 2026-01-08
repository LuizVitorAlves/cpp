#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact {
private:
    std::string _firstName;
    std::string _lastName;
    std::string _nickname;
    std::string _phoneNumber;
    std::string _darkestSecret;
    std::string _printColumn(std::string str) const;

public:
    Contact();
    ~Contact();

    void    setContact();
    void    view(int index) const;
    void    display(int index) const;
};

#endif