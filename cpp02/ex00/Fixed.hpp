#pragma once

#include <iostream>

class Fixed
{

public:

                Fixed(void);
                Fixed(const Fixed &src);
                ~Fixed(void);

    int         getRawBits(void) const;
    void        setRawBits(int const raw);

    Fixed       &operator=(const Fixed &src);

private:

    int         _value;
    const int   _fractional_bits;

};
