
#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
    PhoneBook PhoneBook;
    std::string command;

    std::cout << "PhoneBook started" << std::endl;

    while (42)
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);
        if (command == "ADD")
        {
            PhoneBook.addContact();
        }
        else if (command == "SEARCH")
        {
            PhoneBook.searchContact();
        }
        else if (command == "EXIT")
        {
            std::cout << "Exiting PhoneBook" << std::endl;
            break;
        }
        else
        {
            std::cout << "Invalid command. Valid commands are 'ADD', 'SEARCH' & 'EXIT'" << std::endl;
        }
    }
    return (0);
}