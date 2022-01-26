//
// Created by Drahff Karthus on 11/22/21.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade):_name(name), _grade(grade)
{
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
}

int					Bureaucrat::getGrade() const { return (_grade); }

const std::string	Bureaucrat::getName() const { return (_name); }

void				Bureaucrat::incGrade()
{
	if ((_grade - 1) < 1)
		throw GradeTooHighException();
	else
		--_grade;
}

void				Bureaucrat::decGrade()
{
	if ((_grade + 1) > 150)
		throw GradeTooLowException();
	else
	++_grade;
}

const char			*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too LOW!\n");
}

const char			*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too DAMN HIGH!\n");
}

std::ostream		&operator<<(std::ostream &out, const Bureaucrat &toPrint)
{
	out << toPrint.getName() << " <-name : grade-> " << toPrint.getGrade() << std::endl;
	return (out);
}
