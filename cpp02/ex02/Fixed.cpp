#include "Fixed.hpp"

/*
*******************************************************************************************
** Constructors & Destructor
*******************************************************************************************
*/

Fixed::Fixed(void) : _value(0), _fractional_bits(8)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src) : _fractional_bits(8)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(const float n) : _fractional_bits(8)
{
	// std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(n * (1 << this->_fractional_bits));
}

Fixed::Fixed(const int n) : _fractional_bits(8)
{
	// std::cout << "Int constructor called" << std::endl;
	this->_value = n << this->_fractional_bits;
}

Fixed::Fixed(const int n, int flag) : _fractional_bits(8)
{
	// std::cout << "Raw value constructor called" << std::endl;
	this->_value = n;
}

Fixed::~Fixed(void)
{
	// std::cout << "Destructor called" << std::endl;
}


/*
*******************************************************************************************
** Member Functions
*******************************************************************************************
*/

int 	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
    return (this->_value);
}

void 	Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
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

Fixed const	&Fixed::min(Fixed const &lhs, Fixed const &rhs)
{
	if (lhs < rhs)
		return (lhs);
	return (rhs);
}

Fixed		&Fixed::min(Fixed &lhs, Fixed &rhs)
{
	if (lhs < rhs)
		return (lhs);
	return (rhs);
}

Fixed const	&Fixed::max(Fixed const &lhs, Fixed const &rhs)
{
	if (lhs > rhs)
		return (lhs);
	return (rhs);
}

Fixed		&Fixed::max(Fixed &lhs, Fixed &rhs)
{
	if (lhs > rhs)
		return (lhs);
	return (rhs);
}


/*
*******************************************************************************************
** Operator Overloads
*******************************************************************************************
*/

Fixed 			&Fixed::operator=(Fixed const &src)
{
	// std::cout << "Assignation operator called" << std::endl;
	this->_value = src.getRawBits();
	return (*this);
}

std::ostream    &operator<<(std::ostream &o, Fixed const &rhs)
{
	std::cout << rhs.toFloat();
	return (o);
}

int				Fixed::operator>(Fixed const rhs) const
{
	return (this->_value > rhs._value);
}

int				Fixed::operator<(Fixed const rhs) const
{
	return (this->_value < rhs._value);
}

int				Fixed::operator>=(Fixed const rhs) const
{
	return (this->_value >= rhs._value);
}

int				Fixed::operator<=(Fixed const rhs) const
{
	return (this->_value <= rhs._value);
}

Fixed			 Fixed::operator+(Fixed const rhs) const
{
	return (Fixed(this->_value + rhs._value, 1));
}

Fixed			 Fixed::operator-(Fixed const rhs) const
{
	return (Fixed(this->_value - rhs._value, 1));
}

Fixed			 Fixed::operator*(Fixed const rhs) const
{
	return (Fixed((this->_value * rhs._value) >> this->_fractional_bits, 1));
}

Fixed 			Fixed::operator/(Fixed const rhs) const
{
	return (Fixed(float(float(this->_value) / float(rhs._value))));
}

int				Fixed::operator==(Fixed const rhs) const
{
	return (this->_value == rhs._value);
}

int				Fixed::operator!=(Fixed const rhs) const
{
	return (this->_value != rhs._value);
}

Fixed			 &Fixed::operator++()
{
	this->_value++;
	return (*this);
}

Fixed 			Fixed::operator++(int)
{
	Fixed	temp;

	temp = *this;
	++*this;
	return (temp);
}

Fixed			 &Fixed::operator--()
{
	this->_value--;
	return (*this);
}

Fixed			 Fixed::operator--(int)
{
	Fixed	temp;

	temp = *this;
	--*this;
	return (temp);
}
