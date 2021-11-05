#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap first("FirstClap");
	ScavTrap second("SecondScav");

	std::cout << "\n---- END OF CONSTRUCTORS ----\n" <<std::endl;
	first.attack("SecondScav");
	second.takeDamage(0);
	second.attack("FirstClap");
	first.takeDamage(20);
	second.berepaired(5);
	second.attack("FirstClap");
	first.takeDamage(20);
	second.guardGate();

	std::cout << "\n\n---- BEGINNING OF DESTRUCTORS ----" <<std::endl;
	return (0);
}