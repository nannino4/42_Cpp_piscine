#pragma once

#include <string>
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
/*
*******************************************************************************
*** Public
*******************************************************************************
*/
public:

	/* Constructors & Destructors */
	Bureaucrat(void);
	Bureaucrat(std::string name, int grade);
	~Bureaucrat(void);
	Bureaucrat(const Bureaucrat &other);

	/* Operator overrides */
	Bureaucrat &operator=(const Bureaucrat &other);

	/* Getters & Setters */
	std::string getName(void) const;
	int getGrade(void) const;

	/* Others */
	void incrementGrade(void);
	void decrementGrade(void);
	void signForm(Form &f) const;
	void excecuteForm(Form const &f) const;

	/* Exceptions */
	class GradeTooHighException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("Exception: Bureaucrat grade too high");
		}
	};
	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("Exception: Bureaucrat grade too low");
		}
	};

/*
*******************************************************************************
*** Private
*******************************************************************************
*/
private:
	const std::string name;
	int grade;
};

std::ostream &operator<<(std::ostream &output, const Bureaucrat &obj);
