#include "Cat.hpp"

/*
*******************************************************************************************
*** Constructors & Destructor
*******************************************************************************************
*/

Cat::Cat(void)
{
	this->_type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(Cat const &src)
{
	*this = src;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor called" << std::endl;
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
