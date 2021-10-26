#pragma once

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
    public:
                        HumanB(std::string name);
                        ~HumanB(void);
        void            attack(void) const;
        void            setWeapon(Weapon &weapon);

    private:
        std::string     name;
        Weapon          *weapon;
    
};
