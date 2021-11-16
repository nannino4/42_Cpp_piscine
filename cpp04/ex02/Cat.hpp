#pragma once

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>
#include <iostream>

class Cat : public Animal
{

/*
*******************************************************************************
*** Public
*******************************************************************************
*/
	public:
    
						Cat(void);
		virtual			~Cat(void);
						Cat(Cat const &src);
        Cat const		&operator=(Cat const &src);
    
		Brain			*getBrain(void) const;

		void virtual	makeSound(void) const;

/*
*******************************************************************************
*** Private
*******************************************************************************
*/
	private:

		Brain			*_brain;

};
