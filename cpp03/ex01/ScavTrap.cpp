#include "ScavTrap.hpp"

/*
*******************************************************************************************
** Constructors & Destructor
*******************************************************************************************
*/

ScavTrap::ScavTrap(void)
{
	std::cout << "Default ScavTrap constructor called" << std::endl;
	this->_name = "Default";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	std::cout << "Copy ScavTrap constructor called" << std::endl;
	*this = src;
	return ;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "Parameter ScavTrap constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
	return ;
}

/*
*******************************************************************************************
** "Methods"
*******************************************************************************************
*/

void	ScavTrap::attack(std::string const &target)
{
	if (this->_energyPoints > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target
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

void	ScavTrap::guardGate(void)
{
	std::cout << this->_name << " has entered in GateKeeper mode" << std::endl;
}
