#include "phonebook.hpp"

// constructor -------------------------------------

Phonebook::Phonebook(void)
{
    this->next = 0;
}

// deconstructor -------------------------------------

Phonebook::~Phonebook(void)
{
}

// others --------------------------------------------

void Phonebook::add_contact(void)
{
    std::string s;

    this->contacts[this->next].set_as_used();
    std::cout << "input contact's first name: ";
    std::getline(std::cin, s);
    this->contacts[this->next].set_first_name(s);
    std::cout << "input contact's last name: ";
    std::getline(std::cin, s);
    this->contacts[this->next].set_last_name(s);
    std::cout << "input contact's nickname: ";
    std::getline(std::cin, s);
    this->contacts[this->next].set_nickname(s);
    std::cout << "input contact's phone_n: ";
    std::getline(std::cin, s);
    this->contacts[this->next].set_phone_n(s);
    std::cout << "input contact's darkest secret: ";
    std::getline(std::cin, s);
    this->contacts[this->next].set_secret(s);
    this->next++;
    this->next %= 8;
}

void Phonebook::search(void)
{
    int i;
    std::string s;
    int difference;

    std::cout << std::endl << "|     index|first name| last name|  nickname| " << std::endl;
    i = 0;
    while (i < 8 && this->contacts[i].get_is_used())
    {
        std::cout << "|" << "         " << i + 1;
        s = this->contacts[i].get_first_name(); // first name
        if (s.length() > 10)
        {
            s.replace(9, std::string::npos, ".");
        }
        else
        {
            difference = 10 - s.length();
            while (difference > 0)
            {
                s.insert(0, " ");
                difference--;
            }
        }
        std::cout << "|" << s;
        s = this->contacts[i].get_last_name(); // last name
        if (s.length() > 10)
        {
            s.replace(9, std::string::npos, ".");
        }
        else
        {
            difference = 10 - s.length();
            while (difference > 0)
            {
                s.insert(0, " ");
                difference--;
            }
        }
        std::cout << "|" << s;
        s = this->contacts[i].get_nickname(); // nickname
        if (s.length() > 10)
        {
            s.replace(9, std::string::npos, ".");
        }
        else
        {
            difference = 10 - s.length();
            while (difference > 0)
            {
                s.insert(0, " ");
                difference--;
            }
        }
        std::cout << "|" << s << "|" << std::endl;
        i++;
    }
    std::cout << std::endl << "Type the index of the contact you're searching for:" << std::endl;
    std::getline(std::cin, s);
    while (s.length() == 0)
    {
        // std::cout << std::endl << "Type the index of the contact you're searching for:" << std::endl;
        std::getline(std::cin, s);
    }
    std::stringstream(s) >> i;
    if (std::stringstream(s).fail())
    {
        std::stringstream(s).clear();
        std::stringstream(s).ignore(256, '\n');
        std::cout << "\nInvalid index\n"
                  << std::endl;
        return;
    }
    if (i < 1 || i > 8 || !(this->contacts[i - 1].get_is_used()))
    {
        std::cout << "\nInvalid index\n" << std::endl;
        return;
    }
    i--;
    std::cout << std::endl;
    std::cout << "first name:     " << this->contacts[i].get_first_name() << std::endl;
    std::cout << "last name:      " << this->contacts[i].get_last_name() << std::endl;
    std::cout << "nickname:       " << this->contacts[i].get_nickname() << std::endl;
    std::cout << "phone number:   " << this->contacts[i].get_phone_n() << std::endl;
    std::cout << "darkest secret: " << this->contacts[i].get_secret() << std::endl
              << std::endl;
}
