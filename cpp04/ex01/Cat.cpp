#include "Cat.hpp"

/*
*******************************************************************************************
*** Constructors & Destructor
*******************************************************************************************
*/

Cat::Cat(void)
{
	this->_brain = new Brain();
	this->_type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(Cat const &src)
{
	this->_brain = new Brain();
	*this = src;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat(void)
{
	delete this->_brain;
    std::cout << "Cat destructor called" << std::endl;
}

/*
*******************************************************************************
*** Operator Overrides
*******************************************************************************
*/

Cat const    &Cat::operator=(Cat const &src)
{
    this->_type = src._type;
	*this->_brain = *src._brain;
    return (*this);
}

/*
*******************************************************************************
*** Getters & Setters
*******************************************************************************
*/

Brain	*Cat::getBrain(void) const
{
	return (this->_brain);
}

/*
*******************************************************************************************
*** Member Functions
*******************************************************************************************
*/

void    Cat::makeSound(void) const
{
    std::cout << "Miao miao miaaao!" << std::endl;
}
