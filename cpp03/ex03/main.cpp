#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	ClapTrap 	first("FirstClap");
	ScavTrap 	second("SecondScav");
	FragTrap 	third("ThirdFrag");
	DiamondTrap	fourth("FourthDiamond");

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
	fourth.attack("SecondScav");
	second.takeDamage(30);
	third.attack("FourthDiamond");
	fourth.takeDamage(30);
	fourth.whoAmI();
	fourth.highFiveGuys();
	fourth.guardGate();

	std::cout << "\n\n---- BEGINNING OF DESTRUCTORS ----" <<std::endl;
	return (0);
}