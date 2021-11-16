#pragma once

#include <string>
#include <iostream>

class WrongAnimal
{

/*
*******************************************************************************
*** Public
*******************************************************************************
*/
	public:
						WrongAnimal(void);
		virtual			~WrongAnimal(void);
						WrongAnimal(WrongAnimal const &src);
        WrongAnimal const	&operator=(WrongAnimal const &src);
    
        std::string		getType(void) const;
		void			setType(std::string type);

		void			makeSound(void) const;

/*
*******************************************************************************
*** Protected
*******************************************************************************
*/
	protected:
		std::string		_type;

/*
*******************************************************************************
*** Private
*******************************************************************************
*/
	private:
};
