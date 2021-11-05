#pragma once

#include "ClapTrap.hpp"
#include <string.h>
#include <iostream>

class FragTrap : public ClapTrap
{
	public:

				FragTrap();
				FragTrap(FragTrap const &src);
				FragTrap(std::string name);
				~FragTrap();

		void	attack(std::string const &target);
		void	highFiveGuys(void);

};
