#include "HumanB.hpp"

HumanB::HumanB(std::string name)
    : name(name)
{
}

HumanB::~HumanB(void)
{
}

void HumanB::attack(void) const
{
    std::cout << this->name;
    std::cout << " attacks with his ";
    std::cout << this->weapon->getType();
    std::cout << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}
