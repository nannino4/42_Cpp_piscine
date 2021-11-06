#pragma once

#include <string.h>
#include <iostream>

class ClapTrap
{
	public:

					ClapTrap(void);
					ClapTrap(ClapTrap const &src);
					ClapTrap(std::string name);
					~ClapTrap(void);

		ClapTrap	&operator=(ClapTrap const &rhs);

		void		attack(std::string const &target);
		void		takeDamage(int amount);
		void		berepaired(int amount);


	protected:

		std::string	_name;
		int 		_hitPoints;
		int 		_energyPoints;
		int 		_attackDamage;


	private:

};
