#include "Zombie.hpp"

int main(void)
{
    Zombie *zombie_ptr;
    Zombie zombie("sono il primo zombie");

    zombie.announce();
    zombie_ptr = newZombie("sono uno zombie heap");
    zombie_ptr->announce();
    delete(zombie_ptr);
    randomChump("sono uno zombie sullo stack");
    return (0);
}
