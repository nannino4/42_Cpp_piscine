#include "Intern.hpp"

/*
*******************************************************************************
** Constructors & Destructor
*******************************************************************************
*/

Intern::Intern(void)
{
	this->ptr[0] = &Intern::makePresidentialPardonForm;
	this->ptr[1] = &Intern::makeRobotomyRequestForm;
	this->ptr[2] = &Intern::makeShrubberyCreationForm;
}

Intern::~Intern(void) {}

Intern::Intern(const Intern &other)
{
	(void)other;
	this->ptr[0] = &Intern::makePresidentialPardonForm;
	this->ptr[1] = &Intern::makeRobotomyRequestForm;
	this->ptr[2] = &Intern::makeShrubberyCreationForm;
}

/*
*******************************************************************************
** Operator Overrides
*******************************************************************************
*/

Intern &Intern::operator=(const Intern &other)
{
	(void)other;
	return (*this);
}

/*
*******************************************************************************
** Others
*******************************************************************************
*/

Form *Intern::makeForm(std::string const &name, std::string const &target)
{
	std::string	compareTable[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
	int			i;

	for (i = 0; i < 3; i++)
	{
		if (compareTable[i].compare(name) == 0)
		{
			std::cout << "Intern creates " << name << std::endl;
			return (this->*ptr[i])(target);
		}
	}
	std::cout << "Intern could not create: " << name << ": the form's name is unknown" << std::endl;
	return (0);
}

Form *Intern::makePresidentialPardonForm(std::string const &target)
{
	return (new PresidentialPardonForm(target));
}

Form *Intern::makeRobotomyRequestForm(std::string const &target)
{
	return (new RobotomyRequestForm(target));
}

Form *Intern::makeShrubberyCreationForm(std::string const &target)
{
	return (new ShrubberyCreationForm(target));
}
