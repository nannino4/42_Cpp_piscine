#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {}

Cure::~Cure(void) {}

Cure::Cure(Cure const &toCopy) : AMateria("cure")
{
	*this = toCopy;
}

Cure & Cure::operator=(Cure const &other)
{
	if (this != &other)
	{
		AMateria::operator=(other);
	}
	return (*this);
}

AMateria* Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
    AMateria::use(target);
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
