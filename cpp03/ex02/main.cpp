#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap first("FirstClap");
	ScavTrap second("SecondScav");
	FragTrap third("ThirdFrag");

	std::cout << "\n---- END OF CONSTRUCTORS ----\n" <<std::endl;
	first.attack("SecondScav");
	second.takeDamage(0);
	second.attack("FirstClap");
	first.takeDamage(20);
	third.attack("SecondScav");
	second.takeDamage(30);
	second.berepaired(5);
	second.attack("FirstClap");
	first.takeDamage(20);
	second.guardGate();
	third.highFiveGuys();

	std::cout << "\n\n---- BEGINNING OF DESTRUCTORS ----" <<std::endl;
	return (0);
}