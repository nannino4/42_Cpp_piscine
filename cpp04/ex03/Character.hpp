#pragma once
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <string>

class Character : public virtual ICharacter
{

public:
						Character(std::string name);
						~Character();
						Character(Character &other);

	Character 			&operator=(Character &other);

	std::string const 	&getName() const;

	void 				equip(AMateria *m);
	void 				unequip(int idx);
	void 				use(int idx, ICharacter &target);

private:
	std::string 	name;
	AMateria 		*list[4];
};
