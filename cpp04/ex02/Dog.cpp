#include "Dog.hpp"

/*
*******************************************************************************************
*** Constructors & Destructor
*******************************************************************************************
*/

Dog::Dog(void)
{
	this->_brain = new Brain();
	this->_type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(Dog const &src)
{
	this->_brain = new Brain();
	*this = src;
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog(void)
{
	delete this->_brain;
    std::cout << "Dog destructor called" << std::endl;
}

/*
*******************************************************************************
*** Operator Overrides
*******************************************************************************
*/

Dog const    &Dog::operator=(Dog const &src)
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

Brain	*Dog::getBrain(void) const
{
	return (this->_brain);
}

/*
*******************************************************************************************
*** Member Functions
*******************************************************************************************
*/

void    Dog::makeSound(void) const
{
    std::cout << "Bau bau bauu!" << std::endl;
}
