#pragma once

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <iostream>
#include <string>

class Ice : public AMateria
{
    public:
        Ice(void);
        ~Ice();
        Ice(Ice const &other);

	    Ice & operator=(Ice const &other);
        
		AMateria* clone() const;
        void use(ICharacter& target);
};
