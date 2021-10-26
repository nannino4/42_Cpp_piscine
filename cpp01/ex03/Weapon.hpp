#pragma once

#include <iostream>

class Weapon
{
    public:
        Weapon(std::string type);
        ~Weapon(void);

        void                setType(std::string type);
        const std::string   &getType(void) const;

    private:
        std::string         type;
};
