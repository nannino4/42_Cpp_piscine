#include "Fixed.hpp"

/*
*******************************************************************************************
** Constructors & Destructor
*******************************************************************************************
*/

Fixed::Fixed(void) : _value(0), _fractional_bits(8)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src) : _fractional_bits(8)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(const float n) : _fractional_bits(8)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(n * (1 << this->_fractional_bits));
}

Fixed::Fixed(const int n) : _fractional_bits(8)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = n << this->_fractional_bits;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}


/*
*******************************************************************************************
** Member Functions
*******************************************************************************************
*/

int 	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
    return (this->_value);
}

void 	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
    this->_value = raw;
}

float 	Fixed::toFloat(void) const
{
	return ((float)this->_value / (float)(1 << this->_fractional_bits));
}

int		Fixed::toInt(void) const
{
	return (this->_value >> this->_fractional_bits);
}


/*
*******************************************************************************************
** Operator Overloads
*******************************************************************************************
*/

Fixed 			&Fixed::operator=(const Fixed &src)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_value = src.getRawBits();
	return (*this);
}

std::ostream    &operator<<(std::ostream &o, Fixed const &rhs)
{
	std::cout << rhs.toFloat();
	return (o);
}
