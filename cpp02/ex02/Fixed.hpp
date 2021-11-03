#pragma once

#include <iostream>
#include <cmath>

class Fixed
{

public:

                Fixed(void);
                Fixed(Fixed const &src);
                Fixed(const float n);
                Fixed(const int n);
                Fixed(const int n, int flag);
                ~Fixed(void);

    int         getRawBits(void) const;
    void        setRawBits(int const raw);
    
	float	    toFloat(void) const;
	int		    toInt(void) const;


	static Fixed        &min(Fixed &lhs, Fixed &rhs);
	static Fixed const  &min(Fixed const &lhs, Fixed const &rhs);
	static Fixed        &max(Fixed &lhs, Fixed &rhs);
	static Fixed const 	&max(Fixed const &lhs, Fixed const &rhs);

    Fixed       &operator=(Fixed const &src);
	Fixed	    operator+(Fixed const rhs) const;
	Fixed	    operator-(Fixed const rhs) const;
	Fixed	    operator*(Fixed const rhs) const;
	Fixed	    operator/(Fixed const rhs) const;
	Fixed	    &operator++();
	Fixed	    operator++(int);
	Fixed	    &operator--();
	Fixed	    operator--(int);
	int		    operator>(Fixed const rhs) const;
	int		    operator<(Fixed const rhs) const;
	int	    	operator>=(Fixed const rhs) const;
	int	    	operator<=(Fixed const rhs) const;
	int	    	operator==(Fixed const rhs) const;
	int	    	operator!=(Fixed const rhs) const;

private:

    int         _value;
    const int   _fractional_bits;

};

std::ostream    &operator<<(std::ostream &o, Fixed const &rhs);
