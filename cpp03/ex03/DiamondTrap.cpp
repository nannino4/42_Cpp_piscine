#include "DiamondTrap.hpp"

/*
*******************************************************************************************
** Constructors & Destructor
*******************************************************************************************
*/

DiamondTrap::DiamondTrap(void) : ScavTrap(), FragTrap(), ClapTrap()
{
	std::cout << "Default DiamondTrap constructor called" << std::endl;
	this->_name = "Default";
	this->ClapTrap::_name = "Default_clap_name";
	this->_hitPoints = this->FragTrap::_hitPoints;
	this->_energyPoints = this->ScavTrap::_energyPoints;
	this->_attackDamage = this->FragTrap::_attackDamage;
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) : ClapTrap(src._name + "_clap_name")
{
	std::cout << "Copy DiamondTrap constructor called" << std::endl;
	*this = src;
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name), ClapTrap()
{
	std::cout << "Parameter DiamondTrap constructor called" << std::endl;
	this->_name = name;
	this->ClapTrap::_name = name + "_clap_name";
	this->_hitPoints = this->FragTrap::_hitPoints;
	this->_energyPoints = this->ScavTrap::_energyPoints;
	this->_attackDamage = this->FragTrap::_attackDamage;
	return ;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called" << std::endl;
	return ;
}

/*
*******************************************************************************************
** "Methods"
*******************************************************************************************
*/

void	DiamondTrap::whoAmI(void)
{
	std::cout << "Name : " << this->_name << std::endl
			  << "ClapTrap name : " << this->ClapTrap::_name << std::endl;
}
