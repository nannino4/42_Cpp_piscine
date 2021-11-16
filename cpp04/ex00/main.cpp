#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main()
{
	
/*
*******************************************************************************
*** testing WrongCat
*******************************************************************************
*/

	const Animal *meta = new Animal();
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();

	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	cat->makeSound();
	dog->makeSound();
	meta->makeSound();

	delete meta;
	delete dog;
	delete cat;

/*
*******************************************************************************
*** testing WrongCat
*******************************************************************************
*/

	const WrongAnimal *w_cat = new WrongCat();

	std::cout << w_cat->getType() << " " << std::endl;
	w_cat->makeSound();

	delete w_cat;

}
