#include "Dog.hpp"

/*
*******************************************************************************************
*** Constructors & Destructor
*******************************************************************************************
*/

Dog::Dog(void)
{
	this->_type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(Dog const &src)
{
	*this = src;
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called" << std::endl;
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
