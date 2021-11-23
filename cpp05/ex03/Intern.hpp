#pragma once

#include <string>
#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
/*
*******************************************************************************
*** Public
*******************************************************************************
*/
public:

	/* Constructors & Destructors */
	Intern(void);
	Intern(const Intern &other);
	~Intern(void);

	/* Operator overrides */
	Intern 		&operator=(const Intern &other);

	/* Others */
    Form		*makeForm(std::string const &name, std::string const &target);

/*
*******************************************************************************
*** Private
*******************************************************************************
*/
private:

	Form		*(Intern::*ptr[3])(std::string const &target); 
    Form	*makePresidentialPardonForm(std::string const &target);
    Form	*makeRobotomyRequestForm(std::string const &target);
    Form	*makeShrubberyCreationForm(std::string const &target);

};
