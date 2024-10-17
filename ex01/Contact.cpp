#include "Contact.hpp"
#include <iostream>

Contact::Contact() {}

Contact::Contact(const std::string& firstName, const std::string& lastName,
                const std::string& nickname, const std::string& phoneNumber,
                const std::string& darkestSecret)
    : firstName(firstName), lastName(lastName), nickname(nickname),
    phoneNumber(phoneNumber), darkestSecret(darkestSecret) {}

//Setters
void Contact::setFirstName(const std::string& firstName)
{
    this->firstName = firstName;
}

void Contact::setLastName(const std::string& lastName)
{
    this->lastName = lastName;
}

void Contact::setNickname(const std::string& nickname)
{
    this->nickname = nickname;
}

void Contact::setPhoneNumber(const std::string& phoneNumber)
{
    this->phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(const std::string& darkestSecret)
{
    this->darkestSecret = darkestSecret;
}

//getters
std::string Contact::getFirstName() const
{
    return (this->firstName);
}

std::string Contact::getLastName() const
{
    return (this->lastName);
}

std::string Contact::getNickname() const
{
    return (this->nickname);
}

std::string Contact::getPhoneNumber() const
{
    return (this->phoneNumber);
}

std::string Contact::getDarkestSecret() const
{
    return (this->darkestSecret);
}


void Contact::printContact() const
{
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Phone Number: " << phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}
