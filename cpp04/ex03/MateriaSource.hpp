#pragma once
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    public:
        MateriaSource ();
        ~MateriaSource();
        MateriaSource(MateriaSource const & other);

	    MateriaSource & operator=(MateriaSource const & other);
        
		void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
    
	private:
        AMateria *list[4];
        int index;
};
