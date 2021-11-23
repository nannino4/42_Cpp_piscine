#include "Form.hpp"

/*
*******************************************************************************
** Constructors & Destructor
*******************************************************************************
*/

Form::Form(void) : target("Default"), name("DefaultForm"), gradeSign(150), gradeExec(150), isSigned(0)
{
	std::cout << "The form \"" << this->name << "\" has been created" << std::endl;
}

Form::Form(std::string name, int gradeSign, int gradeExec) : target("Default"), name(name), gradeSign(gradeSign), gradeExec(gradeExec), isSigned(0)
{
	std::cout << "The form \"" << this->name << "\" has been created" << std::endl;
	if (gradeSign < 1 || gradeExec < 1)
		throw (Form::GradeTooHighException());
	else if (gradeSign > 150 || gradeExec > 150)
		throw (Form::GradeTooLowException());
}

Form::~Form(void)
{
	std::cout << "The form \"" << this->name << "\" has been removed" << std::endl;
}
		
Form::Form(const Form &other) : target(other.target), name(other.name), gradeSign(other.gradeSign), gradeExec(other.gradeExec)
{
	*this = other;
}

/*
*******************************************************************************
** Operator Overrides
*******************************************************************************
*/

Form &Form::operator=(const Form &other)
{
	if (this != &other)
	{
		this->isSigned = other.isSigned;
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &output, const Form &obj)
{
	output << "Form's name: \"" << obj.getName() << "\", Form's sign grade: " << obj.getGradeSign() << ", Form's exec grade: " << obj.getGradeExec();
	if (obj.getIsSigned())
		std::cout << ", Form is Signed";
	else
		std::cout << ", Form is Not Signed";
	return (output);
}

/*
*******************************************************************************
** Getters & Setters
*******************************************************************************
*/

std::string Form::getName(void) const
{
	return (this->name);
}

int Form::getGradeSign(void) const
{
	return (this->gradeSign);
}

int Form::getGradeExec(void) const
{
	return (this->gradeExec);
}

bool Form::getIsSigned(void) const
{
	return (this->isSigned);
}

/*
*******************************************************************************
** Others
*******************************************************************************
*/

void Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() > this->gradeSign)
		throw (Form::CannotBeSignedException());
	else
	{
		this->isSigned = 1;
		std::cout << b.getName() << " signed " << this->getName() << std::endl;
	}
}

void Form::isExcecutable(Bureaucrat const &excecutor) const
{
	if (!this->isSigned)
		throw (Form::NotSignedException());
	if (excecutor.getGrade() > this->getGradeExec())
		throw (Form::CannotBeExcecutedException());
}
