#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
    : weapon(weapon), name(name)
{
}

HumanA::~HumanA(void)
{
}

void HumanA::attack(void) const
{
    std::cout << this->name;
    std::cout << " attacks with his ";
    std::cout << this->weapon.getType();
    std::cout << std::endl;
}
