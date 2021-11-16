#pragma once

#include <string>
#include <iostream>

class Brain
{

/*
*******************************************************************************
*** Public
*******************************************************************************
*/
	public:
						Brain(void);
		virtual			~Brain(void);
						Brain(Brain const &src);
        Brain const		&operator=(Brain const &src);
    
/*
*******************************************************************************
*** Private
*******************************************************************************
*/
	private:

		std::string		_ideas[100];

};
