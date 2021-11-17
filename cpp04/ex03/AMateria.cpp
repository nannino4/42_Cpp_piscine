#include "AMateria.hpp"
#include <string>

AMateria::AMateria(std::string const & type) : _type(type) {}

AMateria::AMateria(AMateria const &other)
{
	*this = other;
}

AMateria::~AMateria(void) {}

std::string const & AMateria::getType() const
{
    return (this->_type);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}

AMateria &AMateria::operator=(AMateria const &other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}
