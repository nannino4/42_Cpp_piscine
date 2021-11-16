#include "Brain.hpp"

/*
*******************************************************************************
** Constructors & Destructor
*******************************************************************************
*/

Brain::Brain(void)
{
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = "stupid idea";
	}
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(Brain const &src)
{
	*this = src;
    std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain(void)
{
    std::cout << "Brain destructor called" << std::endl;
}

/*
*******************************************************************************
*** Operator Overrides
*******************************************************************************
*/

Brain const    &Brain::operator=(Brain const &src)
{
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = src._ideas[i];
	}
    return (*this);
}
