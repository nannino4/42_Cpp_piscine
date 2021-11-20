#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <string>
#include <iostream>

int main (void)
{
	std::cout << "------------------------------------------------------------------------------------------\n";
	std::cout << "Creo un form con rank 1,1\n" << std::endl;
	try
	{
		Form f = Form("Form Top-Secret", 1, 1);
		std::cout << f;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "------------------------------------------------------------------------------------------\n";
	std::cout << "Creo un form con rank 1,-1\n" << std::endl;
	try
	{
		Form f = Form("Form Tropp-Secret", 1, -1);
		std::cout << f;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "------------------------------------------------------------------------------------------\n";
	std::cout << "Creo un form con rank 1,1 e lo faccio firmare da un burocrate rank 42\n" << std::endl;
	try
	{
		Bureaucrat 	b("Bubbo", 42);
		std::cout << b << std::endl;

		Form		f("Form Top-Secret", 1, 1);
		std::cout << f << std::endl;

		b.signForm(f);
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "------------------------------------------------------------------------------------------\n";
	std::cout << "Creo un form con rank 42,42 e lo faccio firmare da un burocrate rank 7\n" << std::endl;
	try
	{
		Bureaucrat 	b("Babbo", 7);
		std::cout << b << std::endl;

		Form		f("Form di ordinaria amministrazione", 42, 42);
		std::cout << f << std::endl;

		b.signForm(f);
		std::cout << f << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
