#include "PresidentialPardonForm.hpp"

/*
*******************************************************************************
** Constructors & Destructor
*******************************************************************************
*/

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardonForm", 25, 5)
{
    this->target = "Default";
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : Form("PresidentialPardonForm", 25, 5)
{
    this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other) : Form("PresidentialPardonForm", 25, 5)
{
    *this = other;
}

/*
*******************************************************************************
** Operator Overloads
*******************************************************************************
*/

PresidentialPardonForm const &PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
    if (this != &other)
        this->target = other.target;
    return (*this);
}

/*
*******************************************************************************
** Others
*******************************************************************************
*/

void    PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    this->isExcecutable(executor);
    executor.excecuteForm(*this);
}
