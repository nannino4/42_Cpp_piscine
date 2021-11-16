#pragma once

#include "Animal.hpp"
#include <string>
#include <iostream>

class Cat : public Animal
{
	public:
    
						Cat(void);
		virtual			~Cat(void);
						Cat(Cat const &src);
    
		void virtual	makeSound(void) const;

	private:

};
