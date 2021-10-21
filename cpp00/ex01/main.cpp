#include "phonebook.hpp"

int main(void)
{
    std::string s;
    Phonebook phonebook;

    while (1)
    {
        std::cout << "Type 'ADD', 'SEARCH' or 'EXIT'" << std::endl;
        std::getline(std::cin, s);
        if (!(s.compare("EXIT")))
        {
            return (0);
        }
        else if (!(s.compare("ADD")))
        {
            phonebook.add_contact();
        }
        else if (!(s.compare("SEARCH")))
        {
            phonebook.search();
            // std::cin.ignore(256, '\n');
        }
    }
}
