#include "Fixed.hpp"

Fixed::Fixed(void) : value(0), fractional_bits(8)
{
}

Fixed::Fixed(Fixed &src) : fractional_bits(8)
{
}

Fixed::~Fixed(void)
{
}

int Fixed::getRawBits(void) const
{
    return (this->value);
}

void Fixed::setRawBits(int const raw)
{
    this->value = raw;
}
