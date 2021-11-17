#pragma once
#include "ICharacter.hpp"
#include <string>
#include <iostream>

class ICharacter;

class AMateria
{

public:
						AMateria(std::string const &type);
	virtual				~AMateria();
						AMateria(AMateria const &other);

	AMateria 			&operator=(AMateria const &other);

	std::string const	&getType() const;

	virtual AMateria	*clone() const = 0;
	virtual void		use(ICharacter &target);

protected:
	std::string			_type;
};
