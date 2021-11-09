#include "Zombie.hpp"

Zombie::Zombie(void) : name("normal_zombie")
{
}

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

void Zombie::set_name(std::string name)
{
    this->name = name;
}
