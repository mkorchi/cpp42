/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 08:03:39 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/16 19:46:25 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name)
{
	if (grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	else if (grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	this->_grade = grade;
}

Bureaucrat::Bureaucrat( void )
	: _name("unnamed"), _grade(150) {}

Bureaucrat::~Bureaucrat( void )
{
	
}

Bureaucrat::Bureaucrat( Bureaucrat const & src)
	: _name(src._name)
{
	*this = src;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs)
{
	if (this != &rhs)
	{
		this->_grade = rhs._grade;
	}
	return *this;
}

void	Bureaucrat::incrementGrade( void )
{
	if (this->_grade == 1)
	{
		throw Bureaucrat::GradeTooHighException();
		return ;
	}
	this->_grade--;
}

void	Bureaucrat::decrementGrade( void )
{
	if (this->_grade == 150)
	{
		throw Bureaucrat::GradeTooLowException();
		return ;
	}
	this->_grade++;
}

std::string Bureaucrat::getName( void ) const
{
	return this->_name;
}

int			Bureaucrat::getGrade( void ) const
{
	return this->_grade;
}

std::ostream &		operator<<( std::ostream & o, Bureaucrat const & i)
{
	o  <<  i.getName() << ", bureaucrat grade " << i.getGrade();
	return o;
}

void	Bureaucrat::signForm( AForm & form )
{
	try 
	{
		form.beSigned(*this);
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	}
	catch (GradeTooLowException)
	{
		std::cout << this->_name << " couldn't sign " << form.getName() << " because grade too low" << std::endl;
	}
}

void		Bureaucrat::executeForm(AForm const & form)
{
	try 
	{
		form.execute(*this);
		std::cout << this->_name << " executed " << form.getName() << std::endl;
	} 
	catch (Bureaucrat::NotSignedException)
	{
		std::cout << "form needs to be signed in order to execute it" << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException)
	{
		std::cout << "grade too low to execute form" << std::endl;
	}
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Exception: Grade Too Low";
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Exception: Grade Too High";
}

const char * Bureaucrat::NotSignedException::what() const throw()
{
	return "Exception: not signed";
}