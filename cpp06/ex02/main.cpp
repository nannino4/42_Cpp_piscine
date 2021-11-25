#include <string>
#include <time.h>
#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
	int	i = rand() % 3;

	if (i == 0)
	{
		std::cout << "class A generated" << std::endl;
		return (new A);
	}
	else if (i == 1)
	{
		std::cout << "class B generated" << std::endl;
		return (new B);
	}
	else
	{
		std::cout << "class C generated" << std::endl;
		return (new C);
	}
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "class A identified" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "class B identified" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "class C identified" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		dynamic_cast<A &>(p);
		std::cout << "class A identified" << std::endl;
		return ;
	}
	catch(const std::bad_cast &bc) {}
	try
	{
		dynamic_cast<B &>(p);
		std::cout << "class B identified" << std::endl;
		return ;
	}
	catch(const std::bad_cast &bc) {}
	try
	{
		dynamic_cast<C &>(p);
		std::cout << "class C identified" << std::endl;
		return ;
	}
	catch(const std::bad_cast &bc) {}
}

int main(void)
{
	std::srand(time(0));
	Base *tmp;

	for (int i = 0; i < 7; i++)
	{
		std::cout << "Round: " << i + 1 << std::endl;
		tmp = generate();
		identify(tmp);
		identify(*tmp);
		delete (tmp);
	}
}
