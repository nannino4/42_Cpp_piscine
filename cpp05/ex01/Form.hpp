#pragma once

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
/*
*******************************************************************************
*** Public
*******************************************************************************
*/
public:

	/* Constructors & Destructors */
	Form(void);
	Form(std::string name, int gradeSign, int gradeExec);
	~Form(void);
	Form(const Form &other);

	/* Operator overrides */
	Form 			&operator=(const Form &other);

	/* Getters & Setters */
	std::string 	getName(void) const;
	int 			getGradeSign(void) const;
	int 			getGradeExec(void) const;
	bool			getIsSigned(void) const;

	/* Others */
	void			beSigned(const Bureaucrat &b);

	/* Exceptions */
	class GradeTooHighException : public std::exception
	{
	public:
		const char	*what() const throw()
		{
			return ("Exception: Form grade too high");
		}
	};
	class GradeTooLowException : public std::exception
	{
	public:
		const char	*what() const throw()
		{
			return ("Exception: Form grade too low");
		}
	};

/*
*******************************************************************************
*** Private
*******************************************************************************
*/
private:
	const std::string	name;
	const int			gradeSign;
	const int			gradeExec;
	bool				isSigned;
};

std::ostream	&operator<<(std::ostream &output, const Form &obj);
