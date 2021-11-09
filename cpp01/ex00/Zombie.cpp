#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name)
{
}

Zombie::~Zombie(void)
{
    this->announce();
}

void Zombie::announce(void)
{
    std::cout << this->name << std::endl;
}
