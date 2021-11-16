#pragma once

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>
#include <iostream>

class Dog : public Animal
{

/*
*******************************************************************************
*** Public
*******************************************************************************
*/
	public:
    
						Dog(void);
		virtual			~Dog(void);
						Dog(Dog const &src);
        Dog const		&operator=(Dog const &src);
    
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
