#pragma once

#include "Form.hpp"
#include <string>
#include <iostream>

class PresidentialPardonForm : public Form
{
/*
*******************************************************************************
*** Public
*******************************************************************************
*/
public:

	/* Constructors & Destructors */
    PresidentialPardonForm(void);
    PresidentialPardonForm(std::string const &target);
    PresidentialPardonForm(PresidentialPardonForm const &other);
    ~PresidentialPardonForm(void);

	/* Operator Overloads */
    PresidentialPardonForm const &operator=(PresidentialPardonForm const &other);

	/* Others */
    void    execute(Bureaucrat const &executor) const;
};
