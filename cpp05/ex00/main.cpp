#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

int main (void)
{

	std::cout << "\n\nCreo un boss con rank 1----------------------------------------------------------------\n" << std::endl;
	try
	{
		Bureaucrat b = Bureaucrat("boss", 1);
		std::cout << b;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n\nCreo un bossissimo con rank -1---------------------------------------------------------\n" << std::endl;
	try
	{
		Bureaucrat b = Bureaucrat("bossissimo", -1);
		std::cout << b;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n\nCreo un bubbo che va da 149 a 151 a 150------------------------------------------------\n" << std::endl;
	try
	{
		Bureaucrat b = Bureaucrat("bubbo", 149);
		std::cout << b;
		b.decrementGrade();
		std::cout << b;
		b.decrementGrade();
		std::cout << b;
		b.incrementGrade();
		std::cout << b;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n\nCreo un Chief che va da 2 a 0----------------------------------------------------------\n" << std::endl;
	try
	{
		Bureaucrat b = Bureaucrat("Chief", 2);
		std::cout << b;
		b.incrementGrade();
		std::cout << b;
		b.incrementGrade();
		std::cout << b;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
