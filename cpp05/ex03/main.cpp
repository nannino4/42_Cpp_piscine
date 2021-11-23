#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main (void)
{
	srand(time(0));
	Intern	intern;
	Form	*ptr = 0;


	ptr = intern.makeForm("NonExistingForm", "RandomTarget");
	if (ptr)
		std::cout << *ptr << std::endl;

	try
	{
		Bureaucrat	b("Bubbo", 150);
		std::cout << b << std::endl;
		ptr = intern.makeForm("PresidentialPardonForm", "Criminale");
		if (ptr)
			std::cout << *ptr << std::endl;
		b.signForm(*ptr);
		b.excecuteForm(*ptr);
		if (ptr)
		{
			delete ptr;
			ptr = 0;
		}
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	if (ptr)
	{
		delete ptr;
		ptr = 0;
	}

	std::cout << std::endl;


	try
	{
		Bureaucrat	b("Boss", 2);
		std::cout << b << std::endl;
		ptr = intern.makeForm("PresidentialPardonForm", "Criminale");
		if (ptr)
			std::cout << *ptr << std::endl;
		b.excecuteForm(*ptr);
		if (ptr)
		{
			delete ptr;
			ptr = 0;
		}
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	if (ptr)
	{
		delete ptr;
		ptr = 0;
	}


	std::cout << std::endl;


	try
	{
		Bureaucrat	b("Bossone", 1);
		std::cout << b << std::endl;
		ptr = intern.makeForm("PresidentialPardonForm", "Criminale");
		if (ptr)
			std::cout << *ptr << std::endl;
		b.signForm(*ptr);
		b.excecuteForm(*ptr);
		if (ptr)
		{
			delete ptr;
			ptr = 0;
		}
		ptr = intern.makeForm("RobotomyRequestForm", "ShadyRequest");
		if (ptr)
			std::cout << *ptr << std::endl;
		b.signForm(*ptr);
		b.excecuteForm(*ptr);
		if (ptr)
		{
			delete ptr;
			ptr = 0;
		}
		ptr = intern.makeForm("ShrubberyCreationForm", "Rirou's_Garden");
		if (ptr)
			std::cout << *ptr << std::endl;
		b.signForm(*ptr);
		b.excecuteForm(*ptr);
		if (ptr)
		{
			delete ptr;
			ptr = 0;
		}
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	if (ptr)
	{
		delete ptr;
		ptr = 0;
	}

	return (0);
}
