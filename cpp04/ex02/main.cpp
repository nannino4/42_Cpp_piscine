#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal	*cat = new Cat();
	Animal	*dog = new Dog();
	// Animal	*meta = new Animal();

	delete cat;
	delete dog;
	// delete meta;
}
