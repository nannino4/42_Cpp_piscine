#pragma once

#include "Form.hpp"
#include <string>
#include <iostream>
#include <fstream>

class ShrubberyCreationForm : public Form
{
/*
*******************************************************************************
*** Public
*******************************************************************************
*/
public:

	/* Constructors & Destructors */
    ShrubberyCreationForm(void);
    ShrubberyCreationForm(std::string const &target);
    ShrubberyCreationForm(ShrubberyCreationForm const &other);
    ~ShrubberyCreationForm(void);

	/* Operator Overloads */
    ShrubberyCreationForm const &operator=(ShrubberyCreationForm const &other);

	/* Others */
    void    execute(Bureaucrat const &executor) const;
};
