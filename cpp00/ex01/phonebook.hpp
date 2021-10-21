#pragma once

#include <iostream>
#include <sstream>
#include "contact.hpp"

class Phonebook
{
    public:
    // constructor & deconstructor
        Phonebook(void);
        ~Phonebook(void);
    // others
        void add_contact(void);
        void search(void);

    private:
        Contact contacts[8];
        int     next;
};
