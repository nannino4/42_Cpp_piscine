#pragma once

#include <string>

class Animal
{
    public:
    
                        Animal(void);
                        ~Animal(void);
                        Animal(Animal const &src);
                        
        Animal const    &operator=(Animal const &src);
    

    private:

        std::string     type;
};
