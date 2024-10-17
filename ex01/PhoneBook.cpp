#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() : currentIndex(0)
{}

void PhoneBook::addContact()
{
    std::string firstName, lastName, nickname,
        phoneNumber, darkestSecret;
    
    std::cout << "Enter first name: ";
    std::getline(std::cin, firstName);

    std::cout << "Enter last name: ";
    std::getline(std::cin, lastName);
    
    std::cout << "Enter nickname: ";
    std::getline(std::cin, nickname);
    
    std::cout << "Enter phone number: ";
    std::getline(std::cin, phoneNumber);
    
    std::cout << "Enter darkest secret: ";
    std::getline(std::cin, darkestSecret);
    
    if (firstName.empty() == true || lastName.empty() == true
        || nickname.empty() == true || phoneNumber.empty() == true
        || darkestSecret.empty() == true)
    {
        std::cout << "All fields must be filled" << std::endl;
        return ;
    }
    std::cout << "Contact saved" << std::endl;
    Contact newContact(firstName, lastName, nickname, phoneNumber, darkestSecret);
    
    contacts[currentIndex] = newContact;
    currentIndex = (currentIndex + 1) % 8;
    return ;
}

void PhoneBook::displayContacts() const
{
    std::cout << std::setw(10) << "Index" << "|" 
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;
    std::cout << std::string(43, '-') << std::endl;

    for (int i = 0; i < 8; i++)
    {
        if (contacts[i].getFirstName().empty() == false)
        {
            std::cout << std::setw(10) << i << "|"
                      << std::setw(10) << contacts[i].getFirstName().substr(0, 9)
                    + (contacts[i].getFirstName().length() > 10 ? "." : "") 
                    + (contacts[i].getFirstName().length() == 10 ? contacts[i].getFirstName().substr(9, 10) : "") << "|"
                    << std::setw(10) << contacts[i].getLastName().substr(0, 9)
                    + (contacts[i].getLastName().length() > 9 ? "." : "")
                     + (contacts[i].getLastName().length() == 10 ? contacts[i].getLastName().substr(9, 10) : "") << "|"
                    << std::setw(10) << contacts[i].getNickname().substr(0, 9)
                    + (contacts[i].getNickname().length() > 9 ? "." : "")
                     + (contacts[i].getNickname().length() == 10 ? contacts[i].getNickname().substr(9, 10) : "") << std::endl;
        }
        
    }
}

void PhoneBook::searchContact() const
{
    int index;

    displayContacts();
    std::cout << "Enter index to display contact details: ";
    std::cin >> index;
    std::cin.ignore();

    if (index < 0 || index >= 8 || contacts[index].getFirstName().empty() == true)
    {
        std::cout << "Invalid index." << std::endl;
        return ;
    }
    contacts[index].printContact();
}