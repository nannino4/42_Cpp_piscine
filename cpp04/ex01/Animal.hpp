#pragma once

#include <string>
#include <iostream>

class Animal
{

/*
*******************************************************************************
*** Public
*******************************************************************************
*/
	public:
						Animal(void);
		virtual			~Animal(void);
						Animal(Animal const &src);
        Animal const	&operator=(Animal const &src);
    
        std::string		getType(void) const;
		void			setType(std::string type);

		void virtual	makeSound(void) const;

/*
*******************************************************************************
*** Protected
*******************************************************************************
*/
	protected:
		std::string		_type;

};
