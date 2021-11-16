#include "WrongCat.hpp"

/*
*******************************************************************************************
*** Constructors & Destructor
*******************************************************************************************
*/

WrongCat::WrongCat(void)
{
	this->_type = "WrongCat";
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &src)
{
	*this = src;
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat destructor called" << std::endl;
}

/*
*******************************************************************************************
*** Member Functions
*******************************************************************************************
*/

void    WrongCat::makeSound(void) const
{
    std::cout << "Miao miao miaaao!" << std::endl;
}
