/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 10:33:26 by dmalori           #+#    #+#             */
/*   Updated: 2021/05/15 10:33:33 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("shrubbery creation", 145, 137)
{
    this->target = target;
}

std::string ShrubberyCreationForm::getTarget(void) const
{
    return this->target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
{
	*this = other;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator = (const ShrubberyCreationForm &other)
{
	if (this != &other)
	{
		this->isSigned = other.isSigned;
        this->target = other.target;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(const Bureaucrat & executor) const
{
	if (this->getSigned())
	{
		if (executor.getGrade() > this->gradeForExecute)
			throw Form::GradeTooHighException();
		else
        {
            std::string nameFile = this->target + "_shrubbery";
            std::ofstream file(nameFile.c_str());
            if (file)
            {
                file << "\n";
                file << "        ###\n";
                file << "       #o###\n";
                file << "     #####o###\n";
                file << "    #o#\\#|#/###\n";
                file << "     ###\\|/#o#\n";
                file << "      # }|{  #\n";
                file << "        }|{\n";
                file.close();
                std::cout << "File " << nameFile << " created" << std::endl;
            }
            else
                std::cout << "Error: Can't create file " << nameFile << std::endl;
        }
    }
    else
        std::cout << "Can't execute. Form not signed" << std::endl;
}


/*

*/

