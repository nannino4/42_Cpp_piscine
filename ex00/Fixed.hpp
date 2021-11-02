#pragma once

#include <iostream>

class Fixed
{

public:

                Fixed(void);
                Fixed(Fixed &src);
                ~Fixed(void);

    int         getRawBits(void) const;
    void        setRawBits(int const raw);

private:

    int         value;
    const int   fractional_bits;

};
