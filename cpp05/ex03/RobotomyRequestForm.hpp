#pragma once

#include "Form.hpp"
#include <string>
#include <time.h>
#include <stdlib.h>
#include <iostream>

class RobotomyRequestForm : public Form
{
/*
*******************************************************************************
*** Public
*******************************************************************************
*/
public:

	/* Constructors & Destructors */
    RobotomyRequestForm(void);
    RobotomyRequestForm(std::string const &target);
    RobotomyRequestForm(RobotomyRequestForm const &other);
    ~RobotomyRequestForm(void);

	/* Operator Overloads */
    RobotomyRequestForm const &operator=(RobotomyRequestForm const &other);

	/* Others */
    void    execute(Bureaucrat const &executor) const;
};
