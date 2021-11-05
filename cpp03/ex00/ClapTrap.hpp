#pragma once

#include <string.h>
#include <iostream>

class ClapTrap
{
	public:

						ClapTrap();
						ClapTrap(ClapTrap const &src);
						ClapTrap(std::string name);
						~ClapTrap();

		ClapTrap 		&operator=(ClapTrap const &rhs);

		void			attack(std::string const &target);
		void			takeDamage(unsigned int amount);
		void			berepaired(unsigned int amount);


	private:

		std::string		_name;
		unsigned int 	_hitPoints;
		unsigned int 	_energyPoints;
		unsigned int 	_attackDamage;

};
