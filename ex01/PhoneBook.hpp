#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {
private:
    Contact contacts[8]; // Array of contacts
    int currentIndex; // Index for the next contact

public:
    PhoneBook(); // Constructor

    // Add a contact
    void addContact();
    
    // Display all contacts
    void displayContacts() const;

    // Search for a specific contact
    void searchContact() const;
};

#endif
