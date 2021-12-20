#include "RobotomyRequestForm.hpp"

/*
*******************************************************************************
** Constructors & Destructor
*******************************************************************************
*/

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequestForm", 72, 45)
{
    this->target = "Default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form("RobotomyRequestForm", 72, 45)
{
    this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other) : Form("RobotomyRequestForm", 72, 45)
{
    *this = other;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

/*
*******************************************************************************
** Operator Overloads
*******************************************************************************
*/

RobotomyRequestForm const &RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
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

void    RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    this->isExcecutable(executor);

    int n;

    n = rand() % 2;
    if (n)
    {
        std::cout << "BBBBRBJRBJBRHBBRBHBRHBRBRHRHRHRHRRRHRBRHBBGBGBGBGGHBHRBHGGGGHGHGHGRHGHRGHRBB" << std::endl << this->target << " has been robotomized successfully" << std::endl;
    }
    else
    {
        std::cout << "BBRRRR CCCHCHHHCHCH KKCK KKRKKRRKK" << std::endl << this->target << " robotomization failed abruptly" << std::endl;
    }
}
