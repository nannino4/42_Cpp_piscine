#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap first("First");
	ClapTrap second("Second");

	std::cout << "\n---- END OF CONSTRUCTORS ----\n" <<std::endl;
	first.attack("Second");
	second.takeDamage(5);
	second.attack("First");
	first.takeDamage(10);
	second.berepaired(5);
	second.attack("First");
	first.takeDamage(10);

	std::cout << "\n---- BEGINNING OF DESTRUCTORS ----\n" <<std::endl;
	return (0);
}