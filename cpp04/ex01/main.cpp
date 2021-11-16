#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal	*animal[10];
	int		i;

	// creating cats
	for (i = 0; i < 5; i++)
	{
		std::cout << i << std::endl;
		animal[i] = new Cat();
	}

	// creating dogs
	for (i = 5; i < 10; i++)
	{
		std::cout << i << std::endl;
		animal[i] = new Dog();
	}

	// deleting
	for (i = 0; i < 10; i++)
	{
		std::cout << i << std::endl;
		delete animal[i];
	}

	//show copy as "deep" copy
	Cat	*cat1 = new Cat();
	Cat	*cat2 = new Cat(*cat1);
	std::cout << cat1->getBrain() << std::endl << cat2->getBrain() << std::endl;
	delete cat1;
	delete cat2;
}
