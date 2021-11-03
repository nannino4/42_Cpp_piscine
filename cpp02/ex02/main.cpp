#include "Fixed.hpp"

int	main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl << std::endl;
	
	a = 5;
	std::cout << "a = " << a <<std::endl;
	std::cout << "b = " << b <<std::endl;
	std::cout << "a + b = " << a + b << std::endl;
	std::cout << "a - b = " << a - b << std::endl;
	std::cout << "a * b = " << a * b << std::endl;
	std::cout << "a / b = " << a / b << std::endl;
	std::cout << "++a = " << ++a << std::endl;
	std::cout << "--a = " << --a << std::endl;
	std::cout << "min(a,b) = " << Fixed::min(a,b) << std::endl;

	if (b < 100)
		std::cout << "b is less than 100" << std::endl;
	if (a != b)
		std::cout << "a and b are different" << std::endl;
	if (a == 5)
		std::cout << "a equals 5" << std::endl;
	return 0;
}
