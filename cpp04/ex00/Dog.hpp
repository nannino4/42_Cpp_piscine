#pragma once

#include "Animal.hpp"
#include <string>
#include <iostream>

class Dog : public Animal
{
	public:
    
						Dog(void);
		virtual			~Dog(void);
						Dog(Dog const &src);
    
		void virtual	makeSound(void) const;

	private:

};
