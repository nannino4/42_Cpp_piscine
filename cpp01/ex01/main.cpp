#include "Zombie.hpp"

int main(void)
{
    int i;
    Zombie *horde;

    horde = zombieHorde(10, "johnny_be_good");
    i = 0;
    while (i < 10)
    {
        std::cout << "zombie n. " << i << ": ";
        horde[i].announce();
        i++;
    }
    delete [] horde;
}
