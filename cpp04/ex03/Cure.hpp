#pragma once

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <iostream>
#include <string>

class Cure : public AMateria
{
    public:
        Cure(void);
        ~Cure(void);
        Cure(Cure const &other);

	    Cure & operator=(Cure const &other);
        
		AMateria* clone() const;
        void use(ICharacter& target);
};
