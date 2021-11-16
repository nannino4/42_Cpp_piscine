#include "Animal.hpp"

/*
*******************************************************************************
** Constructors & Destructor
*******************************************************************************
*/

Animal::Animal(void) : _type("Animal")
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(Animal const &src)
{
	*this = src;
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor called" << std::endl;
}

/*
*******************************************************************************
*** Operator Overrides
*******************************************************************************
*/

Animal const    &Animal::operator=(Animal const &src)
{
    this->_type = src._type; 
    return (*this);
}

/*
*******************************************************************************
*** Getters & Setters
*******************************************************************************
*/

std::string	Animal::getType(void) const
{
	return (this->_type);
}

void	Animal::setType(std::string type)
{
	this->_type = type;
}
