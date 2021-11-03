#pragma once

#include <iostream>
#include <cmath>

class Fixed
{

public:

                Fixed(void);
                Fixed(const Fixed &src);
                Fixed(const int n);
                Fixed(const float n);
                ~Fixed(void);

    int         getRawBits(void) const;
    void        setRawBits(int const raw);
    
	float	    toFloat(void) const;
	int		    toInt(void) const;

    Fixed       &operator=(const Fixed &src);

private:

    int         _value;
    const int   _fractional_bits;

};

std::ostream    &operator<<(std::ostream &o, Fixed const &rhs);
