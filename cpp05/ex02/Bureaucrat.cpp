#include "Bureaucrat.hpp"

/*
*******************************************************************************
** Constructors & Destructor
*******************************************************************************
*/

Bureaucrat::Bureaucrat(void) : name("anonimous_burocrat"), grade(150)
{
	std::cout << "arriva " << this->name << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{
	std::cout << "arriva " << this->name << std::endl;
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << this->name << " se ne va" << std::endl;
}
		
Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	*this = other;
}

/*
*******************************************************************************
** Operator Overrides
*******************************************************************************
*/

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
	{
		this->grade = other.grade;
	}
	return (*this);
}

std::ostream& operator<<(std::ostream &output, const Bureaucrat &obj)
{
	output << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return (output);
}

/*
*******************************************************************************
** Getters & Setters
*******************************************************************************
*/

std::string Bureaucrat::getName(void) const
{
	return (this->name);
}

int Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

/*
*******************************************************************************
** Others
*******************************************************************************
*/

void Bureaucrat::incrementGrade(void)
{
	std::cout << "\nHey " << this->name << ", il capo ti fa i complimenti per quel lavoretto!\n" << std::endl;
	std::cout << "Il grado di " << this->name << " passa da " << this->grade << " a " << this->grade - 1 << std::endl;
	if (grade == 1)
		throw (Bureaucrat::GradeTooHighException());
	this->grade--;
}

void Bureaucrat::decrementGrade(void)
{
	std::cout << "\nHey " << this->name << ", stavolta hai esagerato. Vado a dirlo al capo..." << std::endl;
	std::cout << "Il grado di " << this->name << " passa da " << this->grade << " a " << this->grade + 1 << std::endl << std::endl;
	if (grade == 150)
		throw (Bureaucrat::GradeTooLowException());
	this->grade++;
}

void Bureaucrat::signForm(Form &f) const
{
	f.beSigned(*this);
}

void Bureaucrat::excecuteForm(Form const &f) const
{
	f.execute(*this);
}
