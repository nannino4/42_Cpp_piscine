#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <string.h>
#include <iostream>

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:

					DiamondTrap(void);
					DiamondTrap(DiamondTrap const &src);
					DiamondTrap(std::string name);
					~DiamondTrap(void);

		void		whoAmI(void);

	private:

		std::string	_name;

};
