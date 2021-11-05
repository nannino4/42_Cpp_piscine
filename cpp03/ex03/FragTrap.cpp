#include "FragTrap.hpp"

/*
*******************************************************************************************
** Constructors & Destructor
*******************************************************************************************
*/

FragTrap::FragTrap(void)
{
	std::cout << "Default FragTrap constructor called" << std::endl;
	this->_name = "Default";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	return ;
}

FragTrap::FragTrap(FragTrap const &src)
{
	std::cout << "Copy FragTrap constructor called" << std::endl;
	*this = src;
	return ;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "Parameter FragTrap constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << std::endl;
	return ;
}

/*
*******************************************************************************************
** "Methods"
*******************************************************************************************
*/

void	FragTrap::attack(std::string const &target)
{
	if (this->_energyPoints > 0)
	{
		std::cout << "FragTrap " << this->_name << " attacks " << target
				  << " causing " << this->_attackDamage << " damages." << std::endl;
		this->_energyPoints -= 1;
		std::cout << "This costs 1 energy point. " << this->_name << " now has "
				  << this->_energyPoints << " energy points" << std::endl;
	}
	else
	{
		std::cout << this->_name << "has 0 energy points left and cannot attack" << std::endl;
	}
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << this->_name << " asks everybody around very awkwardly to high five" << std::endl;
}
