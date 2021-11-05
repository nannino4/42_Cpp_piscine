#pragma once

#include "ClapTrap.hpp"
#include <string.h>
#include <iostream>

class ScavTrap : public ClapTrap
{
	public:

				ScavTrap();
				ScavTrap(ScavTrap const &src);
				ScavTrap(std::string name);
				~ScavTrap();

		void	attack(std::string const &target);
		void	guardGate(void);

};
