#include "ShrubberyCreationForm.hpp"

/*
*******************************************************************************
** Constructors & Destructor
*******************************************************************************
*/

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreationForm", 145, 137)
{
    this->target = "Default";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : Form("ShrubberyCreationForm", 145, 137)
{
    this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other) : Form("ShrubberyCreationForm", 145, 137)
{
    *this = other;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

/*
*******************************************************************************
** Operator Overloads
*******************************************************************************
*/

ShrubberyCreationForm const &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
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

void    ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    this->isExcecutable(executor);
    std::ofstream outFile(this->target + "_shrubbery");

    outFile << "  ooooooo " << std::endl;
    outFile << "oooooooooo" << std::endl;
    outFile << "oooo||oooo" << std::endl;
    outFile << "oo\\ || /oo" << std::endl;
    outFile << " oo\\  /o  " << std::endl;
    outFile << "  oo| |o  " << std::endl;
    outFile << "    | |   " << std::endl;
    outFile << "____| |___" << std::endl;
    outFile << "---/ | \\---" << std::endl;
    outFile << "-----------" << std::endl;

    outFile.close();
    std::cout << this->target << " has been shrubbered" << std::endl;
}
