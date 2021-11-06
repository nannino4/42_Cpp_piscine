#pragma once

#include "ClapTrap.hpp"
#include <string.h>
#include <iostream>

class ScavTrap : virtual public ClapTrap
{
	public:

				ScavTrap(void);
				ScavTrap(ScavTrap const &src);
				ScavTrap(std::string name);
				~ScavTrap(void);

		void	attack(std::string const &target);
		void	guardGate(void);

};
