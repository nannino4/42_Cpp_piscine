#pragma once

#include "WrongAnimal.hpp"
#include <string>
#include <iostream>

class WrongCat : public WrongAnimal
{
	public:
    
						WrongCat(void);
		virtual			~WrongCat(void);
						WrongCat(WrongCat const &src);
    
		void			makeSound(void) const;

	private:

};
