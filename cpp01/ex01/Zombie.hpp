#include <iostream>

class Zombie
{
    public:
    
        Zombie(void);
        Zombie(std::string name);
        ~Zombie(void);
        void announce(void);
        void set_name(std::string name);
    
    private:
    
        std::string name;
};

Zombie* zombieHorde(int N, std::string name);
