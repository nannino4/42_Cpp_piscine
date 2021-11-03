#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0), _fractional_bits(8)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src) : _fractional_bits(8)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	// this->_value = src.getRawBits();
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
    return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
    this->_value = raw;
}

Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_value = src.getRawBits();
	return (*this);
}
