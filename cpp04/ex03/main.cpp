#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

int main(void)
{
	IMateriaSource	*src = new MateriaSource();
	ICharacter		*me = new Character("me");

	AMateria		*tmp;

	ICharacter		*bob = new Character("bob");

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
	return (0);
}
