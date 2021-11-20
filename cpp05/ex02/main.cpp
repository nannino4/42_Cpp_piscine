#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main (void)
{
	srand(time(0));
	Form	*p = new PresidentialPardonForm("Babbione");
	Form	*r = new RobotomyRequestForm("ShadyRequest");
	Form	*s = new ShrubberyCreationForm("Rirou's_Garden");

	std::cout << *p << std::endl;
	std::cout << *r << std::endl;
	std::cout << *s << std::endl;
	
	try
	{
		Bureaucrat	b("Boss", 1);

		std::cout << b << std::endl;

		b.signForm(*p);
		b.excecuteForm(*p);
		b.signForm(*s);
		b.excecuteForm(*s);
		b.excecuteForm(*r);
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat	b("Bubbo", 150);

		std::cout << b << std::endl;

		b.signForm(*s);
		b.excecuteForm(*s);
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}