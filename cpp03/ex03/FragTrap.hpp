#pragma once

#include "ClapTrap.hpp"
#include <string.h>
#include <iostream>

class FragTrap : virtual public ClapTrap
{
	public:

				FragTrap(void);
				FragTrap(FragTrap const &src);
				FragTrap(std::string name);
				~FragTrap(void);

		void	highFiveGuys(void);

};
