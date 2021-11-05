#include "ClapTrap.hpp"

/*
*******************************************************************************************
** Constructors & Destructor
*******************************************************************************************
*/

ClapTrap::ClapTrap(void) : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default ClapTrap constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "Copy ClapTrap constructor called" << std::endl;
	*this = src;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Parameter ClapTrap constructor called" << std::endl;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called" << std::endl;
	return ;
}

/*
*******************************************************************************************
** "Operator Overrides"
*******************************************************************************************
*/

ClapTrap& ClapTrap::operator=(ClapTrap const &rhs)
{
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}

/*
*******************************************************************************************
** "Methods"
*******************************************************************************************
*/

void	ClapTrap::attack(std::string const &target)
{
	if (this->_energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target
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

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints == 0)
	{
		std::cout << this->_name << " is already dead nad cannot take more damages." << std::endl;
		return ;
	}
	if (amount > this->_hitPoints)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;
	std::cout << this->_name << " takes " << amount << " damages." << std::endl;
	if (this->_hitPoints == 0)
		std::cout << this->_name << " died." << std::endl;
	else
		std::cout << this->_name << " now has " << this->_hitPoints << " hitpoints." << std::endl;
	
}

void	ClapTrap::berepaired(unsigned int amount)
{
	if (this->_energyPoints > 0)
	{
		this->_hitPoints += amount;
		std::cout << this->_name << " recovers " << amount << " hitpoints." << std::endl;
		this->_energyPoints -= 1;
		std::cout << "This costs 1 energy point. " << this->_name << " now has "
				  << this->_energyPoints << " energy points" << std::endl;
	}
	else
	{
		std::cout << this->_name << "has 0 energy points left and cannot be repaired" << std::endl;
	}
}