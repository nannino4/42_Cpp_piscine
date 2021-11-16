#include "WrongAnimal.hpp"


/*
*******************************************************************************************
** Constructors & Destructor
*******************************************************************************************
*/

WrongAnimal::WrongAnimal(void) : _type("default")
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

/*
*******************************************************************************************
** Operator Overrides
*******************************************************************************************
*/

WrongAnimal const    &WrongAnimal::operator=(WrongAnimal const &src)
{
    this->_type = src._type; 
    return (*this);
}

/*
*******************************************************************************
*** Getters & Setters
*******************************************************************************
*/

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}

void	WrongAnimal::setType(std::string type)
{
	this->_type = type;
}

/*
*******************************************************************************************
** Member Functions
*******************************************************************************************
*/

void    WrongAnimal::makeSound(void) const
{
    std::cout << "*GGTGHGHHRHEHHREHGGRGGGREHHRHEHRRRR* ... Something is wrong with this animalish sound" << std::endl;
}
